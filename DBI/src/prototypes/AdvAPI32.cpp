// The following code was obtained using a slightly modified version
// of the Deviare parser from the PyREBox project. Credits:
// https://github.com/Cisco-Talos/pyrebox/blob/master/mw_monitor2/deviare_db_parser.py

#include "pyrebox.h"

libcall_info_t AdvAPI32_info[] = {
	{ "AbortSystemShutdownA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpMachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "AbortSystemShutdownW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "AccessCheck",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ClientToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
		{4, "PrivilegeSet", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PRIVILEGE_SET", 160, OUT },
		{5, "PrivilegeSetLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "GrantedAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{7, "AccessStatus", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AccessCheckAndAuditAlarmA",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ObjectTypeName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "ObjectName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
		{7, "ObjectCreation", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "GrantedAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{9, "AccessStatus", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{10, "pfGenerateOnClose", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AccessCheckAndAuditAlarmW",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ObjectTypeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "ObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
		{7, "ObjectCreation", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "GrantedAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{9, "AccessStatus", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{10, "pfGenerateOnClose", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AccessCheckByType",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "PrincipalSelfSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ClientToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ObjectTypeList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_TYPE_LIST", 64, INOUT },
		{5, "ObjectTypeListLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, OUT },
		{7, "PrivilegeSet", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PRIVILEGE_SET", 160, OUT },
		{8, "PrivilegeSetLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "GrantedAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{10, "AccessStatus", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AccessCheckByTypeAndAuditAlarmA",16,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ObjectTypeName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "ObjectName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "PrincipalSelfSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "AuditType", NKT_DBOBJCLASS_Enumeration, "_AUDIT_EVENT_TYPE", 32, IN },
		{8, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "ObjectTypeList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_TYPE_LIST", 64, INOUT },
		{10, "ObjectTypeListLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{11, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
		{12, "ObjectCreation", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{13, "GrantedAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{14, "AccessStatus", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{15, "pfGenerateOnClose", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AccessCheckByTypeAndAuditAlarmW",16,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ObjectTypeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "ObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "PrincipalSelfSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "AuditType", NKT_DBOBJCLASS_Enumeration, "_AUDIT_EVENT_TYPE", 32, IN },
		{8, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "ObjectTypeList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_TYPE_LIST", 64, INOUT },
		{10, "ObjectTypeListLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{11, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
		{12, "ObjectCreation", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{13, "GrantedAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{14, "AccessStatus", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{15, "pfGenerateOnClose", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AccessCheckByTypeResultList",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "PrincipalSelfSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ClientToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ObjectTypeList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_TYPE_LIST", 64, INOUT },
		{5, "ObjectTypeListLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, OUT },
		{7, "PrivilegeSet", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PRIVILEGE_SET", 160, OUT },
		{8, "PrivilegeSetLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "GrantedAccessList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{10, "AccessStatusList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AccessCheckByTypeResultListAndAuditAlarmA",16,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ObjectTypeName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "ObjectName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "PrincipalSelfSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "AuditType", NKT_DBOBJCLASS_Enumeration, "_AUDIT_EVENT_TYPE", 32, IN },
		{8, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "ObjectTypeList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_TYPE_LIST", 64, INOUT },
		{10, "ObjectTypeListLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{11, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
		{12, "ObjectCreation", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{13, "GrantedAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{14, "AccessStatusList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{15, "pfGenerateOnClose", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AccessCheckByTypeResultListAndAuditAlarmByHandleA",17,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ClientToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ObjectTypeName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "ObjectName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "PrincipalSelfSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "AuditType", NKT_DBOBJCLASS_Enumeration, "_AUDIT_EVENT_TYPE", 32, IN },
		{9, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "ObjectTypeList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_TYPE_LIST", 64, INOUT },
		{11, "ObjectTypeListLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{12, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
		{13, "ObjectCreation", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{14, "GrantedAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{15, "AccessStatusList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{16, "pfGenerateOnClose", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AccessCheckByTypeResultListAndAuditAlarmByHandleW",17,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ClientToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ObjectTypeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "ObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "PrincipalSelfSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "AuditType", NKT_DBOBJCLASS_Enumeration, "_AUDIT_EVENT_TYPE", 32, IN },
		{9, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "ObjectTypeList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_TYPE_LIST", 64, INOUT },
		{11, "ObjectTypeListLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{12, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
		{13, "ObjectCreation", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{14, "GrantedAccessList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{15, "AccessStatusList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{16, "pfGenerateOnClose", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AccessCheckByTypeResultListAndAuditAlarmW",16,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ObjectTypeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "ObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "PrincipalSelfSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "AuditType", NKT_DBOBJCLASS_Enumeration, "_AUDIT_EVENT_TYPE", 32, IN },
		{8, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "ObjectTypeList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_TYPE_LIST", 64, INOUT },
		{10, "ObjectTypeListLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{11, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
		{12, "ObjectCreation", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{13, "GrantedAccessList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{14, "AccessStatusList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{15, "pfGenerateOnClose", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AddAccessAllowedAce",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, INOUT },
		{1, "dwAceRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "AccessMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "AddAccessAllowedAceEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, INOUT },
		{1, "dwAceRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "AceFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "AccessMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "AddAccessAllowedObjectAce",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, INOUT },
		{1, "dwAceRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "AceFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "AccessMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ObjectTypeGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{5, "InheritedObjectTypeGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{6, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "AddAccessDeniedAce",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, INOUT },
		{1, "dwAceRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "AccessMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "AddAccessDeniedAceEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, INOUT },
		{1, "dwAceRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "AceFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "AccessMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "AddAccessDeniedObjectAce",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, INOUT },
		{1, "dwAceRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "AceFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "AccessMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ObjectTypeGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{5, "InheritedObjectTypeGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{6, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "AddAce",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, INOUT },
		{1, "dwAceRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwStartingAceIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pAceList", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "nAceListLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AddAuditAccessAce",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, INOUT },
		{1, "dwAceRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwAccessMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "bAuditSuccess", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "bAuditFailure", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AddAuditAccessAceEx",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, INOUT },
		{1, "dwAceRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "AceFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwAccessMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "bAuditSuccess", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "bAuditFailure", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AddAuditAccessObjectAce",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, INOUT },
		{1, "dwAceRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "AceFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "AccessMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ObjectTypeGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{5, "InheritedObjectTypeGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{6, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "bAuditSuccess", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "bAuditFailure", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AddConditionalAce",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, INOUT },
		{1, "dwAceRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "AceFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "AceType", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{4, "AccessMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "ConditionStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{7, "ReturnLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AddMandatoryAce",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, INOUT },
		{1, "dwAceRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "AceFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "MandatoryPolicy", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pLabelSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "AddUsersToEncryptedFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pEncryptionCertificates", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ENCRYPTION_CERTIFICATE_LIST", 64, IN },
	}
	},
	{ "AdjustTokenGroups",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TokenHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ResetToDefault", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "NewState", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TOKEN_GROUPS", 96, IN },
		{3, "BufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "PreviousState", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TOKEN_GROUPS", 96, OUT },
		{5, "ReturnLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AdjustTokenPrivileges",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TokenHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DisableAllPrivileges", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "NewState", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TOKEN_PRIVILEGES", 128, IN },
		{3, "BufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "PreviousState", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TOKEN_PRIVILEGES", 128, OUT },
		{5, "ReturnLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AllocateAndInitializeSid",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pIdentifierAuthority", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID_IDENTIFIER_AUTHORITY", 48, IN },
		{1, "nSubAuthorityCount", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "nSubAuthority0", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "nSubAuthority1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "nSubAuthority2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "nSubAuthority3", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "nSubAuthority4", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "nSubAuthority5", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "nSubAuthority6", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "nSubAuthority7", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "AllocateLocallyUniqueId",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Luid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_LUID", 64, OUT },
	}
	},
	{ "AreAllAccessesGranted",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "GrantedAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AreAnyAccessesGranted",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "GrantedAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AuditComputeEffectivePolicyBySid",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pSubCategoryGuids", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "dwPolicyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppAuditPolicy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_AUDIT_POLICY_INFORMATION", 288, OUT },
	}
	},
	{ "AuditComputeEffectivePolicyByToken",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "hTokenHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pSubCategoryGuids", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "dwPolicyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppAuditPolicy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_AUDIT_POLICY_INFORMATION", 288, OUT },
	}
	},
	{ "AuditEnumerateCategories",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "ppAuditCategoriesArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_GUID", 128, OUT },
		{1, "pdwCountReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "AuditEnumeratePerUserPolicy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "ppAuditSidArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_POLICY_AUDIT_SID_ARRAY", 64, OUT },
	}
	},
	{ "AuditEnumerateSubCategories",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "pAuditCategoryGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "bRetrieveAllSubCategories", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "ppAuditSubCategoriesArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_GUID", 128, OUT },
		{3, "pdwCountReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "AuditFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "AuditLookupCategoryGuidFromCategoryId",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "AuditCategoryId", NKT_DBOBJCLASS_Enumeration, "_POLICY_AUDIT_EVENT_TYPE", 32, IN },
		{1, "pAuditCategoryGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, OUT },
	}
	},
	{ "AuditLookupCategoryIdFromCategoryGuid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "pAuditCategoryGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "pAuditCategoryId", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_POLICY_AUDIT_EVENT_TYPE", 32, OUT },
	}
	},
	{ "AuditLookupCategoryNameA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "pAuditCategoryGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "ppszCategoryName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, OUT },
	}
	},
	{ "AuditLookupCategoryNameW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "pAuditCategoryGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "ppszCategoryName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
	}
	},
	{ "AuditLookupSubCategoryNameA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "pAuditSubCategoryGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "ppszSubCategoryName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, OUT },
	}
	},
	{ "AuditLookupSubCategoryNameW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "pAuditSubCategoryGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "ppszSubCategoryName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
	}
	},
	{ "AuditQueryGlobalSaclA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "ObjectTypeName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Acl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
	}
	},
	{ "AuditQueryGlobalSaclW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "ObjectTypeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Acl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
	}
	},
	{ "AuditQueryPerUserPolicy",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pSubCategoryGuids", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "dwPolicyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppAuditPolicy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_AUDIT_POLICY_INFORMATION", 288, OUT },
	}
	},
	{ "AuditQuerySecurity",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "AuditQuerySystemPolicy",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "pSubCategoryGuids", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "dwPolicyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppAuditPolicy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_AUDIT_POLICY_INFORMATION", 288, OUT },
	}
	},
	{ "AuditSetGlobalSaclA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "ObjectTypeName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Acl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "AuditSetGlobalSaclW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "ObjectTypeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Acl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "AuditSetPerUserPolicy",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pAuditPolicy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AUDIT_POLICY_INFORMATION", 288, IN },
		{2, "dwPolicyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AuditSetSecurity",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "AuditSetSystemPolicy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "pAuditPolicy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AUDIT_POLICY_INFORMATION", 288, IN },
		{1, "dwPolicyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BackupEventLogA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEventLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBackupFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "BackupEventLogW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEventLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBackupFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "BuildExplicitAccessWithNameA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pExplicitAccess", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EXPLICIT_ACCESS_A", 256, INOUT },
		{1, "pTrusteeName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "AccessPermissions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "AccessMode", NKT_DBOBJCLASS_Enumeration, "_ACCESS_MODE", 32, IN },
		{4, "Inheritance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BuildExplicitAccessWithNameW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pExplicitAccess", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EXPLICIT_ACCESS_W", 256, INOUT },
		{1, "pTrusteeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "AccessPermissions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "AccessMode", NKT_DBOBJCLASS_Enumeration, "_ACCESS_MODE", 32, IN },
		{4, "Inheritance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BuildImpersonateExplicitAccessWithNameA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pExplicitAccess", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EXPLICIT_ACCESS_A", 256, IN },
		{1, "pTrusteeName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_A", 160, IN },
		{3, "AccessPermissions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "AccessMode", NKT_DBOBJCLASS_Enumeration, "_ACCESS_MODE", 32, IN },
		{5, "Inheritance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BuildImpersonateExplicitAccessWithNameW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pExplicitAccess", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EXPLICIT_ACCESS_W", 256, IN },
		{1, "pTrusteeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_W", 160, IN },
		{3, "AccessPermissions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "AccessMode", NKT_DBOBJCLASS_Enumeration, "_ACCESS_MODE", 32, IN },
		{5, "Inheritance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BuildImpersonateTrusteeA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_A", 160, IN },
		{1, "pImpersonateTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_A", 160, IN },
	}
	},
	{ "BuildImpersonateTrusteeW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_W", 160, IN },
		{1, "pImpersonateTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_W", 160, IN },
	}
	},
	{ "BuildSecurityDescriptorA",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_A", 160, IN },
		{1, "pGroup", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_A", 160, IN },
		{2, "cCountOfAccessEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pListOfAccessEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EXPLICIT_ACCESS_A", 256, IN },
		{4, "cCountOfAuditEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pListOfAuditEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EXPLICIT_ACCESS_A", 256, IN },
		{6, "pOldSD", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "pSizeNewSD", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{8, "pNewSD", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "BuildSecurityDescriptorW",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_W", 160, IN },
		{1, "pGroup", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_W", 160, IN },
		{2, "cCountOfAccessEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pListOfAccessEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EXPLICIT_ACCESS_W", 256, IN },
		{4, "cCountOfAuditEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pListOfAuditEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EXPLICIT_ACCESS_W", 256, IN },
		{6, "pOldSD", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "pSizeNewSD", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{8, "pNewSD", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "BuildTrusteeWithNameA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_A", 160, IN },
		{1, "pName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "BuildTrusteeWithNameW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_W", 160, IN },
		{1, "pName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "BuildTrusteeWithObjectsAndNameA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_A", 160, IN },
		{1, "pObjName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECTS_AND_NAME_A", 160, IN },
		{2, "ObjectType", NKT_DBOBJCLASS_Enumeration, "_SE_OBJECT_TYPE", 32, IN },
		{3, "ObjectTypeName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "InheritedObjectTypeName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "Name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "BuildTrusteeWithObjectsAndNameW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_W", 160, IN },
		{1, "pObjName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECTS_AND_NAME_W", 160, IN },
		{2, "ObjectType", NKT_DBOBJCLASS_Enumeration, "_SE_OBJECT_TYPE", 32, IN },
		{3, "ObjectTypeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "InheritedObjectTypeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "Name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "BuildTrusteeWithObjectsAndSidA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_A", 160, IN },
		{1, "pObjSid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECTS_AND_SID", 320, IN },
		{2, "pObjectGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{3, "pInheritedObjectGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "BuildTrusteeWithObjectsAndSidW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_W", 160, IN },
		{1, "pObjSid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECTS_AND_SID", 320, IN },
		{2, "pObjectGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{3, "pInheritedObjectGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "BuildTrusteeWithSidA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_A", 160, INOUT },
		{1, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "BuildTrusteeWithSidW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_W", 160, INOUT },
		{1, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "ChangeServiceConfig2A",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwInfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "ChangeServiceConfig2W",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwInfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "ChangeServiceConfigA",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwServiceType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwStartType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwErrorControl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpBinaryPathName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "lpLoadOrderGroup", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "lpdwTagId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{7, "lpDependencies", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{8, "lpServiceStartName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{9, "lpPassword", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{10, "lpDisplayName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ChangeServiceConfigW",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwServiceType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwStartType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwErrorControl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpBinaryPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "lpLoadOrderGroup", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "lpdwTagId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{7, "lpDependencies", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{8, "lpServiceStartName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{9, "lpPassword", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{10, "lpDisplayName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CheckTokenMembership",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TokenHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SidToCheck", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "IsMember", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "ClearEventLogA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEventLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBackupFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ClearEventLogW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEventLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBackupFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CloseEncryptedFileRaw",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CloseEventLog",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEventLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CloseServiceHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hSCObject", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CloseThreadWaitChainSession",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "WctHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CloseTrace",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "CommandLineFromMsiDescriptor",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Descriptor", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "CommandLine", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "CommandLineLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "ControlService",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwControl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpServiceStatus", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SERVICE_STATUS", 224, OUT },
	}
	},
	{ "ControlServiceExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwControl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwInfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pControlParams", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "ControlServiceExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwControl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwInfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pControlParams", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "ControlTraceA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "InstanceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_TRACE_PROPERTIES", 960, INOUT },
		{3, "ControlCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ControlTraceW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "InstanceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_TRACE_PROPERTIES", 960, INOUT },
		{3, "ControlCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ConvertSecurityDescriptorToStringSecurityDescriptorA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "RequestedStringSDRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "StringSecurityDescriptor", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, OUT },
		{4, "StringSecurityDescriptorLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "ConvertSecurityDescriptorToStringSecurityDescriptorW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "RequestedStringSDRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "StringSecurityDescriptor", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
		{4, "StringSecurityDescriptorLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "ConvertSidToStringSidA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Sid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "StringSid", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, OUT },
	}
	},
	{ "ConvertSidToStringSidW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Sid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "StringSid", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
	}
	},
	{ "ConvertStringSecurityDescriptorToSecurityDescriptorA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "StringSecurityDescriptor", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "StringSDRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{3, "SecurityDescriptorSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "ConvertStringSecurityDescriptorToSecurityDescriptorW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "StringSecurityDescriptor", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "StringSDRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{3, "SecurityDescriptorSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "ConvertStringSidToSidA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "StringSid", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Sid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "ConvertStringSidToSidW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "StringSid", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Sid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "ConvertToAutoInheritPrivateObjectSecurity",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ParentDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "CurrentSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "NewSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{3, "ObjectType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "IsDirectoryObject", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{5, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
	}
	},
	{ "CopySid",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "nDestinationSidLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pDestinationSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{2, "pSourceSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CreatePrivateObjectSecurity",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ParentDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "CreatorDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "NewDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{3, "IsDirectoryObject", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "Token", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
	}
	},
	{ "CreatePrivateObjectSecurityEx",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ParentDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "CreatorDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "NewDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{3, "ObjectType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "IsContainerObject", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "AutoInheritFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Token", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
	}
	},
	{ "CreatePrivateObjectSecurityWithMultipleInheritance",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ParentDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "CreatorDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "NewDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{3, "ObjectTypes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_GUID", 128, IN },
		{4, "GuidCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "IsContainerObject", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "AutoInheritFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "Token", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
	}
	},
	{ "CreateProcessAsUserA",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpApplicationName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpCommandLine", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "lpProcessAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
		{4, "lpThreadAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
		{5, "bInheritHandles", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "dwCreationFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "lpEnvironment", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "lpCurrentDirectory", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{9, "lpStartupInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STARTUPINFOA", 544, IN },
		{10, "lpProcessInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PROCESS_INFORMATION", 128, OUT },
	}
	},
	{ "CreateProcessAsUserW",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpApplicationName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpCommandLine", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "lpProcessAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
		{4, "lpThreadAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
		{5, "bInheritHandles", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "dwCreationFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "lpEnvironment", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "lpCurrentDirectory", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{9, "lpStartupInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STARTUPINFOW", 544, IN },
		{10, "lpProcessInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PROCESS_INFORMATION", 128, OUT },
	}
	},
	{ "CreateProcessWithLogonW",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpUsername", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpDomain", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpPassword", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwLogonFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpApplicationName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "lpCommandLine", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{6, "dwCreationFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "lpEnvironment", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "lpCurrentDirectory", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{9, "lpStartupInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STARTUPINFOW", 544, IN },
		{10, "lpProcessInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PROCESS_INFORMATION", 128, IN },
	}
	},
	{ "CreateProcessWithTokenW",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwLogonFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpApplicationName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpCommandLine", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{4, "dwCreationFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpEnvironment", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "lpCurrentDirectory", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{7, "lpStartupInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STARTUPINFOW", 544, IN },
		{8, "lpProcessInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PROCESS_INFORMATION", 128, IN },
	}
	},
	{ "CreateRestrictedToken",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ExistingTokenHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "DisableSidCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "SidsToDisable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID_AND_ATTRIBUTES", 64, IN },
		{4, "DeletePrivilegeCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "PrivilegesToDelete", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_LUID_AND_ATTRIBUTES", 96, IN },
		{6, "RestrictedSidCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "SidsToRestrict", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID_AND_ATTRIBUTES", 64, IN },
		{8, "NewTokenHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CreateServiceA",13,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hSCManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpServiceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpDisplayName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwServiceType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwStartType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwErrorControl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "lpBinaryPathName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{8, "lpLoadOrderGroup", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{9, "lpdwTagId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{10, "lpDependencies", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{11, "lpServiceStartName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{12, "lpPassword", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CreateServiceW",13,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hSCManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpServiceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpDisplayName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwServiceType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwStartType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwErrorControl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "lpBinaryPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{8, "lpLoadOrderGroup", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{9, "lpdwTagId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{10, "lpDependencies", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{11, "lpServiceStartName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{12, "lpPassword", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CreateTraceInstanceId",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "RegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "InstInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "EVENT_INSTANCE_INFO", 64, IN },
	}
	},
	{ "CreateWellKnownSid",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "WellKnownSidType", NKT_DBOBJCLASS_Enumeration, "WELL_KNOWN_SID_TYPE", 32, IN },
		{1, "DomainSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "cbSid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CredDeleteA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TargetName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CredDeleteW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TargetName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CredEnumerateA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Filter", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Count", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "Credential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "_CREDENTIALA", 416, IN },
	}
	},
	{ "CredEnumerateW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Filter", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Count", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "Credential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "_CREDENTIALW", 416, IN },
	}
	},
	{ "CredFindBestCredentialA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TargetName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Credential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CREDENTIALA", 416, OUT },
	}
	},
	{ "CredFindBestCredentialW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TargetName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Credential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CREDENTIALW", 416, OUT },
	}
	},
	{ "CredFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CredGetSessionTypes",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "MaximumPersistCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "MaximumPersist", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CredGetTargetInfoA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TargetName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "TargetInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CREDENTIAL_TARGET_INFORMATIONA", 320, OUT },
	}
	},
	{ "CredGetTargetInfoW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TargetName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "TargetInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CREDENTIAL_TARGET_INFORMATIONW", 320, OUT },
	}
	},
	{ "CredIsMarshaledCredentialA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "MarshaledCredential", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CredIsMarshaledCredentialW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "MarshaledCredential", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CredIsProtectedA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszProtectedCredentials", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pProtectionType", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_CRED_PROTECTION_TYPE", 32, OUT },
	}
	},
	{ "CredIsProtectedW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszProtectedCredentials", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pProtectionType", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_CRED_PROTECTION_TYPE", 32, OUT },
	}
	},
	{ "CredMarshalCredentialA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "CredType", NKT_DBOBJCLASS_Enumeration, "_CRED_MARSHAL_TYPE", 32, IN },
		{1, "Credential", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "MarshaledCredential", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, OUT },
	}
	},
	{ "CredMarshalCredentialW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "CredType", NKT_DBOBJCLASS_Enumeration, "_CRED_MARSHAL_TYPE", 32, IN },
		{1, "Credential", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "MarshaledCredential", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
	}
	},
	{ "CredProtectA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fAsSelf", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pszCredentials", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchCredentials", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszProtectedCredentials", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{4, "pcchMaxChars", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "ProtectionType", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_CRED_PROTECTION_TYPE", 32, OUT },
	}
	},
	{ "CredProtectW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fAsSelf", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pszCredentials", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchCredentials", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszProtectedCredentials", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{4, "pcchMaxChars", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "ProtectionType", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_CRED_PROTECTION_TYPE", 32, OUT },
	}
	},
	{ "CredReadA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TargetName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Credential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CREDENTIALA", 416, OUT },
	}
	},
	{ "CredReadDomainCredentialsA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TargetInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CREDENTIAL_TARGET_INFORMATIONA", 320, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Count", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "Credential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "_CREDENTIALA", 416, IN },
	}
	},
	{ "CredReadDomainCredentialsW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TargetInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CREDENTIAL_TARGET_INFORMATIONW", 320, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Count", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "Credential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "_CREDENTIALW", 416, IN },
	}
	},
	{ "CredReadW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TargetName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Credential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CREDENTIALW", 416, OUT },
	}
	},
	{ "CredRenameA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "OldTargetName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "NewTargetName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CredRenameW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "OldTargetName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "NewTargetName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CredUnmarshalCredentialA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "MarshaledCredential", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "CredType", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_CRED_MARSHAL_TYPE", 32, OUT },
		{2, "Credential", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "CredUnmarshalCredentialW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "MarshaledCredential", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "CredType", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_CRED_MARSHAL_TYPE", 32, OUT },
		{2, "Credential", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "CredUnprotectA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fAsSelf", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pszProtectedCredentials", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchProtectedCredentials", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszCredentials", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{4, "pcchMaxChars", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CredUnprotectW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "fAsSelf", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pszProtectedCredentials", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchProtectedCredentials", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszCredentials", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{4, "pcchMaxChars", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CredWriteA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Credential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CREDENTIALA", 416, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CredWriteDomainCredentialsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TargetInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CREDENTIAL_TARGET_INFORMATIONA", 320, IN },
		{1, "Credential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CREDENTIALA", 416, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CredWriteDomainCredentialsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TargetInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CREDENTIAL_TARGET_INFORMATIONW", 320, IN },
		{1, "Credential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CREDENTIALW", 416, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CredWriteW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Credential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CREDENTIALW", 416, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptAcquireContextA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "phProv", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{1, "szContainer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "szProvider", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwProvType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptAcquireContextW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "phProv", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{1, "szContainer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "szProvider", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwProvType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptContextAddRef",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptCreateHash",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Algid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "phHash", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CryptDecrypt",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hHash", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Final", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{5, "pdwDataLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptDeriveKey",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Algid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hBaseData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "phKey", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptDestroyHash",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hHash", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptDestroyKey",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptDuplicateHash",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hHash", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "phHash", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CryptDuplicateKey",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "phKey", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CryptEncrypt",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hHash", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Final", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{5, "pdwDataLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "dwBufLen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptEnumProvidersA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pdwProvType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "szProvName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "pcbProvName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptEnumProvidersW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pdwProvType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "szProvName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "pcbProvName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptEnumProviderTypesA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pdwProvType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "szTypeName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "pcbTypeName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptEnumProviderTypesW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pdwProvType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "szTypeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "pcbTypeName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptExportKey",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hExpKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwBlobType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "pdwDataLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptGenKey",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Algid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "phKey", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CryptGenRandom",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwLen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "CryptGetDefaultProviderA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwProvType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszProvName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{4, "pcbProvName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptGetDefaultProviderW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwProvType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszProvName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{4, "pcbProvName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptGetHashParam",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hHash", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "pdwDataLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptGetKeyParam",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "pdwDataLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptGetProvParam",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "pdwDataLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptGetUserKey",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwKeySpec", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "phUserKey", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CryptHashData",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hHash", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwDataLen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptHashSessionKey",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hHash", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptImportKey",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwDataLen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hPubKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "phKey", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CryptReleaseContext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptSetHashParam",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hHash", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptSetKeyParam",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptSetProviderA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszProvName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwProvType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptSetProviderExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszProvName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwProvType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptSetProviderExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszProvName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwProvType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptSetProviderW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszProvName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwProvType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptSetProvParam",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptSignHashA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hHash", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwKeySpec", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szDescription", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbSignature", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "pdwSigLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptSignHashW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hHash", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwKeySpec", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szDescription", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbSignature", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "pdwSigLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptVerifySignatureA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hHash", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbSignature", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwSigLen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hPubKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "szDescription", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptVerifySignatureW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hHash", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbSignature", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwSigLen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hPubKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "szDescription", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DecryptFileA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DecryptFileW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeleteAce",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, INOUT },
		{1, "dwAceIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeleteService",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeregisterEventSource",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEventLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DestroyPrivateObjectSecurity",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ObjectDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "DuplicateEncryptionInfoFile",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "SrcFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "DstFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwCreationDistribution", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpSecurityAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
	}
	},
	{ "DuplicateToken",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ExistingTokenHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ImpersonationLevel", NKT_DBOBJCLASS_Enumeration, "_SECURITY_IMPERSONATION_LEVEL", 32, IN },
		{2, "DuplicateTokenHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "DuplicateTokenEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hExistingToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpTokenAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
		{3, "ImpersonationLevel", NKT_DBOBJCLASS_Enumeration, "_SECURITY_IMPERSONATION_LEVEL", 32, IN },
		{4, "TokenType", NKT_DBOBJCLASS_Enumeration, "_TOKEN_TYPE", 32, IN },
		{5, "phNewToken", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "EnableTrace",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Enable", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EnableFlag", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "EnableLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ControlGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "EnableTraceEx",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "ProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "SourceId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "IsEnabled", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Level", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{5, "MatchAnyKeyword", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{6, "MatchAllKeyword", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{7, "EnableProperty", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "EnableFilterDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_FILTER_DESCRIPTOR", 128, IN },
	}
	},
	{ "EnableTraceEx2",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "ProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "ControlCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Level", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{4, "MatchAnyKeyword", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{5, "MatchAllKeyword", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{6, "Timeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "EnableParameters", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ENABLE_TRACE_PARAMETERS", 256, IN },
	}
	},
	{ "EncryptFileA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "EncryptFileW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "EncryptionDisable",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "DirPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Disable", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumDependentServicesA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwServiceState", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpServices", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ENUM_SERVICE_STATUSA", 288, OUT },
		{3, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pcbBytesNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{5, "lpServicesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "EnumDependentServicesW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwServiceState", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpServices", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ENUM_SERVICE_STATUSW", 288, OUT },
		{3, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pcbBytesNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{5, "lpServicesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "EnumerateTraceGuids",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "GuidPropertiesArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_TRACE_GUID_PROPERTIES", 288, INOUT },
		{1, "PropertyArrayCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "GuidCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "EnumerateTraceGuidsEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceQueryInfoClass", NKT_DBOBJCLASS_Enumeration, "_TRACE_QUERY_INFO_CLASS", 32, IN },
		{1, "InBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "InBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "OutBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{4, "OutBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ReturnLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "EnumServicesStatusA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hSCManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwServiceType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwServiceState", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpServices", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ENUM_SERVICE_STATUSA", 288, OUT },
		{4, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pcbBytesNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{6, "lpServicesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{7, "lpResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "EnumServicesStatusExA",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hSCManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "InfoLevel", NKT_DBOBJCLASS_Enumeration, "_SC_ENUM_TYPE", 32, IN },
		{2, "dwServiceType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwServiceState", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpServices", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pcbBytesNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{7, "lpServicesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{8, "lpResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "pszGroupName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "EnumServicesStatusExW",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hSCManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "InfoLevel", NKT_DBOBJCLASS_Enumeration, "_SC_ENUM_TYPE", 32, IN },
		{2, "dwServiceType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwServiceState", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpServices", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pcbBytesNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{7, "lpServicesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{8, "lpResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "pszGroupName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "EnumServicesStatusW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hSCManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwServiceType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwServiceState", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpServices", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ENUM_SERVICE_STATUSW", 288, OUT },
		{4, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pcbBytesNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{6, "lpServicesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{7, "lpResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "EqualDomainSid",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSid1", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pSid2", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "pfEqual", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "EqualPrefixSid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSid1", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pSid2", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "EqualSid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSid1", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pSid2", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "EventAccessControl",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Guid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "Operation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Sid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "Rights", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "AllowOrDeny", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "EventAccessQuery",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Guid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{2, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "EventAccessRemove",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Guid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "EventActivityIdControl",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "ControlCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ActivityId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
	}
	},
	{ "EventEnabled",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "RegHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "EventDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_DESCRIPTOR", 128, IN },
	}
	},
	{ "EventProviderEnabled",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "RegHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "Level", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "Keyword", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "EventRegister",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "ProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "EnableCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "CallbackContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "RegHandle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
	}
	},
	{ "EventUnregister",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "RegHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "EventWrite",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "RegHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "EventDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_DESCRIPTOR", 128, IN },
		{2, "UserDataCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "UserData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_DATA_DESCRIPTOR", 128, IN },
	}
	},
	{ "EventWriteEx",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "RegHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "EventDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_DESCRIPTOR", 128, IN },
		{2, "Filter", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ActivityId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{5, "RelatedActivityId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{6, "UserDataCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "UserData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_DATA_DESCRIPTOR", 128, IN },
	}
	},
	{ "EventWriteString",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "RegHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "Level", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "Keyword", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "String", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "EventWriteTransfer",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "RegHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "EventDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_DESCRIPTOR", 128, IN },
		{2, "ActivityId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{3, "RelatedActivityId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "UserDataCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "UserData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_DATA_DESCRIPTOR", 128, IN },
	}
	},
	{ "FileEncryptionStatusA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "FileEncryptionStatusW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "FindFirstFreeAce",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{1, "pAce", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "FlushTraceA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "InstanceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_TRACE_PROPERTIES", 960, INOUT },
	}
	},
	{ "FlushTraceW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "InstanceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_TRACE_PROPERTIES", 960, INOUT },
	}
	},
	{ "FreeEncryptedFileMetadata",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pbMetadata", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "FreeEncryptionCertificateHashList",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pUsers", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ENCRYPTION_CERTIFICATE_HASH_LIST", 64, IN },
	}
	},
	{ "FreeInheritedFromArray",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pInheritArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INHERITED_FROMW", 64, IN },
		{1, "AceCnt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "pfnArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FN_OBJECT_MGR_FUNCTIONS", 32, IN },
	}
	},
	{ "FreeSid",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetAce",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{1, "dwAceIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pAce", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "GetAclInformation",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{1, "pAclInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{2, "nAclInformationLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwAclInformationClass", NKT_DBOBJCLASS_Enumeration, "_ACL_INFORMATION_CLASS", 32, IN },
	}
	},
	{ "GetAuditedPermissionsFromAclA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{1, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_A", 160, IN },
		{2, "pSuccessfulAuditedRights", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "pFailedAuditRights", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetAuditedPermissionsFromAclW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{1, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_W", 160, IN },
		{2, "pSuccessfulAuditedRights", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "pFailedAuditRights", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetCurrentHwProfileA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpHwProfileInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagHW_PROFILE_INFOA", 992, OUT },
	}
	},
	{ "GetCurrentHwProfileW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpHwProfileInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagHW_PROFILE_INFOW", 1952, OUT },
	}
	},
	{ "GetEffectiveRightsFromAclA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{1, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_A", 160, IN },
		{2, "pAccessRights", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetEffectiveRightsFromAclW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{1, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_W", 160, IN },
		{2, "pAccessRights", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetEncryptedFileMetadata",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pcbMetadata", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "ppbMetadata", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "GetEventLogInformation",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEventLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwInfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pcbBytesNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetExplicitEntriesFromAclA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{1, "pcCountOfExplicitEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{2, "pListOfExplicitEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EXPLICIT_ACCESS_A", 256, OUT },
	}
	},
	{ "GetExplicitEntriesFromAclW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{1, "pcCountOfExplicitEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{2, "pListOfExplicitEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EXPLICIT_ACCESS_W", 256, OUT },
	}
	},
	{ "GetFileSecurityA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "RequestedInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "nLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpnLengthNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetFileSecurityW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "RequestedInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "nLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpnLengthNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetInheritanceSourceA",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pObjectName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "ObjectType", NKT_DBOBJCLASS_Enumeration, "_SE_OBJECT_TYPE", 32, IN },
		{2, "SecurityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Container", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pObjectClassGuids", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_GUID", 128, IN },
		{5, "GuidCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{7, "pfnArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FN_OBJECT_MGR_FUNCTIONS", 32, IN },
		{8, "pGenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
		{9, "pInheritArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INHERITED_FROMA", 64, OUT },
	}
	},
	{ "GetInheritanceSourceW",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ObjectType", NKT_DBOBJCLASS_Enumeration, "_SE_OBJECT_TYPE", 32, IN },
		{2, "SecurityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Container", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pObjectClassGuids", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_GUID", 128, IN },
		{5, "GuidCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{7, "pfnArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FN_OBJECT_MGR_FUNCTIONS", 32, IN },
		{8, "pGenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
		{9, "pInheritArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INHERITED_FROMW", 64, OUT },
	}
	},
	{ "GetKernelObjectSecurity",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Handle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RequestedInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "nLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpnLengthNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetLengthSid",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetLocalManagedApplicationData",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "ProductCode", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "DisplayName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{2, "SupportUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "GetLocalManagedApplications",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "bUserApps", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pdwApps", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{2, "prgLocalApps", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_LOCALMANAGEDAPPLICATION", 128, OUT },
	}
	},
	{ "GetManagedApplicationCategories",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{1, "pAppCategory", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_APPCATEGORYINFOLIST", 64, OUT },
	}
	},
	{ "GetManagedApplications",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pCategory", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "dwQueryFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwInfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pdwApps", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "prgManagedApps", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MANAGEDAPPLICATION", 704, OUT },
	}
	},
	{ "GetMultipleTrusteeA",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_A", 160, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_A", 160, IN },
	}
	},
	{ "GetMultipleTrusteeOperationA",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "_MULTIPLE_TRUSTEE_OPERATION", 32, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_A", 160, IN },
	}
	},
	{ "GetMultipleTrusteeOperationW",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "_MULTIPLE_TRUSTEE_OPERATION", 32, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_W", 160, IN },
	}
	},
	{ "GetMultipleTrusteeW",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_W", 160, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_W", 160, IN },
	}
	},
	{ "GetNamedSecurityInfoA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pObjectName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "ObjectType", NKT_DBOBJCLASS_Enumeration, "_SE_OBJECT_TYPE", 32, IN },
		{2, "SecurityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppsidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{4, "ppsidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{5, "ppDacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, OUT },
		{6, "ppSacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, OUT },
		{7, "ppSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "GetNamedSecurityInfoW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ObjectType", NKT_DBOBJCLASS_Enumeration, "_SE_OBJECT_TYPE", 32, IN },
		{2, "SecurityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppsidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{4, "ppsidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{5, "ppDacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, OUT },
		{6, "ppSacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, OUT },
		{7, "ppSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "GetNumberOfEventLogRecords",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEventLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NumberOfRecords", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetOldestEventLogRecord",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEventLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "OldestRecord", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetPrivateObjectSecurity",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ObjectDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ResultantDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "DescriptorLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ReturnLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetSecurityDescriptorControl",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pControl", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "lpdwRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetSecurityDescriptorDacl",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "lpbDaclPresent", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{2, "pDacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, OUT },
		{3, "lpbDaclDefaulted", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetSecurityDescriptorGroup",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{2, "lpbGroupDefaulted", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetSecurityDescriptorLength",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetSecurityDescriptorOwner",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{2, "lpbOwnerDefaulted", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetSecurityDescriptorRMControl",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "RMControl", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
	}
	},
	{ "GetSecurityDescriptorSacl",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "lpbSaclPresent", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{2, "pSacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, OUT },
		{3, "lpbSaclDefaulted", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetSecurityInfo",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "handle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ObjectType", NKT_DBOBJCLASS_Enumeration, "_SE_OBJECT_TYPE", 32, IN },
		{2, "SecurityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppsidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{4, "ppsidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{5, "ppDacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, OUT },
		{6, "ppSacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, OUT },
		{7, "ppSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "GetServiceDisplayNameA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hSCManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpServiceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpDisplayName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "lpcchBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetServiceDisplayNameW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hSCManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpServiceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpDisplayName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{3, "lpcchBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetServiceKeyNameA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hSCManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpDisplayName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpServiceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "lpcchBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetServiceKeyNameW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hSCManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpDisplayName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpServiceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{3, "lpcchBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetSidIdentifierAuthority",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID_IDENTIFIER_AUTHORITY", 48, OUT },
		{0, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetSidLengthRequired",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "nSubAuthorityCount", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "GetSidSubAuthority",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{0, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "nSubAuthority", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetSidSubAuthorityCount",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetThreadWaitChain",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "WctHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Context", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ThreadId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "NodeCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "NodeInfoArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WAITCHAIN_NODE_INFO", 2240, OUT },
		{6, "IsCycle", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetTokenInformation",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TokenHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "TokenInformationClass", NKT_DBOBJCLASS_Enumeration, "_TOKEN_INFORMATION_CLASS", 32, IN },
		{2, "TokenInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "TokenInformationLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ReturnLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetTraceEnableFlags",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "GetTraceEnableLevel",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "GetTraceLoggerHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetTrusteeFormA",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "_TRUSTEE_FORM", 32, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_A", 160, IN },
	}
	},
	{ "GetTrusteeFormW",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "_TRUSTEE_FORM", 32, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_W", 160, IN },
	}
	},
	{ "GetTrusteeNameA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_A", 160, IN },
	}
	},
	{ "GetTrusteeNameW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_W", 160, IN },
	}
	},
	{ "GetTrusteeTypeA",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "_TRUSTEE_TYPE", 32, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_A", 160, IN },
	}
	},
	{ "GetTrusteeTypeW",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "_TRUSTEE_TYPE", 32, OUT },
		{0, "pTrustee", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTEE_W", 160, IN },
	}
	},
	{ "GetUserNameA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pcbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetUserNameW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pcbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetWindowsAccountDomainSid",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pDomainSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "cbDomainSid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "ImpersonateAnonymousToken",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ThreadHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImpersonateLoggedOnUser",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImpersonateNamedPipeClient",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hNamedPipe", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImpersonateSelf",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ImpersonationLevel", NKT_DBOBJCLASS_Enumeration, "_SECURITY_IMPERSONATION_LEVEL", 32, IN },
	}
	},
	{ "InitializeAcl",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, OUT },
		{1, "nAclLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwAclRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitializeSecurityDescriptor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{1, "dwRevision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitializeSid",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Sid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{1, "pIdentifierAuthority", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID_IDENTIFIER_AUTHORITY", 48, IN },
		{2, "nSubAuthorityCount", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "InitiateShutdownA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpMachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpMessage", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwGracePeriod", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwShutdownFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwReason", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitiateShutdownW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpMessage", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwGracePeriod", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwShutdownFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwReason", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitiateSystemShutdownA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpMachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpMessage", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "bForceAppsClosed", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "bRebootAfterShutdown", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitiateSystemShutdownExA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpMachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpMessage", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "bForceAppsClosed", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "bRebootAfterShutdown", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "dwReason", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitiateSystemShutdownExW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpMessage", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "bForceAppsClosed", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "bRebootAfterShutdown", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "dwReason", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitiateSystemShutdownW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpMessage", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "bForceAppsClosed", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "bRebootAfterShutdown", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InstallApplication",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pInstallInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INSTALLDATA", 192, IN },
	}
	},
	{ "IsTextUnicode",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "iSize", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpiResult", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "IsTokenRestricted",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TokenHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsTokenUntrusted",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TokenHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsValidAcl",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "IsValidSecurityDescriptor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "IsValidSid",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "IsWellKnownSid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "WellKnownSidType", NKT_DBOBJCLASS_Enumeration, "WELL_KNOWN_SID_TYPE", 32, IN },
	}
	},
	{ "LockServiceDatabase",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "hSCManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LogonUserA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUsername", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpszDomain", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszPassword", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwLogonType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwLogonProvider", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "phToken", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "LogonUserExA",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUsername", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpszDomain", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszPassword", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwLogonType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwLogonProvider", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "phToken", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{6, "ppLogonSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{7, "ppProfileBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{8, "pdwProfileLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{9, "pQuotaLimits", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_QUOTA_LIMITS", 256, OUT },
	}
	},
	{ "LogonUserExW",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUsername", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszDomain", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszPassword", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwLogonType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwLogonProvider", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "phToken", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{6, "ppLogonSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{7, "ppProfileBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{8, "pdwProfileLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{9, "pQuotaLimits", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_QUOTA_LIMITS", 256, OUT },
	}
	},
	{ "LogonUserW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszUsername", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszDomain", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszPassword", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwLogonType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwLogonProvider", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "phToken", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "LookupAccountNameA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpSystemName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpAccountName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Sid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "cbSid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "ReferencedDomainName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "cchReferencedDomainName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "peUse", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_SID_NAME_USE", 32, OUT },
	}
	},
	{ "LookupAccountNameW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpSystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpAccountName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Sid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "cbSid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "ReferencedDomainName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{5, "cchReferencedDomainName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "peUse", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_SID_NAME_USE", 32, OUT },
	}
	},
	{ "LookupAccountSidA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpSystemName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Sid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "Name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cchName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "ReferencedDomainName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "cchReferencedDomainName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "peUse", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_SID_NAME_USE", 32, OUT },
	}
	},
	{ "LookupAccountSidW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpSystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Sid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "Name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cchName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "ReferencedDomainName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "cchReferencedDomainName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "peUse", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_SID_NAME_USE", 32, OUT },
	}
	},
	{ "LookupPrivilegeDisplayNameA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpSystemName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpDisplayName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "cchDisplayName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "lpLanguageId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "LookupPrivilegeDisplayNameW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpSystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpDisplayName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{3, "cchDisplayName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "lpLanguageId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "LookupPrivilegeNameA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpSystemName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpLuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_LUID", 64, IN },
		{2, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "cchName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "LookupPrivilegeNameW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpSystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpLuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_LUID", 64, IN },
		{2, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{3, "cchName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "LookupPrivilegeValueA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpSystemName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpLuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_LUID", 64, OUT },
	}
	},
	{ "LookupPrivilegeValueW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpSystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpLuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_LUID", 64, OUT },
	}
	},
	{ "LookupSecurityDescriptorPartsA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "ppOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_TRUSTEE_A", 160, IN },
		{1, "ppGroup", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_TRUSTEE_A", 160, IN },
		{2, "pcCountOfAccessEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "ppListOfAccessEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EXPLICIT_ACCESS_A", 256, IN },
		{4, "pcCountOfAuditEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "ppListOfAuditEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EXPLICIT_ACCESS_A", 256, IN },
		{6, "pSD", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "LookupSecurityDescriptorPartsW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "ppOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_TRUSTEE_W", 160, IN },
		{1, "ppGroup", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_TRUSTEE_W", 160, IN },
		{2, "pcCountOfAccessEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "ppListOfAccessEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EXPLICIT_ACCESS_W", 256, IN },
		{4, "pcCountOfAuditEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "ppListOfAuditEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EXPLICIT_ACCESS_W", 256, IN },
		{6, "pSD", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "LsaAddAccountRights",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "AccountSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "UserRights", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{3, "CountOfRights", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LsaClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ObjectHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "LsaCreateTrustedDomainEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "TrustedDomainInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTED_DOMAIN_INFORMATION_EX", 256, IN },
		{2, "AuthenticationInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRUSTED_DOMAIN_AUTH_INFORMATION", 192, IN },
		{3, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "TrustedDomainHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "LsaDeleteTrustedDomain",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "TrustedDomainSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "LsaEnumerateAccountRights",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "AccountSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "UserRights", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_UNICODE_STRING", 64, OUT },
		{3, "CountOfRights", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "LsaEnumerateAccountsWithUserRight",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "UserRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{2, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "CountReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "LsaEnumerateTrustedDomains",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "EnumerationContext", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{3, "PreferedMaximumLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "CountReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "LsaEnumerateTrustedDomainsEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "EnumerationContext", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{3, "PreferedMaximumLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "CountReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "LsaFreeMemory",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "LsaLookupNames",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Count", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Names", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{3, "ReferencedDomains", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_LSA_REFERENCED_DOMAIN_LIST", 64, OUT },
		{4, "Sids", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_LSA_TRANSLATED_SID", 96, OUT },
	}
	},
	{ "LsaLookupNames2",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Count", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Names", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{4, "ReferencedDomains", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_LSA_REFERENCED_DOMAIN_LIST", 64, OUT },
		{5, "Sids", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_LSA_TRANSLATED_SID2", 128, OUT },
	}
	},
	{ "LsaLookupSids",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Count", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Sids", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "ReferencedDomains", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_LSA_REFERENCED_DOMAIN_LIST", 64, OUT },
		{4, "Names", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_LSA_TRANSLATED_NAME", 128, OUT },
	}
	},
	{ "LsaNtStatusToWinError",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Status", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LsaOpenPolicy",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SystemName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{1, "ObjectAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
		{2, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "LsaOpenTrustedDomainByName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "TrustedDomainName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{2, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "TrustedDomainHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "LsaQueryDomainInformationPolicy",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "InformationClass", NKT_DBOBJCLASS_Enumeration, "_POLICY_DOMAIN_INFORMATION_CLASS", 32, IN },
		{2, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "LsaQueryForestTrustInformation",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "TrustedDomainName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{2, "ForestTrustInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_LSA_FOREST_TRUST_INFORMATION", 64, OUT },
	}
	},
	{ "LsaQueryInformationPolicy",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "InformationClass", NKT_DBOBJCLASS_Enumeration, "_POLICY_INFORMATION_CLASS", 32, IN },
		{2, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "LsaQueryTrustedDomainInfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "TrustedDomainSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "InformationClass", NKT_DBOBJCLASS_Enumeration, "_TRUSTED_INFORMATION_CLASS", 32, IN },
		{3, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "LsaQueryTrustedDomainInfoByName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "TrustedDomainName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{2, "InformationClass", NKT_DBOBJCLASS_Enumeration, "_TRUSTED_INFORMATION_CLASS", 32, IN },
		{3, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "LsaRemoveAccountRights",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "AccountSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "AllRights", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{3, "UserRights", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{4, "CountOfRights", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LsaRetrievePrivateData",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "KeyName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{2, "PrivateData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_UNICODE_STRING", 64, OUT },
	}
	},
	{ "LsaSetDomainInformationPolicy",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "InformationClass", NKT_DBOBJCLASS_Enumeration, "_POLICY_DOMAIN_INFORMATION_CLASS", 32, IN },
		{2, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "LsaSetForestTrustInformation",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "TrustedDomainName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{2, "ForestTrustInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_LSA_FOREST_TRUST_INFORMATION", 64, IN },
		{3, "CheckOnly", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{4, "CollisionInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_LSA_FOREST_TRUST_COLLISION_INFORMATION", 64, OUT },
	}
	},
	{ "LsaSetInformationPolicy",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "InformationClass", NKT_DBOBJCLASS_Enumeration, "_POLICY_INFORMATION_CLASS", 32, IN },
		{2, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "LsaSetTrustedDomainInfoByName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "TrustedDomainName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{2, "InformationClass", NKT_DBOBJCLASS_Enumeration, "_TRUSTED_INFORMATION_CLASS", 32, IN },
		{3, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "LsaSetTrustedDomainInformation",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "TrustedDomainSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "InformationClass", NKT_DBOBJCLASS_Enumeration, "_TRUSTED_INFORMATION_CLASS", 32, IN },
		{3, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "LsaStorePrivateData",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "PolicyHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "KeyName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{2, "PrivateData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
	}
	},
	{ "MakeAbsoluteSD",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSelfRelativeSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pAbsoluteSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "lpdwAbsoluteSecurityDescriptorSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "pDacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, OUT },
		{4, "lpdwDaclSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "pSacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, OUT },
		{6, "lpdwSaclSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{7, "pOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{8, "lpdwOwnerSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "pPrimaryGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{10, "lpdwPrimaryGroupSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MakeSelfRelativeSD",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAbsoluteSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pSelfRelativeSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MapGenericMask",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "AccessMask", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
	}
	},
	{ "MSChapSrvChangePassword",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "ServerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "UserName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "LmOldPresent", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{3, "LmOldOwfPassword", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_LM_OWF_PASSWORD", 128, IN },
		{4, "LmNewOwfPassword", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_LM_OWF_PASSWORD", 128, IN },
		{5, "NtOldOwfPassword", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_LM_OWF_PASSWORD", 128, IN },
		{6, "NtNewOwfPassword", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_LM_OWF_PASSWORD", 128, IN },
	}
	},
	{ "MSChapSrvChangePassword2",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "ServerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "UserName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "NewPasswordEncryptedWithOldNt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SAMPR_ENCRYPTED_USER_PASSWORD", 4128, IN },
		{3, "OldNtOwfPasswordEncryptedWithNewNt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ENCRYPTED_LM_OWF_PASSWORD", 128, IN },
		{4, "LmPresent", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{5, "NewPasswordEncryptedWithOldLm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SAMPR_ENCRYPTED_USER_PASSWORD", 4128, IN },
		{6, "OldLmOwfPasswordEncryptedWithNewLmOrNt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ENCRYPTED_LM_OWF_PASSWORD", 128, IN },
	}
	},
	{ "NotifyBootConfigStatus",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "BootAcceptable", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NotifyChangeEventLog",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEventLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NotifyServiceStatusChangeA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwNotifyMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pNotifyBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SERVICE_NOTIFY_2A", 480, IN },
	}
	},
	{ "NotifyServiceStatusChangeW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwNotifyMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pNotifyBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SERVICE_NOTIFY_2W", 480, IN },
	}
	},
	{ "ObjectCloseAuditAlarmA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "GenerateOnClose", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ObjectCloseAuditAlarmW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "GenerateOnClose", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ObjectDeleteAuditAlarmA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "GenerateOnClose", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ObjectDeleteAuditAlarmW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "GenerateOnClose", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ObjectOpenAuditAlarmA",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ObjectTypeName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "ObjectName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "ClientToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "GrantedAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "Privileges", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PRIVILEGE_SET", 160, IN },
		{9, "ObjectCreation", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{10, "AccessGranted", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{11, "GenerateOnClose", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "ObjectOpenAuditAlarmW",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ObjectTypeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "ObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "ClientToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "GrantedAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "Privileges", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PRIVILEGE_SET", 160, IN },
		{9, "ObjectCreation", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{10, "AccessGranted", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{11, "GenerateOnClose", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "ObjectPrivilegeAuditAlarmA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ClientToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Privileges", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PRIVILEGE_SET", 160, IN },
		{5, "AccessGranted", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ObjectPrivilegeAuditAlarmW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ClientToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Privileges", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PRIVILEGE_SET", 160, IN },
		{5, "AccessGranted", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenBackupEventLogA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpUNCServerName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "OpenBackupEventLogW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpUNCServerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "OpenEncryptedFileRawA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "ulFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OpenEncryptedFileRawW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ulFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "OpenEventLogA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpUNCServerName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpSourceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "OpenEventLogW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpUNCServerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpSourceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "OpenProcessToken",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ProcessHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "TokenHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "OpenSCManagerA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpMachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpDatabaseName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenSCManagerW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpDatabaseName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenServiceA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hSCManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpServiceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenServiceW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hSCManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpServiceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenThreadToken",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ThreadHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OpenAsSelf", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "TokenHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "OpenThreadWaitChainSession",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "OpenTraceA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "Logfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_TRACE_LOGFILEA", 3328, INOUT },
	}
	},
	{ "OpenTraceW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "Logfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_TRACE_LOGFILEW", 3328, INOUT },
	}
	},
	{ "PerfCreateInstance",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PERF_COUNTERSET_INSTANCE", 256, OUT },
		{0, "ProviderHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "CounterSetGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "Name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Id", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PerfDecrementULongCounterValue",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Provider", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Instance", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PERF_COUNTERSET_INSTANCE", 256, IN },
		{2, "CounterId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PerfDecrementULongLongCounterValue",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Provider", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Instance", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PERF_COUNTERSET_INSTANCE", 256, IN },
		{2, "CounterId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "PerfDeleteInstance",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Provider", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "InstanceBlock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PERF_COUNTERSET_INSTANCE", 256, IN },
	}
	},
	{ "PerfIncrementULongCounterValue",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Provider", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Instance", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PERF_COUNTERSET_INSTANCE", 256, IN },
		{2, "CounterId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PerfIncrementULongLongCounterValue",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Provider", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Instance", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PERF_COUNTERSET_INSTANCE", 256, IN },
		{2, "CounterId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "PerfQueryInstance",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PERF_COUNTERSET_INSTANCE", 256, OUT },
		{0, "ProviderHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "CounterSetGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "Name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Id", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PerfSetCounterRefValue",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Provider", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Instance", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PERF_COUNTERSET_INSTANCE", 256, IN },
		{2, "CounterId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Address", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "PerfSetCounterSetInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "ProviderHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Template", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PERF_COUNTERSET_INFO", 320, IN },
		{2, "TemplateSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PerfSetULongCounterValue",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Provider", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Instance", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PERF_COUNTERSET_INSTANCE", 256, IN },
		{2, "CounterId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PerfSetULongLongCounterValue",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Provider", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Instance", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PERF_COUNTERSET_INSTANCE", 256, IN },
		{2, "CounterId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "PerfStartProvider",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "ProviderGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "ControlCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "phProvider", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "PerfStartProviderEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "ProviderGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "ProviderContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PROVIDER_CONTEXT", 192, IN },
		{2, "Provider", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "PerfStopProvider",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "ProviderHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PrivilegeCheck",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ClientToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RequiredPrivileges", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PRIVILEGE_SET", 160, INOUT },
		{2, "pfResult", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "PrivilegedServiceAuditAlarmA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "ServiceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "ClientToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Privileges", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PRIVILEGE_SET", 160, IN },
		{4, "AccessGranted", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PrivilegedServiceAuditAlarmW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ServiceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ClientToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Privileges", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PRIVILEGE_SET", 160, IN },
		{4, "AccessGranted", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ProcessTrace",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "HandleArray", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{1, "HandleCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "StartTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{3, "EndTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
	}
	},
	{ "QueryAllTracesA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "PropertyArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EVENT_TRACE_PROPERTIES", 960, OUT },
		{1, "PropertyArrayCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "LoggerCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "QueryAllTracesW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "PropertyArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EVENT_TRACE_PROPERTIES", 960, OUT },
		{1, "PropertyArrayCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "LoggerCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "QueryRecoveryAgentsOnEncryptedFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pRecoveryAgents", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ENCRYPTION_CERTIFICATE_HASH_LIST", 64, OUT },
	}
	},
	{ "QuerySecurityAccessMask",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "QueryServiceConfig2A",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwInfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pcbBytesNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "QueryServiceConfig2W",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwInfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pcbBytesNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "QueryServiceConfigA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpServiceConfig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_QUERY_SERVICE_CONFIGA", 288, OUT },
		{2, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbBytesNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "QueryServiceConfigW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpServiceConfig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_QUERY_SERVICE_CONFIGW", 288, OUT },
		{2, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbBytesNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "QueryServiceLockStatusA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hSCManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpLockStatus", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_QUERY_SERVICE_LOCK_STATUSA", 96, OUT },
		{2, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbBytesNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "QueryServiceLockStatusW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hSCManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpLockStatus", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_QUERY_SERVICE_LOCK_STATUSW", 96, OUT },
		{2, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbBytesNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "QueryServiceObjectSecurity",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwSecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pcbBytesNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "QueryServiceStatus",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpServiceStatus", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SERVICE_STATUS", 224, OUT },
	}
	},
	{ "QueryServiceStatusEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "InfoLevel", NKT_DBOBJCLASS_Enumeration, "_SC_STATUS_TYPE", 32, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pcbBytesNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "QueryTraceA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "InstanceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_TRACE_PROPERTIES", 960, INOUT },
	}
	},
	{ "QueryTraceW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "InstanceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_TRACE_PROPERTIES", 960, INOUT },
	}
	},
	{ "QueryUsersOnEncryptedFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pUsers", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ENCRYPTION_CERTIFICATE_HASH_LIST", 64, OUT },
	}
	},
	{ "ReadEncryptedFileRaw",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pfExportCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pvCallbackContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "pvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "ReadEventLogA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEventLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwReadFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwRecordOffset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{4, "nNumberOfBytesToRead", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pnBytesRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{6, "pnMinNumberOfBytesNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "ReadEventLogW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEventLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwReadFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwRecordOffset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{4, "nNumberOfBytesToRead", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pnBytesRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{6, "pnMinNumberOfBytesNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "RegCloseKey",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegConnectRegistryA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpMachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "RegConnectRegistryExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpMachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RegConnectRegistryExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RegConnectRegistryW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "RegCopyTreeA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKeySrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "hKeyDest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegCopyTreeW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKeySrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "hKeyDest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegCreateKeyA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "RegCreateKeyExA",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpClass", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "samDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpSecurityAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
		{7, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{8, "lpdwDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "RegCreateKeyExW",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpClass", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "samDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpSecurityAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
		{7, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{8, "lpdwDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "RegCreateKeyTransactedA",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpClass", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "samDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpSecurityAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
		{7, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{8, "lpdwDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{9, "hTransaction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "pExtendedParemeter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RegCreateKeyTransactedW",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpClass", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "samDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpSecurityAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
		{7, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{8, "lpdwDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{9, "hTransaction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "pExtendedParemeter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RegCreateKeyW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "RegDeleteKeyA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RegDeleteKeyExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "samDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegDeleteKeyExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "samDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegDeleteKeyTransactedA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "samDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "hTransaction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pExtendedParameter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RegDeleteKeyTransactedW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "samDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "hTransaction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pExtendedParameter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RegDeleteKeyValueA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpValueName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RegDeleteKeyValueW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpValueName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RegDeleteKeyW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RegDeleteTreeA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RegDeleteTreeW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RegDeleteValueA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpValueName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RegDeleteValueW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpValueName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RegDisablePredefinedCache",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "RegDisablePredefinedCacheEx",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "RegDisableReflectionKey",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hBase", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegEnableReflectionKey",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hBase", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegEnumKeyA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "cchName", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegEnumKeyExA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "lpcchName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "lpReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "lpClass", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{6, "lpcchClass", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{7, "lpftLastWriteTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, OUT },
	}
	},
	{ "RegEnumKeyExW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{3, "lpcchName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "lpReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "lpClass", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{6, "lpcchClass", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{7, "lpftLastWriteTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, OUT },
	}
	},
	{ "RegEnumKeyW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{3, "cchName", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegEnumValueA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpValueName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "lpcchValueName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "lpReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "lpType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{6, "lpData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{7, "lpcbData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RegEnumValueW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpValueName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{3, "lpcchValueName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "lpReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "lpType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{6, "lpData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{7, "lpcbData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RegFlushKey",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegGetKeySecurity",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "lpcbSecurityDescriptor", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RegGetValueA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hkey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpValue", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pdwType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{5, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{6, "pcbData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RegGetValueW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hkey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pdwType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{5, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{6, "pcbData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RegisterEventSourceA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpUNCServerName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpSourceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RegisterEventSourceW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpUNCServerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpSourceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RegisterServiceCtrlHandlerA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpServiceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpHandlerProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "RegisterServiceCtrlHandlerExA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpServiceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpHandlerProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "lpContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RegisterServiceCtrlHandlerExW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpServiceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpHandlerProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "lpContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RegisterServiceCtrlHandlerW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpServiceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpHandlerProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "RegisterTraceGuidsA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "RequestAddress", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "RequestContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ControlGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{3, "GuidCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "TraceGuidReg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRACE_GUID_REGISTRATION", 64, INOUT },
		{5, "MofImagePath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "MofResourceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{7, "RegistrationHandle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
	}
	},
	{ "RegisterTraceGuidsW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "RequestAddress", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "RequestContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ControlGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{3, "GuidCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "TraceGuidReg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRACE_GUID_REGISTRATION", 64, INOUT },
		{5, "MofImagePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "MofResourceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{7, "RegistrationHandle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
	}
	},
	{ "RegisterWaitChainCOMCallback",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "CallStateCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "ActivationStateCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "RegLoadAppKeyA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{2, "samDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegLoadAppKeyW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{2, "samDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegLoadKeyA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RegLoadKeyW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RegLoadMUIStringA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszValue", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pszOutBuf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "cbOutBuf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pcbData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{5, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pszDirectory", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RegLoadMUIStringW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pszOutBuf", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{3, "cbOutBuf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pcbData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{5, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pszDirectory", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RegNotifyChangeKeyValue",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "bWatchSubtree", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dwNotifyFilter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fAsynchronous", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegOpenCurrentUser",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "samDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "RegOpenKeyA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "RegOpenKeyExA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "ulOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "samDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "RegOpenKeyExW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ulOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "samDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "RegOpenKeyTransactedA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "ulOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "samDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{5, "hTransaction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pExtendedParemeter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RegOpenKeyTransactedW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ulOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "samDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{5, "hTransaction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pExtendedParemeter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RegOpenKeyW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "RegOpenUserClassesRoot",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "samDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "phkResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "RegOverridePredefKey",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hNewHKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegQueryInfoKeyA",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpClass", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{2, "lpcchClass", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "lpReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "lpcSubKeys", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{5, "lpcbMaxSubKeyLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "lpcbMaxClassLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{7, "lpcValues", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{8, "lpcbMaxValueNameLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{9, "lpcbMaxValueLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{10, "lpcbSecurityDescriptor", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{11, "lpftLastWriteTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, OUT },
	}
	},
	{ "RegQueryInfoKeyW",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpClass", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "lpcchClass", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "lpReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "lpcSubKeys", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{5, "lpcbMaxSubKeyLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "lpcbMaxClassLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{7, "lpcValues", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{8, "lpcbMaxValueNameLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{9, "lpcbMaxValueLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{10, "lpcbSecurityDescriptor", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{11, "lpftLastWriteTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, OUT },
	}
	},
	{ "RegQueryMultipleValuesA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "val_list", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "value_entA", 128, OUT },
		{2, "num_vals", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpValueBuf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{4, "ldwTotsize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RegQueryMultipleValuesW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "val_list", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "value_entW", 128, OUT },
		{2, "num_vals", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpValueBuf", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{4, "ldwTotsize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RegQueryReflectionKey",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hBase", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "bIsReflectionDisabled", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "RegQueryValueA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpData", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpcbData", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RegQueryValueExA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpValueName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "lpType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "lpData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "lpcbData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RegQueryValueExW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpValueName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "lpType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "lpData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "lpcbData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RegQueryValueW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpData", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpcbData", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RegRenameKey",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKeyName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpNewKeyName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RegReplaceKeyA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpNewFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpOldFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RegReplaceKeyW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpNewFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpOldFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RegRestoreKeyA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegRestoreKeyW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegSaveKeyA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpSecurityAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
	}
	},
	{ "RegSaveKeyExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpSecurityAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegSaveKeyExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpSecurityAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegSaveKeyW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpSecurityAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
	}
	},
	{ "RegSetKeySecurity",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RegSetKeyValueA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpValueName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegSetKeyValueW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpValueName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegSetValueA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpData", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegSetValueExA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpValueName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegSetValueExW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpValueName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegSetValueW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpData", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegUnLoadKeyA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RegUnLoadKeyW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSubKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RemoveTraceCallback",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "RemoveUsersFromEncryptedFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pHashes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ENCRYPTION_CERTIFICATE_HASH_LIST", 64, IN },
	}
	},
	{ "ReportEventA",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEventLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wType", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "wCategory", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "dwEventID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpUserSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "wNumStrings", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{6, "dwDataSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "lpStrings", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{8, "lpRawData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "ReportEventW",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEventLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wType", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "wCategory", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "dwEventID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpUserSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "wNumStrings", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{6, "dwDataSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "lpStrings", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{8, "lpRawData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RevertToSelf",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "SaferCloseLevel",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hLevelHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SaferComputeTokenFromLevel",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "LevelHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "InAccessToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OutAccessToken", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "SaferCreateLevel",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwScopeId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwLevelId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OpenFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pLevelHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SaferGetLevelInformation",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "LevelHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwInfoType", NKT_DBOBJCLASS_Enumeration, "_SAFER_OBJECT_INFO_CLASS", 32, IN },
		{2, "lpQueryBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "dwInBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpdwOutBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "SaferGetPolicyInformation",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwScopeId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SaferPolicyInfoClass", NKT_DBOBJCLASS_Enumeration, "_SAFER_POLICY_INFO_CLASS", 32, IN },
		{2, "InfoBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "InfoBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{4, "InfoBufferRetSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SaferIdentifyLevel",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwNumProperties", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCodeProperties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SAFER_CODE_PROPERTIES_V2", 1152, IN },
		{2, "pLevelHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SaferiIsExecutableFileType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "szFullPathname", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "bFromShellExecute", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "SaferRecordEventLogEntry",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szTargetPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SaferSetLevelInformation",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "LevelHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwInfoType", NKT_DBOBJCLASS_Enumeration, "_SAFER_OBJECT_INFO_CLASS", 32, IN },
		{2, "lpQueryBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "dwInBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SaferSetPolicyInformation",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwScopeId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SaferPolicyInfoClass", NKT_DBOBJCLASS_Enumeration, "_SAFER_POLICY_INFO_CLASS", 32, IN },
		{2, "InfoBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "InfoBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SetAclInformation",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, INOUT },
		{1, "pAclInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "nAclInformationLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwAclInformationClass", NKT_DBOBJCLASS_Enumeration, "_ACL_INFORMATION_CLASS", 32, IN },
	}
	},
	{ "SetEncryptedFileMetadata",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pbOldMetadata", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pbNewMetadata", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pOwnerHash", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ENCRYPTION_CERTIFICATE_HASH", 128, IN },
		{4, "dwOperation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pCertificatesAdded", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ENCRYPTION_CERTIFICATE_HASH_LIST", 64, IN },
	}
	},
	{ "SetEntriesInAclA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "cCountOfExplicitEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pListOfExplicitEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EXPLICIT_ACCESS_A", 256, IN },
		{2, "OldAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{3, "NewAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, OUT },
	}
	},
	{ "SetEntriesInAclW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "cCountOfExplicitEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pListOfExplicitEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EXPLICIT_ACCESS_W", 256, IN },
		{2, "OldAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{3, "NewAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, OUT },
	}
	},
	{ "SetFileSecurityA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SetFileSecurityW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SetKernelObjectSecurity",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Handle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SetNamedSecurityInfoA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pObjectName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "ObjectType", NKT_DBOBJCLASS_Enumeration, "_SE_OBJECT_TYPE", 32, IN },
		{2, "SecurityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "psidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "psidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pDacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{6, "pSacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "SetNamedSecurityInfoW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ObjectType", NKT_DBOBJCLASS_Enumeration, "_SE_OBJECT_TYPE", 32, IN },
		{2, "SecurityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "psidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "psidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pDacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{6, "pSacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "SetPrivateObjectSecurity",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ModificationDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ObjectsSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{3, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
		{4, "Token", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetPrivateObjectSecurityEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ModificationDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ObjectsSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{3, "AutoInheritFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
		{5, "Token", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetSecurityAccessMask",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SetSecurityDescriptorControl",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ControlBitsOfInterest", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "ControlBitsToSet", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "SetSecurityDescriptorDacl",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{1, "bDaclPresent", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pDacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{3, "bDaclDefaulted", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetSecurityDescriptorGroup",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{1, "pGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "bGroupDefaulted", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetSecurityDescriptorOwner",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{1, "pOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "bOwnerDefaulted", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetSecurityDescriptorRMControl",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{1, "RMControl", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SetSecurityDescriptorSacl",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{1, "bSaclPresent", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pSacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{3, "bSaclDefaulted", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetSecurityInfo",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "handle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ObjectType", NKT_DBOBJCLASS_Enumeration, "_SE_OBJECT_TYPE", 32, IN },
		{2, "SecurityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "psidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "psidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pDacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{6, "pSacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "SetServiceBits",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hServiceStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwServiceBits", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "bSetBitsOn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "bUpdateImmediately", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetServiceObjectSecurity",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwSecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SetServiceStatus",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hServiceStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpServiceStatus", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SERVICE_STATUS", 224, IN },
	}
	},
	{ "SetThreadToken",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Thread", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "Token", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetTokenInformation",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TokenHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "TokenInformationClass", NKT_DBOBJCLASS_Enumeration, "_TOKEN_INFORMATION_CLASS", 32, IN },
		{2, "TokenInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "TokenInformationLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetTraceCallback",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "EventCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "SetUserFileEncryptionKey",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pEncryptionCertificate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ENCRYPTION_CERTIFICATE", 96, IN },
	}
	},
	{ "SetUserFileEncryptionKeyEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pEncryptionCertificate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ENCRYPTION_CERTIFICATE", 96, IN },
		{1, "dwCapabilities", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "StartServiceA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwNumServiceArgs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpServiceArgVectors", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "StartServiceCtrlDispatcherA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpServiceStartTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SERVICE_TABLE_ENTRYA", 64, IN },
	}
	},
	{ "StartServiceCtrlDispatcherW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpServiceStartTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SERVICE_TABLE_ENTRYW", 64, IN },
	}
	},
	{ "StartServiceW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwNumServiceArgs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpServiceArgVectors", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "StartTraceA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{1, "InstanceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_TRACE_PROPERTIES", 960, INOUT },
	}
	},
	{ "StartTraceW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{1, "InstanceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_TRACE_PROPERTIES", 960, INOUT },
	}
	},
	{ "StopTraceA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "InstanceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_TRACE_PROPERTIES", 960, OUT },
	}
	},
	{ "StopTraceW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "InstanceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_TRACE_PROPERTIES", 960, OUT },
	}
	},
	{ "SystemFunction036",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "RandomBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "RandomBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SystemFunction040",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Memory", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "MemorySize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SystemFunction041",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Memory", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "MemorySize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TraceEvent",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "EventTrace", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_TRACE_HEADER", 384, IN },
	}
	},
	{ "TraceEventInstance",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "EventTrace", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_INSTANCE_HEADER", 448, IN },
		{2, "InstInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "EVENT_INSTANCE_INFO", 64, IN },
		{3, "ParentInstInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "EVENT_INSTANCE_INFO", 64, IN },
	}
	},
	{ "TraceMessage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "LoggerHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "MessageFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "MessageGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{3, "MessageNumber", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "TraceMessageVa",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "LoggerHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "MessageFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "MessageGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{3, "MessageNumber", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{4, "MessageArgList", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "TraceSetInformation",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "InformationClass", NKT_DBOBJCLASS_Enumeration, "_TRACE_QUERY_INFO_CLASS", 32, IN },
		{2, "TraceInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "InformationLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TreeResetNamedSecurityInfoA",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pObjectName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "ObjectType", NKT_DBOBJCLASS_Enumeration, "_SE_OBJECT_TYPE", 32, IN },
		{2, "SecurityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pDacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{6, "pSacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{7, "KeepExplicit", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "fnProgress", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{9, "ProgressInvokeSetting", NKT_DBOBJCLASS_Enumeration, "_PROGRESS_INVOKE_SETTING", 32, IN },
		{10, "Args", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "TreeResetNamedSecurityInfoW",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ObjectType", NKT_DBOBJCLASS_Enumeration, "_SE_OBJECT_TYPE", 32, IN },
		{2, "SecurityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pDacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{6, "pSacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{7, "KeepExplicit", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "fnProgress", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{9, "ProgressInvokeSetting", NKT_DBOBJCLASS_Enumeration, "_PROGRESS_INVOKE_SETTING", 32, IN },
		{10, "Args", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "TreeSetNamedSecurityInfoA",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pObjectName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "ObjectType", NKT_DBOBJCLASS_Enumeration, "_SE_OBJECT_TYPE", 32, IN },
		{2, "SecurityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pDacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{6, "pSacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{7, "dwAction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "fnProgress", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{9, "ProgressInvokeSetting", NKT_DBOBJCLASS_Enumeration, "_PROGRESS_INVOKE_SETTING", 32, IN },
		{10, "Args", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "TreeSetNamedSecurityInfoW",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ObjectType", NKT_DBOBJCLASS_Enumeration, "_SE_OBJECT_TYPE", 32, IN },
		{2, "SecurityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pDacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{6, "pSacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{7, "dwAction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "fnProgress", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{9, "ProgressInvokeSetting", NKT_DBOBJCLASS_Enumeration, "_PROGRESS_INVOKE_SETTING", 32, IN },
		{10, "Args", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "UninstallApplication",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "ProductCode", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnlockServiceDatabase",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ScLock", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "UnregisterTraceGuids",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "RegistrationHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "UpdateTraceA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "InstanceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_TRACE_PROPERTIES", 960, INOUT },
	}
	},
	{ "UpdateTraceW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "TraceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "InstanceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_TRACE_PROPERTIES", 960, INOUT },
	}
	},
	{ "WriteEncryptedFileRaw",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pfImportCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pvCallbackContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "pvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
};
unsigned AdvAPI32arraySize = (sizeof(AdvAPI32_info) / sizeof(AdvAPI32_info[0]));