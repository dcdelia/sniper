# Generate a file .h per parsed DLL with the following information
#   1) a const array representing *all* the API exposed by that particular DLL
#   2) add .entry_point_loc information from a second file (facciamo questa cosa alla fine)
#   3) an enum alphabetically ordered containing the names of the parsed APIs,
#       in caps and divided by "_" i.e. "CreateRemoteThread" --> CREATE_REMOTE_THREAD
#   4) an enum alphabetically ordered containing the names of the parsed struct,
#       in caps, devided by "_" and without starting "_" if any.
#       i.e. "_DEP_SYSTEM_POLICY_TYPE" --> "DEP_SYSTEM_POLICY_TYPE"
#   5) a mapping similar to this:
#
#               static const char* dll_names[__DLL_MAX]
#               {
#                   [KERNEL32] = "kernel32.dll",
#                   [KERNELBASE] = "kernelbase.dll",
#                   [IPHLPAPI] = "iphlpapi.dll"
#               };
#   but for struct of point 3), i.e. :
#               static const char* struct_names[__KERNEL_32_STRUCT_MAX]
#               {
#                   [DEP_SYSTEM_POLICY_TYPE] = "_DEP_SYSTEM_POLICY_TYPE",
#                   [STRUCT_PINCOPALLINO] = "_STRUCT_PINCOPALLINO",
#                   [GEENO] = "Geeno"
#               };
#   Considera che il valore è quello che tu parsi nel punto 3) e trasformi in enum
#   quindi probabilmente ti conviene scrivere questa struttura man mano che parsi
#   in un secondo file e poi fare il merge con il primo nella conclusione
#
#   The result should be something like this, assuming that we're parsing kernel32.dll:
#
#
#
#

import os
import re

#Global variables
list_dlls_names = []
list_enum_struct_dlls = []
dict_struct_names_dlls = {}
dict_rets = {}
common_file = open("neo.h",'w')
linking_file = open("linker_utils.h",'w')
temp_file = open("temp","w+")
max_handled_args = 0
max_handled_rets = 0

types_dic = {
    "SIGNED_BYTE" : "NKT_DBFUNDTYPE_SignedByte",
    "UNSIGNED_BYTE" : "NKT_DBFUNDTYPE_UnsignedByte",
    "SIGNED_WORD" : "NKT_DBFUNDTYPE_SignedWord",
    "UNSIGNED_WORD" : "NKT_DBFUNDTYPE_UnsignedWord",
    "SIGNED_DOUBLE_WORD" : "NKT_DBFUNDTYPE_SignedDoubleWord",
    "UNSIGNED_DOUBLE_WORD" : "NKT_DBFUNDTYPE_UnsignedDoubleWord",
    "SIGNED_QUAD_WORD" : "NKT_DBFUNDTYPE_SignedQuadWord",
    "UNSIGNED_QUAD_WORD" : "NKT_DBFUNDTYPE_UnsignedQuadWord",
    "FLOAT" : "NKT_DBFUNDTYPE_Float",
    "DOUBLE" : "NKT_DBFUNDTYPE_Double",
    "LONG_DOUBLE" : "NKT_DBFUNDTYPE_LongDouble",
    "VOID" : "NKT_DBFUNDTYPE_Void",
    "ANSI_CHAR" : "NKT_DBFUNDTYPE_AnsiChar",
    "WIDE_CHAR" : "NKT_DBFUNDTYPE_WideChar",

    "STRUCT" : "NKT_DBOBJCLASS_Struct",
    "UNION" : "NKT_DBOBJCLASS_Union",
    "TYPEDEF" : "NKT_DBOBJCLASS_Typedef",
    "ARRAY" : "NKT_DBOBJCLASS_Array",
    "REFERENCE" : "NKT_DBOBJCLASS_Reference",
    "ENUMERATION" : "NKT_DBOBJCLASS_Enumeration",

    "POINTER" : "NKT_DBOBJCLASS_Pointer",
    "POINTER_POINTER" : "NKT_DBOBJCLASS_PointerPointer"
}

def start():
    global dict_rets
    path = "./dlls"
    temp_file.write("static dll_t dlls[__DLL_MAX] = \n{\n")
    linking_file.write("sources += persmon/persmon.cpp persmon/persmon_util.cpp ")
    for file in os.listdir(path):
        dll = open(path + "//" + file, 'r')
        dll_name = file.lower()
        linking_file.write("persmon/dll_proto/"+dll_name+" ")
        dict_rets.clear()
        parseJSON(dll_name)
        parseDLL(dll,dll_name)

    completeTempFile()
    temp_file.close()
    generateCommonFile()
    linking_file.close()

def completeTempFile():
    global list_dlls_names
    list_dlls_names = list(dict.fromkeys(list_dlls_names)) #to remove duplicates
    temp_file.seek(0)
    temp_content = temp_file.read()
    for dll in list_dlls_names:
        if (dll not in temp_content):
            temp_file.write("\t["+dll+"] =\n\t\t{\n")
            temp_file.write("\t\t\t.name = \""+dll.lower()+".dll\"\n")
            temp_file.write("\t\t},\n")

    temp_file.write("};\n\n")

def parseJSON(dll_name):
    global max_handled_rets
    aliases = []

    rets_file = open("exports/" + dll_name[:dll_name.index(".")] + ".json", 'r')

    line = rets_file.readline()
    while (not line.startswith("}")): #it's reached the end of file
        rets = ""

        while ("rva" not in line and line != ""): #to consider info about the next api
            line = rets_file.readline()

        if (line == ""): #end of file reached
            return

        rva = line[line.index(":")+1:line.index(",")].strip()

        line = rets_file.readline() #reads name
        api_name = line[line.index(":")+1:line.index(",")].strip()

        line = rets_file.readline() #reads alias

        while ("rets" not in line): #to reach next name or rets
            line = rets_file.readline()
            if ("name" in line):
                aliases.append(line[line.index(":")+1:line.index(",")].strip())
                line = rets_file.readline()

        if ("[]" in line): #there aren't any rets
            #Handle jump field
            rets = "\t\t{\n\t\t},"
            done = False
            while ("import" not in line):
                line = rets_file.readline()
                if ("[]" in line): #there aren't neither jumps
                    jump_dll = "UNDEFINED"
                    jump_api = ""
                    done = True
                    break

            if (not done): #there is a jump
                jump_api = line[line.index(":")+1:line.index(",")] #reads import
                rets_file.readline() #reads imp_addr
                rets_file.readline() #reads jmp_addr
                line = rets_file.readline() #reads dll
                jump_dll = line[line.index(": \"")+3:line.index("\"\n")].upper() #reads dll
                list_dlls_names.append(jump_dll)
        else:
            #Handle rets
            line = rets_file.readline()
            rets = "\t\t{\n\t\t\t"
            current_rets_number = 0
            while ("]" not in line): #to read all rets
                rets += line.strip() + " "
                line = rets_file.readline()
                current_rets_number +=1
            rets += "\n\t\t},"
            jump_dll = "UNDEFINED"
            jump_api = ""
            max_handled_rets = max(max_handled_rets,current_rets_number)

        dict_rets[api_name] = [rva,rets,jump_dll,jump_api]
        for api in aliases:
            dict_rets[api] = [rva,rets,jump_dll,jump_api]
        aliases.clear()

    rets_file.close()

def generateCommonFile():

    common_file.write("#define MAX_HANDLED_ARGS "+str(max_handled_args)+"\n\n")
    common_file.write("#define MAX_HANDLED_RETS "+str(max_handled_rets)+"\n\n")

    #write enum of types
    common_file.write("typedef enum : uint32_t\n{\n\tFUNDAMENTAL_TYPE,\n")
    for elem in list(dict.fromkeys(list_enum_struct_dlls)):
        common_file.write("\t"+elem+",\n")
    common_file.write("\t__STRUCT_TYPE_MAX\n} struct_type_t;\n\n")

    #write enum to map type to name
    common_file.write("static const char* struct_names[__STRUCT_TYPE_MAX]\n{\n\t[FUNDAMENTAL_TYPE] = \"\",\n")
    for elem in dict_struct_names_dlls:
        common_file.write("\t["+elem+"] = "+dict_struct_names_dlls[elem]+",\n")
    common_file.write("};\n\n")

    #write enum of dlls names
    common_file.write("typedef enum : uint8_t\n{\n")
    for elem in list_dlls_names:
        common_file.write("\t"+elem+",\n")
    common_file.write("\t__DLL_MAX,\n\tUNDEFINED\n} dll_id_t;\n\n")

    temp_file = open("temp",'r')
    for line in temp_file:
        common_file.write(line)

    temp_file.close()
    os.remove("temp")
    common_file.close()

def getType(value):
    if ("|" in value):
        value1 = value[:value.index("|")].strip()
        value2 = value[value.index("|")+1:].strip()
        type = list(types_dic.keys())[list(types_dic.values()).index(value1)]+" | " + list(types_dic.keys())[list(types_dic.values()).index(value2)]
    else:
        type = list(types_dic.keys())[list(types_dic.values()).index(value.strip())]
    return type

def parseDLL(dll,dll_name):
    output_file = open("..//dll_proto//"+dll_name, 'w')

    first_line = "#include \"../private.h\"\n\n"
    output_file.write(first_line)
    output_file.write("apicall_t "+dll_name[:dll_name.index(".")]+"_apicalls[] = \n{\n")

    #for common file
    list_dlls_names.append(dll_name[:dll_name.index(".")].upper())
    common_file.write("extern apicall_t "+dll_name[:dll_name.index(".")]+"_apicalls[];\n")
    common_file.write("extern int "+dll_name[:dll_name.index(".")]+"_apicalls_size;\n\n")

    temp_file.write("\t["+dll_name[:dll_name.index(".")].upper()+"] =\n\t\t{\n")
    temp_file.write("\t\t\t.name = \""+dll_name[:dll_name.index(".")]+".dll\", .apicalls = "+dll_name[:dll_name.index(".")]+
        "_apicalls, .apicalls_size = "+dll_name[:dll_name.index(".")]+"_apicalls_size\n")
    temp_file.write("\t\t},\n")

    line = dll.readline()
    while (line.startswith("\t{") == False):
        line = dll.readline()

    while (not line.startswith("};")): #until it doesn't end the file
        #line contains an api_name
        api_info = line[line.index("{")+1:].split(",")
        if (api_info[0].strip() in dict_rets.keys()):
            rets_info = dict_rets[api_info[0].strip()]
        else:
            while (not line.startswith("\t},")):
                line = dll.readline()
            line = dll.readline()
            continue

        output_file.write("\t{\n")
        output_file.write("\t\t.name = "+api_info[0].strip()+", .nargs = "+api_info[1].strip()+", .rva = "+rets_info[0]+", \n")

        global max_handled_args
        max_handled_args = max(int(api_info[1].strip()),max_handled_args)

        dll.readline() #to read the { character

        #parsing line with the return value
        line = dll.readline()
        return_value_info = line[line.index("{")+1:line.index("}")].split(",")
        return_type = getType(return_value_info[2].strip())
        output_file.write("\t\t.return_type = "+return_type+", .return_size = "+return_value_info[4].strip()+", .args = \n\t\t{\n")

        #read single args
        line = dll.readline()
        while (re.findall("^\t\t{[0-9]", line)):
            value_info = line[line.index("{")+1:line.index("}")].split(",")
            value_type = getType(value_info[2])

            if value_info[3].strip()=="0":
                struct_type = "FUNDAMENTAL_TYPE"
            else:
                if value_info[3].strip().startswith("\"_"):
                    struct_type = value_info[3].strip()[2:-1].upper()
                else:
                    struct_type = value_info[3].strip()[1:-1].upper()
                #START: for common file
                list_enum_struct_dlls.append(struct_type)
                dict_struct_names_dlls[struct_type] = value_info[3].strip()
                #END: for common file

            output_file.write("\t\t\t{.name = "+value_info[1].strip()+", .type = "+value_type+
                ", .size = "+value_info[4].strip()+", .struct_type = "+struct_type+
                ", .arg_dir = "+value_info[5].strip()+"},\n")

            line = dll.readline()

        output_file.write("\t\t}, .rets_rva = \n")
        output_file.write(rets_info[1])

        output_file.write(" .jump_in = "+rets_info[2])

        if (rets_info[3] != ""):
            output_file.write(", .jump_in_api_name = "+rets_info[3])

        output_file.write("\n")
        output_file.write("\t},\n")

        dll.readline() #to read the }, characters
        line = dll.readline() #to correctly restart with a new api

    final_line = "int "+dll_name[:dll_name.index(".")]+"_apicalls_size = (sizeof("+dll_name[:dll_name.index(".")]+"_apicalls) / sizeof("+dll_name[:dll_name.index(".")]+"_apicalls[0]));"
    output_file.write("};\n\n"+final_line)
    output_file.close()

start()
