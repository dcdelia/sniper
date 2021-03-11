// The following code was obtained using a slightly modified version
// of the Deviare parser from the PyREBox project. Credits:
// https://github.com/Cisco-Talos/pyrebox/blob/master/mw_monitor2/deviare_db_parser.py

#include "pyrebox.h"

libcall_info_t Crypt32_info[] = {
	{ "CertAddCertificateContextToStore",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{2, "dwAddDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppStoreContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CONTEXT", 160, OUT },
	}
	},
	{ "CertAddCertificateLinkToStore",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{2, "dwAddDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppStoreContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CONTEXT", 160, OUT },
	}
	},
	{ "CertAddCRLContextToStore",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCrlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, IN },
		{2, "dwAddDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppStoreContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CRL_CONTEXT", 160, OUT },
	}
	},
	{ "CertAddCRLLinkToStore",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCrlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, IN },
		{2, "dwAddDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppStoreContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CRL_CONTEXT", 160, OUT },
	}
	},
	{ "CertAddCTLContextToStore",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCtlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, IN },
		{2, "dwAddDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppStoreContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CTL_CONTEXT", 256, OUT },
	}
	},
	{ "CertAddCTLLinkToStore",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCtlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, IN },
		{2, "dwAddDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppStoreContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CTL_CONTEXT", 256, OUT },
	}
	},
	{ "CertAddEncodedCertificateToStore",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbCertEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbCertEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwAddDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ppCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CONTEXT", 160, OUT },
	}
	},
	{ "CertAddEncodedCertificateToSystemStoreA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "szCertStoreName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pbCertEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbCertEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertAddEncodedCertificateToSystemStoreW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "szCertStoreName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pbCertEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbCertEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertAddEncodedCRLToStore",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbCrlEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbCrlEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwAddDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ppCrlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CRL_CONTEXT", 160, OUT },
	}
	},
	{ "CertAddEncodedCTLToStore",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwMsgAndCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbCtlEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbCtlEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwAddDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ppCtlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CTL_CONTEXT", 256, OUT },
	}
	},
	{ "CertAddEnhancedKeyUsageIdentifier",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "pszUsageIdentifier", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CertAddRefServerOcspResponse",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "hServerOcspResponse", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertAddRefServerOcspResponseContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pServerOcspResponseContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_SERVER_OCSP_RESPONSE_CONTEXT", 96, IN },
	}
	},
	{ "CertAddSerializedElementToStore",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbElement", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbElement", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwAddDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwContextTypeFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pdwContextType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{7, "ppvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "CertAddStoreToCollection",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCollectionStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hSiblingStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwUpdateFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwPriority", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertAlgIdToOID",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{0, "dwAlgId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertCloseServerOcspResponse",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "hServerOcspResponse", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertCloseStore",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertCompareCertificate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCertId1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_INFO", 896, IN },
		{2, "pCertId2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_INFO", 896, IN },
	}
	},
	{ "CertCompareCertificateName",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCertName1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{2, "pCertName2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
	}
	},
	{ "CertCompareIntegerBlob",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pInt1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{1, "pInt2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
	}
	},
	{ "CertComparePublicKeyInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pPublicKey1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_PUBLIC_KEY_INFO", 192, IN },
		{2, "pPublicKey2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_PUBLIC_KEY_INFO", 192, IN },
	}
	},
	{ "CertControlStore",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwCtrlType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvCtrlPara", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CertCreateCertificateChainEngine",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pConfig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CHAIN_ENGINE_CONFIG", 416, IN },
		{1, "phChainEngine", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CertCreateCertificateContext",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbCertEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbCertEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertCreateContext",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "dwContextType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pCreatePara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CREATE_CONTEXT_PARA", 160, IN },
	}
	},
	{ "CertCreateCRLContext",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbCrlEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbCrlEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertCreateCTLContext",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, OUT },
		{0, "dwMsgAndCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbCtlEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbCtlEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertCreateCTLEntryFromCertificateContextProperties",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "cOptAttr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "rgOptAttr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_ATTRIBUTE", 96, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pCtlEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_ENTRY", 128, OUT },
		{6, "pcbCtlEntry", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CertCreateSelfSignCertificate",8,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, OUT },
		{0, "hCryptProvOrNCryptKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pSubjectIssuerBlob", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pKeyProvInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_KEY_PROV_INFO", 224, IN },
		{4, "pSignatureAlgorithm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_ALGORITHM_IDENTIFIER", 96, IN },
		{5, "pStartTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, IN },
		{6, "pEndTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, IN },
		{7, "pExtensions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_EXTENSIONS", 64, IN },
	}
	},
	{ "CertDeleteCertificateFromStore",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
	}
	},
	{ "CertDeleteCRLFromStore",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCrlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, IN },
	}
	},
	{ "CertDeleteCTLFromStore",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCtlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, IN },
	}
	},
	{ "CertDuplicateCertificateChain",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CHAIN_CONTEXT", 448, OUT },
		{0, "pChainContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CHAIN_CONTEXT", 448, IN },
	}
	},
	{ "CertDuplicateCertificateContext",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, OUT },
		{0, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
	}
	},
	{ "CertDuplicateCRLContext",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, OUT },
		{0, "pCrlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, IN },
	}
	},
	{ "CertDuplicateCTLContext",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, OUT },
		{0, "pCtlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, IN },
	}
	},
	{ "CertDuplicateStore",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertEnumCertificateContextProperties",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "dwPropId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertEnumCertificatesInStore",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pPrevCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
	}
	},
	{ "CertEnumCRLContextProperties",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pCrlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, IN },
		{1, "dwPropId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertEnumCRLsInStore",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pPrevCrlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, IN },
	}
	},
	{ "CertEnumCTLContextProperties",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pCtlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, IN },
		{1, "dwPropId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertEnumCTLsInStore",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pPrevCtlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, IN },
	}
	},
	{ "CertEnumPhysicalStore",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvSystemStore", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvArg", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pfnEnum", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "CertEnumSubjectInSortedCTL",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCtlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, IN },
		{1, "ppvNextSubject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{2, "pSubjectIdentifier", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, OUT },
		{3, "pEncodedAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, OUT },
	}
	},
	{ "CertEnumSystemStore",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pvSystemStoreLocationPara", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "pvArg", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pfnEnum", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "CertEnumSystemStoreLocation",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pvArg", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "pfnEnum", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "CertFindAttribute",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_ATTRIBUTE", 96, OUT },
		{0, "pszObjId", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cAttr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "rgAttr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_ATTRIBUTE", 96, IN },
	}
	},
	{ "CertFindCertificateInCRL",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "pCrlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "ppCrlEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CRL_ENTRY", 192, OUT },
	}
	},
	{ "CertFindCertificateInStore",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFindFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFindType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvFindPara", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pPrevCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
	}
	},
	{ "CertFindChainInStore",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CHAIN_CONTEXT", 448, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFindFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFindType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvFindPara", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pPrevChainContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CHAIN_CONTEXT", 448, IN },
	}
	},
	{ "CertFindCRLInStore",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFindFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFindType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvFindPara", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pPrevCrlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, IN },
	}
	},
	{ "CertFindCTLInStore",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwMsgAndCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFindFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFindType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvFindPara", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pPrevCtlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, IN },
	}
	},
	{ "CertFindExtension",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_EXTENSION", 128, OUT },
		{0, "pszObjId", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cExtensions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "rgExtensions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_EXTENSION", 128, IN },
	}
	},
	{ "CertFindRDNAttr",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_RDN_ATTR", 128, OUT },
		{0, "pszObjId", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_NAME_INFO", 64, IN },
	}
	},
	{ "CertFindSubjectInCTL",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_ENTRY", 128, OUT },
		{0, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwSubjectType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvSubject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pCtlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertFindSubjectInSortedCTL",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSubjectIdentifier", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{1, "pCtlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pEncodedAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, OUT },
	}
	},
	{ "CertFreeCertificateChain",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pChainContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CHAIN_CONTEXT", 448, IN },
	}
	},
	{ "CertFreeCertificateChainEngine",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "hChainEngine", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertFreeCertificateChainList",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "prgpSelection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CHAIN_CONTEXT", 448, IN },
	}
	},
	{ "CertFreeCertificateContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
	}
	},
	{ "CertFreeCRLContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCrlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, IN },
	}
	},
	{ "CertFreeCTLContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCtlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, IN },
	}
	},
	{ "CertFreeServerOcspResponseContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pServerOcspResponseContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_SERVER_OCSP_RESPONSE_CONTEXT", 96, IN },
	}
	},
	{ "CertGetCertificateChain",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hChainEngine", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{2, "pTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{3, "hAdditionalStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pChainPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CHAIN_PARA", 128, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "ppChainContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CHAIN_CONTEXT", 448, OUT },
	}
	},
	{ "CertGetCertificateContextProperty",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "dwPropId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "pcbData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CertGetCRLContextProperty",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCrlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, IN },
		{1, "dwPropId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "pcbData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CertGetCRLFromStore",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pIssuerContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{2, "pPrevCrlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, IN },
		{3, "pdwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CertGetCTLContextProperty",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCtlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, IN },
		{1, "dwPropId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "pcbData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CertGetEnhancedKeyUsage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pUsage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_USAGE", 64, OUT },
		{3, "pcbUsage", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CertGetIntendedKeyUsage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCertInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_INFO", 896, IN },
		{2, "pbKeyUsage", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "cbKeyUsage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertGetIssuerCertificateFromStore",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pSubjectContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{2, "pPrevIssuerContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{3, "pdwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CertGetNameStringA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "dwType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvTypePara", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pszNameString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "cchNameString", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertGetNameStringW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "dwType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvTypePara", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pszNameString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{5, "cchNameString", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertGetPublicKeyLength",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pPublicKey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_PUBLIC_KEY_INFO", 192, IN },
	}
	},
	{ "CertGetServerOcspResponseContext",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_SERVER_OCSP_RESPONSE_CONTEXT", 96, OUT },
		{0, "hServerOcspResponse", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CertGetStoreProperty",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwPropId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{3, "pcbData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CertGetSubjectCertificateFromStore",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pCertId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_INFO", 896, IN },
	}
	},
	{ "CertGetValidUsages",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "cCerts", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "rghCerts", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CONTEXT", 160, IN },
		{2, "cNumOIDs", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "rghOIDs", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, OUT },
		{4, "pcbOIDs", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CertIsRDNAttrsInCertificateName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pCertName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{3, "pRDN", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_RDN", 64, IN },
	}
	},
	{ "CertIsValidCRLForCertificate",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "pCrl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CertNameToStrA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{2, "dwStrType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "psz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{4, "csz", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertNameToStrW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{2, "dwStrType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{4, "csz", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertOIDToAlgId",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pszObjId", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CertOpenServerOcspResponse",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pChainContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CHAIN_CONTEXT", 448, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CertOpenStore",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "lpszStoreProvider", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hCryptProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvPara", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CertOpenSystemStoreA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szSubsystemProtocol", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CertOpenSystemStoreW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szSubsystemProtocol", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CertRDNValueToStrA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwValueType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{2, "psz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "csz", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertRDNValueToStrW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwValueType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{2, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{3, "csz", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertRegisterPhysicalStore",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvSystemStore", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pwszStoreName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pStoreInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_PHYSICAL_STORE_INFO", 256, IN },
		{4, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CertRegisterSystemStore",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvSystemStore", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pStoreInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_SYSTEM_STORE_INFO", 32, IN },
		{3, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CertRemoveEnhancedKeyUsageIdentifier",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "pszUsageIdentifier", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CertRemoveStoreFromCollection",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "hCollectionStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hSiblingStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertResyncCertificateChainEngine",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hChainEngine", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertRetrieveLogoOrBiometricInfo",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "lpszLogoOrBiometricType", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwRetrievalFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "ppbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, OUT },
		{7, "pcbData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{8, "ppwszMimeType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
	}
	},
	{ "CertSaveStore",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwSaveAs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwSaveTo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvSaveToPara", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertSelectCertificateChains",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSelectionContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pChainParameters", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_SELECT_CHAIN_PARA", 160, IN },
		{3, "cCriteria", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "rgpCriteria", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_SELECT_CRITERIA", 96, IN },
		{5, "hStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pcSelection", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{7, "pprgpSelection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "_CERT_CHAIN_CONTEXT", 448, OUT },
	}
	},
	{ "CertSerializeCertificateStoreElement",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbElement", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "pcbElement", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CertSerializeCRLStoreElement",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCrlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbElement", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "pcbElement", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CertSerializeCTLStoreElement",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCtlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbElement", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{3, "pcbElement", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CertSetCertificateContextPropertiesFromCTLEntry",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "pCtlEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_ENTRY", 128, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertSetCertificateContextProperty",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "dwPropId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CertSetCRLContextProperty",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCrlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_CONTEXT", 160, IN },
		{1, "dwPropId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CertSetCTLContextProperty",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCtlContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_CONTEXT", 256, IN },
		{1, "dwPropId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CertSetEnhancedKeyUsage",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "pUsage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_USAGE", 64, IN },
	}
	},
	{ "CertSetStoreProperty",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwPropId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CertStrToNameA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszX500", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwStrType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pbEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "pcbEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "ppszError", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, OUT },
	}
	},
	{ "CertStrToNameW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszX500", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwStrType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pbEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "pcbEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "ppszError", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
	}
	},
	{ "CertUnregisterPhysicalStore",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvSystemStore", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pwszStoreName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CertUnregisterSystemStore",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pvSystemStore", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CertVerifyCertificateChainPolicy",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszPolicyOID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pChainContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CHAIN_CONTEXT", 448, IN },
		{2, "pPolicyPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CHAIN_POLICY_PARA", 96, IN },
		{3, "pPolicyStatus", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CHAIN_POLICY_STATUS", 160, INOUT },
	}
	},
	{ "CertVerifyCRLRevocation",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCertId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_INFO", 896, IN },
		{2, "cCrlInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "rgpCrlInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CRL_INFO", 448, IN },
	}
	},
	{ "CertVerifyCRLTimeValidity",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pTimeToVerify", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{1, "pCrlInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRL_INFO", 448, IN },
	}
	},
	{ "CertVerifyCTLUsage",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwSubjectType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvSubject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pSubjectUsage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_USAGE", 64, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pVerifyUsagePara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_VERIFY_USAGE_PARA", 224, IN },
		{6, "pVerifyUsageStatus", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_VERIFY_USAGE_STATUS", 224, INOUT },
	}
	},
	{ "CertVerifyRevocation",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwRevType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "rgpvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pRevPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_REVOCATION_PARA", 192, IN },
		{6, "pRevStatus", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_REVOCATION_STATUS", 192, INOUT },
	}
	},
	{ "CertVerifySubjectCertificateContext",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSubject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "pIssuer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{2, "pdwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CertVerifyTimeValidity",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pTimeToVerify", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{1, "pCertInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_INFO", 896, IN },
	}
	},
	{ "CertVerifyValidityNesting",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSubjectInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_INFO", 896, IN },
		{1, "pIssuerInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_INFO", 896, IN },
	}
	},
	{ "CryptAcquireCertificatePrivateKey",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvParameters", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "phCryptProvOrNCryptKey", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "pdwKeySpec", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{5, "pfCallerFreeProvOrNCryptKey", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CryptBinaryToStringA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pbBinary", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cbBinary", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{4, "pcchString", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptBinaryToStringW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pbBinary", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cbBinary", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{4, "pcchString", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptCloseAsyncHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hAsync", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptCreateAsyncHandle",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "phAsync", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CryptCreateKeyIdentifierFromCSP",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszPubKeyOID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pPubKeyStruc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PUBLICKEYSTRUC", 64, IN },
		{3, "cbPubKeyStruc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "pbHash", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{7, "pcbHash", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptDecodeMessage",13,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwMsgTypeFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pDecryptPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_DECRYPT_MESSAGE_PARA", 128, IN },
		{2, "pVerifyPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_VERIFY_MESSAGE_PARA", 160, IN },
		{3, "dwSignerIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbEncodedBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "cbEncodedBlob", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwPrevInnerContentType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pdwMsgType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{8, "pdwInnerContentType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{9, "pbDecoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{10, "pcbDecoded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{11, "ppXchgCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CONTEXT", 160, OUT },
		{12, "ppSignerCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CONTEXT", 160, OUT },
	}
	},
	{ "CryptDecodeObject",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszStructType", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pbEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pvStructInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{6, "pcbStructInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptDecodeObjectEx",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszStructType", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pbEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pDecodePara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_DECODE_PARA", 96, IN },
		{6, "pvStructInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{7, "pcbStructInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptDecryptAndVerifyMessageSignature",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pDecryptPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_DECRYPT_MESSAGE_PARA", 128, IN },
		{1, "pVerifyPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_VERIFY_MESSAGE_PARA", 160, IN },
		{2, "dwSignerIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbEncryptedBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "cbEncryptedBlob", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pbDecrypted", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{6, "pcbDecrypted", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{7, "ppXchgCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CONTEXT", 160, OUT },
		{8, "ppSignerCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CONTEXT", 160, OUT },
	}
	},
	{ "CryptDecryptMessage",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pDecryptPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_DECRYPT_MESSAGE_PARA", 128, IN },
		{1, "pbEncryptedBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbEncryptedBlob", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbDecrypted", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{4, "pcbDecrypted", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "ppXchgCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CONTEXT", 160, OUT },
	}
	},
	{ "CryptEncodeObject",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszStructType", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pvStructInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pbEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{4, "pcbEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptEncodeObjectEx",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszStructType", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pvStructInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pEncodePara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_ENCODE_PARA", 96, IN },
		{5, "pvEncoded", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{6, "pcbEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptEncryptMessage",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pEncryptPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_ENCRYPT_MESSAGE_PARA", 288, IN },
		{1, "cRecipientCert", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "rgpRecipientCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CONTEXT", 160, IN },
		{3, "pbToBeEncrypted", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "cbToBeEncrypted", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pbEncryptedBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{6, "pcbEncryptedBlob", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptEnumKeyIdentifierProperties",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pKeyIdentifier", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{1, "dwPropId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pwszComputerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pvArg", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "pfnEnum", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "CryptEnumOIDFunction",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszFuncName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pszOID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvArg", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pfnEnumOIDFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "CryptEnumOIDInfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwGroupId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvArg", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pfnEnumOIDInfo", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "CryptExportPKCS8",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwKeySpec", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszPrivateKeyObjId", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvAuxInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pbPrivateKeyBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{6, "pcbPrivateKeyBlob", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptExportPublicKeyInfo",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptProvOrNCryptKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwKeySpec", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_PUBLIC_KEY_INFO", 192, OUT },
		{4, "pcbInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptExportPublicKeyInfoEx",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptProvOrNCryptKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwKeySpec", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszPublicKeyObjId", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pvAuxInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "pInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_PUBLIC_KEY_INFO", 192, OUT },
		{7, "pcbInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptExportPublicKeyInfoFromBCryptKeyHandle",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hBCryptKey", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszPublicKeyObjId", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvAuxInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_PUBLIC_KEY_INFO", 192, OUT },
		{6, "pcbInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptFindCertificateKeyProvInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CryptFindLocalizedName",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{0, "pwszCryptName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CryptFindOIDInfo",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_OID_INFO", 224, OUT },
		{0, "dwKeyType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pvKey", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwGroupId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptFormatObject",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFormatType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFormatStrType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pFormatStruct", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "lpszStructType", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "pbEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "cbEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pbFormat", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{8, "pcbFormat", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptFreeOIDFunctionAddress",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFuncAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptGetAsyncParam",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hAsync", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszParamOid", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "ppvParam", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "ppfnFree", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CryptGetDefaultOIDDllList",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFuncSet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pwszDllList", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{3, "pcchDllList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptGetDefaultOIDFunctionAddress",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFuncSet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pwszDll", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ppvFuncAddr", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{5, "phFuncAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptGetKeyIdentifierProperty",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pKeyIdentifier", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{1, "dwPropId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pwszComputerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{6, "pcbData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptGetMessageCertificates",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwMsgAndCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hCryptProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbSignedBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "cbSignedBlob", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptGetMessageSignerCount",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwMsgEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbSignedBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbSignedBlob", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptGetOIDFunctionAddress",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hFuncSet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszOID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ppvFuncAddr", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{5, "phFuncAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CryptGetOIDFunctionValue",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszFuncName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pszOID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pwszValueName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pdwValueType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{5, "pbValueData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{6, "pcbValueData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptHashCertificate",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Algid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "cbEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pbComputedHash", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{6, "pcbComputedHash", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptHashCertificate2",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pwszCNGHashAlgid", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pbEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "cbEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pbComputedHash", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{6, "pcbComputedHash", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptHashMessage",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pHashPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_HASH_MESSAGE_PARA", 224, IN },
		{1, "fDetachedHash", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cToBeHashed", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "rgpbToBeHashed", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{4, "rgcbToBeHashed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "pbHashedBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{6, "pcbHashedBlob", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{7, "pbComputedHash", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{8, "pcbComputedHash", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptHashPublicKeyInfo",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Algid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_PUBLIC_KEY_INFO", 192, IN },
		{5, "pbComputedHash", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{6, "pcbComputedHash", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptHashToBeSigned",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbComputedHash", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "pcbComputedHash", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptImportPKCS8",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "sPrivateKeyAndParams", NKT_DBOBJCLASS_Struct, "_CRYPT_PKCS8_IMPORT_PARAMS", 192, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "phCryptProv", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{3, "pvAuxInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CryptImportPublicKeyInfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_PUBLIC_KEY_INFO", 192, IN },
		{3, "phKey", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CryptImportPublicKeyInfoEx",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_PUBLIC_KEY_INFO", 192, IN },
		{3, "aiKeyAlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pvAuxInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "phKey", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CryptImportPublicKeyInfoEx2",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_PUBLIC_KEY_INFO", 192, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvAuxInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "phKey", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "CryptInitOIDFunctionSet",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pszFuncName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptInstallDefaultContext",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwDefaultType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvDefaultPara", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "phDefaultContext", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CryptInstallOIDFunctionAddress",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hModule", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszFuncName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cFuncEntry", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "rgFuncEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_OID_FUNC_ENTRY", 64, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptMemAlloc",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptMemFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{0, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CryptMemRealloc",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{0, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptMsgCalculateEncodedLength",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwMsgEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwMsgType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvMsgEncodeInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pszInnerContentObjID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptMsgClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptMsgControl",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwCtrlType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvCtrlPara", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CryptMsgCountersign",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{1, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cCountersigners", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "rgCountersigners", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CMSG_SIGNER_ENCODE_INFO", 384, IN },
	}
	},
	{ "CryptMsgCountersignEncoded",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbSignerInfo", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbSignerInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "cCountersigners", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "rgCountersigners", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CMSG_SIGNER_ENCODE_INFO", 384, IN },
		{5, "pbCountersignature", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{6, "pcbCountersignature", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptMsgDuplicate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "hCryptMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptMsgEncodeAndSignCTL",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwMsgEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCtlInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CTL_INFO", 576, IN },
		{2, "pSignInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CMSG_SIGNED_ENCODE_INFO", 224, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "pcbEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptMsgGetAndVerifySigner",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cSignerStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "rghSignerStore", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ppSigner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CONTEXT", 160, OUT },
		{5, "pdwSignerIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptMsgGetParam",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwParamType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{4, "pcbData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptMsgOpenToDecode",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwMsgEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwMsgType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hCryptProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pRecipientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_INFO", 896, IN },
		{5, "pStreamInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CMSG_STREAM_INFO", 96, IN },
	}
	},
	{ "CryptMsgOpenToEncode",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "dwMsgEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwMsgType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvMsgEncodeInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pszInnerContentObjID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "pStreamInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CMSG_STREAM_INFO", 96, IN },
	}
	},
	{ "CryptMsgSignCTL",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwMsgEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbCtlContent", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbCtlContent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pSignInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CMSG_SIGNED_ENCODE_INFO", 224, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pbEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{6, "pcbEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptMsgUpdate",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "fFinal", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptMsgVerifyCountersignatureEncoded",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbSignerInfo", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbSignerInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbSignerInfoCountersignature", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "cbSignerInfoCountersignature", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pciCountersigner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_INFO", 896, IN },
	}
	},
	{ "CryptMsgVerifyCountersignatureEncodedEx",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbSignerInfo", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbSignerInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbSignerInfoCountersignature", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "cbSignerInfoCountersignature", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwSignerType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pvSigner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "pvExtra", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CryptProtectData",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pDataIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{1, "szDataDescr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pOptionalEntropy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{3, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pPromptStruct", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTPROTECT_PROMPTSTRUCT", 128, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pDataOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, OUT },
	}
	},
	{ "CryptProtectMemory",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pDataIn", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "cbDataIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptQueryObject",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwObjectType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pvObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwExpectedContentTypeFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwExpectedFormatTypeFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pdwMsgAndCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{6, "pdwContentType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{7, "pdwFormatType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{8, "phCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{9, "phMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{10, "ppvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
	}
	},
	{ "CryptRegisterDefaultOIDFunction",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszFuncName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pwszDll", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CryptRegisterOIDFunction",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszFuncName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pszOID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pwszDll", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pszOverrideFuncName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CryptRegisterOIDInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_OID_INFO", 224, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptRetrieveTimeStamp",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "wszUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwRetrievalFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszHashId", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_TIMESTAMP_PARA", 192, IN },
		{5, "pbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "ppTsContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CRYPT_TIMESTAMP_CONTEXT", 96, OUT },
		{8, "ppTsSigner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CONTEXT", 160, OUT },
		{9, "phStore", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CryptSetAsyncParam",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hAsync", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszParamOid", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pvParam", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pfnFree", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "CryptSetKeyIdentifierProperty",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pKeyIdentifier", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{1, "dwPropId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pwszComputerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
	}
	},
	{ "CryptSetOIDFunctionValue",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszFuncName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pszOID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pwszValueName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "dwValueType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pbValueData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "cbValueData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptSignAndEncodeCertificate",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptProvOrNCryptKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwKeySpec", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpszStructType", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pvStructInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pSignatureAlgorithm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_ALGORITHM_IDENTIFIER", 96, IN },
		{6, "pvHashAuxInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "pbEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{8, "pcbEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptSignAndEncryptMessage",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSignPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_SIGN_MESSAGE_PARA", 544, IN },
		{1, "pEncryptPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_ENCRYPT_MESSAGE_PARA", 288, IN },
		{2, "cRecipientCert", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "rgpRecipientCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CONTEXT", 160, IN },
		{4, "pbToBeSignedAndEncrypted", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "cbToBeSignedAndEncrypted", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pbSignedAndEncryptedBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{7, "pcbSignedAndEncryptedBlob", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptSignCertificate",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptProvOrNCryptKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwKeySpec", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbEncodedToBeSigned", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "cbEncodedToBeSigned", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pSignatureAlgorithm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_ALGORITHM_IDENTIFIER", 96, IN },
		{6, "pvHashAuxInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "pbSignature", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{8, "pcbSignature", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptSignMessage",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSignPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_SIGN_MESSAGE_PARA", 544, IN },
		{1, "fDetachedSignature", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cToBeSigned", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "rgpbToBeSigned", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{4, "rgcbToBeSigned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "pbSignedBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{6, "pcbSignedBlob", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptSignMessageWithKey",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSignPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_KEY_SIGN_MESSAGE_PARA", 352, IN },
		{1, "pbToBeSigned", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbToBeSigned", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbSignedBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{4, "pcbSignedBlob", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptSIPAddProvider",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "psNewProv", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SIP_ADD_NEWPROVIDER_", 384, IN },
	}
	},
	{ "CryptSIPCreateIndirectData",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSubjectInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SIP_SUBJECTINFO_", 640, IN },
		{1, "pcbIndirectData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "pIndirectData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SIP_INDIRECT_DATA_", 256, OUT },
	}
	},
	{ "CryptSIPGetSignedDataMsg",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSubjectInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SIP_SUBJECTINFO_", 640, IN },
		{1, "pdwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{2, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbSignedDataMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "pbSignedDataMsg", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
	}
	},
	{ "CryptSIPLoad",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pgSubject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pSipDispatch", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SIP_DISPATCH_INFO_", 224, INOUT },
	}
	},
	{ "CryptSIPPutSignedDataMsg",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSubjectInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SIP_SUBJECTINFO_", 640, IN },
		{1, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "cbSignedDataMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbSignedDataMsg", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
	}
	},
	{ "CryptSIPRemoveProvider",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pgProv", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "CryptSIPRemoveSignedDataMsg",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSubjectInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SIP_SUBJECTINFO_", 640, IN },
		{1, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptSIPRetrieveSubjectGuid",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "FileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "hFileIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pgSubject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, OUT },
	}
	},
	{ "CryptSIPRetrieveSubjectGuidForCatalogFile",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "FileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "hFileIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pgSubject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, OUT },
	}
	},
	{ "CryptSIPVerifyIndirectData",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pSubjectInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SIP_SUBJECTINFO_", 640, IN },
		{1, "pIndirectData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SIP_INDIRECT_DATA_", 256, IN },
	}
	},
	{ "CryptStringToBinaryA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cchString", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbBinary", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pcbBinary", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "pdwSkip", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{6, "pdwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CryptStringToBinaryW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pszString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "cchString", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbBinary", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pcbBinary", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "pdwSkip", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{6, "pdwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CryptUninstallDefaultContext",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hDefaultContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CryptUnprotectData",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pDataIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{1, "ppszDataDescr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, OUT },
		{2, "pOptionalEntropy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{3, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pPromptStruct", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTPROTECT_PROMPTSTRUCT", 128, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pDataOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, OUT },
	}
	},
	{ "CryptUnprotectMemory",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pDataIn", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "cbDataIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptUnregisterDefaultOIDFunction",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszFuncName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pwszDll", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CryptUnregisterOIDFunction",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszFuncName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pszOID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CryptUnregisterOIDInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_OID_INFO", 224, IN },
	}
	},
	{ "CryptUpdateProtectedState",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pOldSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pwszOldPassword", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pdwSuccessCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{4, "pdwFailureCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "CryptVerifyCertificateSignature",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbEncoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbEncoded", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pPublicKey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_PUBLIC_KEY_INFO", 192, IN },
	}
	},
	{ "CryptVerifyCertificateSignatureEx",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hCryptProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwCertEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwSubjectType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvSubject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "dwIssuerType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pvIssuer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pvExtra", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CryptVerifyDetachedMessageHash",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pHashPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_HASH_MESSAGE_PARA", 224, IN },
		{1, "pbDetachedHashBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbDetachedHashBlob", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "cToBeHashed", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "rgpbToBeHashed", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{5, "rgcbToBeHashed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "pbComputedHash", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{7, "pcbComputedHash", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptVerifyDetachedMessageSignature",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pVerifyPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_VERIFY_MESSAGE_PARA", 160, IN },
		{1, "dwSignerIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbDetachedSignBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbDetachedSignBlob", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cToBeSigned", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "rgpbToBeSigned", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{6, "rgcbToBeSigned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{7, "ppSignerCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CONTEXT", 160, OUT },
	}
	},
	{ "CryptVerifyMessageHash",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pHashPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_HASH_MESSAGE_PARA", 224, IN },
		{1, "pbHashedBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbHashedBlob", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbToBeHashed", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{4, "pcbToBeHashed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "pbComputedHash", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{6, "pcbComputedHash", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptVerifyMessageSignature",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pVerifyPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_VERIFY_MESSAGE_PARA", 160, IN },
		{1, "dwSignerIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbSignedBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbSignedBlob", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbDecoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "pcbDecoded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "ppSignerCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CONTEXT", 160, OUT },
	}
	},
	{ "CryptVerifyMessageSignatureWithKey",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pVerifyPara", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_KEY_VERIFY_MESSAGE_PARA", 96, IN },
		{1, "pPublicKeyInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_PUBLIC_KEY_INFO", 192, IN },
		{2, "pbSignedBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbSignedBlob", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbDecoded", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{5, "pcbDecoded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptVerifyTimeStampSignature",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pbTSContentInfo", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cbTSContentInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "hAdditionalStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ppTsContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CRYPT_TIMESTAMP_CONTEXT", 96, OUT },
		{6, "ppTsSigner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CERT_CONTEXT", 160, OUT },
		{7, "phStore", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "PFXExportCertStore",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pPFX", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, INOUT },
		{2, "szPassword", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PFXExportCertStoreEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "hStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pPFX", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, INOUT },
		{2, "szPassword", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pvPara", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PFXImportCertStore",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{0, "pPFX", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{1, "szPassword", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PFXIsPFXBlob",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pPFX", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
	}
	},
	{ "PFXVerifyPassword",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{0, "pPFX", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTOAPI_BLOB", 64, IN },
		{1, "szPassword", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};
unsigned Crypt32arraySize = (sizeof(Crypt32_info) / sizeof(Crypt32_info[0]));