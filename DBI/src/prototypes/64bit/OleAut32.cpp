// The following code was obtained using a slightly modified version
// of the Deviare parser from the PyREBox project. Credits:
// https://github.com/Cisco-Talos/pyrebox/blob/master/mw_monitor2/deviare_db_parser.py

#include "../pyrebox.h"

libcall_info_t OleAut32_info[] = {
	{ "BSTR_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "BSTR_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "BSTR_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "BSTR_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "BstrFromVector",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
		{1, "pbstr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "ClearCustData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pCustData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCUSTDATA", 128, UNK },
	}
	},
	{ "CreateDispTypeInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidata", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagINTERFACEDATA", 128, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "pptinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ITypeInfo", 64, UNK },
	}
	},
	{ "CreateErrorInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pperrinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ICreateErrorInfo", 64, UNK },
	}
	},
	{ "CreateStdDispatch",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "punkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, UNK },
		{1, "pvThis", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{2, "ptinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ITypeInfo", 64, UNK },
		{3, "ppunkStdDisp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 64, UNK },
	}
	},
	{ "CreateTypeLib",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "syskind", NKT_DBOBJCLASS_Enumeration, "tagSYSKIND", 32, UNK },
		{1, "szFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "ppctlib", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ICreateTypeLib", 64, UNK },
	}
	},
	{ "CreateTypeLib2",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "syskind", NKT_DBOBJCLASS_Enumeration, "tagSYSKIND", 32, UNK },
		{1, "szFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "ppctlib", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ICreateTypeLib2", 64, UNK },
	}
	},
	{ "DispCallFunc",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvInstance", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{1, "oVft", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{2, "cc", NKT_DBOBJCLASS_Enumeration, "tagCALLCONV", 32, UNK },
		{3, "vtReturn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{4, "cActuals", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{5, "prgvt", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{6, "prgpvarg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagVARIANT", 192, UNK },
		{7, "pvargResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "DispGetIDsOfNames",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ptinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ITypeInfo", 64, UNK },
		{1, "rgszNames", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
		{2, "cNames", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "rgdispid", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "DispGetParam",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdispparams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDISPPARAMS", 192, UNK },
		{1, "position", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "vtTarg", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{3, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{4, "puArgErr", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "DispInvoke",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "_this", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{1, "ptinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ITypeInfo", 64, UNK },
		{2, "dispidMember", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{3, "wFlags", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{4, "pparams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDISPPARAMS", 192, UNK },
		{5, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{6, "pexcepinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagEXCEPINFO", 512, UNK },
		{7, "puArgErr", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "DllGetClassObject",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, UNK },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "DllUnregisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "DosDateTimeToVariantTime",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "wDosDate", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "wDosTime", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{2, "pvtime", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "GetActiveObject",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{1, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{2, "ppunk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 64, UNK },
	}
	},
	{ "GetAltMonthNames",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "prgp", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "GetErrorInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pperrinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IErrorInfo", 64, UNK },
	}
	},
	{ "GetRecordInfoFromGuids",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rGuidTypeLib", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{1, "uVerMajor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "uVerMinor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "rGuidTypeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{5, "ppRecInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IRecordInfo", 64, UNK },
	}
	},
	{ "GetRecordInfoFromTypeInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pTypeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ITypeInfo", 64, UNK },
		{1, "ppRecInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IRecordInfo", 64, UNK },
	}
	},
	{ "LHashValOfNameSys",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "syskind", NKT_DBOBJCLASS_Enumeration, "tagSYSKIND", 32, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "szName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "LHashValOfNameSysA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "syskind", NKT_DBOBJCLASS_Enumeration, "tagSYSKIND", 32, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "szName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "LoadRegTypeLib",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rguid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{1, "wVerMajor", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{2, "wVerMinor", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{3, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "pptlib", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ITypeLib", 64, UNK },
	}
	},
	{ "LoadTypeLib",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "szFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "pptlib", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ITypeLib", 64, UNK },
	}
	},
	{ "LoadTypeLibEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "szFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "regkind", NKT_DBOBJCLASS_Enumeration, "tagREGKIND", 32, UNK },
		{2, "pptlib", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ITypeLib", 64, UNK },
	}
	},
	{ "LPSAFEARRAY_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 256, UNK },
	}
	},
	{ "LPSAFEARRAY_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 256, UNK },
	}
	},
	{ "LPSAFEARRAY_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 256, UNK },
	}
	},
	{ "LPSAFEARRAY_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 256, UNK },
	}
	},
	{ "OaBuildVersion",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "OleCreateFontIndirect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFontDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFONTDESC", 320, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "lplpvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleCreatePictureIndirect",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpPictDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPICTDESC", 192, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "fOwn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lplpvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleCreatePropertyFrame",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwndOwner", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "x", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpszCaption", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "cObjects", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ppUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 64, IN },
		{6, "cPages", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pPageClsID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{8, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "OleCreatePropertyFrameIndirect",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOCPFIPARAMS", 576, IN },
	}
	},
	{ "OleIconToCursor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hinstExe", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "hIcon", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "OleLoadPicture",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpstream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 64, IN },
		{1, "lSize", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "fRunmode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "lplpvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleLoadPictureEx",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpstream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 64, IN },
		{1, "lSize", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "fRunmode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "xSizeDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ySizeDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "lplpvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleLoadPictureFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "varFileName", NKT_DBOBJCLASS_Struct, "tagVARIANT", 192, UNK },
		{1, "lplpdispPicture", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDispatch", 64, UNK },
	}
	},
	{ "OleLoadPictureFileEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "varFileName", NKT_DBOBJCLASS_Struct, "tagVARIANT", 192, UNK },
		{1, "xSizeDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "ySizeDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "lplpdispPicture", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDispatch", 64, UNK },
	}
	},
	{ "OleLoadPicturePath",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "szURLorPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "punkCaller", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{2, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "clrReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{5, "ppvRet", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleSavePictureFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpdispPicture", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 64, UNK },
		{1, "bstrFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "OleTranslateColor",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "clr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hpal", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "lpcolorref", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "QueryPathOfRegTypeLib",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "guid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{1, "wMaj", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{2, "wMin", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{3, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "lpbstrPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "RegisterActiveObject",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "punk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, UNK },
		{1, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pdwRegister", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "RegisterTypeLib",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ptlib", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ITypeLib", 64, UNK },
		{1, "szFullPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "szHelpDir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "RegisterTypeLibForUser",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ptlib", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ITypeLib", 64, UNK },
		{1, "szFullPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "szHelpDir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "RevokeActiveObject",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwRegister", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "SafeArrayAccessData",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
		{1, "ppvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, UNK },
	}
	},
	{ "SafeArrayAllocData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
	}
	},
	{ "SafeArrayAllocDescriptor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cDims", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "ppsaOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 256, UNK },
	}
	},
	{ "SafeArrayAllocDescriptorEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "vt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "cDims", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "ppsaOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 256, UNK },
	}
	},
	{ "SafeArrayCopy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
		{1, "ppsaOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 256, UNK },
	}
	},
	{ "SafeArrayCopyData",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psaSource", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
		{1, "psaTarget", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
	}
	},
	{ "SafeArrayCreate",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, OUT },
		{0, "vt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "cDims", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "rgsabound", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAYBOUND", 64, UNK },
	}
	},
	{ "SafeArrayCreateEx",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, OUT },
		{0, "vt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "cDims", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "rgsabound", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAYBOUND", 64, UNK },
		{3, "pvExtra", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "SafeArrayCreateVector",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, OUT },
		{0, "vt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "lLbound", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "cElements", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SafeArrayCreateVectorEx",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, OUT },
		{0, "vt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "lLbound", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "cElements", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pvExtra", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "SafeArrayDestroy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
	}
	},
	{ "SafeArrayDestroyData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
	}
	},
	{ "SafeArrayDestroyDescriptor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
	}
	},
	{ "SafeArrayGetDim",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
	}
	},
	{ "SafeArrayGetElement",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
		{1, "rgIndices", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{2, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "SafeArrayGetElemsize",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
	}
	},
	{ "SafeArrayGetIID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
		{1, "pguid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, UNK },
	}
	},
	{ "SafeArrayGetLBound",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
		{1, "nDim", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "plLbound", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "SafeArrayGetRecordInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
		{1, "prinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IRecordInfo", 64, UNK },
	}
	},
	{ "SafeArrayGetUBound",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
		{1, "nDim", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "plUbound", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "SafeArrayGetVartype",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
		{1, "pvt", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SafeArrayLock",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
	}
	},
	{ "SafeArrayPtrOfIndex",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
		{1, "rgIndices", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{2, "ppvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, UNK },
	}
	},
	{ "SafeArrayPutElement",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
		{1, "rgIndices", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{2, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "SafeArrayRedim",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
		{1, "psaboundNew", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAYBOUND", 64, UNK },
	}
	},
	{ "SafeArraySetIID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
		{1, "guid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
	}
	},
	{ "SafeArraySetRecordInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
		{1, "prinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRecordInfo", 64, UNK },
	}
	},
	{ "SafeArrayUnaccessData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
	}
	},
	{ "SafeArrayUnlock",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 256, UNK },
	}
	},
	{ "SetErrorInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "perrinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IErrorInfo", 64, UNK },
	}
	},
	{ "SysAllocString",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SysAllocStringByteLen",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "psz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "len", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SysAllocStringLen",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "ui", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SysFreeString",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "bstrString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SysReAllocString",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pbstr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
		{1, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SysReAllocStringLen",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pbstr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
		{1, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "len", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SysStringByteLen",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "bstr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SysStringLen",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pbstr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SystemTimeToVariantTime",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpSystemTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, UNK },
		{1, "pvtime", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "UnRegisterTypeLib",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "libID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{1, "wVerMajor", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{2, "wVerMinor", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{3, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "syskind", NKT_DBOBJCLASS_Enumeration, "tagSYSKIND", 32, UNK },
	}
	},
	{ "UnRegisterTypeLibForUser",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "libID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{1, "wMajorVerNum", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{2, "wMinorVerNum", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{3, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "syskind", NKT_DBOBJCLASS_Enumeration, "tagSYSKIND", 32, UNK },
	}
	},
	{ "VarAbs",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarAdd",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarAnd",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarBoolFromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarBoolFromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarBoolFromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarBoolFromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 64, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarBoolFromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarBoolFromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarBoolFromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarBoolFromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarBoolFromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarBoolFromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarBoolFromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarBoolFromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, UNK },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarBoolFromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarBoolFromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarBoolFromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "i64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarBstrCat",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bstrLeft", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "bstrRight", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "pbstrResult", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarBstrCmp",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bstrLeft", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "bstrRight", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "VarBstrFromBool",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarBstrFromCy",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarBstrFromDate",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarBstrFromDec",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarBstrFromDisp",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 64, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarBstrFromI1",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarBstrFromI2",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "iVal", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarBstrFromI4",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarBstrFromI8",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarBstrFromR4",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarBstrFromR8",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarBstrFromUI1",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bVal", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarBstrFromUI2",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarBstrFromUI4",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarBstrFromUI8",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarCat",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarCmp",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{2, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "VarCyAbs",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyAdd",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyLeft", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "cyRight", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{2, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyCmp",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyLeft", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "cyRight", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
	}
	},
	{ "VarCyCmpR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyLeft", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "dblRight", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
	}
	},
	{ "VarCyFix",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyFromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyFromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyFromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyFromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 64, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyFromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyFromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyFromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyFromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyFromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyFromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyFromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyFromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, UNK },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyFromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyFromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyFromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyInt",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyMul",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyLeft", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "cyRight", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{2, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyMulI4",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyLeft", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "lRight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyMulI8",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyLeft", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "lRight", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
		{2, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyNeg",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCyRound",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "cDecimals", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarCySub",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyLeft", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "cyRight", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{2, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, UNK },
	}
	},
	{ "VarDateFromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarDateFromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarDateFromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarDateFromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 64, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarDateFromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarDateFromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarDateFromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarDateFromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarDateFromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarDateFromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarDateFromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarDateFromUdate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pudateIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "UDATE", 144, UNK },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarDateFromUdateEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pudateIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "UDATE", 144, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarDateFromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, UNK },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarDateFromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarDateFromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarDateFromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarDecAbs",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecAdd",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pdecRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{2, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecCmp",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pdecRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecCmpR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "dblRight", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
	}
	},
	{ "VarDecDiv",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pdecRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{2, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecFix",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecFromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecFromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecFromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecFromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 64, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecFromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecFromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecFromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecFromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecFromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecFromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecFromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecFromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, UNK },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecFromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecFromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecFromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecInt",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecMul",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pdecRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{2, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecNeg",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecRound",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "cDecimals", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDecSub",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pdecRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{2, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
	}
	},
	{ "VarDiv",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarEqv",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarFix",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarFormat",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pstrFormat", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "iFirstDay", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{3, "iFirstWeek", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{5, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarFormatCurrency",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "iNumDig", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "iIncLead", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{3, "iUseParens", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{4, "iGroup", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{6, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarFormatDateTime",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "iNamedFormat", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarFormatFromTokens",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pstrFormat", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "pbTokCur", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
		{5, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "VarFormatNumber",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "iNumDig", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "iIncLead", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{3, "iUseParens", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{4, "iGroup", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{6, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarFormatPercent",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "iNumDig", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "iIncLead", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{3, "iUseParens", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{4, "iGroup", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{6, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarI1FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarI1FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarI1FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarI1FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarI1FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 64, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarI1FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarI1FromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarI1FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarI1FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarI1FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarI1FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarI1FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, UNK },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarI1FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarI1FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarI1FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "i64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarI2FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarI2FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarI2FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarI2FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarI2FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 64, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarI2FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarI2FromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarI2FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarI2FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarI2FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarI2FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarI2FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, UNK },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarI2FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarI2FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarI2FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarI4FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarI4FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarI4FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarI4FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarI4FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 64, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarI4FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarI4FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarI4FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarI4FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarI4FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarI4FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarI4FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, UNK },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarI4FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarI4FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarI4FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarI8FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarI8FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarI8FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarI8FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarI8FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 64, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarI8FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarI8FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarI8FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarI8FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarI8FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarI8FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarI8FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarI8FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarI8FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VARIANT_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VARIANT_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VARIANT_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VARIANT_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VariantChangeType",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvargDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{2, "wFlags", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{3, "vt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
	}
	},
	{ "VariantChangeTypeEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvargDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{2, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "wFlags", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{4, "vt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
	}
	},
	{ "VariantClear",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VariantCopy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvargDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvargSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VariantCopyInd",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvargSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VariantInit",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pvarg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VariantTimeToDosDateTime",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "vtime", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pwDosDate", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "pwDosTime", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VariantTimeToSystemTime",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "vtime", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "lpSystemTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, UNK },
	}
	},
	{ "VarIdiv",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarImp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarInt",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarMod",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarMonthName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "iMonth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{1, "fAbbrev", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarMul",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarNeg",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarNot",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarNumFromParseNum",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pnumprs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "NUMPARSE", 192, UNK },
		{1, "rgbDig", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "dwVtBits", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarOr",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarParseNumFromStr",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pnumprs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "NUMPARSE", 192, UNK },
		{4, "rgbDig", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarPow",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarR4CmpR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fltLeft", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
		{1, "dblRight", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
	}
	},
	{ "VarR4FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarR4FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarR4FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarR4FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarR4FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 64, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarR4FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarR4FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarR4FromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarR4FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarR4FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarR4FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarR4FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, UNK },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarR4FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarR4FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarR4FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarR8FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarR8FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarR8FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarR8FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarR8FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 64, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarR8FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarR8FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarR8FromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarR8FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarR8FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarR8FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarR8FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, UNK },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarR8FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarR8FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarR8FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarR8Pow",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dblLeft", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "dblRight", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{2, "pdblResult", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarR8Round",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "cDecimals", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "pdblResult", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarRound",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "cDecimals", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarSub",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VarTokenizeFormatString",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pstrFormat", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "rgbTok", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "cbTok", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{3, "iFirstDay", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{4, "iFirstWeek", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{5, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{6, "pcbActual", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarUdateFromDate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "pudateOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "UDATE", 144, UNK },
	}
	},
	{ "VarUI1FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarUI1FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarUI1FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarUI1FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarUI1FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 64, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarUI1FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarUI1FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarUI1FromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarUI1FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarUI1FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarUI1FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarUI1FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarUI1FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarUI1FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarUI1FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "VarUI2FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarUI2FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarUI2FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarUI2FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarUI2FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 64, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarUI2FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarUI2FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarUI2FromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarUI2FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarUI2FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarUI2FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarUI2FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarUI2FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, UNK },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarUI2FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarUI2FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "i64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "VarUI4FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarUI4FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarUI4FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarUI4FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarUI4FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 64, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarUI4FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarUI4FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarUI4FromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarUI4FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
		{1, "plOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarUI4FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarUI4FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarUI4FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarUI4FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, UNK },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarUI4FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarUI4FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "plOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "VarUI8FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarUI8FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarUI8FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarUI8FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarUI8FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 64, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarUI8FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarUI8FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarUI8FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ui64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarUI8FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarUI8FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarUI8FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarUI8FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarUI8FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarUI8FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "VarWeekdayName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "iWeekday", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{1, "fAbbrev", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "iFirstDay", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "VarXor",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 192, UNK },
	}
	},
	{ "VectorFromBstr",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bstr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "ppsa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 256, UNK },
	}
	},
};


unsigned OleAut32arraySize = (sizeof(OleAut32_info) / sizeof(OleAut32_info[0]));