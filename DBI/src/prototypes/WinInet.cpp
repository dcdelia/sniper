// The following code was obtained using a slightly modified version
// of the Deviare parser from the PyREBox project. Credits:
// https://github.com/Cisco-Talos/pyrebox/blob/master/mw_monitor2/deviare_db_parser.py

#include "pyrebox.h"

libcall_info_t WinInet_info[] = {
	{ "_GetFileExtensionFromUrl",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszExt", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pcchExt", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CommitUrlCacheEntryA",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpszLocalFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "ExpireTime", NKT_DBOBJCLASS_Struct, "_FILETIME", 64, IN },
		{3, "LastModifiedTime", NKT_DBOBJCLASS_Struct, "_FILETIME", 64, IN },
		{4, "CacheEntryType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpHeaderInfo", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "cchHeaderInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "lpszFileExtension", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{8, "lpszOriginalUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CommitUrlCacheEntryW",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszLocalFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ExpireTime", NKT_DBOBJCLASS_Struct, "_FILETIME", 64, IN },
		{3, "LastModifiedTime", NKT_DBOBJCLASS_Struct, "_FILETIME", 64, IN },
		{4, "CacheEntryType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpszHeaderInfo", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "cchHeaderInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "lpszFileExtension", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{8, "lpszOriginalUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CreateMD5SSOHash",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszChallengeInfo", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pwszRealm", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pwszTarget", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pbHexHash", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
	}
	},
	{ "CreateUrlCacheContainerA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpCachePrefix", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszCachePath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "KBCacheLimit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwContainerType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pvBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "cbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CreateUrlCacheContainerW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpCachePrefix", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszCachePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "KBCacheLimit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwContainerType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pvBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "cbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CreateUrlCacheEntryA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwExpectedFileSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszFileExtension", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpszFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{4, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateUrlCacheEntryW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwExpectedFileSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszFileExtension", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{4, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateUrlCacheGroup",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DeleteIE3Cache",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hinst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszCmd", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "nCmdShow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeleteUrlCacheContainerA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeleteUrlCacheContainerW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeleteUrlCacheEntryA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "DeleteUrlCacheEntryW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DeleteUrlCacheGroup",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "GroupId", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DeleteWpadCacheForNetworks",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, 0, NKT_DBOBJCLASS_Enumeration, "WPAD_CACHE_DELETE", 32, IN },
	}
	},
	{ "DetectAutoProxyUrl",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszAutoProxyUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cchAutoProxyUrl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwDetectFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DllInstall",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "bInstall", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pszCmdLine", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "FindCloseUrlCache",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEnumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindFirstUrlCacheContainerA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pdwModified", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "lpContainerInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_CONTAINER_INFOA", 160, IN },
		{2, "lpcbContainerInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindFirstUrlCacheContainerW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pdwModified", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "lpContainerInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_CONTAINER_INFOW", 160, IN },
		{2, "lpcbContainerInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindFirstUrlCacheEntryA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlSearchPattern", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpFirstCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOA", 640, OUT },
		{2, "lpcbCacheEntryInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "FindFirstUrlCacheEntryExA",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlSearchPattern", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFilter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "GroupId", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{4, "lpFirstCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOA", 640, OUT },
		{5, "lpcbCacheEntryInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "lpGroupAttributes", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{7, "lpcbGroupAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{8, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FindFirstUrlCacheEntryExW",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlSearchPattern", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFilter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "GroupId", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{4, "lpFirstCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOW", 640, OUT },
		{5, "lpcbCacheEntryInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "lpGroupAttributes", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{7, "lpcbGroupAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{8, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FindFirstUrlCacheEntryW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlSearchPattern", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpFirstCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOW", 640, OUT },
		{2, "lpcbCacheEntryInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "FindFirstUrlCacheGroup",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFilter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpSearchCondition", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "dwSearchCondition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpGroupId", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
		{5, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "FindNextUrlCacheContainerA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEnumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpContainerInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_CONTAINER_INFOA", 160, IN },
		{2, "lpcbContainerInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FindNextUrlCacheContainerW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEnumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpContainerInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_CONTAINER_INFOW", 160, IN },
		{2, "lpcbContainerInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FindNextUrlCacheEntryA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEnumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpNextCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOA", 640, OUT },
		{2, "lpcbCacheEntryInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "FindNextUrlCacheEntryExA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEnumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpNextCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOA", 640, INOUT },
		{2, "lpcbCacheEntryInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "lpGroupAttributes", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "lpcbGroupAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FindNextUrlCacheEntryExW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEnumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpNextCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOW", 640, INOUT },
		{2, "lpcbCacheEntryInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "lpGroupAttributes", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "lpcbGroupAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FindNextUrlCacheEntryW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEnumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpNextCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOW", 640, OUT },
		{2, "lpcbCacheEntryInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "FindNextUrlCacheGroup",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFind", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpGroupId", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
		{2, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "FreeUrlCacheSpaceA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszCachePath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFilter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FreeUrlCacheSpaceW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszCachePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFilter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FtpCommandA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fExpectResponse", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpszCommand", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "phFtpCommand", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "FtpCommandW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fExpectResponse", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpszCommand", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "phFtpCommand", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "FtpCreateDirectoryA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszDirectory", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "FtpCreateDirectoryW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszDirectory", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "FtpDeleteFileA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "FtpDeleteFileW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "FtpFindFirstFileA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszSearchFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpFindFileData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WIN32_FIND_DATAA", 2560, OUT },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FtpFindFirstFileW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszSearchFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpFindFileData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WIN32_FIND_DATAW", 4736, OUT },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FtpGetCurrentDirectoryA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszCurrentDirectory", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{2, "lpdwCurrentDirectory", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "FtpGetCurrentDirectoryW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszCurrentDirectory", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "lpdwCurrentDirectory", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "FtpGetFileA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszRemoteFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszNewFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fFailIfExists", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "dwFlagsAndAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FtpGetFileEx",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFtpSession", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszRemoteFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszNewFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "fFailIfExists", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "dwFlagsAndAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FtpGetFileSize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpdwFileSizeHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "FtpGetFileW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszRemoteFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszNewFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "fFailIfExists", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "dwFlagsAndAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FtpOpenFileA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FtpOpenFileW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FtpPutFileA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszLocalFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszNewRemoteFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FtpPutFileEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFtpSession", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszLocalFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszNewRemoteFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FtpPutFileW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszLocalFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszNewRemoteFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FtpRemoveDirectoryA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszDirectory", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "FtpRemoveDirectoryW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszDirectory", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "FtpRenameFileA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszExisting", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszNew", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "FtpRenameFileW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszExisting", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszNew", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "FtpSetCurrentDirectoryA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszDirectory", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "FtpSetCurrentDirectoryW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszDirectory", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetUrlCacheConfigInfoA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpCacheConfigInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_CONFIG_INFOA", 2400, INOUT },
		{1, "lpcbCacheConfigInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "dwFieldControl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetUrlCacheConfigInfoW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpCacheConfigInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_CONFIG_INFOW", 4480, INOUT },
		{1, "lpcbCacheConfigInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "dwFieldControl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetUrlCacheEntryInfoA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOA", 640, OUT },
		{2, "lpcbCacheEntryInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetUrlCacheEntryInfoExA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOA", 640, INOUT },
		{2, "lpcbCacheEntryInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "lpszRedirectUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{4, "lpcbRedirectUrl", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetUrlCacheEntryInfoExW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOW", 640, INOUT },
		{2, "lpcbCacheEntryInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "lpszRedirectUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{4, "lpcbRedirectUrl", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetUrlCacheEntryInfoW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOW", 640, OUT },
		{2, "lpcbCacheEntryInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetUrlCacheGroupAttributeA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "gid", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpGroupInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_GROUP_INFOA", 1248, OUT },
		{4, "lpcbGroupInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "GetUrlCacheGroupAttributeW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "gid", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpGroupInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_GROUP_INFOW", 2208, OUT },
		{4, "lpcbGroupInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "GetUrlCacheHeaderData",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "nIdx", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpdwData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GopherCreateLocatorA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszHost", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "nServerPort", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "lpszDisplayString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpszSelectorString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "dwGopherType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpszLocator", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{6, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GopherCreateLocatorW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszHost", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "nServerPort", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "lpszDisplayString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpszSelectorString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "dwGopherType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpszLocator", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{6, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GopherFindFirstFileA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszLocator", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszSearchString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpFindData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GOPHER_FIND_DATAA", 6464, OUT },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GopherFindFirstFileW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszLocator", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszSearchString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpFindData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GOPHER_FIND_DATAW", 12704, OUT },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GopherGetAttributeA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszLocator", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszAttributeName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{4, "dwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpdwCharactersReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{6, "lpfnEnumerator", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{7, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GopherGetAttributeW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszLocator", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszAttributeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{4, "dwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpdwCharactersReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{6, "lpfnEnumerator", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{7, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GopherGetLocatorTypeA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszLocator", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpdwGopherType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GopherGetLocatorTypeW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszLocator", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpdwGopherType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GopherOpenFileA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszLocator", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszView", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GopherOpenFileW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszLocator", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszView", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HttpAddRequestHeadersA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hRequest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszHeaders", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwHeadersLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwModifiers", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HttpAddRequestHeadersW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hRequest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszHeaders", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwHeadersLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwModifiers", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HttpEndRequestA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hRequest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffersOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_BUFFERSA", 320, OUT },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HttpEndRequestW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hRequest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffersOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_BUFFERSW", 320, OUT },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HttpOpenRequestA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszVerb", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszObjectName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpszVersion", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "lpszReferrer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "lplpszAcceptTypes", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{6, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HttpOpenRequestW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hConnect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszVerb", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpszVersion", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "lpszReferrer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "lplpszAcceptTypes", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{6, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HttpQueryInfoA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hRequest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwInfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "lpdwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "HttpQueryInfoW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hRequest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwInfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "lpdwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "HttpSendRequestA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hRequest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszHeaders", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwHeadersLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpOptional", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "dwOptionalLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HttpSendRequestExA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hRequest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffersIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_BUFFERSA", 320, IN },
		{2, "lpBuffersOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_BUFFERSA", 320, OUT },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HttpSendRequestExW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hRequest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffersIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_BUFFERSW", 320, IN },
		{2, "lpBuffersOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_BUFFERSW", 320, OUT },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HttpSendRequestW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hRequest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszHeaders", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwHeadersLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpOptional", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "dwOptionalLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IncrementUrlCacheHeaderData",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "nIdx", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpdwData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "InternetAlgIdToStringA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ai", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpstr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpdwstrLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetAlgIdToStringW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ai", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpstr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpdwstrLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetAttemptConnect",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetAutodial",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetAutodialHangup",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetCanonicalizeUrlA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpszBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{2, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetCanonicalizeUrlW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetCheckConnectionA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetCheckConnectionW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetClearAllPerSiteCookieDecisions",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "InternetCloseHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hInternet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetCombineUrlA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszBaseUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpszRelativeUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetCombineUrlW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszBaseUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszRelativeUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{3, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetConfirmZoneCrossingA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szUrlPrev", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "szUrlNew", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "bPost", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetConfirmZoneCrossingW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szUrlPrev", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "szUrlNew", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "bPost", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetConnectA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hInternet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszServerName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "nServerPort", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "lpszUserName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "lpszPassword", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "dwService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetConnectW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hInternet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszServerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "nServerPort", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "lpszUserName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "lpszPassword", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "dwService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetCrackUrlA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwUrlLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpUrlComponents", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "URL_COMPONENTSA", 480, INOUT },
	}
	},
	{ "InternetCrackUrlW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwUrlLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpUrlComponents", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "URL_COMPONENTSW", 480, INOUT },
	}
	},
	{ "InternetCreateUrlA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpUrlComponents", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "URL_COMPONENTSA", 480, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "lpdwUrlLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InternetCreateUrlW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpUrlComponents", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "URL_COMPONENTSW", 480, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{3, "lpdwUrlLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InternetDialA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszConnectoid", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpdwConnection", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetDialW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszConnectoid", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpdwConnection", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetEnumPerSiteCookieDecisionA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszSiteName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{1, "pcSiteNameSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "pdwDecision", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetEnumPerSiteCookieDecisionW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszSiteName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{1, "pcSiteNameSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "pdwDecision", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetErrorDlg",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hRequest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{2, "dwError", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lppvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "InternetFindNextFileA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFind", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpvFindData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
	}
	},
	{ "InternetFindNextFileW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFind", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpvFindData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
	}
	},
	{ "InternetFortezzaCommand",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwCommand", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetGetConnectedState",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpdwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetGetConnectedStateExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpdwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{1, "lpszConnectionName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{2, "cchNameLen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetGetConnectedStateExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpdwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{1, "lpszConnectionName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "cchNameLen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetGetCookieA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpszCookieName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszCookieData", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "lpdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InternetGetCookieExA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpszCookieName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszCookieData", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "InternetGetCookieExW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszCookieName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszCookieData", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "InternetGetCookieW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszCookieName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszCookieData", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{3, "lpdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InternetGetLastResponseInfoA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpdwError", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{1, "lpszBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{2, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InternetGetLastResponseInfoW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpdwError", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{1, "lpszBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InternetGetPerSiteCookieDecisionA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pchHostName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "InternetGetPerSiteCookieDecisionW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pchHostName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "InternetGetSecurityInfoByURLA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszURL", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "ppCertChain", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CHAIN_CONTEXT", 448, IN },
		{2, "pdwSecureFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "InternetGetSecurityInfoByURLW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ppCertChain", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CHAIN_CONTEXT", 448, IN },
		{2, "pdwSecureFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "InternetGoOnlineA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszURL", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetGoOnlineW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetHangUp",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwConnection", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetInitializeAutoProxyDll",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetLockRequestFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hInternet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lphLockRequestInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "InternetOpenA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszAgent", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwAccessType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszProxy", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpszProxyBypass", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetOpenUrlA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hInternet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszHeaders", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwHeadersLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetOpenUrlW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hInternet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszHeaders", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwHeadersLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetOpenW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszAgent", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwAccessType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszProxy", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpszProxyBypass", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetQueryDataAvailable",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpdwNumberOfBytesAvailable", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetQueryFortezzaStatus",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pdwStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetQueryOptionA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hInternet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwOption", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InternetQueryOptionW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hInternet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwOption", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InternetReadFile",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{2, "dwNumberOfBytesToRead", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpdwNumberOfBytesRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "InternetReadFileExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffersOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_BUFFERSA", 320, OUT },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetReadFileExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffersOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_BUFFERSW", 320, OUT },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetSecurityProtocolToStringA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwProtocol", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpstr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpdwstrLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetSecurityProtocolToStringW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwProtocol", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpstr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpdwstrLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetSetCookieA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpszCookieName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszCookieData", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "InternetSetCookieExA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpszCookieName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszCookieData", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetSetCookieExW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszCookieName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszCookieData", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetSetCookieW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszCookieName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszCookieData", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "InternetSetDialStateA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszConnectoid", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwState", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetSetDialStateW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszConnectoid", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwState", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetSetFilePointer",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lDistanceToMove", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpDistanceToMoveHigh", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "dwMoveMethod", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetSetOptionA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hInternet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwOption", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "dwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetSetOptionExA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hInternet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwOption", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "dwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetSetOptionExW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hInternet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwOption", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "dwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetSetOptionW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hInternet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwOption", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "dwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetSetPerSiteCookieDecisionA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pchHostName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwDecision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetSetPerSiteCookieDecisionW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pchHostName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwDecision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetSetStatusCallbackA",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, OUT },
		{0, "hInternet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpfnInternetCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "InternetSetStatusCallbackW",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, OUT },
		{0, "hInternet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpfnInternetCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "InternetShowSecurityInfoByURLA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszURL", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetShowSecurityInfoByURLW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetTimeFromSystemTimeA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, IN },
		{1, "dwRFC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszTime", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "cbTime", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetTimeFromSystemTimeW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, IN },
		{1, "dwRFC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszTime", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{3, "cbTime", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetTimeToSystemTimeA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszTime", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, OUT },
		{2, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetTimeToSystemTimeW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszTime", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, OUT },
		{2, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetUnlockRequestFile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hLockRequestInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetWriteFile",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwNumberOfBytesToWrite", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpdwNumberOfBytesWritten", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "InternetWriteFileExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffersIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_BUFFERSA", 320, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InternetWriteFileExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffersIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_BUFFERSW", 320, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsHostInProxyBypassList",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "tScheme", NKT_DBOBJCLASS_Enumeration, "INTERNET_SCHEME", 32, IN },
		{1, "lpszHost", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchHost", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsUrlCacheEntryExpiredA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pftLastModified", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
	}
	},
	{ "IsUrlCacheEntryExpiredW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pftLastModified", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
	}
	},
	{ "LoadUrlCacheContent",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "ParseX509EncodedCertificateForListBoxEntry",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpCert", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cbCert", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszListBoxEntry", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpdwListBoxEntry", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "PrivacyGetZonePreferenceW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwZone", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdwTemplate", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "pszBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{4, "pdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PrivacySetZonePreferenceW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwZone", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwTemplate", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszPreference", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ReadUrlCacheEntryStream",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hUrlCacheStream", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwLocation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{3, "lpdwLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ReadUrlCacheEntryStreamEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hUrlCacheStream", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "qwLocation", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "lpdwLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RegisterUrlCacheNotification",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "gid", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{3, "dwOpsFilter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ResumeSuspendedDownload",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hRequest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwResultCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RetrieveUrlCacheEntryFileA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOA", 640, OUT },
		{2, "lpcbCacheEntryInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RetrieveUrlCacheEntryFileW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOW", 640, OUT },
		{2, "lpcbCacheEntryInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RetrieveUrlCacheEntryStreamA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOA", 640, OUT },
		{2, "lpcbCacheEntryInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "fRandomRead", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RetrieveUrlCacheEntryStreamW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOW", 640, OUT },
		{2, "lpcbCacheEntryInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "fRandomRead", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RunOnceUrlCache",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hinst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszCmd", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "nCmdShow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetUrlCacheConfigInfoA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpCacheConfigInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_CONFIG_INFOA", 2400, IN },
		{1, "dwFieldControl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetUrlCacheConfigInfoW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpCacheConfigInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_CONFIG_INFOW", 4480, IN },
		{1, "dwFieldControl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetUrlCacheEntryGroupA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "GroupId", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{3, "pbGroupAttributes", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "cbGroupAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SetUrlCacheEntryGroupW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "GroupId", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{3, "pbGroupAttributes", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "cbGroupAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SetUrlCacheEntryInfoA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOA", 640, IN },
		{2, "dwFieldControl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetUrlCacheEntryInfoW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpCacheEntryInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_ENTRY_INFOW", 640, IN },
		{2, "dwFieldControl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetUrlCacheGroupAttributeA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "gid", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpGroupInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_GROUP_INFOA", 1248, IN },
		{4, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "SetUrlCacheGroupAttributeW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "gid", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpGroupInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTERNET_CACHE_GROUP_INFOW", 2208, IN },
		{4, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "SetUrlCacheHeaderData",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "nIdx", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShowClientAuthCerts",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShowSecurityInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pSecurityInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "INTERNET_SECURITY_INFO", 5856, IN },
	}
	},
	{ "ShowX509EncodedCertificate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpCert", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbCert", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnlockUrlCacheEntryFileA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnlockUrlCacheEntryFileW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUrlName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnlockUrlCacheEntryStream",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hUrlCacheStream", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UpdateUrlCacheContentPath",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "szNewPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
};
unsigned WinInetarraySize = (sizeof(WinInet_info) / sizeof(WinInet_info[0]));