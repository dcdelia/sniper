// The following code was obtained using a slightly modified version
// of the Deviare parser from the PyREBox project. Credits:
// https://github.com/Cisco-Talos/pyrebox/blob/master/mw_monitor2/deviare_db_parser.py

#include "../pyrebox.h"

libcall_info_t shell32_info[] = {
	{ "CDefFolderMenu_Create2",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidlFolder", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "cidl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "apidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, IN },
		{4, "psf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 64, IN },
		{5, "pfn", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{6, "nKeys", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "ahkeys", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{8, "ppcm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IContextMenu", 64, OUT },
	}
	},
	{ "CIDLData_CreateFromIDArray",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidlFolder", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "cidl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "apidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, IN },
		{3, "ppdtobj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDataObject", 64, OUT },
	}
	},
	{ "CommandLineToArgvW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
		{0, "lpCmdLine", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "pNumArgs", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "DAD_AutoScroll",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pad", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AUTO_SCROLL_DATA", 384, IN },
		{2, "pptNow", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
	}
	},
	{ "DAD_DragEnterEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwndTarget", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "ptStart", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, UNK },
	}
	},
	{ "DAD_DragEnterEx2",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwndTarget", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "ptStart", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
		{2, "pdtObject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 64, IN },
	}
	},
	{ "DAD_DragLeave",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "DAD_DragMove",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pt", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, UNK },
	}
	},
	{ "DAD_SetDragImage",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "him", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{1, "pptOffset", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
	}
	},
	{ "DAD_ShowDragImage",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fShow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
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
	{ "DllInstall",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bInstall", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{1, "pszCmdLine", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
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
	{ "DoEnvironmentSubstA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pszSrc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "cchSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DoEnvironmentSubstW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pszSrc", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "cchSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DragAcceptFiles",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "fAccept", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DragFinish",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "hDrop", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
	}
	},
	{ "DragQueryFileA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hDrop", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "iFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpszFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{3, "cch", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DragQueryFileW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hDrop", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "iFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpszFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "cch", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DragQueryPoint",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hDrop", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "ppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
	}
	},
	{ "DriveType",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "iDrive", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DuplicateIcon",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "hIcon", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "ExtractAssociatedIconA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pszIconPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "piIcon", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "ExtractAssociatedIconExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pszIconPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "piIconIndex", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "piIconId", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "ExtractAssociatedIconExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pszIconPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "piIconIndex", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "piIconId", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "ExtractAssociatedIconW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pszIconPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "piIcon", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "ExtractIconA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pszExeFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "nIconIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ExtractIconExA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "nIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "phiconLarge", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
		{3, "phiconSmall", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
		{4, "nIcons", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ExtractIconExW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "nIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "phiconLarge", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
		{3, "phiconSmall", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
		{4, "nIcons", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ExtractIconW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pszExeFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "nIconIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "FindExecutableA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "lpDirectory", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "lpResult", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "FindExecutableW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lpDirectory", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "lpResult", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "GetFileNameFromBrowse",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pszFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchFilePath", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszWorkingDir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pszDefExt", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "pszFilters", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "pszTitle", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "ILAppendID",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "pmkid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHITEMID", 24, IN },
		{2, "fAppend", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ILClone",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILCloneFirst",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILCombine",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pidl1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "pidl2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILCreateFromPathA",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "ILCreateFromPathW",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "ILFindChild",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pidlParent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "pidlChild", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILFindLastID",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILGetNext",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILGetSize",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILIsEqual",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "pidl2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "ILIsParent",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "pidl2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{2, "fImmediate", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ILRemoveLastID",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, INOUT },
	}
	},
	{ "ILSaveToStream",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pstm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 64, IN },
		{1, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "IsNetDrive",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "iDrive", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsUserAnAdmin",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "OpenRegStream",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 64, OUT },
		{0, "hkey", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pszSubkey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "pszValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PathCleanupSpec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszDir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszSpec", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "PathGetShortPath",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pszLongPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "PathIsExe",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "PathIsSlowA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "dwAttr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PathIsSlowW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "dwAttr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PathMakeUniqueName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszUniqueName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{1, "cchMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszTemplate", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pszLongPlate", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pszDir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "PathQualify",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "PathResolve",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{1, "dirs", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{2, "fFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PathYetAnotherMakeUniqueName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszUniqueName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{1, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pszShort", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pszFileSpec", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "PickIconDlg",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pszIconPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "cchIconPath", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "piIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PifMgr_CloseProperties",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hProps", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "flOpt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PifMgr_GetProperties",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProps", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pszGroup", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpProps", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{3, "cbProps", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{4, "flOpt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PifMgr_OpenProperties",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "pszApp", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszPIF", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "hInf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "flOpt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PifMgr_SetProperties",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProps", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pszGroup", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpProps", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{3, "cbProps", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{4, "flOpt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ReadCabinetState",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pcs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CABINETSTATE", 80, OUT },
		{1, "cLength", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RealDriveType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "iDrive", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "fOKToHitNet", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RestartDialog",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pszPrompt", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwReturn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHAddDefaultPropertiesByExt",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszExt", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "pPropStore", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyStore", 64, UNK },
	}
	},
	{ "SHAddFromPropSheetExtArray",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hpsxa", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpfnAddPage", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
	}
	},
	{ "SHAddToRecentDocs",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SHAlloc",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "cb", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "SHAppBarMessage",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "dwMessage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AppBarData", 384, UNK },
	}
	},
	{ "SHBindToParent",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{3, "ppidlLast", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, OUT },
	}
	},
	{ "SHBrowseForFolderA",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "lpbi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_browseinfoA", 512, UNK },
	}
	},
	{ "SHBrowseForFolderW",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "lpbi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_browseinfoW", 512, UNK },
	}
	},
	{ "SHChangeNotification_Lock",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hChange", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "dwProcId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "pppidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, UNK },
		{3, "plEvent", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "SHChangeNotification_Unlock",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hLock", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
	}
	},
	{ "SHChangeNotify",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "wEventId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwItem1", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{3, "dwItem2", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "SHChangeNotifyDeregister",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ulID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHChangeNotifyRegister",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "fSources", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "fEvents", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{3, "wMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "cEntries", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{5, "pshcne", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHChangeNotifyEntry", 96, UNK },
	}
	},
	{ "SHCloneSpecialIDList",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "csidl", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "fCreate", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHCLSIDFromString",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, UNK },
	}
	},
	{ "SHCoCreateInstance",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszCLSID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "pUnkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateDefaultExtractIcon",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
		{1, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateDefaultPropertiesOp",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellItem", 64, UNK },
		{1, "ppFileOp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IFileOperation", 64, OUT },
	}
	},
	{ "SHCreateDirectory",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SHCreateDirectoryExA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, UNK },
	}
	},
	{ "SHCreateDirectoryExW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, UNK },
	}
	},
	{ "SHCreateItemFromIDList",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateItemFromParsingName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 64, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateItemFromRelativeName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psiParent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellItem", 64, IN },
		{1, "pszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 64, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateItemWithParent",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidlParent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "psfParent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 64, IN },
		{2, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppvItem", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreatePropSheetExtArray",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pszSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "max_iface", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHCreateQueryCancelAutoPlayMoniker",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ppmoniker", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 64, OUT },
	}
	},
	{ "SHCreateShellFolderView",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pcsfv", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SFV_CREATE", 256, IN },
		{1, "ppsv", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IShellView", 64, OUT },
	}
	},
	{ "SHCreateShellFolderViewEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pcsfv", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CSFV", 448, IN },
		{1, "ppsv", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IShellView", 64, OUT },
	}
	},
	{ "SHCreateShellItemArray",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidlParent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "psf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 64, IN },
		{2, "cidl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, IN },
		{4, "ppsiItemArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IShellItemArray", 64, OUT },
	}
	},
	{ "SHCreateShellItemArrayFromDataObject",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 64, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateShellItemArrayFromIDLists",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cidl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "rgpidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, IN },
		{2, "ppsiItemArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IShellItemArray", 64, OUT },
	}
	},
	{ "SHCreateShellItemArrayFromShellItem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellItem", 64, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "SHCreateStdEnumFmtEtc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cfmt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "afmt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 256, UNK },
		{2, "ppenumFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IEnumFORMATETC", 64, OUT },
	}
	},
	{ "SHDefExtractIconA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszIconFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "iIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "phiconLarge", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
		{4, "phiconSmall", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
		{5, "nIconSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHDefExtractIconW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszIconFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "iIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "phiconLarge", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
		{4, "phiconSmall", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
		{5, "nIconSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHDestroyPropSheetExtArray",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "hpsxa", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "SHDoDragDrop",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pdata", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 64, UNK },
		{2, "pdsrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDropSource", 64, IN },
		{3, "dwEffect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pdwEffect", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "Shell_GetCachedImageIndex",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pwszIconPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "iIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "uIconFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "Shell_GetImageLists",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "phiml", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "phimlSmall", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "Shell_MergeMenus",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hmDst", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "hmSrc", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "uInsert", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "uIDAdjust", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "uIDAdjustMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "Shell_NotifyIconA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwMessage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "lpData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_NOTIFYICONDATAA", 832, UNK },
	}
	},
	{ "Shell_NotifyIconW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwMessage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "lpData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_NOTIFYICONDATAW", 1344, UNK },
	}
	},
	{ "ShellAboutA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "szApp", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "szOtherStuff", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{3, "hIcon", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
	}
	},
	{ "ShellAboutW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "szApp", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "szOtherStuff", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "hIcon", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
	}
	},
	{ "ShellExecuteA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "lpOperation", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "lpFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{3, "lpParameters", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{4, "lpDirectory", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{5, "nShowCmd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ShellExecuteExA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pExecInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHELLEXECUTEINFOA", 896, UNK },
	}
	},
	{ "ShellExecuteExW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pExecInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHELLEXECUTEINFOW", 896, UNK },
	}
	},
	{ "ShellExecuteW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "lpOperation", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "lpFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "lpParameters", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{4, "lpDirectory", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{5, "nShowCmd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ShellMessageBoxA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hAppInst", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "hWnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{2, "lpcText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{3, "lpcTitle", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{4, "fuStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ShellMessageBoxW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hAppInst", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "hWnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{2, "lpcText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "lpcTitle", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{4, "fuStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHEnumerateUnreadMailAccountsW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKeyUser", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "pszMailAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "cchMailAddress", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHFileOperationA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileOp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHFILEOPSTRUCTA", 448, UNK },
	}
	},
	{ "SHFileOperationW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileOp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHFILEOPSTRUCTW", 448, UNK },
	}
	},
	{ "SHFind_InitMenuPopup",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IContextMenu", 64, OUT },
		{0, "hmenu", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "hwndOwner", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{2, "idCmdFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "idCmdLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHFindFiles",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidlFolder", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{1, "pidlSaveFile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "SHFormatDrive",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "drive", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fmtID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SHFreeNameMappings",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "hNameMappings", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
	}
	},
	{ "SHGetDataFromIDListA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 64, UNK },
		{1, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, UNK },
		{2, "nFormat", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{3, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{4, "cb", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHGetDataFromIDListW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 64, UNK },
		{1, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, UNK },
		{2, "nFormat", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{3, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{4, "cb", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHGetDesktopFolder",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ppshf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IShellFolder", 64, OUT },
	}
	},
	{ "SHGetFileInfoA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "dwFileAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "psfi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHFILEINFOA", 2880, UNK },
		{3, "cbFileInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHGetFileInfoW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "dwFileAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "psfi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SHFILEINFOW", 5568, UNK },
		{3, "cbFileInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHGetIconOverlayIndexA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszIconPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "iIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHGetIconOverlayIndexW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszIconPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "iIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHGetInstanceExplorer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ppunk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 64, OUT },
	}
	},
	{ "SHGetMalloc",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ppMalloc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMalloc", 64, UNK },
	}
	},
	{ "SHGetPathFromIDListA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, UNK },
		{1, "pszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "SHGetPathFromIDListW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, UNK },
		{1, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SHGetRealIDL",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 64, IN },
		{1, "pidlSimple", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{2, "ppidlReal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, OUT },
	}
	},
	{ "SHGetSetSettings",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "lpss", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SHELLSTATEW", 232, INOUT },
		{1, "dwMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "bSet", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHGetSettings",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "psfs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SHELLFLAGSTATE", 16, UNK },
		{1, "dwMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHGetSpecialFolderLocation",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "csidl", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{2, "ppidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, OUT },
	}
	},
	{ "SHGetSpecialFolderPathA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "csidl", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{3, "fCreate", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHGetSpecialFolderPathW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "csidl", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{3, "fCreate", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHGetUnreadMailCountW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKeyUser", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pszMailAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "pdwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{3, "pFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, UNK },
		{4, "pszShellExecuteCommand", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{5, "cchShellExecuteCommand", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHILCreateFromPath",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ppidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ITEMIDLIST", 24, OUT },
		{2, "rgfInOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "SHLoadInProc",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, UNK },
	}
	},
	{ "SHMapPIDLToSystemImageListIndex",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pshf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellFolder", 64, UNK },
		{1, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{2, "piIndexSel", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "SHObjectProperties",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "shopObjectType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "pszPropertyPage", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SHOpenPropSheetW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszCaption", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ahkeys", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{2, "ckeys", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pclsidDefault", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, UNK },
		{4, "pdtobj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 64, UNK },
		{5, "psb", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellBrowser", 64, UNK },
		{6, "pStartPage", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SHPathPrepareForWriteA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "punkEnableModless", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, UNK },
		{2, "pszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHPathPrepareForWriteW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "punkEnableModless", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, UNK },
		{2, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHPropStgCreate",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertySetStorage", 64, IN },
		{1, "fmtid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{3, "grfFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ppstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IPropertyStorage", 64, UNK },
		{7, "puCodePage", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "SHPropStgReadMultiple",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pps", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyStorage", 64, UNK },
		{1, "uCodePage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "cpspec", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "rgpspec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPSPEC", 128, UNK },
		{4, "rgvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 192, UNK },
	}
	},
	{ "SHPropStgWriteMultiple",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pps", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyStorage", 64, UNK },
		{1, "puCodePage", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{2, "cpspec", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "rgpspec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPSPEC", 128, UNK },
		{4, "rgvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 192, UNK },
		{5, "propidNameFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHReplaceFromPropSheetExtArray",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hpsxa", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "uPageID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpfnReplaceWith", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{3, "lParam", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
	}
	},
	{ "SHRestricted",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "rest", NKT_DBOBJCLASS_Enumeration, "RESTRICTIONS", 32, UNK },
	}
	},
	{ "SHSetDefaultProperties",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "psi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IShellItem", 64, UNK },
		{2, "dwFileOpFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "pfops", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IFileOperationProgressSink", 64, IN },
	}
	},
	{ "SHSetInstanceExplorer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "punk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 64, IN },
	}
	},
	{ "SHSetUnreadMailCountW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszMailAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "dwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "pszShellExecuteCommand", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SHShellFolderView_Message",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, OUT },
		{0, "hwndMain", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lParam", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
	}
	},
	{ "SHSimpleIDListFromPath",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SHStartNetConnectionDialogW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "pszRemoteName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "dwType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SHTestTokenMembership",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hToken", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "ulRID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SHValidateUNC",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hwndOwner", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pszFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "fConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SignalFileOpen",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
	}
	},
	{ "StrChrA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "pszStart", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "wMatch", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
	}
	},
	{ "StrChrIA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "pszStart", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "wMatch", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
	}
	},
	{ "StrChrIW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "pszStart", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "wMatch", NKT_DBFUNDTYPE_WideChar, 0, 2, UNK },
	}
	},
	{ "StrChrW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "pszStart", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "wMatch", NKT_DBFUNDTYPE_WideChar, 0, 2, UNK },
	}
	},
	{ "StrCmpNA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psz1", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "psz2", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "nChar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "StrCmpNIA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psz1", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "psz2", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "nChar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "StrCmpNIW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psz1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "psz2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "nChar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "StrCmpNW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psz1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "psz2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "nChar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "StrRChrA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "pszStart", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "pszEnd", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "wMatch", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
	}
	},
	{ "StrRChrIA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "pszStart", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "pszEnd", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "wMatch", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
	}
	},
	{ "StrRChrIW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "pszStart", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "pszEnd", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "wMatch", NKT_DBFUNDTYPE_WideChar, 0, 2, UNK },
	}
	},
	{ "StrRChrW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "pszStart", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "pszEnd", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "wMatch", NKT_DBFUNDTYPE_WideChar, 0, 2, UNK },
	}
	},
	{ "StrRStrIA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "pszSource", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "pszLast", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "pszSrch", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "StrRStrIW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "pszSource", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "pszLast", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "pszSrch", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "StrStrA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "pszFirst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "pszSrch", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "StrStrIA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "pszFirst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "pszSrch", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "StrStrIW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "pszFirst", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "pszSrch", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "StrStrW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "pszFirst", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "pszSrch", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "Win32DeleteFile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "WriteCabinetState",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pcs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CABINETSTATE", 80, IN },
	}
	},
};


unsigned shell32arraySize = (sizeof(shell32_info) / sizeof(shell32_info[0]));