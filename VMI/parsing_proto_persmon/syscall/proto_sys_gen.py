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
max_sys_handled_args = 0


def start():
    input_file = open("winscproto.h",'r')
    parseSyscalls(input_file)
    generateCommonFile()


def generateCommonFile():
    common_file = open("syscall_neo.h",'w')
    common_file.write("#define MAX_SYS_HANDLED_ARGS "+str(max_sys_handled_args)+"\n\n")
    common_file.close()

def parseSyscalls(input_file):
    output_file = open("syscalls_persmon.cpp", 'w')

    first_line = "#include \"private.h\"\n\n"
    output_file.write(first_line)
    output_file.write("syscall_t syscalls[] = \n{\n")

    line = input_file.readline()

    while (not line.startswith("};")): #until it doesn't end the file

        while ("name" not in line):
            line = input_file.readline()

        #line contains an sys_name
        sys_info = line[line.index(".name"):].split(",")
        return_type = sys_info[1][sys_info[1].index("=")+1:].strip()
        if(return_type=="VOID"):
            return_type = "SYSCALL_VOID"

        nargs = 0
        if ("}" in sys_info[2]):
            nargs = sys_info[2][sys_info[2].index("=")+1:sys_info[2].index(" }")].strip()
            output_file.write("\t{ "+sys_info[0].strip()+", .return_type = "+return_type+", .nargs = "+nargs+" }, \n")
            line = input_file.readline()
            continue

        #there are args to read
        nargs = sys_info[2][sys_info[2].index("=")+1:].strip()
        output_file.write("\t{\n\t\t "+sys_info[0].strip()+", .return_type = "+return_type+", .nargs = "+nargs+", .args =\n")

        global max_sys_handled_args
        max_sys_handled_args = max(int(nargs),max_sys_handled_args)

        input_file.readline() #to read the { character
        output_file.write("\t\t{\n")

        #read single args
        for i in range(0,int(nargs)) :
            line = input_file.readline()

            arg_info = line[line.index("{")+1:line.index("}")].split(",")
            dir = arg_info[1][arg_info[1].index("_")+1:].strip()
            if (dir != "IN" and dir != "OUT" and dir != "INOUT"):
                dir = "UNK"

            output_file.write("\t\t\t{"+arg_info[0].strip()+", "+arg_info[3].strip().replace("VOID","SYSCALL_VOID")+
                ", .arg_dir = "+dir+"},\n")

        output_file.write("\t\t}\n\t},\n")

        line = input_file.readline() #to correctly restart with a new syscall

    final_line = "int syscalls_size = (sizeof(syscalls) / sizeof(syscalls[0]));"
    output_file.write("};\n\n"+final_line)
    output_file.close()

start()
