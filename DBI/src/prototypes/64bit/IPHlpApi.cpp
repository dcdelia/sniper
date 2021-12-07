// The following code was obtained using a slightly modified version
// of the Deviare parser from the PyREBox project. Credits:
// https://github.com/Cisco-Talos/pyrebox/blob/master/mw_monitor2/deviare_db_parser.py

#include "../pyrebox.h"

libcall_info_t IPHlpApi_info[] = {
	{ "AddIPAddress",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Address", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "IpMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "IfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "NTEContext", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "NTEInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CancelIPChangeNotify",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "notifyOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, UNK },
	}
	},
	{ "CancelMibChangeNotify2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "NotificationHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "ConvertInterfaceAliasToLuid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "InterfaceAlias", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, OUT },
	}
	},
	{ "ConvertInterfaceGuidToLuid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "InterfaceGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, OUT },
	}
	},
	{ "ConvertInterfaceIndexToLuid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "InterfaceIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, OUT },
	}
	},
	{ "ConvertInterfaceLuidToAlias",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, IN },
		{1, "InterfaceAlias", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "Length", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "ConvertInterfaceLuidToGuid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, IN },
		{1, "InterfaceGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, OUT },
	}
	},
	{ "ConvertInterfaceLuidToIndex",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, IN },
		{1, "InterfaceIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "ConvertInterfaceLuidToNameA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, IN },
		{1, "InterfaceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{2, "Length", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "ConvertInterfaceLuidToNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, IN },
		{1, "InterfaceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "Length", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "ConvertInterfaceNameToLuidA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "InterfaceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, OUT },
	}
	},
	{ "ConvertInterfaceNameToLuidW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "InterfaceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, OUT },
	}
	},
	{ "ConvertIpv4MaskToLength",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Mask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "MaskLength", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
	}
	},
	{ "ConvertLengthToIpv4Mask",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "MaskLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Mask", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CreateAnycastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_ANYCASTIPADDRESS_ROW", 384, IN },
	}
	},
	{ "CreateIpForwardEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pRoute", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARDROW", 448, IN },
	}
	},
	{ "CreateIpForwardEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARD_ROW2", 832, IN },
	}
	},
	{ "CreateIpNetEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pArpEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNETROW_LH", 192, IN },
	}
	},
	{ "CreateIpNetEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNET_ROW2", 704, IN },
	}
	},
	{ "CreateProxyArpEntry",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwIfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateSortedAddressPairs",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "SourceAddressList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr_in6", 224, IN },
		{1, "SourceAddressCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "DestinationAddressList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr_in6", 224, IN },
		{3, "DestinationAddressCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "AddressSortOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "SortedAddressPairList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_sockaddr_in6_pair", 128, OUT },
		{6, "SortedAddressPairCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CreateUnicastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UNICASTIPADDRESS_ROW", 640, IN },
	}
	},
	{ "DeleteAnycastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_ANYCASTIPADDRESS_ROW", 384, IN },
	}
	},
	{ "DeleteIPAddress",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "NTEContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeleteIpForwardEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pRoute", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARDROW", 448, IN },
	}
	},
	{ "DeleteIpForwardEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARD_ROW2", 832, IN },
	}
	},
	{ "DeleteIpNetEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pArpEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNETROW_LH", 192, IN },
	}
	},
	{ "DeleteIpNetEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNET_ROW2", 704, IN },
	}
	},
	{ "DeleteProxyArpEntry",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwIfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeleteUnicastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UNICASTIPADDRESS_ROW", 640, IN },
	}
	},
	{ "DisableMediaSense",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pHandle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
		{1, "pOverLapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, UNK },
	}
	},
	{ "EnableRouter",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pHandle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
		{1, "pOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, UNK },
	}
	},
	{ "FlushIpNetTable",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwIfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FlushIpNetTable2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "InterfaceIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FlushIpPathTable",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "FreeMibTable",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "Memory", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "GetAdapterIndex",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "AdapterName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "IfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetAdapterOrderMap",0,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IP_ADAPTER_ORDER_MAP", 64, OUT },
	}
	},
	{ "GetAdaptersAddresses",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Reserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "AdapterAddresses", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IP_ADAPTER_ADDRESSES_XP", 1472, INOUT },
		{4, "SizePointer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetAdaptersInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "AdapterInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IP_ADAPTER_INFO", 5632, UNK },
		{1, "SizePointer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetAnycastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_ANYCASTIPADDRESS_ROW", 384, INOUT },
	}
	},
	{ "GetAnycastIpAddressTable",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_ANYCASTIPADDRESS_TABLE", 448, OUT },
	}
	},
	{ "GetBestInterface",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwDestAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwBestIfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetBestInterfaceEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pDestAddr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, IN },
		{1, "pdwBestIfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetBestRoute",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwDestAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwSourceAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pBestRoute", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARDROW", 448, OUT },
	}
	},
	{ "GetBestRoute2",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, IN },
		{1, "InterfaceIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SourceAddress", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SOCKADDR_INET", 224, IN },
		{3, "DestinationAddress", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SOCKADDR_INET", 224, IN },
		{4, "AddressSortOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "BestRoute", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARD_ROW2", 832, OUT },
		{6, "BestSourceAddress", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SOCKADDR_INET", 224, OUT },
	}
	},
	{ "GetCurrentThreadCompartmentId",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetExtendedTcpTable",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pTcpTable", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{1, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "bOrder", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "ulAf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "TableClass", NKT_DBOBJCLASS_Enumeration, "_TCP_TABLE_CLASS", 32, IN },
		{5, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetExtendedUdpTable",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pUdpTable", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{1, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "bOrder", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "ulAf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "TableClass", NKT_DBOBJCLASS_Enumeration, "_UDP_TABLE_CLASS", 32, IN },
		{5, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetFriendlyIfIndex",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "IfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetIfEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pIfRow", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IFROW", 6880, INOUT },
	}
	},
	{ "GetIfEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IF_ROW2", 10816, UNK },
	}
	},
	{ "GetIfStackTable",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_IFSTACK_TABLE", 96, OUT },
	}
	},
	{ "GetIfTable",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pIfTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IFTABLE", 6912, OUT },
		{1, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "bOrder", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetIfTable2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_IF_TABLE2", 10880, OUT },
	}
	},
	{ "GetIfTable2Ex",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Level", NKT_DBOBJCLASS_Enumeration, "_MIB_IF_TABLE_LEVEL", 32, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_IF_TABLE2", 10880, OUT },
	}
	},
	{ "GetInterfaceInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pIfTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IP_INTERFACE_INFO", 2112, UNK },
		{1, "dwOutBufLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetInvertedIfStackTable",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_INVERTEDIFSTACK_TABLE", 96, OUT },
	}
	},
	{ "GetIpAddrTable",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pIpAddrTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPADDRTABLE", 224, OUT },
		{1, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "bOrder", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetIpForwardEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARD_ROW2", 832, INOUT },
	}
	},
	{ "GetIpForwardTable",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pIpForwardTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARDTABLE", 480, OUT },
		{1, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "bOrder", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetIpForwardTable2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_IPFORWARD_TABLE2", 896, OUT },
	}
	},
	{ "GetIpInterfaceEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPINTERFACE_ROW", 1344, INOUT },
	}
	},
	{ "GetIpInterfaceTable",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_IPINTERFACE_TABLE", 1408, OUT },
	}
	},
	{ "GetIpNetEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNET_ROW2", 704, INOUT },
	}
	},
	{ "GetIpNetTable",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "IpNetTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNETTABLE", 224, UNK },
		{1, "SizePointer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{2, "Order", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetIpNetTable2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_IPNET_TABLE2", 768, OUT },
	}
	},
	{ "GetIpPathEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPPATH_ROW", 1088, INOUT },
	}
	},
	{ "GetIpPathTable",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_IPPATH_TABLE", 1152, OUT },
	}
	},
	{ "GetMulticastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_MULTICASTIPADDRESS_ROW", 384, INOUT },
	}
	},
	{ "GetMulticastIpAddressTable",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_MULTICASTIPADDRESS_TABLE", 448, OUT },
	}
	},
	{ "GetNetworkInformation",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "NetworkGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, UNK },
		{1, "CompartmentId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{2, "SiteId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{3, "NetworkName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{4, "Length", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetNumberOfInterfaces",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pdwNumIf", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetOwnerModuleFromPidAndInfo",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "ulPid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pInfo", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
		{2, "Class", NKT_DBOBJCLASS_Enumeration, "_TCPIP_OWNER_MODULE_INFO_CLASS", 32, UNK },
		{3, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{4, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetOwnerModuleFromTcp6Entry",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pTcpEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCP6ROW_OWNER_MODULE", 1536, IN },
		{1, "Class", NKT_DBOBJCLASS_Enumeration, "_TCPIP_OWNER_MODULE_INFO_CLASS", 32, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{3, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetOwnerModuleFromTcpEntry",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pTcpEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCPROW_OWNER_MODULE", 1280, IN },
		{1, "Class", NKT_DBOBJCLASS_Enumeration, "_TCPIP_OWNER_MODULE_INFO_CLASS", 32, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{3, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetOwnerModuleFromUdp6Entry",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pUdpEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UDP6ROW_OWNER_MODULE", 1408, IN },
		{1, "Class", NKT_DBOBJCLASS_Enumeration, "_TCPIP_OWNER_MODULE_INFO_CLASS", 32, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{3, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetOwnerModuleFromUdpEntry",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pUdpEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UDPROW_OWNER_MODULE", 1280, IN },
		{1, "Class", NKT_DBOBJCLASS_Enumeration, "_TCPIP_OWNER_MODULE_INFO_CLASS", 32, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{3, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetPerTcp6ConnectionEStats",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCP6ROW", 416, UNK },
		{1, "EstatsType", NKT_DBOBJCLASS_Enumeration, "TCP_ESTATS_TYPE", 32, UNK },
		{2, "Rw", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "RwVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "RwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{5, "Ros", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{6, "RosVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{7, "RosSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{8, "Rod", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{9, "RodVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{10, "RodSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetPerTcpConnectionEStats",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCPROW_LH", 160, UNK },
		{1, "EstatsType", NKT_DBOBJCLASS_Enumeration, "TCP_ESTATS_TYPE", 32, UNK },
		{2, "Rw", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "RwVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "RwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{5, "Ros", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{6, "RosVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{7, "RosSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{8, "Rod", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{9, "RodVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{10, "RodSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetRTTAndHopCount",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "DestIpAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "HopCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{2, "MaxHops", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "RTT", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetSessionCompartmentId",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "SessionId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetTcpTable",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TcpTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCPTABLE", 192, UNK },
		{1, "SizePointer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{2, "Order", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetTeredoPort",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Port", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
	}
	},
	{ "GetUdp6Table",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Udp6Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UDP6TABLE", 224, OUT },
		{1, "SizePointer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "Order", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetUdpTable",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "UdpTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UDPTABLE", 96, UNK },
		{1, "SizePointer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{2, "Order", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetUnicastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UNICASTIPADDRESS_ROW", 640, INOUT },
	}
	},
	{ "GetUnicastIpAddressTable",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_UNICASTIPADDRESS_TABLE", 704, OUT },
	}
	},
	{ "GetUniDirectionalAdapterInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pIPIfInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IP_UNIDIRECTIONAL_ADAPTER_ADDRESS", 64, OUT },
		{1, "dwOutBufLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "IcmpCloseHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "IcmpHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "IcmpCreateFile",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
	}
	},
	{ "IcmpParseReplies",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "ReplyBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ReplySize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IcmpSendEcho",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "IcmpHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "DestinationAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "RequestData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "RequestSize", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{4, "RequestOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ip_option_information", 128, IN },
		{5, "ReplyBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{6, "ReplySize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "Timeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IcmpSendEcho2",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "IcmpHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "Event", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "ApcRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "ApcContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "DestinationAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "RequestData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "RequestSize", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{7, "RequestOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ip_option_information", 128, IN },
		{8, "ReplyBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{9, "ReplySize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "Timeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "if_indextoname",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "InterfaceIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "InterfaceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
	}
	},
	{ "if_nametoindex",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "InterfaceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "InitializeIpForwardEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARD_ROW2", 832, UNK },
	}
	},
	{ "InitializeIpInterfaceEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPINTERFACE_ROW", 1344, UNK },
	}
	},
	{ "InitializeUnicastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UNICASTIPADDRESS_ROW", 640, UNK },
	}
	},
	{ "IpReleaseAddress",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "AdapterInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IP_ADAPTER_INDEX_MAP", 2080, IN },
	}
	},
	{ "IpRenewAddress",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "AdapterInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IP_ADAPTER_INDEX_MAP", 2080, IN },
	}
	},
	{ "NotifyAddrChange",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Handle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
		{1, "overlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, IN },
	}
	},
	{ "NotifyIpInterfaceChange",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "CallerContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "InitialNotification", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{4, "NotificationHandle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "NotifyRouteChange",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Handle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
		{1, "overlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, IN },
	}
	},
	{ "NotifyRouteChange2",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "AddressFamily", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
		{1, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "CallerContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "InitialNotification", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{4, "NotificationHandle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "NotifyStableUnicastIpAddressTable",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_UNICASTIPADDRESS_TABLE", 704, INOUT },
		{2, "CallerCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "CallerContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "NotificationHandle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "NotifyTeredoPortChange",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "CallerContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "InitialNotification", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{3, "NotificationHandle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "NotifyUnicastIpAddressChange",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "CallerContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "InitialNotification", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{4, "NotificationHandle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "ResolveIpNetEntry2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNET_ROW2", 704, INOUT },
		{1, "SourceAddress", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SOCKADDR_INET", 224, IN },
	}
	},
	{ "RestoreMediaSense",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, UNK },
		{1, "lpdwEnableCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "SendARP",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "DestIP", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SrcIP", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pMacAddr", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "PhyAddrLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SetCurrentThreadCompartmentId",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "CompartmentId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetIfEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pIfRow", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IFROW", 6880, IN },
	}
	},
	{ "SetIpForwardEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pRoute", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARDROW", 448, IN },
	}
	},
	{ "SetIpForwardEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Route", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARD_ROW2", 832, IN },
	}
	},
	{ "SetIpInterfaceEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPINTERFACE_ROW", 1344, INOUT },
	}
	},
	{ "SetIpNetEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pArpEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNETROW_LH", 192, IN },
	}
	},
	{ "SetIpNetEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNET_ROW2", 704, INOUT },
	}
	},
	{ "SetIpTTL",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "nTTL", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetNetworkInformation",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "NetworkGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, UNK },
		{1, "CompartmentId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "NetworkName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SetPerTcp6ConnectionEStats",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCP6ROW", 416, UNK },
		{1, "EstatsType", NKT_DBOBJCLASS_Enumeration, "TCP_ESTATS_TYPE", 32, UNK },
		{2, "Rw", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{3, "RwVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "RwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{5, "Offset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetPerTcpConnectionEStats",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCPROW_LH", 160, UNK },
		{1, "EstatsType", NKT_DBOBJCLASS_Enumeration, "TCP_ESTATS_TYPE", 32, UNK },
		{2, "Rw", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{3, "RwVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "RwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{5, "Offset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetSessionCompartmentId",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "SessionId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "CompartmentId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetTcpEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pTcpRow", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCPROW_LH", 160, IN },
	}
	},
	{ "SetUnicastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UNICASTIPADDRESS_ROW", 640, IN },
	}
	},
	{ "UnenableRouter",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, UNK },
		{1, "lpdwEnableCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
};


unsigned IPHlpApiarraySize = (sizeof(IPHlpApi_info) / sizeof(IPHlpApi_info[0]));