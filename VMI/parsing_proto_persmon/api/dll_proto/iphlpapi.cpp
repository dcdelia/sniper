#include "../private.h"

apicall_t iphlpapi_apicalls[] = 
{
	{
		.name = "GetUdpStatistics", .nargs = 1, .rva = 74603, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Stats", .type = STRUCT | POINTER, .size = 160, .struct_type = MIB_UDPSTATS, .arg_dir = IN},
		}, .rets_rva = 
		{
			74701 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIpNetTable2", .nargs = 2, .rva = 90032, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Family", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Table", .type = STRUCT | POINTER_POINTER, .size = 768, .struct_type = MIB_IPNET_TABLE2, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			90051 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetPerTcpConnectionEStats", .nargs = 11, .rva = 72565, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 160, .struct_type = MIB_TCPROW_LH, .arg_dir = IN},
			{.name = "EstatsType", .type = ENUMERATION, .size = 32, .struct_type = TCP_ESTATS_TYPE, .arg_dir = IN},
			{.name = "Rw", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "RwVersion", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Ros", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "RosVersion", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RosSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Rod", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "RodVersion", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RodSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			72926 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIpErrorString", .nargs = 3, .rva = 54356, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ErrorCode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Buffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Size", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			54490 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetUnicastIpAddressEntry", .nargs = 1, .rva = 85654, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 640, .struct_type = MIB_UNICASTIPADDRESS_ROW, .arg_dir = IN},
		}, .rets_rva = 
		{
			85670 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteIpNetEntry", .nargs = 1, .rva = 59885, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pArpEntry", .type = STRUCT | POINTER, .size = 192, .struct_type = MIB_IPNETROW_LH, .arg_dir = IN},
		}, .rets_rva = 
		{
			59986 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetBestInterface", .nargs = 2, .rva = 15472, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDestAddr", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pdwBestIfIndex", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			15557 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetRTTAndHopCount", .nargs = 4, .rva = 66402, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "DestIpAddress", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HopCount", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "MaxHops", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RTT", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			66775 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IpRenewAddress", .nargs = 1, .rva = 61097, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "AdapterInfo", .type = STRUCT | POINTER, .size = 2080, .struct_type = IP_ADAPTER_INDEX_MAP, .arg_dir = IN},
		}, .rets_rva = 
		{
			61167, 61193 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIpForwardTable", .nargs = 3, .rva = 61433, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pIpForwardTable", .type = STRUCT | POINTER, .size = 480, .struct_type = MIB_IPFORWARDTABLE, .arg_dir = INOUT},
			{.name = "pdwSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "bOrder", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			62085 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RestoreMediaSense", .nargs = 2, .rva = 61376, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = IN},
			{.name = "lpdwEnableCount", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			61378 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConvertLengthToIpv4Mask", .nargs = 2, .rva = 31680, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "MaskLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Mask", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			31708 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetPerAdapterInfo", .nargs = 3, .rva = 54200, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "IfIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pPerAdapterInfo", .type = STRUCT | POINTER, .size = 416, .struct_type = IP_PER_ADAPTER_INFO_W2KSP1, .arg_dir = INOUT},
			{.name = "pOutBufLen", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			54348 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeletePersistentTcpPortReservation", .nargs = 2, .rva = 67006, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "StartPort", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfPorts", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			67034 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetUnicastIpAddressTable", .nargs = 2, .rva = 41124, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Family", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Table", .type = STRUCT | POINTER_POINTER, .size = 704, .struct_type = MIB_UNICASTIPADDRESS_TABLE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			41143 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNetworkParams", .nargs = 2, .rva = 35096, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pFixedInfo", .type = STRUCT | POINTER, .size = 4672, .struct_type = FIXED_INFO_W2KSP1, .arg_dir = INOUT},
			{.name = "pOutBufLen", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			35236 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CancelIPChangeNotify", .nargs = 1, .rva = 60805, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "notifyOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = IN},
		}, .rets_rva = 
		{
			60824 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetExtendedUdpTable", .nargs = 6, .rva = 75803, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pUdpTable", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pdwSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "bOrder", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ulAf", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TableClass", .type = ENUMERATION, .size = 32, .struct_type = UDP_TABLE_CLASS, .arg_dir = IN},
			{.name = "Reserved", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			75948 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIfTable2Ex", .nargs = 2, .rva = 92575, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Level", .type = ENUMERATION, .size = 32, .struct_type = MIB_IF_TABLE_LEVEL, .arg_dir = IN},
			{.name = "Table", .type = STRUCT | POINTER_POINTER, .size = 10880, .struct_type = MIB_IF_TABLE2, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			92615 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FreeMibTable", .nargs = 1, .rva = 15643, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "Memory", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			15671 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetOwnerModuleFromPidAndInfo", .nargs = 5, .rva = 52941, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ulPid", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pInfo", .type = UNSIGNED_QUAD_WORD | POINTER, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Class", .type = ENUMERATION, .size = 32, .struct_type = TCPIP_OWNER_MODULE_INFO_CLASS, .arg_dir = IN},
			{.name = "pBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pdwSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			53332 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetUnicastIpAddressEntry", .nargs = 1, .rva = 38787, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 640, .struct_type = MIB_UNICASTIPADDRESS_ROW, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			38803 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetIpForwardEntry", .nargs = 1, .rva = 62316, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pRoute", .type = STRUCT | POINTER, .size = 448, .struct_type = MIB_IPFORWARDROW, .arg_dir = IN},
		}, .rets_rva = 
		{
			62332 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "NotifyRouteChange", .nargs = 2, .rva = 60771, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Handle", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "overlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = IN},
		}, .rets_rva = 
		{
			60797 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IcmpSendEcho2Ex", .nargs = 12, .rva = 33852, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "IcmpHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Event", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcContext", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SourceAddress", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DestinationAddress", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestSize", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestOptions", .type = STRUCT | POINTER, .size = 64, .struct_type = IP_OPTION_INFORMATION, .arg_dir = IN},
			{.name = "ReplyBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ReplySize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Timeout", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			34316 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "NotifyTeredoPortChange", .nargs = 4, .rva = 94313, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Callback", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CallerContext", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InitialNotification", .type = UNSIGNED_BYTE, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NotificationHandle", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			94459 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateIpNetEntry2", .nargs = 1, .rva = 90083, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 704, .struct_type = MIB_IPNET_ROW2, .arg_dir = IN},
		}, .rets_rva = 
		{
			90099 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIpPathEntry", .nargs = 1, .rva = 91405, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 1088, .struct_type = MIB_IPPATH_ROW, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			91804 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IcmpCloseHandle", .nargs = 1, .rva = 33306, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "IcmpHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			33513 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetBestRoute2", .nargs = 7, .rva = 42834, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "InterfaceLuid", .type = UNION | POINTER, .size = 64, .struct_type = NET_LUID_LH, .arg_dir = IN},
			{.name = "InterfaceIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SourceAddress", .type = UNION | POINTER, .size = 224, .struct_type = SOCKADDR_INET, .arg_dir = IN},
			{.name = "DestinationAddress", .type = UNION | POINTER, .size = 224, .struct_type = SOCKADDR_INET, .arg_dir = IN},
			{.name = "AddressSortOptions", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BestRoute", .type = STRUCT | POINTER, .size = 832, .struct_type = MIB_IPFORWARD_ROW2, .arg_dir = INOUT},
			{.name = "BestSourceAddress", .type = UNION | POINTER, .size = 224, .struct_type = SOCKADDR_INET, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			43306 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTcpStatisticsEx", .nargs = 2, .rva = 67360, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Statistics", .type = STRUCT | POINTER, .size = 480, .struct_type = MIB_TCPSTATS_LH, .arg_dir = IN},
			{.name = "Family", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			67540 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConvertInterfaceLuidToGuid", .nargs = 2, .rva = 32395, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "InterfaceLuid", .type = UNION | POINTER, .size = 64, .struct_type = NET_LUID_LH, .arg_dir = IN},
			{.name = "InterfaceGuid", .type = STRUCT | POINTER, .size = 128, .struct_type = GUID, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			32472 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCurrentThreadCompartmentId", .nargs = 0, .rva = 13505, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			13551, 49782 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetMulticastIpAddressTable", .nargs = 2, .rva = 85973, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Family", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Table", .type = STRUCT | POINTER_POINTER, .size = 448, .struct_type = MIB_MULTICASTIPADDRESS_TABLE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			85992 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteIpNetEntry2", .nargs = 1, .rva = 90107, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 704, .struct_type = MIB_IPNET_ROW2, .arg_dir = IN},
		}, .rets_rva = 
		{
			90123 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnableRouter", .nargs = 2, .rva = 61233, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pHandle", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = IN},
		}, .rets_rva = 
		{
			61289 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConvertInterfaceIndexToLuid", .nargs = 2, .rva = 14491, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "InterfaceIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InterfaceLuid", .type = UNION | POINTER, .size = 64, .struct_type = NET_LUID_LH, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			14549 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetPerTcpConnectionEStats", .nargs = 6, .rva = 71780, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 160, .struct_type = MIB_TCPROW_LH, .arg_dir = IN},
			{.name = "EstatsType", .type = ENUMERATION, .size = 32, .struct_type = TCP_ESTATS_TYPE, .arg_dir = IN},
			{.name = "Rw", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RwVersion", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Offset", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			71912 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIpInterfaceTable", .nargs = 2, .rva = 93917, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Family", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Table", .type = STRUCT | POINTER_POINTER, .size = 1408, .struct_type = MIB_IPINTERFACE_TABLE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			93936 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IpReleaseAddress", .nargs = 1, .rva = 60965, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "AdapterInfo", .type = STRUCT | POINTER, .size = 2080, .struct_type = IP_ADAPTER_INDEX_MAP, .arg_dir = IN},
		}, .rets_rva = 
		{
			61035, 61061 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LookupPersistentTcpPortReservation", .nargs = 3, .rva = 67078, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "StartPort", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfPorts", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Token", .type = UNSIGNED_QUAD_WORD | POINTER, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			67107 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetAdapterOrderMap", .nargs = 0, .rva = 55155, 
		.return_type = STRUCT | POINTER, .return_size = 64, .args = 
		{
		}, .rets_rva = 
		{
			55375 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetAdaptersInfo", .nargs = 2, .rva = 37475, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "AdapterInfo", .type = STRUCT | POINTER, .size = 5184, .struct_type = IP_ADAPTER_INFO, .arg_dir = IN},
			{.name = "SizePointer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			37718 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIpPathTable", .nargs = 2, .rva = 90891, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Family", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Table", .type = STRUCT | POINTER_POINTER, .size = 1152, .struct_type = MIB_IPPATH_TABLE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			91379 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteAnycastIpAddressEntry", .nargs = 1, .rva = 85817, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 384, .struct_type = MIB_ANYCASTIPADDRESS_ROW, .arg_dir = IN},
		}, .rets_rva = 
		{
			85833 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetInterfaceInfo", .nargs = 2, .rva = 56564, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pIfTable", .type = STRUCT | POINTER, .size = 2112, .struct_type = IP_INTERFACE_INFO, .arg_dir = IN},
			{.name = "dwOutBufLen", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			56975 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetTcpEntry", .nargs = 1, .rva = 72114, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pTcpRow", .type = STRUCT | POINTER, .size = 160, .struct_type = MIB_TCPROW_LH, .arg_dir = IN},
		}, .rets_rva = 
		{
			72208 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConvertInterfaceLuidToAlias", .nargs = 3, .rva = 39130, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "InterfaceLuid", .type = UNION | POINTER, .size = 64, .struct_type = NET_LUID_LH, .arg_dir = IN},
			{.name = "InterfaceAlias", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Length", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			39291 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTcpTable", .nargs = 3, .rva = 68190, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TcpTable", .type = STRUCT | POINTER, .size = 192, .struct_type = MIB_TCPTABLE, .arg_dir = IN},
			{.name = "SizePointer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Order", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			68216 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIpForwardEntry2", .nargs = 1, .rva = 88637, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 832, .struct_type = MIB_IPFORWARD_ROW2, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			88653 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTcp6Table", .nargs = 3, .rva = 69301, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TcpTable", .type = STRUCT | POINTER, .size = 448, .struct_type = MIB_TCP6TABLE, .arg_dir = INOUT},
			{.name = "SizePointer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Order", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			69640 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FlushIpPathTable", .nargs = 1, .rva = 91812, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Family", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			91949 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetMulticastIpAddressEntry", .nargs = 1, .rva = 85949, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 384, .struct_type = MIB_MULTICASTIPADDRESS_ROW, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			85965 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteIpForwardEntry2", .nargs = 1, .rva = 88709, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 832, .struct_type = MIB_IPFORWARD_ROW2, .arg_dir = IN},
		}, .rets_rva = 
		{
			88725 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIpInterfaceEntry", .nargs = 1, .rva = 31727, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 1344, .struct_type = MIB_IPINTERFACE_ROW, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			31743 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "NotifyIpInterfaceChange", .nargs = 5, .rva = 40946, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Family", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Callback", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CallerContext", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InitialNotification", .type = UNSIGNED_BYTE, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NotificationHandle", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			41090 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FlushIpNetTable", .nargs = 1, .rva = 59994, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwIfIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			60062 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetIpTTL", .nargs = 1, .rva = 62484, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nTTL", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			62542 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFriendlyIfIndex", .nargs = 1, .rva = 55381, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "IfIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			55395 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConvertInterfaceAliasToLuid", .nargs = 2, .rva = 83379, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "InterfaceAlias", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InterfaceLuid", .type = UNION | POINTER, .size = 64, .struct_type = NET_LUID_LH, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			83691 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CancelMibChangeNotify2", .nargs = 1, .rva = 39463, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NotificationHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			39563 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConvertInterfaceGuidToLuid", .nargs = 2, .rva = 16228, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "InterfaceGuid", .type = STRUCT | POINTER, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "InterfaceLuid", .type = UNION | POINTER, .size = 64, .struct_type = NET_LUID_LH, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			16378 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetIpNetEntry", .nargs = 1, .rva = 59861, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pArpEntry", .type = STRUCT | POINTER, .size = 192, .struct_type = MIB_IPNETROW_LH, .arg_dir = IN},
		}, .rets_rva = 
		{
			59877 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "NhpAllocateAndGetInterfaceInfoFromStack", .nargs = 5, .rva = 55806, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ppTable", .type = STRUCT | POINTER_POINTER, .size = 352, .struct_type = IP_INTERFACE_NAME_INFO_W2KSP1, .arg_dir = IN},
			{.name = "pdwCount", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bOrder", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hHeap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			56188 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIpStatisticsEx", .nargs = 2, .rva = 35694, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Statistics", .type = STRUCT | POINTER, .size = 736, .struct_type = MIB_IPSTATS_LH, .arg_dir = IN},
			{.name = "Family", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			36154 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConvertInterfaceNameToLuidA", .nargs = 2, .rva = 83863, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "InterfaceName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InterfaceLuid", .type = UNION | POINTER, .size = 64, .struct_type = NET_LUID_LH, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			83979 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConvertInterfaceNameToLuidW", .nargs = 2, .rva = 20406, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "InterfaceName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InterfaceLuid", .type = UNION | POINTER, .size = 64, .struct_type = NET_LUID_LH, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			20678 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTcpTable2", .nargs = 3, .rva = 68224, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TcpTable", .type = STRUCT | POINTER, .size = 256, .struct_type = MIB_TCPTABLE2, .arg_dir = INOUT},
			{.name = "SizePointer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Order", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			68250 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetBestRoute", .nargs = 3, .rva = 60462, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDestAddr", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSourceAddr", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pBestRoute", .type = STRUCT | POINTER, .size = 448, .struct_type = MIB_IPFORWARDROW, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			60729 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LookupPersistentUdpPortReservation", .nargs = 3, .rva = 67115, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "StartPort", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfPorts", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Token", .type = UNSIGNED_QUAD_WORD | POINTER, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			67144 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetIpStatisticsEx", .nargs = 2, .rva = 62340, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Statistics", .type = STRUCT | POINTER, .size = 736, .struct_type = MIB_IPSTATS_LH, .arg_dir = IN},
			{.name = "Family", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			62476 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetAdapterIndex", .nargs = 2, .rva = 16558, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "AdapterName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IfIndex", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			16665 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "NotifyStableUnicastIpAddressTable", .nargs = 5, .rva = 87049, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Family", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Table", .type = STRUCT | POINTER_POINTER, .size = 704, .struct_type = MIB_UNICASTIPADDRESS_TABLE, .arg_dir = INOUT},
			{.name = "CallerCallback", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CallerContext", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NotificationHandle", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			87077 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetExtendedTcpTable", .nargs = 6, .rva = 72330, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pTcpTable", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pdwSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "bOrder", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ulAf", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TableClass", .type = ENUMERATION, .size = 32, .struct_type = TCP_TABLE_CLASS, .arg_dir = IN},
			{.name = "Reserved", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			72521 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "if_nametoindex", .nargs = 1, .rva = 84103, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "InterfaceName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			84158 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIcmpStatisticsEx", .nargs = 2, .rva = 59173, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Statistics", .type = STRUCT | POINTER, .size = 16512, .struct_type = MIB_ICMP_EX_XPSP1, .arg_dir = IN},
			{.name = "Family", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			59301 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateUnicastIpAddressEntry", .nargs = 1, .rva = 85606, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 640, .struct_type = MIB_UNICASTIPADDRESS_ROW, .arg_dir = IN},
		}, .rets_rva = 
		{
			85622 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetIpStatistics", .nargs = 1, .rva = 62899, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pIpStats", .type = STRUCT | POINTER, .size = 736, .struct_type = MIB_IPSTATS_LH, .arg_dir = IN},
		}, .rets_rva = 
		{
			62915 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetOwnerModuleFromUdp6Entry", .nargs = 4, .rva = 74766, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pUdpEntry", .type = STRUCT | POINTER, .size = 1408, .struct_type = MIB_UDP6ROW_OWNER_MODULE, .arg_dir = IN},
			{.name = "Class", .type = ENUMERATION, .size = 32, .struct_type = TCPIP_OWNER_MODULE_INFO_CLASS, .arg_dir = IN},
			{.name = "pBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pdwSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			74815 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FlushIpNetTable2", .nargs = 2, .rva = 89715, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Family", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InterfaceIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			89850 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNetworkInformation", .nargs = 5, .rva = 92008, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NetworkGuid", .type = STRUCT | POINTER, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "CompartmentId", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SiteId", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NetworkName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Length", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			92172 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetBestInterfaceEx", .nargs = 2, .rva = 16193, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pDestAddr", .type = STRUCT | POINTER, .size = 128, .struct_type = SOCKADDR, .arg_dir = IN},
			{.name = "pdwBestIfIndex", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			16212 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConvertIpv4MaskToLength", .nargs = 2, .rva = 82953, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Mask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MaskLength", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			82985 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IcmpParseReplies", .nargs = 2, .rva = 34344, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ReplyBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReplySize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			34385 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ResolveNeighbor", .nargs = 3, .rva = 60070, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NetworkAddress", .type = STRUCT | POINTER, .size = 128, .struct_type = SOCKADDR, .arg_dir = IN},
			{.name = "PhysicalAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "PhysicalAddressLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			60073 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIpNetTable", .nargs = 3, .rva = 58666, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "IpNetTable", .type = STRUCT | POINTER, .size = 224, .struct_type = MIB_IPNETTABLE, .arg_dir = IN},
			{.name = "SizePointer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Order", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			59053 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InitializeUnicastIpAddressEntry", .nargs = 1, .rva = 87085, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 640, .struct_type = MIB_UNICASTIPADDRESS_ROW, .arg_dir = IN},
		}, .rets_rva = 
		{
			87134 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreatePersistentTcpPortReservation", .nargs = 3, .rva = 66932, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "StartPort", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfPorts", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Token", .type = UNSIGNED_QUAD_WORD | POINTER, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			66961 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIfTable2", .nargs = 1, .rva = 17679, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Table", .type = STRUCT | POINTER_POINTER, .size = 10880, .struct_type = MIB_IF_TABLE2, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			17697 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetOwnerModuleFromUdpEntry", .nargs = 4, .rva = 74709, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pUdpEntry", .type = STRUCT | POINTER, .size = 1280, .struct_type = MIB_UDPROW_OWNER_MODULE, .arg_dir = IN},
			{.name = "Class", .type = ENUMERATION, .size = 32, .struct_type = TCPIP_OWNER_MODULE_INFO_CLASS, .arg_dir = IN},
			{.name = "pBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pdwSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			74758 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IcmpCreateFile", .nargs = 0, .rva = 34406, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			34565 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIcmpStatistics", .nargs = 1, .rva = 59405, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Statistics", .type = STRUCT | POINTER, .size = 832, .struct_type = MIB_ICMP, .arg_dir = IN},
		}, .rets_rva = 
		{
			59471 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetIpForwardEntry2", .nargs = 1, .rva = 88661, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Route", .type = STRUCT | POINTER, .size = 832, .struct_type = MIB_IPFORWARD_ROW2, .arg_dir = IN},
		}, .rets_rva = 
		{
			88677 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetSessionCompartmentId", .nargs = 2, .rva = 91957, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "SessionId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CompartmentId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			92000 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteProxyArpEntry", .nargs = 3, .rva = 60216, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwAddress", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwIfIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			60238 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetAnycastIpAddressEntry", .nargs = 1, .rva = 85841, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 384, .struct_type = MIB_ANYCASTIPADDRESS_ROW, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			85857 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IcmpSendEcho2", .nargs = 11, .rva = 34619, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "IcmpHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Event", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcContext", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DestinationAddress", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestSize", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestOptions", .type = STRUCT | POINTER, .size = 64, .struct_type = IP_OPTION_INFORMATION, .arg_dir = IN},
			{.name = "ReplyBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ReplySize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Timeout", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			34665 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetInvertedIfStackTable", .nargs = 1, .rva = 94242, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Table", .type = STRUCT | POINTER_POINTER, .size = 96, .struct_type = MIB_INVERTEDIFSTACK_TABLE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			94258 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIpForwardTable2", .nargs = 2, .rva = 19774, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Family", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Table", .type = STRUCT | POINTER_POINTER, .size = 896, .struct_type = MIB_IPFORWARD_TABLE2, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			19793 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "if_indextoname", .nargs = 2, .rva = 84166, 
		.return_type = ANSI_CHAR | POINTER, .return_size = 1, .args = 
		{
			{.name = "InterfaceIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InterfaceName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			84220 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIpNetEntry2", .nargs = 1, .rva = 19960, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 704, .struct_type = MIB_IPNET_ROW2, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			19976 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConvertInterfaceLuidToNameA", .nargs = 3, .rva = 83987, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "InterfaceLuid", .type = UNION | POINTER, .size = 64, .struct_type = NET_LUID_LH, .arg_dir = IN},
			{.name = "InterfaceName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Length", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			84095 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConvertInterfaceLuidToNameW", .nargs = 3, .rva = 20909, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "InterfaceLuid", .type = UNION | POINTER, .size = 64, .struct_type = NET_LUID_LH, .arg_dir = IN},
			{.name = "InterfaceName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Length", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			21038 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTcpStatistics", .nargs = 1, .rva = 72090, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Statistics", .type = STRUCT | POINTER, .size = 480, .struct_type = MIB_TCPSTATS_LH, .arg_dir = IN},
		}, .rets_rva = 
		{
			72106 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetPerTcp6ConnectionEStats", .nargs = 6, .rva = 71920, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 416, .struct_type = MIB_TCP6ROW, .arg_dir = IN},
			{.name = "EstatsType", .type = ENUMERATION, .size = 32, .struct_type = TCP_ESTATS_TYPE, .arg_dir = IN},
			{.name = "Rw", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RwVersion", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Offset", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			72082 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetUdpStatisticsEx", .nargs = 2, .rva = 74481, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Statistics", .type = STRUCT | POINTER, .size = 160, .struct_type = MIB_UDPSTATS, .arg_dir = IN},
			{.name = "Family", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			74595 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIpAddrTable", .nargs = 3, .rva = 39856, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pIpAddrTable", .type = STRUCT | POINTER, .size = 224, .struct_type = MIB_IPADDRTABLE, .arg_dir = INOUT},
			{.name = "pdwSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "bOrder", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			40236 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTcp6Table2", .nargs = 3, .rva = 68326, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TcpTable", .type = STRUCT | POINTER, .size = 512, .struct_type = MIB_TCP6TABLE2, .arg_dir = INOUT},
			{.name = "SizePointer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Order", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			68728 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSessionCompartmentId", .nargs = 1, .rva = 13711, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "SessionId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			13755 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Icmp6CreateFile", .nargs = 0, .rva = 44221, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			44384 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ResolveIpNetEntry2", .nargs = 2, .rva = 39571, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 704, .struct_type = MIB_IPNET_ROW2, .arg_dir = INOUT},
			{.name = "SourceAddress", .type = UNION | POINTER, .size = 224, .struct_type = SOCKADDR_INET, .arg_dir = IN},
		}, .rets_rva = 
		{
			39848 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetAdaptersAddresses", .nargs = 5, .rva = 27213, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Family", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Reserved", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AdapterAddresses", .type = STRUCT | POINTER, .size = 3008, .struct_type = IP_ADAPTER_ADDRESSES_LH, .arg_dir = INOUT},
			{.name = "SizePointer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			27912 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SendARP", .nargs = 4, .rva = 62550, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "DestIP", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SrcIP", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pMacAddr", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "PhyAddrLen", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			62748 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIfTable", .nargs = 3, .rva = 44692, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pIfTable", .type = STRUCT | POINTER, .size = 6912, .struct_type = MIB_IFTABLE, .arg_dir = INOUT},
			{.name = "pdwSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "bOrder", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			45005 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateProxyArpEntry", .nargs = 3, .rva = 60186, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwAddress", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwIfIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			60208 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateIpForwardEntry", .nargs = 1, .rva = 62292, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pRoute", .type = STRUCT | POINTER, .size = 448, .struct_type = MIB_IPFORWARDROW, .arg_dir = IN},
		}, .rets_rva = 
		{
			62308 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetIpNetEntry2", .nargs = 1, .rva = 90059, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 704, .struct_type = MIB_IPNET_ROW2, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			90075 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateIpNetEntry", .nargs = 1, .rva = 59837, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pArpEntry", .type = STRUCT | POINTER, .size = 192, .struct_type = MIB_IPNETROW_LH, .arg_dir = IN},
		}, .rets_rva = 
		{
			59853 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteUnicastIpAddressEntry", .nargs = 1, .rva = 85630, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 640, .struct_type = MIB_UNICASTIPADDRESS_ROW, .arg_dir = IN},
		}, .rets_rva = 
		{
			85646 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetAnycastIpAddressTable", .nargs = 2, .rva = 85865, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Family", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Table", .type = STRUCT | POINTER_POINTER, .size = 448, .struct_type = MIB_ANYCASTIPADDRESS_TABLE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			85884 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetPerTcp6ConnectionEStats", .nargs = 11, .rva = 72934, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 416, .struct_type = MIB_TCP6ROW, .arg_dir = IN},
			{.name = "EstatsType", .type = ENUMERATION, .size = 32, .struct_type = TCP_ESTATS_TYPE, .arg_dir = IN},
			{.name = "Rw", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "RwVersion", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Ros", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "RosVersion", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RosSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Rod", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "RodVersion", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RodSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			73315 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InitializeIpForwardEntry", .nargs = 1, .rva = 41151, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 832, .struct_type = MIB_IPFORWARD_ROW2, .arg_dir = IN},
		}, .rets_rva = 
		{
			41210 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTeredoPort", .nargs = 1, .rva = 94485, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Port", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			94571 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteIPAddress", .nargs = 1, .rva = 60832, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NTEContext", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			60957 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIfEntry", .nargs = 1, .rva = 15305, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pIfRow", .type = STRUCT | POINTER, .size = 6880, .struct_type = MIB_IFROW, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			15464 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetOwnerModuleFromTcp6Entry", .nargs = 4, .rva = 72273, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pTcpEntry", .type = STRUCT | POINTER, .size = 1536, .struct_type = MIB_TCP6ROW_OWNER_MODULE, .arg_dir = IN},
			{.name = "Class", .type = ENUMERATION, .size = 32, .struct_type = TCPIP_OWNER_MODULE_INFO_CLASS, .arg_dir = IN},
			{.name = "pBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pdwSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			72322 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "NotifyRouteChange2", .nargs = 5, .rva = 41361, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "AddressFamily", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Callback", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CallerContext", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InitialNotification", .type = UNSIGNED_BYTE, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NotificationHandle", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			41514 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIpStatistics", .nargs = 1, .rva = 35670, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Statistics", .type = STRUCT | POINTER, .size = 736, .struct_type = MIB_IPSTATS_LH, .arg_dir = IN},
		}, .rets_rva = 
		{
			35686 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConvertInterfaceLuidToIndex", .nargs = 2, .rva = 16107, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "InterfaceLuid", .type = UNION | POINTER, .size = 64, .struct_type = NET_LUID_LH, .arg_dir = IN},
			{.name = "InterfaceIndex", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			16185 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DisableMediaSense", .nargs = 2, .rva = 61376, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pHandle", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pOverLapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = IN},
		}, .rets_rva = 
		{
			61378 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "NotifyUnicastIpAddressChange", .nargs = 5, .rva = 32703, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Family", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Callback", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CallerContext", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InitialNotification", .type = UNSIGNED_BYTE, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NotificationHandle", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			32731 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetNetworkInformation", .nargs = 3, .rva = 92180, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NetworkGuid", .type = STRUCT | POINTER, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "CompartmentId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NetworkName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			92376 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIfEntry2", .nargs = 1, .rva = 18859, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 10816, .struct_type = MIB_IF_ROW2, .arg_dir = IN},
		}, .rets_rva = 
		{
			18875 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetOwnerModuleFromTcpEntry", .nargs = 4, .rva = 72216, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pTcpEntry", .type = STRUCT | POINTER, .size = 1280, .struct_type = MIB_TCPROW_OWNER_MODULE, .arg_dir = IN},
			{.name = "Class", .type = ENUMERATION, .size = 32, .struct_type = TCPIP_OWNER_MODULE_INFO_CLASS, .arg_dir = IN},
			{.name = "pBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pdwSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			72265 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateIpForwardEntry2", .nargs = 1, .rva = 88685, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 832, .struct_type = MIB_IPFORWARD_ROW2, .arg_dir = IN},
		}, .rets_rva = 
		{
			88701 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetUniDirectionalAdapterInfo", .nargs = 2, .rva = 60246, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pIPIfInfo", .type = STRUCT | POINTER, .size = 64, .struct_type = IP_UNIDIRECTIONAL_ADAPTER_ADDRESS, .arg_dir = INOUT},
			{.name = "dwOutBufLen", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			60454 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Icmp6SendEcho2", .nargs = 12, .rva = 43607, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "IcmpHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Event", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcContext", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SourceAddress", .type = STRUCT | POINTER, .size = 224, .struct_type = SOCKADDR_IN6, .arg_dir = IN},
			{.name = "DestinationAddress", .type = STRUCT | POINTER, .size = 224, .struct_type = SOCKADDR_IN6, .arg_dir = IN},
			{.name = "RequestData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestSize", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestOptions", .type = STRUCT | POINTER, .size = 64, .struct_type = IP_OPTION_INFORMATION, .arg_dir = IN},
			{.name = "ReplyBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ReplySize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Timeout", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			44149 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreatePersistentUdpPortReservation", .nargs = 3, .rva = 66969, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "StartPort", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfPorts", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Token", .type = UNSIGNED_QUAD_WORD | POINTER, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			66998 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetIfStackTable", .nargs = 1, .rva = 94218, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Table", .type = STRUCT | POINTER_POINTER, .size = 96, .struct_type = MIB_IFSTACK_TABLE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			94234 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateAnycastIpAddressEntry", .nargs = 1, .rva = 85793, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 384, .struct_type = MIB_ANYCASTIPADDRESS_ROW, .arg_dir = IN},
		}, .rets_rva = 
		{
			85809 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteIpForwardEntry", .nargs = 1, .rva = 59479, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pRoute", .type = STRUCT | POINTER, .size = 448, .struct_type = MIB_IPFORWARDROW, .arg_dir = IN},
		}, .rets_rva = 
		{
			59603 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Icmp6ParseReplies", .nargs = 2, .rva = 44173, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ReplyBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReplySize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			44206 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetIpInterfaceEntry", .nargs = 1, .rva = 93944, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 1344, .struct_type = MIB_IPINTERFACE_ROW, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			93960 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InitializeIpInterfaceEntry", .nargs = 1, .rva = 93968, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "Row", .type = STRUCT | POINTER, .size = 1344, .struct_type = MIB_IPINTERFACE_ROW, .arg_dir = IN},
		}, .rets_rva = 
		{
			94027 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetUdp6Table", .nargs = 3, .rva = 74823, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Udp6Table", .type = STRUCT | POINTER, .size = 224, .struct_type = MIB_UDP6TABLE, .arg_dir = INOUT},
			{.name = "SizePointer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Order", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			75105 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IcmpSendEcho", .nargs = 8, .rva = 34571, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "IcmpHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DestinationAddress", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestSize", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestOptions", .type = STRUCT | POINTER, .size = 64, .struct_type = IP_OPTION_INFORMATION, .arg_dir = IN},
			{.name = "ReplyBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ReplySize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Timeout", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			34611 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetIfEntry", .nargs = 1, .rva = 55050, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pIfRow", .type = STRUCT | POINTER, .size = 6880, .struct_type = MIB_IFROW, .arg_dir = IN},
		}, .rets_rva = 
		{
			55125 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateSortedAddressPairs", .nargs = 7, .rva = 90131, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "SourceAddressList", .type = STRUCT | POINTER, .size = 224, .struct_type = SOCKADDR_IN6, .arg_dir = IN},
			{.name = "SourceAddressCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DestinationAddressList", .type = STRUCT | POINTER, .size = 224, .struct_type = SOCKADDR_IN6, .arg_dir = IN},
			{.name = "DestinationAddressCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AddressSortOptions", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SortedAddressPairList", .type = STRUCT | POINTER_POINTER, .size = 64, .struct_type = SOCKADDR_IN6_PAIR, .arg_dir = INOUT},
			{.name = "SortedAddressPairCount", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			90643 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNumberOfInterfaces", .nargs = 1, .rva = 54972, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pdwNumIf", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			55042 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "NotifyAddrChange", .nargs = 2, .rva = 60737, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Handle", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "overlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = IN},
		}, .rets_rva = 
		{
			60763 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "UnenableRouter", .nargs = 2, .rva = 61297, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = IN},
			{.name = "lpdwEnableCount", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			61368 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetCurrentThreadCompartmentId", .nargs = 1, .rva = 31492, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "CompartmentId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			31529 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AddIPAddress", .nargs = 5, .rva = 62756, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Address", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IpMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IfIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NTEContext", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "NTEInstance", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			62891 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetUdpTable", .nargs = 3, .rva = 73961, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "UdpTable", .type = STRUCT | POINTER, .size = 96, .struct_type = MIB_UDPTABLE, .arg_dir = IN},
			{.name = "SizePointer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Order", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			73985 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeletePersistentUdpPortReservation", .nargs = 2, .rva = 67042, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "StartPort", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfPorts", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			67070 
		}, .jump_in = UNDEFINED
	},
};

int iphlpapi_apicalls_size = (sizeof(iphlpapi_apicalls) / sizeof(iphlpapi_apicalls[0]));