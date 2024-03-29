// The following code was obtained using a slightly modified version
// of the Deviare parser from the PyREBox project. Credits:
// https://github.com/Cisco-Talos/pyrebox/blob/master/mw_monitor2/deviare_db_parser.py

#include "../pyrebox.h"

libcall_info_t KernelBase_info[] = {
	{ "AccessCheck",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ClientToken", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
		{4, "PrivilegeSet", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PRIVILEGE_SET", 160, OUT },
		{5, "PrivilegeSetLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "GrantedAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{7, "AccessStatus", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
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
		{2, "ClientToken", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ObjectTypeList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_TYPE_LIST", 128, INOUT },
		{5, "ObjectTypeListLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, OUT },
		{7, "PrivilegeSet", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PRIVILEGE_SET", 160, OUT },
		{8, "PrivilegeSetLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "GrantedAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{10, "AccessStatus", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AccessCheckByTypeAndAuditAlarmW",16,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ObjectTypeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "ObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{5, "PrincipalSelfSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "AuditType", NKT_DBOBJCLASS_Enumeration, "_AUDIT_EVENT_TYPE", 32, IN },
		{8, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "ObjectTypeList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_TYPE_LIST", 128, INOUT },
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
		{2, "ClientToken", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ObjectTypeList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_TYPE_LIST", 128, INOUT },
		{5, "ObjectTypeListLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, OUT },
		{7, "PrivilegeSet", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PRIVILEGE_SET", 160, OUT },
		{8, "PrivilegeSetLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "GrantedAccessList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{10, "AccessStatusList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AccessCheckByTypeResultListAndAuditAlarmByHandleW",17,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ClientToken", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "ObjectTypeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "ObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{6, "PrincipalSelfSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "AuditType", NKT_DBOBJCLASS_Enumeration, "_AUDIT_EVENT_TYPE", 32, IN },
		{9, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "ObjectTypeList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_TYPE_LIST", 128, INOUT },
		{11, "ObjectTypeListLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{12, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
		{13, "ObjectCreation", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{14, "GrantedAccessList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
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
		{4, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{5, "PrincipalSelfSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "AuditType", NKT_DBOBJCLASS_Enumeration, "_AUDIT_EVENT_TYPE", 32, IN },
		{8, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "ObjectTypeList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_TYPE_LIST", 128, INOUT },
		{10, "ObjectTypeListLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{11, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
		{12, "ObjectCreation", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{13, "GrantedAccessList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{14, "AccessStatusList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{15, "pfGenerateOnClose", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AcquireSRWLockExclusive",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "SRWLock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTL_SRWLOCK", 64, INOUT },
	}
	},
	{ "AcquireSRWLockShared",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "SRWLock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTL_SRWLOCK", 64, INOUT },
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
	{ "AddDllDirectory",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "NewDirectory", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
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
	{ "AdjustTokenGroups",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TokenHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "ResetToDefault", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "NewState", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TOKEN_GROUPS", 192, IN },
		{3, "BufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "PreviousState", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TOKEN_GROUPS", 192, OUT },
		{5, "ReturnLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "AdjustTokenPrivileges",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TokenHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
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
		{2, "nSubAuthority0", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "nSubAuthority1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "nSubAuthority2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{5, "nSubAuthority3", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{6, "nSubAuthority4", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{7, "nSubAuthority5", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{8, "nSubAuthority6", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{9, "nSubAuthority7", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
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
	{ "AreFileApisANSI",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "Beep",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFreq", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "dwDuration", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CallbackMayRunLong",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pci", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
	}
	},
	{ "CancelIoEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, IN },
	}
	},
	{ "CancelThreadpoolIo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pio", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
	}
	},
	{ "CancelWaitableTimer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hTimer", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "ChangeTimerQueueTimer",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TimerQueue", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "Timer", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, INOUT },
		{2, "DueTime", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Period", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CheckTokenMembership",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TokenHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "SidToCheck", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "IsMember", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CloseHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hObject", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "CloseThreadpool",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "ptpp", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
	}
	},
	{ "CloseThreadpoolCleanupGroup",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "ptpcg", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
	}
	},
	{ "CloseThreadpoolCleanupGroupMembers",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "ptpcg", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{1, "fCancelPendingCallbacks", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pvCleanupContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "CloseThreadpoolIo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pio", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
	}
	},
	{ "CloseThreadpoolTimer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pti", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
	}
	},
	{ "CloseThreadpoolWait",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pwa", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
	}
	},
	{ "CloseThreadpoolWork",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pwk", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
	}
	},
	{ "CompareFileTime",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileTime1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{1, "lpFileTime2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
	}
	},
	{ "CompareStringA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "dwCmpFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpString1", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{3, "cchCount1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{4, "lpString2", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{5, "cchCount2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CompareStringEx",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpLocaleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwCmpFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpString1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cchCount1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{4, "lpString2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{5, "cchCount2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{6, "lpVersionInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_nlsversioninfo", 256, UNK },
		{7, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{8, "lParam", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
	}
	},
	{ "CompareStringOrdinal",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpString1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "cchCount1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpString2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cchCount2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "bIgnoreCase", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CompareStringW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "dwCmpFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpString1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "cchCount1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{4, "lpString2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{5, "cchCount2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ConnectNamedPipe",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hNamedPipe", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, INOUT },
	}
	},
	{ "ConvertDefaultLocale",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
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
	{ "CreateDirectoryA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpPathName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpSecurityAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
	}
	},
	{ "CreateDirectoryW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpSecurityAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
	}
	},
	{ "CreateEventA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpEventAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
		{1, "bManualReset", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "bInitialState", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CreateEventExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpEventAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
		{1, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateEventExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpEventAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
		{1, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateEventW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpEventAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
		{1, "bManualReset", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "bInitialState", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CreateFileA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwShareMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpSecurityAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
		{4, "dwCreationDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwFlagsAndAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "hTemplateFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "CreateFileMappingNumaW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpFileMappingAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
		{2, "flProtect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwMaximumSizeHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwMaximumSizeLow", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "nndPreferred", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateFileMappingW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpFileMappingAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, UNK },
		{2, "flProtect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwMaximumSizeHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwMaximumSizeLow", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CreateFileW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwShareMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpSecurityAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
		{4, "dwCreationDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwFlagsAndAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "hTemplateFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "CreateIoCompletionPort",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "FileHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "ExistingCompletionPort", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "CompletionKey", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "NumberOfConcurrentThreads", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateMutexA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpMutexAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
		{1, "bInitialOwner", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CreateMutexExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpMutexAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
		{1, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateMutexExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpMutexAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
		{1, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateMutexW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpMutexAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
		{1, "bInitialOwner", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CreateNamedPipeW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwOpenMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwPipeMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "nMaxInstances", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "nOutBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "nInBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "nDefaultTimeOut", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "lpSecurityAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
	}
	},
	{ "CreatePipe",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hReadPipe", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
		{1, "hWritePipe", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
		{2, "lpPipeAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
		{3, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreatePrivateObjectSecurity",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ParentDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "CreatorDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "NewDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{3, "IsDirectoryObject", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "Token", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
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
		{6, "Token", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
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
		{7, "Token", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{8, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
	}
	},
	{ "CreateRemoteThread",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpThreadAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
		{2, "dwStackSize", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "lpStartAddress", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "lpParameter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "dwCreationFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpThreadId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CreateRemoteThreadEx",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpThreadAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
		{2, "dwStackSize", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "lpStartAddress", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "lpParameter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "dwCreationFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpAttributeList", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{7, "lpThreadId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CreateRestrictedToken",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ExistingTokenHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "DisableSidCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "SidsToDisable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID_AND_ATTRIBUTES", 128, IN },
		{4, "DeletePrivilegeCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "PrivilegesToDelete", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_LUID_AND_ATTRIBUTES", 96, IN },
		{6, "RestrictedSidCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "SidsToRestrict", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID_AND_ATTRIBUTES", 128, IN },
		{8, "NewTokenHandle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
	}
	},
	{ "CreateSemaphoreExW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpSemaphoreAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
		{1, "lInitialCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lMaximumCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{5, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateThread",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpThreadAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, UNK },
		{1, "dwStackSize", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{2, "lpStartAddress", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{3, "lpParameter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{4, "dwCreationFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{5, "lpThreadId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "CreateThreadpool",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, OUT },
		{0, "reserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "CreateThreadpoolCleanupGroup",0,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, OUT },
	}
	},
	{ "CreateThreadpoolIo",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, OUT },
		{0, "fl", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pfnio", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{3, "pcbe", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TP_CALLBACK_ENVIRON_V3", 576, IN },
	}
	},
	{ "CreateThreadpoolTimer",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, OUT },
		{0, "pfnti", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{2, "pcbe", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TP_CALLBACK_ENVIRON_V3", 576, IN },
	}
	},
	{ "CreateThreadpoolWait",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, OUT },
		{0, "pfnwa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{2, "pcbe", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TP_CALLBACK_ENVIRON_V3", 576, IN },
	}
	},
	{ "CreateThreadpoolWork",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, OUT },
		{0, "pfnwk", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{2, "pcbe", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TP_CALLBACK_ENVIRON_V3", 576, IN },
	}
	},
	{ "CreateTimerQueue",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
	}
	},
	{ "CreateTimerQueueTimer",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "phNewTimer", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
		{1, "TimerQueue", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "Parameter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "DueTime", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "Period", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateWaitableTimerExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpTimerAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
		{1, "lpTimerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
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
	{ "DebugBreak",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "DecodePointer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "Ptr", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "DecodeSystemPointer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "Ptr", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "DefineDosDeviceW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpDeviceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpTargetPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DeleteAce",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, INOUT },
		{1, "dwAceIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeleteCriticalSection",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "lpCriticalSection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTL_CRITICAL_SECTION", 320, INOUT },
	}
	},
	{ "DeleteFileA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "DeleteFileW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DeleteProcThreadAttributeList",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "lpAttributeList", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
	}
	},
	{ "DeleteTimerQueueEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TimerQueue", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "CompletionEvent", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "DeleteTimerQueueTimer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TimerQueue", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "Timer", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "CompletionEvent", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "DeleteVolumeMountPointW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszVolumeMountPoint", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DestroyPrivateObjectSecurity",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ObjectDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "DeviceIoControl",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hDevice", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwIoControlCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpInBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "nInBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpOutBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{5, "nOutBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpBytesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{7, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, INOUT },
	}
	},
	{ "DisableThreadLibraryCalls",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hLibModule", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
	}
	},
	{ "DisassociateCurrentThreadFromCallback",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pci", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
	}
	},
	{ "DisconnectNamedPipe",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hNamedPipe", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "DuplicateHandle",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hSourceProcessHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "hSourceHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "hTargetProcessHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "lpTargetHandle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
		{4, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "bInheritHandle", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DuplicateToken",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ExistingTokenHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "ImpersonationLevel", NKT_DBOBJCLASS_Enumeration, "_SECURITY_IMPERSONATION_LEVEL", 32, IN },
		{2, "DuplicateTokenHandle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
	}
	},
	{ "DuplicateTokenEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hExistingToken", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpTokenAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 192, IN },
		{3, "ImpersonationLevel", NKT_DBOBJCLASS_Enumeration, "_SECURITY_IMPERSONATION_LEVEL", 32, IN },
		{4, "TokenType", NKT_DBOBJCLASS_Enumeration, "_TOKEN_TYPE", 32, IN },
		{5, "phNewToken", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
	}
	},
	{ "EncodePointer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "Ptr", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "EncodeSystemPointer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "Ptr", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "EnterCriticalSection",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "lpCriticalSection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTL_CRITICAL_SECTION", 320, INOUT },
	}
	},
	{ "EnumCalendarInfoExEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCalInfoEnumProcExEx", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{1, "lpLocaleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "Calendar", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "lpReserved", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{4, "CalType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{5, "lParam", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
	}
	},
	{ "EnumCalendarInfoExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpCalInfoEnumProcEx", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{1, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Calendar", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "CalType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumCalendarInfoW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpCalInfoEnumProc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{1, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Calendar", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "CalType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumDateFormatsExEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpDateFmtEnumProcExEx", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{1, "lpLocaleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "lParam", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
	}
	},
	{ "EnumDateFormatsExW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpDateFmtEnumProcEx", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumDateFormatsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpDateFmtEnumProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumLanguageGroupLocalesW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpLangGroupLocaleEnumProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "LanguageGroup", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
	}
	},
	{ "EnumSystemCodePagesW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpCodePageEnumProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumSystemLanguageGroupsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpLanguageGroupEnumProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
	}
	},
	{ "EnumSystemLocalesA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpLocaleEnumProc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "EnumSystemLocalesEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpLocaleEnumProcEx", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{3, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "EnumSystemLocalesW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpLocaleEnumProc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "EnumTimeFormatsEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpTimeFmtEnumProcEx", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{1, "lpLocaleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "lParam", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
	}
	},
	{ "EnumTimeFormatsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpTimeFmtEnumProc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{1, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "EnumUILanguagesW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpUILanguageEnumProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
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
	{ "ExitProcess",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "uExitCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ExitThread",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "dwExitCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ExpandEnvironmentStringsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpSrc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpDst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{2, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ExpandEnvironmentStringsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpSrc", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpDst", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FatalAppExitA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "uAction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpMessageText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "FatalAppExitW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "uAction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpMessageText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "FileTimeToLocalFileTime",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{1, "lpLocalFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, OUT },
	}
	},
	{ "FileTimeToSystemTime",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{1, "lpSystemTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, OUT },
	}
	},
	{ "FindClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFindFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, INOUT },
	}
	},
	{ "FindCloseChangeNotification",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hChangeHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "FindFirstChangeNotificationA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpPathName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "bWatchSubtree", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dwNotifyFilter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindFirstChangeNotificationW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "bWatchSubtree", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dwNotifyFilter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindFirstFileA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpFindFileData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WIN32_FIND_DATAA", 2560, OUT },
	}
	},
	{ "FindFirstFileExA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "fInfoLevelId", NKT_DBOBJCLASS_Enumeration, "_FINDEX_INFO_LEVELS", 32, IN },
		{2, "lpFindFileData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "fSearchOp", NKT_DBOBJCLASS_Enumeration, "_FINDEX_SEARCH_OPS", 32, IN },
		{4, "lpSearchFilter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{5, "dwAdditionalFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindFirstFileExW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "fInfoLevelId", NKT_DBOBJCLASS_Enumeration, "_FINDEX_INFO_LEVELS", 32, IN },
		{2, "lpFindFileData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "fSearchOp", NKT_DBOBJCLASS_Enumeration, "_FINDEX_SEARCH_OPS", 32, IN },
		{4, "lpSearchFilter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{5, "dwAdditionalFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindFirstFileW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpFindFileData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WIN32_FIND_DATAW", 4736, OUT },
	}
	},
	{ "FindFirstFreeAce",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{1, "pAce", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "FindFirstVolumeW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpszVolumeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{1, "cchBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindNextChangeNotification",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hChangeHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "FindNextFileA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFindFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpFindFileData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WIN32_FIND_DATAA", 2560, OUT },
	}
	},
	{ "FindNextFileW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFindFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpFindFileData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WIN32_FIND_DATAW", 4736, OUT },
	}
	},
	{ "FindNextVolumeW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFindVolume", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpszVolumeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "cchBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindNLSString",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "dwFindNLSStringFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpStringSource", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "cchSource", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{4, "lpStringValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{5, "cchValue", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{6, "pcchFound", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "FindNLSStringEx",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpLocaleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "dwFindNLSStringFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpStringSource", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "cchSource", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{4, "lpStringValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{5, "cchValue", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{6, "pcchFound", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{7, "lpVersionInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_nlsversioninfo", 256, UNK },
		{8, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{9, "sortHandle", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
	}
	},
	{ "FindResourceExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hModule", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "lpType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "wLanguage", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
	}
	},
	{ "FindStringOrdinal",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFindStringOrdinalFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpStringSource", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchSource", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpStringValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "cchValue", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "bIgnoreCase", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindVolumeClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFindVolume", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "FlsAlloc",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "FlsFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFlsIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FlsGetValue",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "dwFlsIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FlsSetValue",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFlsIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpFlsData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FlushFileBuffers",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "FlushProcessWriteBuffers",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "FlushViewOfFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpBaseAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwNumberOfBytesToFlush", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "FoldStringW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwMapFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "lpSrcStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "cchSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{3, "lpDestStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{4, "cchDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "FormatMessageA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSource", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwMessageId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwLanguageId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Arguments", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "FormatMessageW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSource", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwMessageId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwLanguageId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{5, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Arguments", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "FreeEnvironmentStringsA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "penv", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "FreeEnvironmentStringsW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "penv", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "FreeLibrary",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hLibModule", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
	}
	},
	{ "FreeLibraryAndExitThread",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "hLibModule", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "dwExitCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FreeLibraryWhenCallbackReturns",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pci", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{1, "mod", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "FreeResource",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hResData", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
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
	{ "GetACP",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetCalendarInfoEx",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpLocaleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "Calendar", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpReserved", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "CalType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{4, "lpCalData", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{5, "cchData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{6, "lpValue", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetCalendarInfoW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Calendar", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "CalType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpCalData", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{4, "cchData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "lpValue", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetCommandLineA",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
	}
	},
	{ "GetCommandLineW",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
	}
	},
	{ "GetComputerNameExA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "NameType", NKT_DBOBJCLASS_Enumeration, "_COMPUTER_NAME_FORMAT", 32, IN },
		{1, "lpBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{2, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetComputerNameExW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "NameType", NKT_DBOBJCLASS_Enumeration, "_COMPUTER_NAME_FORMAT", 32, IN },
		{1, "lpBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetCPInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "CodePage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpCPInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_cpinfo", 160, OUT },
	}
	},
	{ "GetCPInfoExW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "CodePage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpCPInfoEx", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_cpinfoexW", 4352, OUT },
	}
	},
	{ "GetCurrencyFormatEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpLocaleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "lpFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_currencyfmtW", 384, UNK },
		{4, "lpCurrencyStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{5, "cchCurrency", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetCurrencyFormatW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_currencyfmtW", 384, IN },
		{4, "lpCurrencyStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{5, "cchCurrency", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCurrentDirectoryA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "nBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
	}
	},
	{ "GetCurrentDirectoryW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "nBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
	}
	},
	{ "GetCurrentProcess",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
	}
	},
	{ "GetCurrentProcessId",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetCurrentThread",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
	}
	},
	{ "GetCurrentThreadId",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetDiskFreeSpaceA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpRootPathName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpSectorsPerCluster", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{2, "lpBytesPerSector", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "lpNumberOfFreeClusters", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "lpTotalNumberOfClusters", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetDiskFreeSpaceExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpDirectoryName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpFreeBytesAvailableToCaller", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_ULARGE_INTEGER", 64, UNK },
		{2, "lpTotalNumberOfBytes", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_ULARGE_INTEGER", 64, OUT },
		{3, "lpTotalNumberOfFreeBytes", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_ULARGE_INTEGER", 64, OUT },
	}
	},
	{ "GetDiskFreeSpaceExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpDirectoryName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpFreeBytesAvailableToCaller", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_ULARGE_INTEGER", 64, UNK },
		{2, "lpTotalNumberOfBytes", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_ULARGE_INTEGER", 64, OUT },
		{3, "lpTotalNumberOfFreeBytes", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_ULARGE_INTEGER", 64, OUT },
	}
	},
	{ "GetDiskFreeSpaceW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpRootPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpSectorsPerCluster", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{2, "lpBytesPerSector", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "lpNumberOfFreeClusters", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "lpTotalNumberOfClusters", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetDriveTypeA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpRootPathName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetDriveTypeW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpRootPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetDynamicTimeZoneInformation",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pTimeZoneInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TIME_DYNAMIC_ZONE_INFORMATION", 3456, OUT },
	}
	},
	{ "GetEnvironmentStrings",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
	}
	},
	{ "GetEnvironmentStringsW",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
	}
	},
	{ "GetEnvironmentVariableA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "lpBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetEnvironmentVariableW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lpBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetErrorMode",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetExitCodeProcess",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpExitCode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetExitCodeThread",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hThread", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpExitCode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetFileAttributesA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetFileAttributesExA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "fInfoLevelId", NKT_DBOBJCLASS_Enumeration, "_GET_FILEEX_INFO_LEVELS", 32, IN },
		{2, "lpFileInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
	}
	},
	{ "GetFileAttributesExW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "fInfoLevelId", NKT_DBOBJCLASS_Enumeration, "_GET_FILEEX_INFO_LEVELS", 32, IN },
		{2, "lpFileInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
	}
	},
	{ "GetFileAttributesW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetFileInformationByHandle",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpFileInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_BY_HANDLE_FILE_INFORMATION", 416, OUT },
	}
	},
	{ "GetFileMUIInfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pcwszFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "pFileMUIInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILEMUIINFO", 640, UNK },
		{3, "pcbFileMUIInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetFileMUIPath",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pcwszFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "pwszLanguage", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "pcchLanguage", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{4, "pwszFileMUIPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{5, "pcchFileMUIPath", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{6, "pululEnumerator", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
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
	{ "GetFileSize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpFileSizeHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetFileSizeEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpFileSize", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, OUT },
	}
	},
	{ "GetFileTime",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpCreationTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, OUT },
		{2, "lpLastAccessTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, OUT },
		{3, "lpLastWriteTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, OUT },
	}
	},
	{ "GetFileType",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "GetFinalPathNameByHandleA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpszFilePath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{2, "cchFilePath", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetFinalPathNameByHandleW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpszFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "cchFilePath", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetFullPathNameA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "nBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "lpFilePart", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, OUT },
	}
	},
	{ "GetFullPathNameW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "nBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{3, "lpFilePart", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
	}
	},
	{ "GetHandleInformation",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hObject", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpdwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetKernelObjectSecurity",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Handle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "RequestedInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "nLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpnLengthNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetLastError",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetLengthSid",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetLocaleInfoA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "LCType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpLCData", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "cchData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetLocaleInfoEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpLocaleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "LCType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpLCData", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "cchData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetLocaleInfoW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "LCType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpLCData", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{3, "cchData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetLocalTime",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "lpSystemTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, OUT },
	}
	},
	{ "GetLogicalDrives",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetLogicalDriveStringsW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "nBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
	}
	},
	{ "GetLogicalProcessorInformation",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Buffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION", 256, OUT },
		{1, "ReturnedLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetLogicalProcessorInformationEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "RelationshipType", NKT_DBOBJCLASS_Enumeration, "_LOGICAL_PROCESSOR_RELATIONSHIP", 32, IN },
		{1, "Buffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX", 640, OUT },
		{2, "ReturnedLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetLongPathNameA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszShortPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpszLongPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{2, "cchBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetLongPathNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszShortPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszLongPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "cchBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetModuleFileNameA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hModule", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpFilename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{2, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetModuleFileNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hModule", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpFilename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetModuleHandleA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpModuleName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetModuleHandleExA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpModuleName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "phModule", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
	}
	},
	{ "GetModuleHandleExW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpModuleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "phModule", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
	}
	},
	{ "GetModuleHandleW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpModuleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetNamedPipeClientComputerNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Pipe", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "ClientComputerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "ClientComputerNameLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetNLSVersion",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Function", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpVersionInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_nlsversioninfo", 256, UNK },
	}
	},
	{ "GetNLSVersionEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "function", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpLocaleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpVersionInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_nlsversioninfoex", 256, INOUT },
	}
	},
	{ "GetNumberFormatEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpLocaleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "lpFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_numberfmtW", 320, UNK },
		{4, "lpNumberStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{5, "cchNumber", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetNumberFormatW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_numberfmtW", 320, IN },
		{4, "lpNumberStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{5, "cchNumber", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetOEMCP",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetOverlappedResult",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, IN },
		{2, "lpNumberOfBytesTransferred", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "bWait", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetPriorityClass",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
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
	{ "GetProcAddress",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, OUT },
		{0, "hModule", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpProcName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetProcessHeap",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
	}
	},
	{ "GetProcessHeaps",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "NumberOfHeaps", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ProcessHeaps", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
	}
	},
	{ "GetProcessId",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Process", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "GetProcessIdOfThread",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Thread", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "GetProcessPreferredUILanguages",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pulNumLanguages", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{2, "pwszLanguagesBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "pcchLanguagesBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetProcessTimes",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpCreationTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, OUT },
		{2, "lpExitTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, OUT },
		{3, "lpKernelTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, OUT },
		{4, "lpUserTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, OUT },
	}
	},
	{ "GetProcessVersion",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "ProcessId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetQueuedCompletionStatus",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "CompletionPort", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpNumberOfBytesTransferred", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{2, "lpCompletionKey", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
		{3, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_OVERLAPPED", 256, OUT },
		{4, "dwMilliseconds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetQueuedCompletionStatusEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "CompletionPort", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpCompletionPortEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED_ENTRY", 256, OUT },
		{2, "ulCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ulNumEntriesRemoved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "dwMilliseconds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "fAlertable", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
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
	{ "GetShortPathNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszLongPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszShortPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "cchBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
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
	{ "GetStartupInfoW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "lpStartupInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STARTUPINFOW", 832, OUT },
	}
	},
	{ "GetStdHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "nStdHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetStringTypeA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwInfoType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpSrcStr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cchSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{4, "lpCharType", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "GetStringTypeExW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "dwInfoType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpSrcStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "cchSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{4, "lpCharType", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "GetStringTypeW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwInfoType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSrcStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "cchSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{3, "lpCharType", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetSystemDefaultLangID",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, OUT },
	}
	},
	{ "GetSystemDefaultLCID",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetSystemDefaultLocaleName",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpLocaleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{1, "cchLocaleName", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetSystemDefaultUILanguage",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, OUT },
	}
	},
	{ "GetSystemDirectoryA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{1, "uSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetSystemDirectoryW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{1, "uSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetSystemInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "lpSystemInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEM_INFO", 384, OUT },
	}
	},
	{ "GetSystemPreferredUILanguages",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pulNumLanguages", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{2, "pwszLanguagesBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "pcchLanguagesBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetSystemTime",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "lpSystemTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, OUT },
	}
	},
	{ "GetSystemTimeAdjustment",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpTimeAdjustment", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{1, "lpTimeIncrement", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{2, "lpTimeAdjustmentDisabled", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetSystemTimeAsFileTime",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "lpSystemTimeAsFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, OUT },
	}
	},
	{ "GetSystemWindowsDirectoryA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{1, "uSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetSystemWindowsDirectoryW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{1, "uSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTempFileNameW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpPrefixString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "uUnique", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpTempFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
	}
	},
	{ "GetThreadId",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "Thread", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "GetThreadLocale",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetThreadPreferredUILanguages",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pulNumLanguages", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{2, "pwszLanguagesBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "pcchLanguagesBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetThreadPriority",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hThread", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "GetThreadPriorityBoost",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hThread", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pDisablePriorityBoost", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetThreadUILanguage",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, OUT },
	}
	},
	{ "GetTickCount",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetTickCount64",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
	}
	},
	{ "GetTimeZoneInformation",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpTimeZoneInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TIME_ZONE_INFORMATION", 1376, OUT },
	}
	},
	{ "GetTimeZoneInformationForYear",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "wYear", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "pdtzi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TIME_DYNAMIC_ZONE_INFORMATION", 3456, IN },
		{2, "ptzi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TIME_ZONE_INFORMATION", 1376, OUT },
	}
	},
	{ "GetTokenInformation",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TokenHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "TokenInformationClass", NKT_DBOBJCLASS_Enumeration, "_TOKEN_INFORMATION_CLASS", 32, IN },
		{2, "TokenInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "TokenInformationLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ReturnLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetUILanguageInfo",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pwmszLanguage", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "pwszFallbackLanguages", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "pcchFallbackLanguages", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{4, "pAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetUserDefaultLangID",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, OUT },
	}
	},
	{ "GetUserDefaultLCID",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetUserDefaultLocaleName",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpLocaleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{1, "cchLocaleName", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetUserDefaultUILanguage",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, OUT },
	}
	},
	{ "GetUserPreferredUILanguages",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "pulNumLanguages", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{2, "pwszLanguagesBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "pcchLanguagesBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetVersion",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetVersionExA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpVersionInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OSVERSIONINFOA", 1184, UNK },
	}
	},
	{ "GetVersionExW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpVersionInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OSVERSIONINFOW", 2208, UNK },
	}
	},
	{ "GetVolumeInformationByHandleW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpVolumeNameBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "nVolumeNameSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpVolumeSerialNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "lpMaximumComponentLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{5, "lpFileSystemFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{6, "lpFileSystemNameBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{7, "nFileSystemNameSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetVolumeInformationW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpRootPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpVolumeNameBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "nVolumeNameSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpVolumeSerialNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "lpMaximumComponentLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{5, "lpFileSystemFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{6, "lpFileSystemNameBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{7, "nFileSystemNameSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetVolumePathNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszVolumePathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "cchBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindowsAccountDomainSid",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pDomainSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{2, "cbDomainSid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetWindowsDirectoryA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{1, "uSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindowsDirectoryW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{1, "uSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GlobalAlloc",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwBytes", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "GlobalFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hMem", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "GlobalMemoryStatusEx",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MEMORYSTATUSEX", 512, INOUT },
	}
	},
	{ "HeapAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "hHeap", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwBytes", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "HeapCompact",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hHeap", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HeapCreate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "flOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwInitialSize", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "dwMaximumSize", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "HeapDestroy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hHeap", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "HeapFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hHeap", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpMem", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "HeapLock",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hHeap", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "HeapQueryInformation",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "HeapHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "HeapInformationClass", NKT_DBOBJCLASS_Enumeration, "_HEAP_INFORMATION_CLASS", 32, IN },
		{2, "HeapInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "HeapInformationLength", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{4, "ReturnLength", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
	}
	},
	{ "HeapReAlloc",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "hHeap", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpMem", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "dwBytes", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "HeapSetInformation",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "HeapHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "HeapInformationClass", NKT_DBOBJCLASS_Enumeration, "_HEAP_INFORMATION_CLASS", 32, IN },
		{2, "HeapInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "HeapInformationLength", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "HeapSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hHeap", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpMem", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "HeapSummary",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hHeap", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpSummary", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_HEAP_SUMMARY", 320, UNK },
	}
	},
	{ "HeapUnlock",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hHeap", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "HeapValidate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hHeap", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpMem", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "HeapWalk",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hHeap", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PROCESS_HEAP_ENTRY", 320, INOUT },
	}
	},
	{ "ImpersonateAnonymousToken",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ThreadHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "ImpersonateLoggedOnUser",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hToken", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "ImpersonateNamedPipeClient",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hNamedPipe", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
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
	{ "InitializeCriticalSection",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "lpCriticalSection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTL_CRITICAL_SECTION", 320, OUT },
	}
	},
	{ "InitializeCriticalSectionAndSpinCount",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpCriticalSection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTL_CRITICAL_SECTION", 320, OUT },
		{1, "dwSpinCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitializeCriticalSectionEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpCriticalSection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTL_CRITICAL_SECTION", 320, OUT },
		{1, "dwSpinCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitializeProcThreadAttributeList",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpAttributeList", NKT_DBOBJCLASS_Typedef, 0, 0, OUT },
		{1, "dwAttributeCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "lpSize", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
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
	{ "InitializeSListHead",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "ListHead", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SLIST_HEADER", 128, INOUT },
	}
	},
	{ "InitializeSRWLock",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "SRWLock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTL_SRWLOCK", 64, OUT },
	}
	},
	{ "InterlockedFlushSList",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SLIST_ENTRY", 64, OUT },
		{0, "ListHead", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SLIST_HEADER", 128, INOUT },
	}
	},
	{ "InterlockedPopEntrySList",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SLIST_ENTRY", 64, OUT },
		{0, "ListHead", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SLIST_HEADER", 128, INOUT },
	}
	},
	{ "InterlockedPushEntrySList",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SLIST_ENTRY", 64, OUT },
		{0, "ListHead", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SLIST_HEADER", 128, INOUT },
		{1, "ListEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SLIST_ENTRY", 64, INOUT },
	}
	},
	{ "IsDBCSLeadByte",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TestChar", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "IsDBCSLeadByteEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "CodePage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "TestChar", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "IsDebuggerPresent",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "IsNLSDefinedString",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Function", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpVersionInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_nlsversioninfo", 256, IN },
		{3, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "cchStr", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsProcessInJob",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ProcessHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "JobHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "IsThreadpoolTimerSet",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pti", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
	}
	},
	{ "IsTokenRestricted",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TokenHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "IsValidAcl",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pAcl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "IsValidCodePage",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "CodePage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsValidLanguageGroup",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "LanguageGroup", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsValidLocale",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsValidLocaleName",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpLocaleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
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
	{ "IsWow64Process",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "Wow64Process", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "LCIDToLocaleName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "cchName", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LCMapStringA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwMapFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpSrcStr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cchSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lpDestStr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "cchDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LCMapStringEx",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpLocaleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "dwMapFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpSrcStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "cchSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{4, "lpDestStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{5, "cchDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{6, "lpVersionInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_nlsversioninfo", 256, UNK },
		{7, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{8, "sortHandle", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, UNK },
	}
	},
	{ "LCMapStringW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwMapFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpSrcStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cchSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lpDestStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{5, "cchDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LeaveCriticalSection",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "lpCriticalSection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTL_CRITICAL_SECTION", 320, INOUT },
	}
	},
	{ "LeaveCriticalSectionWhenCallbackReturns",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pci", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{1, "pcs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTL_CRITICAL_SECTION", 320, INOUT },
	}
	},
	{ "LoadLibraryExA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpLibFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LoadLibraryExW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpLibFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LoadResource",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hModule", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "hResInfo", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "LoadStringA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "uID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{3, "cchBufferMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "LoadStringByReference",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "Language", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "SourceString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "Buffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{4, "cchBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{5, "Directory", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{6, "pcchBufferOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "LoadStringW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "uID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{3, "cchBufferMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "LocalAlloc",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uBytes", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "LocaleNameToLCID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LocalFileTimeToFileTime",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpLocalFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{1, "lpFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, OUT },
	}
	},
	{ "LocalFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hMem", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "LocalLock",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "hMem", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "LocalReAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hMem", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "uBytes", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LocalUnlock",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hMem", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "LockFile",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwFileOffsetLow", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFileOffsetHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "nNumberOfBytesToLockLow", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "nNumberOfBytesToLockHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LockFileEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{3, "nNumberOfBytesToLockLow", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "nNumberOfBytesToLockHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, INOUT },
	}
	},
	{ "LockResource",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "hResData", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "lstrcmpA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpString1", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "lpString2", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "lstrcmpiA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpString1", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "lpString2", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "lstrcmpiW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpString1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lpString2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "lstrcmpW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpString1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lpString2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "lstrcpynA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "lpString1", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{1, "lpString2", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "iMaxLength", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "lstrcpynW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "lpString1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{1, "lpString2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "iMaxLength", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "lstrlenA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "lstrlenW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "MakeAbsoluteSD",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSelfRelativeSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{1, "pAbsoluteSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{2, "lpdwAbsoluteSecurityDescriptorSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
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
		{0, "pAbsoluteSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{1, "pSelfRelativeSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
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
	{ "MapViewOfFile",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "hFileMappingObject", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFileOffsetHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFileOffsetLow", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwNumberOfBytesToMap", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "MapViewOfFileEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "hFileMappingObject", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFileOffsetHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFileOffsetLow", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwNumberOfBytesToMap", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{5, "lpBaseAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "MapViewOfFileExNuma",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "hFileMappingObject", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFileOffsetHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFileOffsetLow", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwNumberOfBytesToMap", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{5, "lpBaseAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "nndPreferred", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MultiByteToWideChar",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "CodePage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpMultiByteStr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbMultiByte", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lpWideCharStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{5, "cchWideChar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NeedCurrentDirectoryForExePathA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ExeName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NeedCurrentDirectoryForExePathW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ExeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
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
	{ "ObjectDeleteAuditAlarmW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "GenerateOnClose", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
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
		{5, "ClientToken", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{6, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "GrantedAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "Privileges", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PRIVILEGE_SET", 160, IN },
		{9, "ObjectCreation", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{10, "AccessGranted", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{11, "GenerateOnClose", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "ObjectPrivilegeAuditAlarmW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "HandleId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ClientToken", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Privileges", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PRIVILEGE_SET", 160, IN },
		{5, "AccessGranted", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenEventA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "bInheritHandle", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "OpenEventW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "bInheritHandle", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "OpenFileMappingW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "bInheritHandle", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "OpenMutexW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "bInheritHandle", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "OpenProcess",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "bInheritHandle", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dwProcessId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenProcessToken",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ProcessHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "TokenHandle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
	}
	},
	{ "OpenSemaphoreW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "bInheritHandle", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "OpenThread",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "bInheritHandle", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dwThreadId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenThreadToken",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ThreadHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OpenAsSelf", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "TokenHandle", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
	}
	},
	{ "OpenWaitableTimerW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "bInheritHandle", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpTimerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "OutputDebugStringA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "lpOutputString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "OutputDebugStringW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "lpOutputString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "PeekNamedPipe",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hNamedPipe", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{2, "nBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpBytesRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "lpTotalBytesAvail", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{5, "lpBytesLeftThisMessage", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "PostQueuedCompletionStatus",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "CompletionPort", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwNumberOfBytesTransferred", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwCompletionKey", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, IN },
	}
	},
	{ "PrivilegeCheck",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ClientToken", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "RequiredPrivileges", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PRIVILEGE_SET", 160, INOUT },
		{2, "pfResult", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "PrivilegedServiceAuditAlarmW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SubsystemName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ServiceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ClientToken", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "Privileges", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PRIVILEGE_SET", 160, IN },
		{4, "AccessGranted", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ProcessIdToSessionId",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwProcessId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pSessionId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "PulseEvent",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEvent", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "QueryDepthSList",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, OUT },
		{0, "ListHead", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SLIST_HEADER", 128, IN },
	}
	},
	{ "QueryDosDeviceW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpDeviceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpTargetPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "ucchMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "QueryPerformanceCounter",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpPerformanceCount", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, OUT },
	}
	},
	{ "QueryPerformanceFrequency",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFrequency", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, OUT },
	}
	},
	{ "QueryProcessAffinityUpdateMode",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "lpdwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "QuerySecurityAccessMask",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "QueryThreadpoolStackInformation",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ptpp", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "ptpsi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TP_POOL_STACK_INFORMATION", 128, OUT },
	}
	},
	{ "QueueUserAPC",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pfnAPC", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "hThread", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "dwData", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "RaiseException",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "dwExceptionCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwExceptionFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "nNumberOfArguments", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpArguments", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "ReadFile",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{2, "nNumberOfBytesToRead", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpNumberOfBytesRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, INOUT },
	}
	},
	{ "ReadFileEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{2, "nNumberOfBytesToRead", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, INOUT },
		{4, "lpCompletionRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "ReadFileScatter",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "aSegmentArray", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_FILE_SEGMENT_ELEMENT", 64, OUT },
		{2, "nNumberOfBytesToRead", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{4, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, INOUT },
	}
	},
	{ "ReadProcessMemory",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpBaseAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "nSize", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{4, "lpNumberOfBytesRead", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
	}
	},
	{ "ReleaseMutex",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hMutex", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "ReleaseMutexWhenCallbackReturns",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pci", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{1, "mut", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "ReleaseSemaphore",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hSemaphore", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lReleaseCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpPreviousCount", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "ReleaseSemaphoreWhenCallbackReturns",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pci", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{1, "sem", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "crel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ReleaseSRWLockExclusive",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "SRWLock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTL_SRWLOCK", 64, INOUT },
	}
	},
	{ "ReleaseSRWLockShared",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "SRWLock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTL_SRWLOCK", 64, INOUT },
	}
	},
	{ "RemoveDirectoryA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpPathName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RemoveDirectoryW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RemoveDllDirectory",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Cookie", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "ResetEvent",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEvent", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "ResolveLocaleName",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpNameToResolve", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpLocaleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{2, "cchLocaleName", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ResumeThread",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hThread", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "RevertToSelf",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "SearchPathW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpExtension", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "nBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{5, "lpFilePart", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
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
	{ "SetCalendarInfoW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Calendar", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "CalType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpCalData", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SetCriticalSectionSpinCount",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpCriticalSection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTL_CRITICAL_SECTION", 320, INOUT },
		{1, "dwSpinCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetCurrentDirectoryA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpPathName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "SetCurrentDirectoryW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SetDefaultDllDirectories",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "DirectoryFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetEndOfFile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "SetEnvironmentStringsW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "NewEnvironment", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SetEnvironmentVariableA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpValue", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SetEnvironmentVariableW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SetErrorMode",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "uMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetEvent",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hEvent", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "SetEventWhenCallbackReturns",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pci", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{1, "evt", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "SetFileApisToANSI",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "SetFileApisToOEM",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "SetFileAttributesA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwFileAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetFileAttributesW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwFileAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetFileInformationByHandle",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "FileInformationClass", NKT_DBOBJCLASS_Enumeration, "_FILE_INFO_BY_HANDLE_CLASS", 32, IN },
		{2, "lpFileInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "dwBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetFilePointer",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lDistanceToMove", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpDistanceToMoveHigh", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "dwMoveMethod", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetFilePointerEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "liDistanceToMove", NKT_DBOBJCLASS_Union, "_LARGE_INTEGER", 64, IN },
		{2, "lpNewFilePointer", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, OUT },
		{3, "dwMoveMethod", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
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
	{ "SetFileTime",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpCreationTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{2, "lpLastAccessTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{3, "lpLastWriteTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
	}
	},
	{ "SetFileValidData",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "ValidDataLength", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
	}
	},
	{ "SetHandleCount",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "uNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetHandleInformation",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hObject", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetKernelObjectSecurity",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Handle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SetLastError",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "dwErrCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetLocaleInfoW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "LCType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "lpLCData", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SetLocalTime",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpSystemTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, IN },
	}
	},
	{ "SetNamedPipeHandleState",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hNamedPipe", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpMode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "lpMaxCollectionCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "lpCollectDataTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SetPriorityClass",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwPriorityClass", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetPrivateObjectSecurity",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ModificationDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ObjectsSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{3, "GenericMapping", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_MAPPING", 128, IN },
		{4, "Token", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
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
		{5, "Token", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "SetProcessAffinityUpdateMode",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetProcessShutdownParameters",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetSecurityAccessMask",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "SecurityInformation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
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
	{ "SetStdHandle",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "nStdHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "SetStdHandleEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "nStdHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "hHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, UNK },
		{2, "phPrevValue", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, UNK },
	}
	},
	{ "SetThreadLocale",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetThreadpoolStackInformation",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ptpp", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{1, "ptpsi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TP_POOL_STACK_INFORMATION", 128, IN },
	}
	},
	{ "SetThreadpoolThreadMaximum",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "ptpp", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{1, "cthrdMost", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetThreadpoolThreadMinimum",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "ptpp", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{1, "cthrdMic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetThreadpoolTimer",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pti", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{1, "pftDueTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{2, "msPeriod", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "msWindowLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetThreadpoolWait",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pwa", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{1, "h", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "pftTimeout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
	}
	},
	{ "SetThreadPriority",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hThread", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "nPriority", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetThreadPriorityBoost",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hThread", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "bDisablePriorityBoost", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetThreadStackGuarantee",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "StackSizeInBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SetThreadToken",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "Thread", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{1, "Token", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "SetTokenInformation",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "TokenHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "TokenInformationClass", NKT_DBOBJCLASS_Enumeration, "_TOKEN_INFORMATION_CLASS", 32, IN },
		{2, "TokenInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "TokenInformationLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetWaitableTimer",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hTimer", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpDueTime", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, UNK },
		{2, "lPeriod", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pfnCompletionRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "lpArgToCompletionRoutine", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "fResume", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetWaitableTimerEx",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hTimer", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpDueTime", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, IN },
		{2, "lPeriod", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pfnCompletionRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "lpArgToCompletionRoutine", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "WakeContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_REASON_CONTEXT", 256, IN },
		{6, "TolerableDelay", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SizeofResource",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hModule", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "hResInfo", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "Sleep",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "dwMilliseconds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SleepEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwMilliseconds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "bAlertable", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "StartThreadpoolIo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pio", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
	}
	},
	{ "SubmitThreadpoolWork",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pwk", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
	}
	},
	{ "SuspendThread",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hThread", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "SwitchToThread",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "SystemTimeToFileTime",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpSystemTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, IN },
		{1, "lpFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, OUT },
	}
	},
	{ "SystemTimeToTzSpecificLocalTime",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpTimeZoneInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TIME_ZONE_INFORMATION", 1376, UNK },
		{1, "lpUniversalTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, IN },
		{2, "lpLocalTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, OUT },
	}
	},
	{ "SystemTimeToTzSpecificLocalTimeEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpTimeZoneInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TIME_DYNAMIC_ZONE_INFORMATION", 3456, UNK },
		{1, "lpUniversalTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, UNK },
		{2, "lpLocalTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, UNK },
	}
	},
	{ "TerminateProcess",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "uExitCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TerminateThread",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hThread", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, INOUT },
		{1, "dwExitCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TlsAlloc",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "TlsFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwTlsIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TlsGetValue",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "dwTlsIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TlsSetValue",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwTlsIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpTlsValue", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "TransactNamedPipe",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hNamedPipe", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpInBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "nInBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpOutBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{4, "nOutBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpBytesRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{6, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, INOUT },
	}
	},
	{ "TryAcquireSRWLockExclusive",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "SRWLock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTL_SRWLOCK", 64, INOUT },
	}
	},
	{ "TryAcquireSRWLockShared",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, OUT },
		{0, "SRWLock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTL_SRWLOCK", 64, INOUT },
	}
	},
	{ "TryEnterCriticalSection",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpCriticalSection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTL_CRITICAL_SECTION", 320, INOUT },
	}
	},
	{ "TrySubmitThreadpoolCallback",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pfns", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{2, "pcbe", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TP_CALLBACK_ENVIRON_V3", 576, IN },
	}
	},
	{ "TzSpecificLocalTimeToSystemTime",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpTimeZoneInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TIME_ZONE_INFORMATION", 1376, IN },
		{1, "lpLocalTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, IN },
		{2, "lpUniversalTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, OUT },
	}
	},
	{ "TzSpecificLocalTimeToSystemTimeEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpTimeZoneInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TIME_DYNAMIC_ZONE_INFORMATION", 3456, UNK },
		{1, "lpLocalTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, UNK },
		{2, "lpUniversalTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, UNK },
	}
	},
	{ "UnlockFile",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwFileOffsetLow", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFileOffsetHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "nNumberOfBytesToUnlockLow", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "nNumberOfBytesToUnlockHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnlockFileEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{2, "nNumberOfBytesToUnlockLow", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "nNumberOfBytesToUnlockHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, INOUT },
	}
	},
	{ "UnmapViewOfFile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpBaseAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "UnregisterWaitEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "WaitHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "CompletionEvent", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "UpdateProcThreadAttribute",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpAttributeList", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Attribute", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "lpValue", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cbSize", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{5, "lpPreviousValue", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{6, "lpReturnSize", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VerLanguageNameA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "wLang", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "szLang", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{2, "cchLang", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "VerLanguageNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "wLang", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{1, "szLang", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{2, "cchLang", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "VirtualAlloc",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "lpAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwSize", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "flAllocationType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "flProtect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VirtualAllocEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwSize", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "flAllocationType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "flProtect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VirtualAllocExNuma",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwSize", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "flAllocationType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "flProtect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "nndPreferred", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VirtualFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwSize", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "dwFreeType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VirtualFreeEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwSize", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "dwFreeType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VirtualProtect",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwSize", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "flNewProtect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpflOldProtect", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "VirtualProtectEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwSize", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "flNewProtect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpflOldProtect", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "VirtualQuery",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "lpAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "lpBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MEMORY_BASIC_INFORMATION", 384, OUT },
		{2, "dwLength", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "VirtualQueryEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, OUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "lpBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MEMORY_BASIC_INFORMATION", 384, OUT },
		{3, "dwLength", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "WaitForMultipleObjectsEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "nCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpHandles", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{2, "bWaitAll", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dwMilliseconds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "bAlertable", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WaitForSingleObject",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwMilliseconds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WaitForSingleObjectEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hHandle", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "dwMilliseconds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "bAlertable", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WaitForThreadpoolIoCallbacks",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pio", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{1, "fCancelPendingCallbacks", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WaitForThreadpoolTimerCallbacks",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pti", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{1, "fCancelPendingCallbacks", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WaitForThreadpoolWaitCallbacks",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pwa", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{1, "fCancelPendingCallbacks", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WaitForThreadpoolWorkCallbacks",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pwk", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{1, "fCancelPendingCallbacks", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WaitNamedPipeW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "lpNamedPipeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "nTimeOut", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WideCharToMultiByte",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "CodePage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpWideCharStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cchWideChar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lpMultiByteStr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "cbMultiByte", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "lpDefaultChar", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{7, "lpUsedDefaultChar", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "Wow64DisableWow64FsRedirection",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "OldValue", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "Wow64RevertWow64FsRedirection",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "OlValue", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "WriteFile",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "nNumberOfBytesToWrite", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpNumberOfBytesWritten", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, INOUT },
	}
	},
	{ "WriteFileEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "nNumberOfBytesToWrite", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, INOUT },
		{4, "lpCompletionRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "WriteFileGather",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "aSegmentArray", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_FILE_SEGMENT_ELEMENT", 64, IN },
		{2, "nNumberOfBytesToWrite", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{4, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 256, INOUT },
	}
	},
	{ "WriteProcessMemory",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lpBaseAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "nSize", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{4, "lpNumberOfBytesWritten", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, OUT },
	}
	},
};

unsigned KernelBasearraySize = (sizeof(KernelBase_info) / sizeof(KernelBase_info[0]));