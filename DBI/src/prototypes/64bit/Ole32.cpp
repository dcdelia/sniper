// The following code was obtained using a slightly modified version
// of the Deviare parser from the PyREBox project. Credits:
// https://github.com/Cisco-Talos/pyrebox/blob/master/mw_monitor2/deviare_db_parser.py

#include "../pyrebox.h"

libcall_info_t Ole32_info[] = {
	{ "BindMoniker",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 64, IN },
		{1, "grfOpt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iidResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "CLIPFORMAT_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "CLIPFORMAT_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "CLIPFORMAT_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "CLIPFORMAT_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "CLSIDFromProgID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszProgID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, OUT },
	}
	},
	{ "CLSIDFromProgIDEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszProgID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, OUT },
	}
	},
	{ "CLSIDFromString",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, OUT },
	}
	},
	{ "CoAddRefServerProcess",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "CoAllowSetForegroundWindow",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{1, "lpvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CoBuildVersion",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "CoCancelCall",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwThreadId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ulTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoCopyProxy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pProxy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{1, "ppCopy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 64, OUT },
	}
	},
	{ "CoCreateFreeThreadedMarshaler",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "punkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{1, "ppunkMarshal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 64, OUT },
	}
	},
	{ "CoCreateGuid",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pguid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, UNK },
	}
	},
	{ "CoCreateInstance",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pUnkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{2, "dwClsContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "CoCreateInstanceEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Clsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{1, "punkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{2, "dwClsCtx", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pServerInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_COSERVERINFO", 256, IN },
		{4, "dwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pResults", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMULTI_QI", 192, INOUT },
	}
	},
	{ "CoDisableCallCancellation",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CoDisconnectContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoDisconnectObject",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoDosDateTimeToFileTime",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "nDosDate", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "nDosTime", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "lpFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, OUT },
	}
	},
	{ "CoEnableCallCancellation",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CoFileTimeNow",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, OUT },
	}
	},
	{ "CoFileTimeToDosDateTime",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{1, "lpDosDate", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "lpDosTime", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
	}
	},
	{ "CoFreeAllLibraries",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "CoFreeLibrary",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
	}
	},
	{ "CoFreeUnusedLibraries",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "CoFreeUnusedLibrariesEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "dwUnloadDelay", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CoGetCallContext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppInterface", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "CoGetCallerTID",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpdwTID", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CoGetCancelObject",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwThreadId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppUnk", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "CoGetClassObject",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "dwClsContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "CoGetContextToken",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pToken", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
	}
	},
	{ "CoGetCurrentLogicalThreadId",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pguid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, OUT },
	}
	},
	{ "CoGetCurrentProcess",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "CoGetDefaultContext",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "aptType", NKT_DBOBJCLASS_Enumeration, "_APTTYPE", 32, UNK },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, UNK },
	}
	},
	{ "CoGetInstanceFromFile",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pServerInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_COSERVERINFO", 256, IN },
		{1, "pClsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "punkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{3, "dwClsCtx", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pwszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "dwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pResults", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMULTI_QI", 192, INOUT },
	}
	},
	{ "CoGetInstanceFromIStorage",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pServerInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_COSERVERINFO", 256, IN },
		{1, "pClsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "punkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{3, "dwClsCtx", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, IN },
		{5, "dwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pResults", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMULTI_QI", 192, INOUT },
	}
	},
	{ "CoGetInterceptor",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "iidIntercepted", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "punkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{2, "iid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "CoGetInterceptorFromTypeInfo",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "iidIntercepted", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{1, "punkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, UNK },
		{2, "typeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ITypeInfo", 64, UNK },
		{3, "iid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, UNK },
	}
	},
	{ "CoGetInterfaceAndReleaseStream",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 64, IN },
		{1, "iid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "CoGetMalloc",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwMemContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppMalloc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMalloc", 64, OUT },
	}
	},
	{ "CoGetMarshalSizeMax",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pulSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{3, "dwDestContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvDestContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "mshlflags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoGetObject",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pBindOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBIND_OPTS", 128, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "CoGetObjectContext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "CoGetPSClsid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pClsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, OUT },
	}
	},
	{ "CoGetStandardMarshal",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{2, "dwDestContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvDestContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "mshlflags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ppMarshal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMarshal", 64, OUT },
	}
	},
	{ "CoGetStdMarshalEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pUnkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{1, "smexflags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppUnkInner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 64, OUT },
	}
	},
	{ "CoGetSystemSecurityPermissions",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "comSDType", NKT_DBOBJCLASS_Enumeration, "tagCOMSD", 32, UNK },
		{1, "ppSD", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, UNK },
	}
	},
	{ "CoGetTreatAsClass",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "clsidOld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pClsidNew", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, OUT },
	}
	},
	{ "CoImpersonateClient",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "CoInitialize",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CoInitializeEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwCoInit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoInitializeSecurity",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSecDesc", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "cAuthSvc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "asAuthSvc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSOLE_AUTHENTICATION_SERVICE", 192, IN },
		{3, "pReserved1", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "dwAuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwImpLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pAuthList", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "dwCapabilities", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "pReserved3", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CoInstall",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 64, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pClassSpec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "__MIDL___MIDL_itf_wtypes_0000_0001_0001", 320, IN },
		{3, "pQuery", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagQUERYCONTEXT", 256, IN },
		{4, "pszCodeBase", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CoInvalidateRemoteMachineBindings",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CoIsHandlerConnected",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
	}
	},
	{ "CoIsOle1Class",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
	}
	},
	{ "CoLoadLibrary",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpszLibName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "bAutoFree", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoLockObjectExternal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{1, "fLock", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "fLastUnlockReleases", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoMarshalHresult",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pstm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 64, IN },
		{1, "hresult", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoMarshalInterface",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 64, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{3, "dwDestContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvDestContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "mshlflags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoMarshalInterThreadInterfaceInStream",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{2, "ppStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStream", 64, OUT },
	}
	},
	{ "CoQueryAuthenticationServices",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pcAuthSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{1, "asAuthSvc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSOLE_AUTHENTICATION_SERVICE", 192, OUT },
	}
	},
	{ "CoQueryClientBlanket",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{1, "pAuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{2, "pServerPrincName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
		{3, "pAuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "pImpLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{5, "pPrivs", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{6, "pCapabilities", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CoQueryProxyBlanket",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pProxy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{1, "pwAuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{2, "pAuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "pServerPrincName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
		{4, "pAuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{5, "pImpLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{6, "pAuthInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{7, "pCapabilites", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CoRegisterChannelHook",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ExtensionUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{1, "pChannelHook", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IChannelHook", 64, UNK },
	}
	},
	{ "CoRegisterClassObject",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{2, "dwClsContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpdwRegister", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CoRegisterInitializeSpy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSpy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IInitializeSpy", 64, IN },
		{1, "puliCookie", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_ULARGE_INTEGER", 64, OUT },
	}
	},
	{ "CoRegisterMallocSpy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pMallocSpy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMallocSpy", 64, IN },
	}
	},
	{ "CoRegisterMessageFilter",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpMessageFilter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMessageFilter", 64, IN },
		{1, "lplpMessageFilter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMessageFilter", 64, OUT },
	}
	},
	{ "CoRegisterPSClsid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
	}
	},
	{ "CoRegisterSurrogate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSurrogate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ISurrogate", 64, IN },
	}
	},
	{ "CoReleaseMarshalData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 64, IN },
	}
	},
	{ "CoReleaseServerProcess",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "CoResumeClassObjects",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "CoRevertToSelf",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "CoRevokeClassObject",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwRegister", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoRevokeInitializeSpy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "uliCookie", NKT_DBOBJCLASS_Union, "_ULARGE_INTEGER", 64, IN },
	}
	},
	{ "CoRevokeMallocSpy",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "CoSetCancelObject",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
	}
	},
	{ "CoSetProxyBlanket",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pProxy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{1, "dwAuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwAuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pServerPrincName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "dwAuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwImpLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pAuthInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "dwCapabilities", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoSuspendClassObjects",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "CoSwitchCallContext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pNewObject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{1, "ppOldObject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 64, OUT },
	}
	},
	{ "CoTaskMemAlloc",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "cb", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "CoTaskMemFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "CoTaskMemRealloc",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "cb", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "CoTestCancel",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "CoTreatAsClass",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "clsidOld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "clsidNew", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
	}
	},
	{ "CoUninitialize",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "CoUnmarshalHresult",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pstm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 64, IN },
		{1, "phresult", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CoUnmarshalInterface",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 64, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "CoWaitForMultipleHandles",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cHandles", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pHandles", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{4, "lpdwindex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CreateAntiMoniker",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 64, OUT },
	}
	},
	{ "CreateBindCtx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IBindCtx", 64, OUT },
	}
	},
	{ "CreateClassMoniker",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 64, OUT },
	}
	},
	{ "CreateDataAdviseHolder",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ppDAHolder", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDataAdviseHolder", 64, OUT },
	}
	},
	{ "CreateDataCache",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pUnkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{1, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "iid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "CreateErrorInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pperrinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ICreateErrorInfo", 64, UNK },
	}
	},
	{ "CreateFileMoniker",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 64, OUT },
	}
	},
	{ "CreateGenericComposite",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pmkFirst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 64, IN },
		{1, "pmkRest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 64, IN },
		{2, "ppmkComposite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 64, OUT },
	}
	},
	{ "CreateILockBytesOnHGlobal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hGlobal", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "fDeleteOnRelease", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "pplkbyt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ILockBytes", 64, UNK },
	}
	},
	{ "CreateItemMoniker",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszDelim", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszItem", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 64, OUT },
	}
	},
	{ "CreateObjrefMoniker",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "punk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{1, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 64, OUT },
	}
	},
	{ "CreateOleAdviseHolder",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ppOAHolder", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IOleAdviseHolder", 64, OUT },
	}
	},
	{ "CreatePointerMoniker",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "punk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{1, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 64, OUT },
	}
	},
	{ "CreateStdProgressIndicator",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwndParent", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pszTitle", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "pIbscCaller", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 64, UNK },
		{3, "ppIbsc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IBindStatusCallback", 64, UNK },
	}
	},
	{ "CreateStreamOnHGlobal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hGlobal", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "fDeleteOnRelease", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "ppstm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStream", 64, UNK },
	}
	},
	{ "DcomChannelSetHResult",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{1, "pulReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{2, "appsHR", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
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
	{ "DoDragDrop",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 64, IN },
		{1, "pDropSource", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDropSource", 64, IN },
		{2, "dwOKEffects", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pdwEffect", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "FmtIdToPropStgName",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pfmtid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, UNK },
		{1, "oszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "FreePropVariantArray",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cVariants", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "rgvars", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 192, UNK },
	}
	},
	{ "GetClassFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "szFilename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, OUT },
	}
	},
	{ "GetConvertStg",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, UNK },
	}
	},
	{ "GetErrorInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pperrinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IErrorInfo", 64, UNK },
	}
	},
	{ "GetHGlobalFromILockBytes",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "plkbyt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ILockBytes", 64, UNK },
		{1, "phglobal", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "GetHGlobalFromStream",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pstm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 64, UNK },
		{1, "phglobal", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "GetRunningObjectTable",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pprot", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IRunningObjectTable", 64, OUT },
	}
	},
	{ "HACCEL_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HACCEL_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HACCEL_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HACCEL_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HBITMAP_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HBITMAP_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HBITMAP_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HBITMAP_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HDC_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HDC_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HDC_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HDC_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HGLOBAL_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HGLOBAL_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HGLOBAL_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HGLOBAL_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HICON_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HICON_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HICON_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HICON_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HMENU_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HMENU_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HMENU_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HMENU_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HPALETTE_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HPALETTE_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HPALETTE_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HPALETTE_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HRGN_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HRGN_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HRGN_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HRGN_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HWND_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HWND_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HWND_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "HWND_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "IIDFromString",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpiid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, OUT },
	}
	},
	{ "IsAccelerator",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hAccel", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "cAccelEntries", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 384, IN },
		{3, "lpwCmd", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
	}
	},
	{ "MkParseDisplayName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 64, IN },
		{1, "szUserName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pchEaten", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 64, OUT },
	}
	},
	{ "MonikerCommonPrefixWith",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pmkThis", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 64, IN },
		{1, "pmkOther", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 64, IN },
		{2, "ppmkCommon", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 64, OUT },
	}
	},
	{ "MonikerRelativePathTo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pmkSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 64, IN },
		{1, "pmkDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 64, IN },
		{2, "ppmkRelPath", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 64, OUT },
		{3, "dwReserved", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrProxyForwardingFunction10",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction11",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction12",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction13",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction14",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction15",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction16",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction17",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction18",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction19",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction20",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction21",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction22",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction23",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction24",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction25",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction26",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction27",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction28",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction29",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction3",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction30",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction31",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction32",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction4",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction5",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction6",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction7",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction8",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "NdrProxyForwardingFunction9",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient10",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient11",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient12",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient13",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient14",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient15",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient16",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient17",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient18",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient19",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient20",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient21",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient22",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient23",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient24",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient25",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient26",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient27",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient28",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient29",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient3",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient30",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient31",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient32",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient4",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient5",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient6",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient7",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient8",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ObjectStublessClient9",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "OleBuildVersion",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "OleConvertIStorageToOLESTREAM",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, UNK },
		{1, "lpolestream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OLESTREAM", 64, UNK },
	}
	},
	{ "OleConvertIStorageToOLESTREAMEx",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, UNK },
		{1, "cfFormat", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{2, "lWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{3, "lHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{4, "dwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{5, "pmedium", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGMEDIUM", 192, UNK },
		{6, "polestm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OLESTREAM", 64, UNK },
	}
	},
	{ "OleConvertOLESTREAMToIStorage",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpolestream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OLESTREAM", 64, UNK },
		{1, "pstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, UNK },
		{2, "ptd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDVTARGETDEVICE", 128, UNK },
	}
	},
	{ "OleConvertOLESTREAMToIStorageEx",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "polestm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OLESTREAM", 64, UNK },
		{1, "pstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, UNK },
		{2, "pcfFormat", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "plwWidth", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{4, "plHeight", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{5, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{6, "pmedium", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGMEDIUM", 192, UNK },
	}
	},
	{ "OleCreate",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 256, IN },
		{4, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 64, IN },
		{5, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, IN },
		{6, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleCreateDefaultHandler",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "clsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pUnkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "lplpObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleCreateEmbeddingHelper",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "clsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pUnkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{2, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pCF", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IClassFactory", 64, IN },
		{4, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{5, "lplpObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleCreateEx",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cFormats", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "rgAdvf", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "rgFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 256, IN },
		{7, "lpAdviseSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAdviseSink", 64, IN },
		{8, "rgdwConnection", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{9, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 64, IN },
		{10, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, IN },
		{11, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleCreateFromData",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSrcDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 64, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 256, IN },
		{4, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 64, IN },
		{5, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, IN },
		{6, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleCreateFromDataEx",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSrcDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 64, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cFormats", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "rgAdvf", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "rgFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 256, IN },
		{7, "lpAdviseSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAdviseSink", 64, IN },
		{8, "rgdwConnection", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{9, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 64, IN },
		{10, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, IN },
		{11, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleCreateFromFile",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "lpszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 256, IN },
		{5, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 64, IN },
		{6, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, IN },
		{7, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleCreateFromFileEx",13,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "lpszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "cFormats", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "rgAdvf", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{7, "rgFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 256, IN },
		{8, "lpAdviseSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAdviseSink", 64, IN },
		{9, "rgdwConnection", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{10, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 64, IN },
		{11, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, IN },
		{12, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleCreateLink",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pmkLinkSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 64, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 256, IN },
		{4, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 64, IN },
		{5, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, IN },
		{6, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleCreateLinkEx",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pmkLinkSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 64, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cFormats", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "rgAdvf", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "rgFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 256, IN },
		{7, "lpAdviseSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAdviseSink", 64, IN },
		{8, "rgdwConnection", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{9, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 64, IN },
		{10, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, IN },
		{11, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleCreateLinkFromData",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSrcDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 64, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 256, IN },
		{4, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 64, IN },
		{5, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, IN },
		{6, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleCreateLinkFromDataEx",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSrcDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 64, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cFormats", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "rgAdvf", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "rgFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 256, IN },
		{7, "lpAdviseSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAdviseSink", 64, IN },
		{8, "rgdwConnection", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 64, IN },
		{10, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, IN },
		{11, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleCreateLinkToFile",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 256, IN },
		{4, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 64, IN },
		{5, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, IN },
		{6, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleCreateLinkToFileEx",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cFormats", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "rgAdvf", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "rgFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 256, IN },
		{7, "lpAdviseSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAdviseSink", 64, IN },
		{8, "rgdwConnection", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{9, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 64, IN },
		{10, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, IN },
		{11, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleCreateMenuDescriptor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hmenuCombined", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpMenuWidths", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOleMenuGroupWidths", 192, IN },
	}
	},
	{ "OleCreateStaticFromData",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSrcDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 64, IN },
		{1, "iid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 256, IN },
		{4, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 64, IN },
		{5, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, IN },
		{6, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleDestroyMenuDescriptor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "holemenu", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
	}
	},
	{ "OleDoAutoConvert",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, IN },
		{1, "pClsidNew", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, OUT },
	}
	},
	{ "OleDraw",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pUnknown", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{1, "dwAspect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hdcDraw", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "lprcBounds", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "OleDuplicateData",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hSrc", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "cfFormat", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "uiFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleFlushClipboard",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "OleGetAutoConvert",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "clsidOld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pClsidNew", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, OUT },
	}
	},
	{ "OleGetClipboard",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ppDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDataObject", 64, OUT },
	}
	},
	{ "OleGetIconOfClass",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "lpszLabel", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "fUseTypeAsLabel", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleGetIconOfFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "fUseFileAsLabel", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleInitialize",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "OleIsCurrentClipboard",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 64, IN },
	}
	},
	{ "OleIsRunning",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pObject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleObject", 64, IN },
	}
	},
	{ "OleLoad",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 64, IN },
		{3, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleLoadFromStream",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 64, IN },
		{1, "iidInterface", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OleLockRunning",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pUnknown", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{1, "fLock", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "fLastUnlockCloses", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleMetafilePictFromIconAndLabel",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hIcon", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpszLabel", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszSourceFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "iIconIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleNoteObjectVisible",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pUnknown", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{1, "fVisible", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleQueryCreateFromData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSrcDataObject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 64, IN },
	}
	},
	{ "OleQueryLinkFromData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSrcDataObject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 64, IN },
	}
	},
	{ "OleRegEnumFormatEtc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "clsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "dwDirection", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppenum", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IEnumFORMATETC", 64, OUT },
	}
	},
	{ "OleRegEnumVerbs",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "clsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppenum", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IEnumOLEVERB", 64, OUT },
	}
	},
	{ "OleRegGetMiscStatus",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "clsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "dwAspect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdwStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "OleRegGetUserType",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "clsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "dwFormOfType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszUserType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
	}
	},
	{ "OleRun",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pUnknown", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
	}
	},
	{ "OleSave",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pPS", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPersistStorage", 64, IN },
		{1, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, IN },
		{2, "fSameAsLoad", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleSaveToStream",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pPStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPersistStream", 64, IN },
		{1, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 64, IN },
	}
	},
	{ "OleSetAutoConvert",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "clsidOld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "clsidNew", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
	}
	},
	{ "OleSetClipboard",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 64, IN },
	}
	},
	{ "OleSetContainedObject",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pUnknown", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{1, "fContained", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleSetMenuDescriptor",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "holemenu", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "hwndFrame", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "hwndActiveObject", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "lpFrame", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleInPlaceFrame", 64, IN },
		{4, "lpActiveObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleInPlaceActiveObject", 64, IN },
	}
	},
	{ "OleTranslateAccelerator",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFrame", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleInPlaceFrame", 64, IN },
		{1, "lpFrameInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOIFI", 256, IN },
		{2, "lpmsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 384, IN },
	}
	},
	{ "OleUninitialize",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "ProgIDFromCLSID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "clsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "lplpszProgID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
	}
	},
	{ "PropStgNameToFmtId",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "oszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "pfmtid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, UNK },
	}
	},
	{ "PropVariantChangeType",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ppropvarDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 192, OUT },
		{1, "propvarSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 192, IN },
		{2, "flags", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "vt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "PropVariantClear",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 192, UNK },
	}
	},
	{ "PropVariantCopy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvarDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 192, UNK },
		{1, "pvarSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 192, UNK },
	}
	},
	{ "ReadClassStg",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, UNK },
		{1, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, UNK },
	}
	},
	{ "ReadClassStm",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 64, UNK },
		{1, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, UNK },
	}
	},
	{ "ReadFmtUserTypeStg",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, UNK },
		{1, "pcf", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "lplpszUserType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
	}
	},
	{ "RegisterDragDrop",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pDropTarget", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDropTarget", 64, IN },
	}
	},
	{ "ReleaseStgMedium",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGMEDIUM", 192, UNK },
	}
	},
	{ "RevokeDragDrop",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "SetConvertStg",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, UNK },
		{1, "fConvert", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetErrorInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "perrinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IErrorInfo", 64, UNK },
	}
	},
	{ "SNB_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SNB_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SNB_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SNB_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "StgConvertPropertyToVariant",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "pprop", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSERIALIZEDPROPERTYVALUE", 64, UNK },
		{1, "CodePage", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{2, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 192, UNK },
{ 0 },
	}
	},
	{ "StgConvertVariantToProperty",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSERIALIZEDPROPERTYVALUE", 64, OUT },
		{0, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 192, UNK },
		{1, "CodePage", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{2, "pprop", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSERIALIZEDPROPERTYVALUE", 64, UNK },
		{3, "pcb", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{4, "pid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{5, "fReserved", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, UNK },
		{6, "pcIndirect", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "StgCreateDocfile",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pwcsName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "ppstgOpen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStorage", 64, UNK },
	}
	},
	{ "StgCreateDocfileOnILockBytes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "plkbyt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ILockBytes", 64, UNK },
		{1, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "ppstgOpen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStorage", 64, UNK },
	}
	},
	{ "StgCreatePropSetStg",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pStorage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, UNK },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "ppPropSetStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IPropertySetStorage", 64, UNK },
	}
	},
	{ "StgCreatePropStg",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, UNK },
		{1, "fmtid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{2, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, UNK },
		{3, "grfFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{5, "ppPropStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IPropertyStorage", 64, UNK },
	}
	},
	{ "StgCreateStorageEx",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pwcsName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "stgfmt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "grfAttrs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "pStgOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGOPTIONS", 128, UNK },
		{5, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{6, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{7, "ppObjectOpen", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, UNK },
	}
	},
	{ "StgGetIFillLockBytesOnFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pwcsName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "ppflb", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IFillLockBytes", 64, UNK },
	}
	},
	{ "StgGetIFillLockBytesOnILockBytes",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pilb", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ILockBytes", 64, UNK },
		{1, "ppflb", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IFillLockBytes", 64, UNK },
	}
	},
	{ "StgIsStorageFile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pwcsName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "StgIsStorageILockBytes",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "plkbyt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ILockBytes", 64, UNK },
	}
	},
	{ "STGMEDIUM_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGMEDIUM", 192, UNK },
	}
	},
	{ "STGMEDIUM_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGMEDIUM", 192, UNK },
	}
	},
	{ "STGMEDIUM_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGMEDIUM", 192, UNK },
	}
	},
	{ "STGMEDIUM_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGMEDIUM", 192, UNK },
	}
	},
	{ "StgOpenAsyncDocfileOnIFillLockBytes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pflb", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IFillLockBytes", 64, UNK },
		{1, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "asyncFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "ppstgOpen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStorage", 64, UNK },
	}
	},
	{ "StgOpenPropStg",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, UNK },
		{1, "fmtid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{2, "grfFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "ppPropStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IPropertyStorage", 64, UNK },
	}
	},
	{ "StgOpenStorage",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pwcsName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "pstgPriority", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, UNK },
		{2, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "snbExclude", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
		{4, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{5, "ppstgOpen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStorage", 64, UNK },
	}
	},
	{ "StgOpenStorageEx",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pwcsName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "stgfmt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "grfAttrs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "pStgOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGOPTIONS", 128, UNK },
		{5, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{6, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{7, "ppObjectOpen", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, UNK },
	}
	},
	{ "StgOpenStorageOnILockBytes",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "plkbyt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ILockBytes", 64, UNK },
		{1, "pstgPriority", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, UNK },
		{2, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "snbExclude", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, UNK },
		{4, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{5, "ppstgOpen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStorage", 64, UNK },
	}
	},
	{ "StgPropertyLengthAsVariant",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pProp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSERIALIZEDPROPERTYVALUE", 64, UNK },
		{1, "cbProp", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "CodePage", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{3, "bReserved", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, UNK },
	}
	},
	{ "StgSetTimes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "pctime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, UNK },
		{2, "patime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, UNK },
		{3, "pmtime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, UNK },
	}
	},
	{ "StringFromCLSID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "lplpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
	}
	},
	{ "StringFromGUID2",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rguid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "lpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "cchMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "StringFromIID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "lplpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
	}
	},
	{ "WriteClassStg",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, UNK },
		{1, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
	}
	},
	{ "WriteClassStm",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 64, UNK },
		{1, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
	}
	},
	{ "WriteFmtUserTypeStg",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 64, UNK },
		{1, "cf", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{2, "lpszUserType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
};


unsigned Ole32arraySize = (sizeof(Ole32_info) / sizeof(Ole32_info[0]));