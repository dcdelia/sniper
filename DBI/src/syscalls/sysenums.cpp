// The following code is adapted from drltrace
// Credits: https://github.com/mxmssh/drltrace/
// drltrace is released under BSD 3-Clause License

#include "sysenums.h"

#pragma warning( disable: 4838 ) // TODO give me a break with casts :-)

static const_values_t anysize_array[] = {
	{ 1, "ANYSIZE_ARRAY" },
	{ 0 },
};

static const_values_t max_natural_alignment[] = {
	{ sizeof(ULONGLONG), "MAX_NATURAL_ALIGNMENT" },
	{ sizeof(DWORD), "MAX_NATURAL_ALIGNMENT" },
	{ 0 },
};

static const_values_t memory_allocation_alignment[] = {
	{ MEMORY_ALLOCATION_ALIGNMENT, "MEMORY_ALLOCATION_ALIGNMENT" },
	{ 0 },
};

static const_values_t system_cache_alignment_size[] = {
	{ SYSTEM_CACHE_ALIGNMENT_SIZE, "SYSTEM_CACHE_ALIGNMENT_SIZE" },
	{ 0 },
};

static const_values_t pragma_deprecated_ddk[] = {
	{ PRAGMA_DEPRECATED_DDK, "PRAGMA_DEPRECATED_DDK" },
	{ 0 },
};

static const_values_t ucschar_invalid_character[] = {
	{ (0xffffffff), "UCSCHAR_INVALID_CHARACTER" },
	{ 0 },
};

static const_values_t min_ucschar[] = {
	{ (0), "MIN_UCSCHAR" },
	{ 0 },
};

static const_values_t max_ucschar[] = {
	{ (0x0010FFFF), "MAX_UCSCHAR" },
	{ 0 },
};

static const_values_t all_processor_groups[] = {
	{ 0x0000ffff, "ALL_PROCESSOR_GROUPS" },
	{ 0 },
};

static const_values_t application_error_mask[] = {
	{ 0x20000000, "APPLICATION_ERROR_MASK" },
	{ 0x00000000, "ERROR_SEVERITY_SUCCESS" },
	{ 0x40000000, "ERROR_SEVERITY_INFORMATIONAL" },
	{ 0x80000000, "ERROR_SEVERITY_WARNING" },
	{ 0xC0000000, "ERROR_SEVERITY_ERROR" },
	{ 0 },
};
#if 0 /* FIXME i#1550: truncation of "__int64" to "int" */
static const_values_t maxlonglong[] = {
	{ (0x7fffffffffffffff), "MAXLONGLONG" },
	{ 0 },
};
#endif
static const_values_t unicode_string_max_bytes[] = {
	{ ((WORD)65534), "UNICODE_STRING_MAX_BYTES" },
	{ (32767), "UNICODE_STRING_MAX_CHARS" },
	{ 0 },
};

static const_values_t minchar[] = {
	{ 0x00000080, "MINCHAR" },
	{ 0x0000007f, "MAXCHAR" },
	{ 0x00008000, "MINSHORT" },
	{ 0x00007fff, "MAXSHORT" },
	{ 0x80000000, "MINLONG" },
	{ 0x7fffffff, "MAXLONG" },
	{ 0x000000ff, "MAXBYTE" },
	{ 0x0000ffff, "MAXWORD" },
	{ 0xffffffff, "MAXDWORD" },
	{ 0 },
};

static const_values_t ver_server_nt[] = {
	{ 0x80000000, "VER_SERVER_NT" },
	{ 0x40000000, "VER_WORKSTATION_NT" },
	{ 0x00000001, "VER_SUITE_SMALLBUSINESS" },
	{ 0x00000002, "VER_SUITE_ENTERPRISE" },
	{ 0x00000004, "VER_SUITE_BACKOFFICE" },
	{ 0x00000008, "VER_SUITE_COMMUNICATIONS" },
	{ 0x00000010, "VER_SUITE_TERMINAL" },
	{ 0x00000020, "VER_SUITE_SMALLBUSINESS_RESTRICTED" },
	{ 0x00000040, "VER_SUITE_EMBEDDEDNT" },
	{ 0x00000080, "VER_SUITE_DATACENTER" },
	{ 0x00000100, "VER_SUITE_SINGLEUSERTS" },
	{ 0x00000200, "VER_SUITE_PERSONAL" },
	{ 0x00000400, "VER_SUITE_BLADE" },
	{ 0x00000800, "VER_SUITE_EMBEDDED_RESTRICTED" },
	{ 0x00001000, "VER_SUITE_SECURITY_APPLIANCE" },
	{ 0x00002000, "VER_SUITE_STORAGE_SERVER" },
	{ 0x00004000, "VER_SUITE_COMPUTE_SERVER" },
	{ 0x00008000, "VER_SUITE_WH_SERVER" },
	{ 0 },
};

static const_values_t product_undefined[] = {
	{ 0x00000000, "PRODUCT_UNDEFINED" },
	{ 0x00000001, "PRODUCT_ULTIMATE" },
	{ 0x00000002, "PRODUCT_HOME_BASIC" },
	{ 0x00000003, "PRODUCT_HOME_PREMIUM" },
	{ 0x00000004, "PRODUCT_ENTERPRISE" },
	{ 0x00000005, "PRODUCT_HOME_BASIC_N" },
	{ 0x00000006, "PRODUCT_BUSINESS" },
	{ 0x00000007, "PRODUCT_STANDARD_SERVER" },
	{ 0x00000008, "PRODUCT_DATACENTER_SERVER" },
	{ 0x00000009, "PRODUCT_SMALLBUSINESS_SERVER" },
	{ 0x0000000A, "PRODUCT_ENTERPRISE_SERVER" },
	{ 0x0000000B, "PRODUCT_STARTER" },
	{ 0x0000000C, "PRODUCT_DATACENTER_SERVER_CORE" },
	{ 0x0000000D, "PRODUCT_STANDARD_SERVER_CORE" },
	{ 0x0000000E, "PRODUCT_ENTERPRISE_SERVER_CORE" },
	{ 0x0000000F, "PRODUCT_ENTERPRISE_SERVER_IA64" },
	{ 0x00000010, "PRODUCT_BUSINESS_N" },
	{ 0x00000011, "PRODUCT_WEB_SERVER" },
	{ 0x00000012, "PRODUCT_CLUSTER_SERVER" },
	{ 0x00000013, "PRODUCT_HOME_SERVER" },
	{ 0x00000014, "PRODUCT_STORAGE_EXPRESS_SERVER" },
	{ 0x00000015, "PRODUCT_STORAGE_STANDARD_SERVER" },
	{ 0x00000016, "PRODUCT_STORAGE_WORKGROUP_SERVER" },
	{ 0x00000017, "PRODUCT_STORAGE_ENTERPRISE_SERVER" },
	{ 0x00000018, "PRODUCT_SERVER_FOR_SMALLBUSINESS" },
	{ 0x00000019, "PRODUCT_SMALLBUSINESS_SERVER_PREMIUM" },
	{ 0x0000001A, "PRODUCT_HOME_PREMIUM_N" },
	{ 0x0000001B, "PRODUCT_ENTERPRISE_N" },
	{ 0x0000001C, "PRODUCT_ULTIMATE_N" },
	{ 0x0000001D, "PRODUCT_WEB_SERVER_CORE" },
	{ 0x0000001E, "PRODUCT_MEDIUMBUSINESS_SERVER_MANAGEMENT" },
	{ 0x0000001F, "PRODUCT_MEDIUMBUSINESS_SERVER_SECURITY" },
	{ 0x00000020, "PRODUCT_MEDIUMBUSINESS_SERVER_MESSAGING" },
	{ 0x00000021, "PRODUCT_SERVER_FOUNDATION" },
	{ 0x00000022, "PRODUCT_HOME_PREMIUM_SERVER" },
	{ 0x00000023, "PRODUCT_SERVER_FOR_SMALLBUSINESS_V" },
	{ 0x00000024, "PRODUCT_STANDARD_SERVER_V" },
	{ 0x00000025, "PRODUCT_DATACENTER_SERVER_V" },
	{ 0x00000026, "PRODUCT_ENTERPRISE_SERVER_V" },
	{ 0x00000027, "PRODUCT_DATACENTER_SERVER_CORE_V" },
	{ 0x00000028, "PRODUCT_STANDARD_SERVER_CORE_V" },
	{ 0x00000029, "PRODUCT_ENTERPRISE_SERVER_CORE_V" },
	{ 0x0000002A, "PRODUCT_HYPERV" },
	{ 0x0000002B, "PRODUCT_STORAGE_EXPRESS_SERVER_CORE" },
	{ 0x0000002C, "PRODUCT_STORAGE_STANDARD_SERVER_CORE" },
	{ 0x0000002D, "PRODUCT_STORAGE_WORKGROUP_SERVER_CORE" },
	{ 0x0000002E, "PRODUCT_STORAGE_ENTERPRISE_SERVER_CORE" },
	{ 0x0000002F, "PRODUCT_STARTER_N" },
	{ 0x00000030, "PRODUCT_PROFESSIONAL" },
	{ 0x00000031, "PRODUCT_PROFESSIONAL_N" },
	{ 0x00000032, "PRODUCT_SB_SOLUTION_SERVER" },
	{ 0x00000033, "PRODUCT_SERVER_FOR_SB_SOLUTIONS" },
	{ 0x00000034, "PRODUCT_STANDARD_SERVER_SOLUTIONS" },
	{ 0x00000035, "PRODUCT_STANDARD_SERVER_SOLUTIONS_CORE" },
	{ 0x00000036, "PRODUCT_SB_SOLUTION_SERVER_EM" },
	{ 0x00000037, "PRODUCT_SERVER_FOR_SB_SOLUTIONS_EM" },
	{ 0x00000038, "PRODUCT_SOLUTION_EMBEDDEDSERVER" },
	{ 0x00000039, "PRODUCT_SOLUTION_EMBEDDEDSERVER_CORE" },
	{ 0x0000003F, "PRODUCT_SMALLBUSINESS_SERVER_PREMIUM_CORE" },
	{ 0x0000003B, "PRODUCT_ESSENTIALBUSINESS_SERVER_MGMT" },
	{ 0x0000003C, "PRODUCT_ESSENTIALBUSINESS_SERVER_ADDL" },
	{ 0x0000003D, "PRODUCT_ESSENTIALBUSINESS_SERVER_MGMTSVC" },
	{ 0x0000003E, "PRODUCT_ESSENTIALBUSINESS_SERVER_ADDLSVC" },
	{ 0x00000040, "PRODUCT_CLUSTER_SERVER_V" },
	{ 0x00000041, "PRODUCT_EMBEDDED" },
	{ 0x00000042, "PRODUCT_STARTER_E" },
	{ 0x00000043, "PRODUCT_HOME_BASIC_E" },
	{ 0x00000044, "PRODUCT_HOME_PREMIUM_E" },
	{ 0x00000045, "PRODUCT_PROFESSIONAL_E" },
	{ 0x00000046, "PRODUCT_ENTERPRISE_E" },
	{ 0x00000047, "PRODUCT_ULTIMATE_E" },
	{ 0xABCDABCD, "PRODUCT_UNLICENSED" },
	{ 0 },
};

static const_values_t lang_neutral[] = {
	{ 0x00000000, "LANG_NEUTRAL" },
	{ 0x0000007f, "LANG_INVARIANT" },
	{ 0x00000036, "LANG_AFRIKAANS" },
	{ 0x0000001c, "LANG_ALBANIAN" },
	{ 0x00000084, "LANG_ALSATIAN" },
	{ 0x0000005e, "LANG_AMHARIC" },
	{ 0x00000001, "LANG_ARABIC" },
	{ 0x0000002b, "LANG_ARMENIAN" },
	{ 0x0000004d, "LANG_ASSAMESE" },
	{ 0x0000002c, "LANG_AZERI" },
	{ 0x0000006d, "LANG_BASHKIR" },
	{ 0x0000002d, "LANG_BASQUE" },
	{ 0x00000023, "LANG_BELARUSIAN" },
	{ 0x00000045, "LANG_BENGALI" },
	{ 0x0000007e, "LANG_BRETON" },
	{ 0x0000001a, "LANG_BOSNIAN" },
	{ 0x0000781a, "LANG_BOSNIAN_NEUTRAL" },
	{ 0x00000002, "LANG_BULGARIAN" },
	{ 0x00000003, "LANG_CATALAN" },
	{ 0x00000004, "LANG_CHINESE" },
	{ 0x00000004, "LANG_CHINESE_SIMPLIFIED" },
	{ 0x00007c04, "LANG_CHINESE_TRADITIONAL" },
	{ 0x00000083, "LANG_CORSICAN" },
	{ 0x0000001a, "LANG_CROATIAN" },
	{ 0x00000005, "LANG_CZECH" },
	{ 0x00000006, "LANG_DANISH" },
	{ 0x0000008c, "LANG_DARI" },
	{ 0x00000065, "LANG_DIVEHI" },
	{ 0x00000013, "LANG_DUTCH" },
	{ 0x00000009, "LANG_ENGLISH" },
	{ 0x00000025, "LANG_ESTONIAN" },
	{ 0x00000038, "LANG_FAEROESE" },
	{ 0x00000029, "LANG_FARSI" },
	{ 0x00000064, "LANG_FILIPINO" },
	{ 0x0000000b, "LANG_FINNISH" },
	{ 0x0000000c, "LANG_FRENCH" },
	{ 0x00000062, "LANG_FRISIAN" },
	{ 0x00000056, "LANG_GALICIAN" },
	{ 0x00000037, "LANG_GEORGIAN" },
	{ 0x00000007, "LANG_GERMAN" },
	{ 0x00000008, "LANG_GREEK" },
	{ 0x0000006f, "LANG_GREENLANDIC" },
	{ 0x00000047, "LANG_GUJARATI" },
	{ 0x00000068, "LANG_HAUSA" },
	{ 0x0000000d, "LANG_HEBREW" },
	{ 0x00000039, "LANG_HINDI" },
	{ 0x0000000e, "LANG_HUNGARIAN" },
	{ 0x0000000f, "LANG_ICELANDIC" },
	{ 0x00000070, "LANG_IGBO" },
	{ 0x00000021, "LANG_INDONESIAN" },
	{ 0x0000005d, "LANG_INUKTITUT" },
	{ 0x0000003c, "LANG_IRISH" },
	{ 0x00000010, "LANG_ITALIAN" },
	{ 0x00000011, "LANG_JAPANESE" },
	{ 0x0000004b, "LANG_KANNADA" },
	{ 0x00000060, "LANG_KASHMIRI" },
	{ 0x0000003f, "LANG_KAZAK" },
	{ 0x00000053, "LANG_KHMER" },
	{ 0x00000086, "LANG_KICHE" },
	{ 0x00000087, "LANG_KINYARWANDA" },
	{ 0x00000057, "LANG_KONKANI" },
	{ 0x00000012, "LANG_KOREAN" },
	{ 0x00000040, "LANG_KYRGYZ" },
	{ 0x00000054, "LANG_LAO" },
	{ 0x00000026, "LANG_LATVIAN" },
	{ 0x00000027, "LANG_LITHUANIAN" },
	{ 0x0000002e, "LANG_LOWER_SORBIAN" },
	{ 0x0000006e, "LANG_LUXEMBOURGISH" },
	{ 0x0000002f, "LANG_MACEDONIAN" },
	{ 0x0000003e, "LANG_MALAY" },
	{ 0x0000004c, "LANG_MALAYALAM" },
	{ 0x0000003a, "LANG_MALTESE" },
	{ 0x00000058, "LANG_MANIPURI" },
	{ 0x00000081, "LANG_MAORI" },
	{ 0x0000007a, "LANG_MAPUDUNGUN" },
	{ 0x0000004e, "LANG_MARATHI" },
	{ 0x0000007c, "LANG_MOHAWK" },
	{ 0x00000050, "LANG_MONGOLIAN" },
	{ 0x00000061, "LANG_NEPALI" },
	{ 0x00000014, "LANG_NORWEGIAN" },
	{ 0x00000082, "LANG_OCCITAN" },
	{ 0x00000048, "LANG_ORIYA" },
	{ 0x00000063, "LANG_PASHTO" },
	{ 0x00000029, "LANG_PERSIAN" },
	{ 0x00000015, "LANG_POLISH" },
	{ 0x00000016, "LANG_PORTUGUESE" },
	{ 0x00000046, "LANG_PUNJABI" },
	{ 0x0000006b, "LANG_QUECHUA" },
	{ 0x00000018, "LANG_ROMANIAN" },
	{ 0x00000017, "LANG_ROMANSH" },
	{ 0x00000019, "LANG_RUSSIAN" },
	{ 0x0000003b, "LANG_SAMI" },
	{ 0x0000004f, "LANG_SANSKRIT" },
	{ 0x00000091, "LANG_SCOTTISH_GAELIC" },
	{ 0x0000001a, "LANG_SERBIAN" },
	{ 0x00007c1a, "LANG_SERBIAN_NEUTRAL" },
	{ 0x00000059, "LANG_SINDHI" },
	{ 0x0000005b, "LANG_SINHALESE" },
	{ 0x0000001b, "LANG_SLOVAK" },
	{ 0x00000024, "LANG_SLOVENIAN" },
	{ 0x0000006c, "LANG_SOTHO" },
	{ 0x0000000a, "LANG_SPANISH" },
	{ 0x00000041, "LANG_SWAHILI" },
	{ 0x0000001d, "LANG_SWEDISH" },
	{ 0x0000005a, "LANG_SYRIAC" },
	{ 0x00000028, "LANG_TAJIK" },
	{ 0x0000005f, "LANG_TAMAZIGHT" },
	{ 0x00000049, "LANG_TAMIL" },
	{ 0x00000044, "LANG_TATAR" },
	{ 0x0000004a, "LANG_TELUGU" },
	{ 0x0000001e, "LANG_THAI" },
	{ 0x00000051, "LANG_TIBETAN" },
	{ 0x00000073, "LANG_TIGRIGNA" },
	{ 0x00000032, "LANG_TSWANA" },
	{ 0x0000001f, "LANG_TURKISH" },
	{ 0x00000042, "LANG_TURKMEN" },
	{ 0x00000080, "LANG_UIGHUR" },
	{ 0x00000022, "LANG_UKRAINIAN" },
	{ 0x0000002e, "LANG_UPPER_SORBIAN" },
	{ 0x00000020, "LANG_URDU" },
	{ 0x00000043, "LANG_UZBEK" },
	{ 0x0000002a, "LANG_VIETNAMESE" },
	{ 0x00000052, "LANG_WELSH" },
	{ 0x00000088, "LANG_WOLOF" },
	{ 0x00000034, "LANG_XHOSA" },
	{ 0x00000085, "LANG_YAKUT" },
	{ 0x00000078, "LANG_YI" },
	{ 0x0000006a, "LANG_YORUBA" },
	{ 0x00000035, "LANG_ZULU" },
	{ 0 },
};

static const_values_t sublang_neutral[] = {
	{ 0x00000000, "SUBLANG_NEUTRAL" },
	{ 0x00000001, "SUBLANG_DEFAULT" },
	{ 0x00000002, "SUBLANG_SYS_DEFAULT" },
	{ 0x00000003, "SUBLANG_CUSTOM_DEFAULT" },
	{ 0x00000004, "SUBLANG_CUSTOM_UNSPECIFIED" },
	{ 0x00000005, "SUBLANG_UI_CUSTOM_DEFAULT" },
	{ 0 },
};

static const_values_t sublang_afrikaans_south_africa[] = {
	{ 0x00000001, "SUBLANG_AFRIKAANS_SOUTH_AFRICA" },
	{ 0 },
};

static const_values_t sublang_albanian_albania[] = {
	{ 0x00000001, "SUBLANG_ALBANIAN_ALBANIA" },
	{ 0 },
};

static const_values_t sublang_alsatian_france[] = {
	{ 0x00000001, "SUBLANG_ALSATIAN_FRANCE" },
	{ 0 },
};

static const_values_t sublang_amharic_ethiopia[] = {
	{ 0x00000001, "SUBLANG_AMHARIC_ETHIOPIA" },
	{ 0 },
};

static const_values_t sublang_arabic_saudi_arabia[] = {
	{ 0x00000001, "SUBLANG_ARABIC_SAUDI_ARABIA" },
	{ 0x00000002, "SUBLANG_ARABIC_IRAQ" },
	{ 0x00000003, "SUBLANG_ARABIC_EGYPT" },
	{ 0x00000004, "SUBLANG_ARABIC_LIBYA" },
	{ 0x00000005, "SUBLANG_ARABIC_ALGERIA" },
	{ 0x00000006, "SUBLANG_ARABIC_MOROCCO" },
	{ 0x00000007, "SUBLANG_ARABIC_TUNISIA" },
	{ 0x00000008, "SUBLANG_ARABIC_OMAN" },
	{ 0x00000009, "SUBLANG_ARABIC_YEMEN" },
	{ 0x0000000a, "SUBLANG_ARABIC_SYRIA" },
	{ 0x0000000b, "SUBLANG_ARABIC_JORDAN" },
	{ 0x0000000c, "SUBLANG_ARABIC_LEBANON" },
	{ 0x0000000d, "SUBLANG_ARABIC_KUWAIT" },
	{ 0x0000000e, "SUBLANG_ARABIC_UAE" },
	{ 0x0000000f, "SUBLANG_ARABIC_BAHRAIN" },
	{ 0x00000010, "SUBLANG_ARABIC_QATAR" },
	{ 0 },
};

static const_values_t sublang_armenian_armenia[] = {
	{ 0x00000001, "SUBLANG_ARMENIAN_ARMENIA" },
	{ 0 },
};

static const_values_t sublang_assamese_india[] = {
	{ 0x00000001, "SUBLANG_ASSAMESE_INDIA" },
	{ 0 },
};

static const_values_t sublang_azeri_latin[] = {
	{ 0x00000001, "SUBLANG_AZERI_LATIN" },
	{ 0x00000002, "SUBLANG_AZERI_CYRILLIC" },
	{ 0 },
};

static const_values_t sublang_bashkir_russia[] = {
	{ 0x00000001, "SUBLANG_BASHKIR_RUSSIA" },
	{ 0 },
};

static const_values_t sublang_basque_basque[] = {
	{ 0x00000001, "SUBLANG_BASQUE_BASQUE" },
	{ 0 },
};

static const_values_t sublang_belarusian_belarus[] = {
	{ 0x00000001, "SUBLANG_BELARUSIAN_BELARUS" },
	{ 0 },
};

static const_values_t sublang_bengali_india[] = {
	{ 0x00000001, "SUBLANG_BENGALI_INDIA" },
	{ 0x00000002, "SUBLANG_BENGALI_BANGLADESH" },
	{ 0 },
};

static const_values_t sublang_bosnian_bosnia_herzegovina_latin[] = {
	{ 0x00000005, "SUBLANG_BOSNIAN_BOSNIA_HERZEGOVINA_LATIN" },
	{ 0x00000008, "SUBLANG_BOSNIAN_BOSNIA_HERZEGOVINA_CYRILLIC" },
	{ 0 },
};

static const_values_t sublang_breton_france[] = {
	{ 0x00000001, "SUBLANG_BRETON_FRANCE" },
	{ 0 },
};

static const_values_t sublang_bulgarian_bulgaria[] = {
	{ 0x00000001, "SUBLANG_BULGARIAN_BULGARIA" },
	{ 0 },
};

static const_values_t sublang_catalan_catalan[] = {
	{ 0x00000001, "SUBLANG_CATALAN_CATALAN" },
	{ 0 },
};

static const_values_t sublang_chinese_traditional[] = {
	{ 0x00000001, "SUBLANG_CHINESE_TRADITIONAL" },
	{ 0x00000002, "SUBLANG_CHINESE_SIMPLIFIED" },
	{ 0x00000003, "SUBLANG_CHINESE_HONGKONG" },
	{ 0x00000004, "SUBLANG_CHINESE_SINGAPORE" },
	{ 0x00000005, "SUBLANG_CHINESE_MACAU" },
	{ 0 },
};

static const_values_t sublang_corsican_france[] = {
	{ 0x00000001, "SUBLANG_CORSICAN_FRANCE" },
	{ 0 },
};

static const_values_t sublang_czech_czech_republic[] = {
	{ 0x00000001, "SUBLANG_CZECH_CZECH_REPUBLIC" },
	{ 0 },
};

static const_values_t sublang_croatian_croatia[] = {
	{ 0x00000001, "SUBLANG_CROATIAN_CROATIA" },
	{ 0 },
};

static const_values_t sublang_croatian_bosnia_herzegovina_latin[] = {
	{ 0x00000004, "SUBLANG_CROATIAN_BOSNIA_HERZEGOVINA_LATIN" },
	{ 0 },
};

static const_values_t sublang_danish_denmark[] = {
	{ 0x00000001, "SUBLANG_DANISH_DENMARK" },
	{ 0 },
};

static const_values_t sublang_dari_afghanistan[] = {
	{ 0x00000001, "SUBLANG_DARI_AFGHANISTAN" },
	{ 0 },
};

static const_values_t sublang_divehi_maldives[] = {
	{ 0x00000001, "SUBLANG_DIVEHI_MALDIVES" },
	{ 0 },
};

static const_values_t sublang_dutch[] = {
	{ 0x00000001, "SUBLANG_DUTCH" },
	{ 0x00000002, "SUBLANG_DUTCH_BELGIAN" },
	{ 0 },
};

static const_values_t sublang_english_us[] = {
	{ 0x00000001, "SUBLANG_ENGLISH_US" },
	{ 0x00000002, "SUBLANG_ENGLISH_UK" },
	{ 0x00000003, "SUBLANG_ENGLISH_AUS" },
	{ 0x00000004, "SUBLANG_ENGLISH_CAN" },
	{ 0x00000005, "SUBLANG_ENGLISH_NZ" },
	{ 0x00000006, "SUBLANG_ENGLISH_EIRE" },
	{ 0x00000007, "SUBLANG_ENGLISH_SOUTH_AFRICA" },
	{ 0x00000008, "SUBLANG_ENGLISH_JAMAICA" },
	{ 0x00000009, "SUBLANG_ENGLISH_CARIBBEAN" },
	{ 0x0000000a, "SUBLANG_ENGLISH_BELIZE" },
	{ 0x0000000b, "SUBLANG_ENGLISH_TRINIDAD" },
	{ 0x0000000c, "SUBLANG_ENGLISH_ZIMBABWE" },
	{ 0x0000000d, "SUBLANG_ENGLISH_PHILIPPINES" },
	{ 0x00000010, "SUBLANG_ENGLISH_INDIA" },
	{ 0x00000011, "SUBLANG_ENGLISH_MALAYSIA" },
	{ 0x00000012, "SUBLANG_ENGLISH_SINGAPORE" },
	{ 0 },
};

static const_values_t sublang_estonian_estonia[] = {
	{ 0x00000001, "SUBLANG_ESTONIAN_ESTONIA" },
	{ 0 },
};

static const_values_t sublang_faeroese_faroe_islands[] = {
	{ 0x00000001, "SUBLANG_FAEROESE_FAROE_ISLANDS" },
	{ 0 },
};

static const_values_t sublang_filipino_philippines[] = {
	{ 0x00000001, "SUBLANG_FILIPINO_PHILIPPINES" },
	{ 0 },
};

static const_values_t sublang_finnish_finland[] = {
	{ 0x00000001, "SUBLANG_FINNISH_FINLAND" },
	{ 0 },
};

static const_values_t sublang_french[] = {
	{ 0x00000001, "SUBLANG_FRENCH" },
	{ 0x00000002, "SUBLANG_FRENCH_BELGIAN" },
	{ 0x00000003, "SUBLANG_FRENCH_CANADIAN" },
	{ 0x00000004, "SUBLANG_FRENCH_SWISS" },
	{ 0x00000005, "SUBLANG_FRENCH_LUXEMBOURG" },
	{ 0x00000006, "SUBLANG_FRENCH_MONACO" },
	{ 0 },
};

static const_values_t sublang_frisian_netherlands[] = {
	{ 0x00000001, "SUBLANG_FRISIAN_NETHERLANDS" },
	{ 0 },
};

static const_values_t sublang_galician_galician[] = {
	{ 0x00000001, "SUBLANG_GALICIAN_GALICIAN" },
	{ 0 },
};

static const_values_t sublang_georgian_georgia[] = {
	{ 0x00000001, "SUBLANG_GEORGIAN_GEORGIA" },
	{ 0 },
};

static const_values_t sublang_german[] = {
	{ 0x00000001, "SUBLANG_GERMAN" },
	{ 0x00000002, "SUBLANG_GERMAN_SWISS" },
	{ 0x00000003, "SUBLANG_GERMAN_AUSTRIAN" },
	{ 0x00000004, "SUBLANG_GERMAN_LUXEMBOURG" },
	{ 0x00000005, "SUBLANG_GERMAN_LIECHTENSTEIN" },
	{ 0 },
};

static const_values_t sublang_greek_greece[] = {
	{ 0x00000001, "SUBLANG_GREEK_GREECE" },
	{ 0 },
};

static const_values_t sublang_greenlandic_greenland[] = {
	{ 0x00000001, "SUBLANG_GREENLANDIC_GREENLAND" },
	{ 0 },
};

static const_values_t sublang_gujarati_india[] = {
	{ 0x00000001, "SUBLANG_GUJARATI_INDIA" },
	{ 0 },
};

static const_values_t sublang_hausa_nigeria_latin[] = {
	{ 0x00000001, "SUBLANG_HAUSA_NIGERIA_LATIN" },
	{ 0 },
};

static const_values_t sublang_hebrew_israel[] = {
	{ 0x00000001, "SUBLANG_HEBREW_ISRAEL" },
	{ 0 },
};

static const_values_t sublang_hindi_india[] = {
	{ 0x00000001, "SUBLANG_HINDI_INDIA" },
	{ 0 },
};

static const_values_t sublang_hungarian_hungary[] = {
	{ 0x00000001, "SUBLANG_HUNGARIAN_HUNGARY" },
	{ 0 },
};

static const_values_t sublang_icelandic_iceland[] = {
	{ 0x00000001, "SUBLANG_ICELANDIC_ICELAND" },
	{ 0 },
};

static const_values_t sublang_igbo_nigeria[] = {
	{ 0x00000001, "SUBLANG_IGBO_NIGERIA" },
	{ 0 },
};

static const_values_t sublang_indonesian_indonesia[] = {
	{ 0x00000001, "SUBLANG_INDONESIAN_INDONESIA" },
	{ 0 },
};

static const_values_t sublang_inuktitut_canada[] = {
	{ 0x00000001, "SUBLANG_INUKTITUT_CANADA" },
	{ 0x00000002, "SUBLANG_INUKTITUT_CANADA_LATIN" },
	{ 0 },
};

static const_values_t sublang_irish_ireland[] = {
	{ 0x00000002, "SUBLANG_IRISH_IRELAND" },
	{ 0 },
};

static const_values_t sublang_italian[] = {
	{ 0x00000001, "SUBLANG_ITALIAN" },
	{ 0x00000002, "SUBLANG_ITALIAN_SWISS" },
	{ 0 },
};

static const_values_t sublang_japanese_japan[] = {
	{ 0x00000001, "SUBLANG_JAPANESE_JAPAN" },
	{ 0 },
};

static const_values_t sublang_kannada_india[] = {
	{ 0x00000001, "SUBLANG_KANNADA_INDIA" },
	{ 0x00000002, "SUBLANG_KASHMIRI_INDIA" },
	{ 0 },
};

static const_values_t sublang_kashmiri_sasia[] = {
	{ 0x00000002, "SUBLANG_KASHMIRI_SASIA" },
	{ 0 },
};

static const_values_t sublang_kazak_kazakhstan[] = {
	{ 0x00000001, "SUBLANG_KAZAK_KAZAKHSTAN" },
	{ 0 },
};

static const_values_t sublang_khmer_cambodia[] = {
	{ 0x00000001, "SUBLANG_KHMER_CAMBODIA" },
	{ 0 },
};

static const_values_t sublang_kiche_guatemala[] = {
	{ 0x00000001, "SUBLANG_KICHE_GUATEMALA" },
	{ 0 },
};

static const_values_t sublang_kinyarwanda_rwanda[] = {
	{ 0x00000001, "SUBLANG_KINYARWANDA_RWANDA" },
	{ 0 },
};

static const_values_t sublang_konkani_india[] = {
	{ 0x00000001, "SUBLANG_KONKANI_INDIA" },
	{ 0 },
};

static const_values_t sublang_korean[] = {
	{ 0x00000001, "SUBLANG_KOREAN" },
	{ 0 },
};

static const_values_t sublang_kyrgyz_kyrgyzstan[] = {
	{ 0x00000001, "SUBLANG_KYRGYZ_KYRGYZSTAN" },
	{ 0 },
};

static const_values_t sublang_lao_lao[] = {
	{ 0x00000001, "SUBLANG_LAO_LAO" },
	{ 0 },
};

static const_values_t sublang_latvian_latvia[] = {
	{ 0x00000001, "SUBLANG_LATVIAN_LATVIA" },
	{ 0 },
};

static const_values_t sublang_lithuanian[] = {
	{ 0x00000001, "SUBLANG_LITHUANIAN" },
	{ 0x00000002, "SUBLANG_LOWER_SORBIAN_GERMANY" },
	{ 0 },
};

static const_values_t sublang_luxembourgish_luxembourg[] = {
	{ 0x00000001, "SUBLANG_LUXEMBOURGISH_LUXEMBOURG" },
	{ 0 },
};

static const_values_t sublang_macedonian_macedonia[] = {
	{ 0x00000001, "SUBLANG_MACEDONIAN_MACEDONIA" },
	{ 0 },
};

static const_values_t sublang_malay_malaysia[] = {
	{ 0x00000001, "SUBLANG_MALAY_MALAYSIA" },
	{ 0x00000002, "SUBLANG_MALAY_BRUNEI_DARUSSALAM" },
	{ 0 },
};

static const_values_t sublang_malayalam_india[] = {
	{ 0x00000001, "SUBLANG_MALAYALAM_INDIA" },
	{ 0 },
};

static const_values_t sublang_maltese_malta[] = {
	{ 0x00000001, "SUBLANG_MALTESE_MALTA" },
	{ 0 },
};

static const_values_t sublang_maori_new_zealand[] = {
	{ 0x00000001, "SUBLANG_MAORI_NEW_ZEALAND" },
	{ 0 },
};

static const_values_t sublang_mapudungun_chile[] = {
	{ 0x00000001, "SUBLANG_MAPUDUNGUN_CHILE" },
	{ 0 },
};

static const_values_t sublang_marathi_india[] = {
	{ 0x00000001, "SUBLANG_MARATHI_INDIA" },
	{ 0 },
};

static const_values_t sublang_mohawk_mohawk[] = {
	{ 0x00000001, "SUBLANG_MOHAWK_MOHAWK" },
	{ 0 },
};

static const_values_t sublang_mongolian_cyrillic_mongolia[] = {
	{ 0x00000001, "SUBLANG_MONGOLIAN_CYRILLIC_MONGOLIA" },
	{ 0x00000002, "SUBLANG_MONGOLIAN_PRC" },
	{ 0 },
};

static const_values_t sublang_nepali_india[] = {
	{ 0x00000002, "SUBLANG_NEPALI_INDIA" },
	{ 0x00000001, "SUBLANG_NEPALI_NEPAL" },
	{ 0 },
};

static const_values_t sublang_norwegian_bokmal[] = {
	{ 0x00000001, "SUBLANG_NORWEGIAN_BOKMAL" },
	{ 0x00000002, "SUBLANG_NORWEGIAN_NYNORSK" },
	{ 0 },
};

static const_values_t sublang_occitan_france[] = {
	{ 0x00000001, "SUBLANG_OCCITAN_FRANCE" },
	{ 0 },
};

static const_values_t sublang_oriya_india[] = {
	{ 0x00000001, "SUBLANG_ORIYA_INDIA" },
	{ 0 },
};

static const_values_t sublang_pashto_afghanistan[] = {
	{ 0x00000001, "SUBLANG_PASHTO_AFGHANISTAN" },
	{ 0 },
};

static const_values_t sublang_persian_iran[] = {
	{ 0x00000001, "SUBLANG_PERSIAN_IRAN" },
	{ 0 },
};

static const_values_t sublang_polish_poland[] = {
	{ 0x00000001, "SUBLANG_POLISH_POLAND" },
	{ 0 },
};

static const_values_t sublang_portuguese[] = {
	{ 0x00000002, "SUBLANG_PORTUGUESE" },
	{ 0x00000001, "SUBLANG_PORTUGUESE_BRAZILIAN" },
	{ 0 },
};

static const_values_t sublang_punjabi_india[] = {
	{ 0x00000001, "SUBLANG_PUNJABI_INDIA" },
	{ 0 },
};

static const_values_t sublang_quechua_bolivia[] = {
	{ 0x00000001, "SUBLANG_QUECHUA_BOLIVIA" },
	{ 0x00000002, "SUBLANG_QUECHUA_ECUADOR" },
	{ 0x00000003, "SUBLANG_QUECHUA_PERU" },
	{ 0 },
};

static const_values_t sublang_romanian_romania[] = {
	{ 0x00000001, "SUBLANG_ROMANIAN_ROMANIA" },
	{ 0 },
};

static const_values_t sublang_romansh_switzerland[] = {
	{ 0x00000001, "SUBLANG_ROMANSH_SWITZERLAND" },
	{ 0 },
};

static const_values_t sublang_russian_russia[] = {
	{ 0x00000001, "SUBLANG_RUSSIAN_RUSSIA" },
	{ 0 },
};

static const_values_t sublang_sami_northern_norway[] = {
	{ 0x00000001, "SUBLANG_SAMI_NORTHERN_NORWAY" },
	{ 0x00000002, "SUBLANG_SAMI_NORTHERN_SWEDEN" },
	{ 0x00000003, "SUBLANG_SAMI_NORTHERN_FINLAND" },
	{ 0x00000004, "SUBLANG_SAMI_LULE_NORWAY" },
	{ 0x00000005, "SUBLANG_SAMI_LULE_SWEDEN" },
	{ 0x00000006, "SUBLANG_SAMI_SOUTHERN_NORWAY" },
	{ 0x00000007, "SUBLANG_SAMI_SOUTHERN_SWEDEN" },
	{ 0x00000008, "SUBLANG_SAMI_SKOLT_FINLAND" },
	{ 0x00000009, "SUBLANG_SAMI_INARI_FINLAND" },
	{ 0 },
};

static const_values_t sublang_sanskrit_india[] = {
	{ 0x00000001, "SUBLANG_SANSKRIT_INDIA" },
	{ 0 },
};

static const_values_t sublang_scottish_gaelic[] = {
	{ 0x00000001, "SUBLANG_SCOTTISH_GAELIC" },
	{ 0 },
};

static const_values_t sublang_serbian_croatia[] = {
	{ 0x00000001, "SUBLANG_SERBIAN_CROATIA" },
	{ 0x00000002, "SUBLANG_SERBIAN_LATIN" },
	{ 0x00000003, "SUBLANG_SERBIAN_CYRILLIC" },
	{ 0x00000006, "SUBLANG_SERBIAN_BOSNIA_HERZEGOVINA_LATIN" },
	{ 0x00000007, "SUBLANG_SERBIAN_BOSNIA_HERZEGOVINA_CYRILLIC" },
	{ 0x0000000b, "SUBLANG_SERBIAN_MONTENEGRO_LATIN" },
	{ 0x0000000c, "SUBLANG_SERBIAN_MONTENEGRO_CYRILLIC" },
	{ 0x00000009, "SUBLANG_SERBIAN_SERBIA_LATIN" },
	{ 0x0000000a, "SUBLANG_SERBIAN_SERBIA_CYRILLIC" },
	{ 0 },
};

static const_values_t sublang_sindhi_india[] = {
	{ 0x00000001, "SUBLANG_SINDHI_INDIA" },
	{ 0x00000002, "SUBLANG_SINDHI_PAKISTAN" },
	{ 0 },
};

static const_values_t sublang_sindhi_afghanistan[] = {
	{ 0x00000002, "SUBLANG_SINDHI_AFGHANISTAN" },
	{ 0 },
};

static const_values_t sublang_sinhalese_sri_lanka[] = {
	{ 0x00000001, "SUBLANG_SINHALESE_SRI_LANKA" },
	{ 0 },
};

static const_values_t sublang_sotho_northern_south_africa[] = {
	{ 0x00000001, "SUBLANG_SOTHO_NORTHERN_SOUTH_AFRICA" },
	{ 0 },
};

static const_values_t sublang_slovak_slovakia[] = {
	{ 0x00000001, "SUBLANG_SLOVAK_SLOVAKIA" },
	{ 0 },
};

static const_values_t sublang_slovenian_slovenia[] = {
	{ 0x00000001, "SUBLANG_SLOVENIAN_SLOVENIA" },
	{ 0 },
};

static const_values_t sublang_spanish[] = {
	{ 0x00000001, "SUBLANG_SPANISH" },
	{ 0x00000002, "SUBLANG_SPANISH_MEXICAN" },
	{ 0x00000003, "SUBLANG_SPANISH_MODERN" },
	{ 0x00000004, "SUBLANG_SPANISH_GUATEMALA" },
	{ 0x00000005, "SUBLANG_SPANISH_COSTA_RICA" },
	{ 0x00000006, "SUBLANG_SPANISH_PANAMA" },
	{ 0x00000007, "SUBLANG_SPANISH_DOMINICAN_REPUBLIC" },
	{ 0x00000008, "SUBLANG_SPANISH_VENEZUELA" },
	{ 0x00000009, "SUBLANG_SPANISH_COLOMBIA" },
	{ 0x0000000a, "SUBLANG_SPANISH_PERU" },
	{ 0x0000000b, "SUBLANG_SPANISH_ARGENTINA" },
	{ 0x0000000c, "SUBLANG_SPANISH_ECUADOR" },
	{ 0x0000000d, "SUBLANG_SPANISH_CHILE" },
	{ 0x0000000e, "SUBLANG_SPANISH_URUGUAY" },
	{ 0x0000000f, "SUBLANG_SPANISH_PARAGUAY" },
	{ 0x00000010, "SUBLANG_SPANISH_BOLIVIA" },
	{ 0x00000011, "SUBLANG_SPANISH_EL_SALVADOR" },
	{ 0x00000012, "SUBLANG_SPANISH_HONDURAS" },
	{ 0x00000013, "SUBLANG_SPANISH_NICARAGUA" },
	{ 0x00000014, "SUBLANG_SPANISH_PUERTO_RICO" },
	{ 0x00000015, "SUBLANG_SPANISH_US" },
	{ 0 },
};

static const_values_t sublang_swahili_kenya[] = {
	{ 0x00000001, "SUBLANG_SWAHILI_KENYA" },
	{ 0 },
};

static const_values_t sublang_swedish[] = {
	{ 0x00000001, "SUBLANG_SWEDISH" },
	{ 0x00000002, "SUBLANG_SWEDISH_FINLAND" },
	{ 0 },
};

static const_values_t sublang_syriac_syria[] = {
	{ 0x00000001, "SUBLANG_SYRIAC_SYRIA" },
	{ 0 },
};

static const_values_t sublang_tajik_tajikistan[] = {
	{ 0x00000001, "SUBLANG_TAJIK_TAJIKISTAN" },
	{ 0 },
};

static const_values_t sublang_tamazight_algeria_latin[] = {
	{ 0x00000002, "SUBLANG_TAMAZIGHT_ALGERIA_LATIN" },
	{ 0 },
};

static const_values_t sublang_tamil_india[] = {
	{ 0x00000001, "SUBLANG_TAMIL_INDIA" },
	{ 0 },
};

static const_values_t sublang_tatar_russia[] = {
	{ 0x00000001, "SUBLANG_TATAR_RUSSIA" },
	{ 0 },
};

static const_values_t sublang_telugu_india[] = {
	{ 0x00000001, "SUBLANG_TELUGU_INDIA" },
	{ 0 },
};

static const_values_t sublang_thai_thailand[] = {
	{ 0x00000001, "SUBLANG_THAI_THAILAND" },
	{ 0 },
};

static const_values_t sublang_tibetan_prc[] = {
	{ 0x00000001, "SUBLANG_TIBETAN_PRC" },
	{ 0 },
};

static const_values_t sublang_tigrigna_eritrea[] = {
	{ 0x00000002, "SUBLANG_TIGRIGNA_ERITREA" },
	{ 0 },
};

static const_values_t sublang_tswana_south_africa[] = {
	{ 0x00000001, "SUBLANG_TSWANA_SOUTH_AFRICA" },
	{ 0 },
};

static const_values_t sublang_turkish_turkey[] = {
	{ 0x00000001, "SUBLANG_TURKISH_TURKEY" },
	{ 0 },
};

static const_values_t sublang_turkmen_turkmenistan[] = {
	{ 0x00000001, "SUBLANG_TURKMEN_TURKMENISTAN" },
	{ 0 },
};

static const_values_t sublang_uighur_prc[] = {
	{ 0x00000001, "SUBLANG_UIGHUR_PRC" },
	{ 0 },
};

static const_values_t sublang_ukrainian_ukraine[] = {
	{ 0x00000001, "SUBLANG_UKRAINIAN_UKRAINE" },
	{ 0 },
};

static const_values_t sublang_upper_sorbian_germany[] = {
	{ 0x00000001, "SUBLANG_UPPER_SORBIAN_GERMANY" },
	{ 0 },
};

static const_values_t sublang_urdu_pakistan[] = {
	{ 0x00000001, "SUBLANG_URDU_PAKISTAN" },
	{ 0x00000002, "SUBLANG_URDU_INDIA" },
	{ 0 },
};

static const_values_t sublang_uzbek_latin[] = {
	{ 0x00000001, "SUBLANG_UZBEK_LATIN" },
	{ 0x00000002, "SUBLANG_UZBEK_CYRILLIC" },
	{ 0 },
};

static const_values_t sublang_vietnamese_vietnam[] = {
	{ 0x00000001, "SUBLANG_VIETNAMESE_VIETNAM" },
	{ 0 },
};

static const_values_t sublang_welsh_united_kingdom[] = {
	{ 0x00000001, "SUBLANG_WELSH_UNITED_KINGDOM" },
	{ 0 },
};

static const_values_t sublang_wolof_senegal[] = {
	{ 0x00000001, "SUBLANG_WOLOF_SENEGAL" },
	{ 0 },
};

static const_values_t sublang_xhosa_south_africa[] = {
	{ 0x00000001, "SUBLANG_XHOSA_SOUTH_AFRICA" },
	{ 0 },
};

static const_values_t sublang_yakut_russia[] = {
	{ 0x00000001, "SUBLANG_YAKUT_RUSSIA" },
	{ 0 },
};

static const_values_t sublang_yi_prc[] = {
	{ 0x00000001, "SUBLANG_YI_PRC" },
	{ 0 },
};

static const_values_t sublang_yoruba_nigeria[] = {
	{ 0x00000001, "SUBLANG_YORUBA_NIGERIA" },
	{ 0 },
};

static const_values_t sublang_zulu_south_africa[] = {
	{ 0x00000001, "SUBLANG_ZULU_SOUTH_AFRICA" },
	{ 0 },
};

static const_values_t sort_default[] = {
	{ 0x00000000, "SORT_DEFAULT" },
	{ 0x00000001, "SORT_INVARIANT_MATH" },
	{ 0 },
};

static const_values_t sort_japanese_xjis[] = {
	{ 0x00000000, "SORT_JAPANESE_XJIS" },
	{ 0x00000001, "SORT_JAPANESE_UNICODE" },
	{ 0x00000004, "SORT_JAPANESE_RADICALSTROKE" },
	{ 0 },
};

static const_values_t sort_chinese_big5[] = {
	{ 0x00000000, "SORT_CHINESE_BIG5" },
	{ 0 },
};

static const_values_t sort_chinese_prcp[] = {
	{ 0x00000000, "SORT_CHINESE_PRCP" },
	{ 0x00000001, "SORT_CHINESE_UNICODE" },
	{ 0x00000002, "SORT_CHINESE_PRC" },
	{ 0x00000003, "SORT_CHINESE_BOPOMOFO" },
	{ 0x00000004, "SORT_CHINESE_RADICALSTROKE" },
	{ 0 },
};

static const_values_t sort_korean_ksc[] = {
	{ 0x00000000, "SORT_KOREAN_KSC" },
	{ 0x00000001, "SORT_KOREAN_UNICODE" },
	{ 0 },
};

static const_values_t sort_german_phone_book[] = {
	{ 0x00000001, "SORT_GERMAN_PHONE_BOOK" },
	{ 0 },
};

static const_values_t sort_hungarian_default[] = {
	{ 0x00000000, "SORT_HUNGARIAN_DEFAULT" },
	{ 0x00000001, "SORT_HUNGARIAN_TECHNICAL" },
	{ 0 },
};

static const_values_t sort_georgian_traditional[] = {
	{ 0x00000000, "SORT_GEORGIAN_TRADITIONAL" },
	{ 0x00000001, "SORT_GEORGIAN_MODERN" },
	{ 0 },
};

static const_values_t nls_valid_locale_mask[] = {
	{ 0x000fffff, "NLS_VALID_LOCALE_MASK" },
	{ 0 },
};

static const_values_t locale_name_max_length[] = {
	{ 85, "LOCALE_NAME_MAX_LENGTH" },
	{ 0 },
};

static const_values_t lang_system_default[] = {
	{ (MAKELANGID(LANG_NEUTRAL,SUBLANG_SYS_DEFAULT)), "LANG_SYSTEM_DEFAULT" },
	{ (MAKELANGID(LANG_NEUTRAL,SUBLANG_DEFAULT)), "LANG_USER_DEFAULT" },
	{ 0 },
};

static const_values_t locale_system_default[] = {
	{ (MAKELCID(LANG_SYSTEM_DEFAULT,SORT_DEFAULT)), "LOCALE_SYSTEM_DEFAULT" },
	{ (MAKELCID(LANG_USER_DEFAULT,SORT_DEFAULT)), "LOCALE_USER_DEFAULT" },
	{ (MAKELCID(MAKELANGID(LANG_NEUTRAL,SUBLANG_CUSTOM_DEFAULT),SORT_DEFAULT)), "LOCALE_CUSTOM_DEFAULT" },
	{ (MAKELCID(MAKELANGID(LANG_NEUTRAL,SUBLANG_CUSTOM_UNSPECIFIED),SORT_DEFAULT)), "LOCALE_CUSTOM_UNSPECIFIED" },
	{ (MAKELCID(MAKELANGID(LANG_NEUTRAL,SUBLANG_UI_CUSTOM_DEFAULT),SORT_DEFAULT)), "LOCALE_CUSTOM_UI_DEFAULT" },
	{ (MAKELCID(MAKELANGID(LANG_NEUTRAL,SUBLANG_NEUTRAL),SORT_DEFAULT)), "LOCALE_NEUTRAL" },
	{ (MAKELCID(MAKELANGID(LANG_INVARIANT,SUBLANG_NEUTRAL),SORT_DEFAULT)), "LOCALE_INVARIANT" },
	{ 0 },
};

static const_values_t status_wait_0[] = {
	{ ((DWORD)0x00000000L), "STATUS_WAIT_0" },
	{ ((DWORD)0x00000080L), "STATUS_ABANDONED_WAIT_0" },
	{ ((DWORD)0x000000C0L), "STATUS_USER_APC" },
	{ ((DWORD)0x00000102L), "STATUS_TIMEOUT" },
	{ ((DWORD)0x00000103L), "STATUS_PENDING" },
	{ ((DWORD)0x00010001L), "DBG_EXCEPTION_HANDLED" },
	{ ((DWORD)0x00010002L), "DBG_CONTINUE" },
	{ ((DWORD)0x40000005L), "STATUS_SEGMENT_NOTIFICATION" },
	{ ((DWORD)0x40010003L), "DBG_TERMINATE_THREAD" },
	{ ((DWORD)0x40010004L), "DBG_TERMINATE_PROCESS" },
	{ ((DWORD)0x40010005L), "DBG_CONTROL_C" },
	{ ((DWORD)0x40010006L), "DBG_PRINTEXCEPTION_C" },
	{ ((DWORD)0x40010007L), "DBG_RIPEXCEPTION" },
	{ ((DWORD)0x40010008L), "DBG_CONTROL_BREAK" },
	{ ((DWORD)0x40010009L), "DBG_COMMAND_EXCEPTION" },
	{ ((DWORD)0x80000001L), "STATUS_GUARD_PAGE_VIOLATION" },
	{ ((DWORD)0x80000002L), "STATUS_DATATYPE_MISALIGNMENT" },
	{ ((DWORD)0x80000003L), "STATUS_BREAKPOINT" },
	{ ((DWORD)0x80000004L), "STATUS_SINGLE_STEP" },
	{ ((DWORD)0x80000026L), "STATUS_LONGJUMP" },
	{ ((DWORD)0x80000029L), "STATUS_UNWIND_CONSOLIDATE" },
	{ ((DWORD)0x80010001L), "DBG_EXCEPTION_NOT_HANDLED" },
	{ ((DWORD)0xC0000005L), "STATUS_ACCESS_VIOLATION" },
	{ ((DWORD)0xC0000006L), "STATUS_IN_PAGE_ERROR" },
	{ ((DWORD)0xC0000008L), "STATUS_INVALID_HANDLE" },
	{ ((DWORD)0xC000000DL), "STATUS_INVALID_PARAMETER" },
	{ ((DWORD)0xC0000017L), "STATUS_NO_MEMORY" },
	{ ((DWORD)0xC000001DL), "STATUS_ILLEGAL_INSTRUCTION" },
	{ ((DWORD)0xC0000025L), "STATUS_NONCONTINUABLE_EXCEPTION" },
	{ ((DWORD)0xC0000026L), "STATUS_INVALID_DISPOSITION" },
	{ ((DWORD)0xC000008CL), "STATUS_ARRAY_BOUNDS_EXCEEDED" },
	{ ((DWORD)0xC000008DL), "STATUS_FLOAT_DENORMAL_OPERAND" },
	{ ((DWORD)0xC000008EL), "STATUS_FLOAT_DIVIDE_BY_ZERO" },
	{ ((DWORD)0xC000008FL), "STATUS_FLOAT_INEXACT_RESULT" },
	{ ((DWORD)0xC0000090L), "STATUS_FLOAT_INVALID_OPERATION" },
	{ ((DWORD)0xC0000091L), "STATUS_FLOAT_OVERFLOW" },
	{ ((DWORD)0xC0000092L), "STATUS_FLOAT_STACK_CHECK" },
	{ ((DWORD)0xC0000093L), "STATUS_FLOAT_UNDERFLOW" },
	{ ((DWORD)0xC0000094L), "STATUS_INTEGER_DIVIDE_BY_ZERO" },
	{ ((DWORD)0xC0000095L), "STATUS_INTEGER_OVERFLOW" },
	{ ((DWORD)0xC0000096L), "STATUS_PRIVILEGED_INSTRUCTION" },
	{ ((DWORD)0xC00000FDL), "STATUS_STACK_OVERFLOW" },
	{ ((DWORD)0xC0000135L), "STATUS_DLL_NOT_FOUND" },
	{ ((DWORD)0xC0000138L), "STATUS_ORDINAL_NOT_FOUND" },
	{ ((DWORD)0xC0000139L), "STATUS_ENTRYPOINT_NOT_FOUND" },
	{ ((DWORD)0xC000013AL), "STATUS_CONTROL_C_EXIT" },
	{ ((DWORD)0xC0000142L), "STATUS_DLL_INIT_FAILED" },
	{ ((DWORD)0xC00002B4L), "STATUS_FLOAT_MULTIPLE_FAULTS" },
	{ ((DWORD)0xC00002B5L), "STATUS_FLOAT_MULTIPLE_TRAPS" },
	{ ((DWORD)0xC00002C9L), "STATUS_REG_NAT_CONSUMPTION" },
	{ ((DWORD)0xC0000409L), "STATUS_STACK_BUFFER_OVERRUN" },
	{ ((DWORD)0xC0000417L), "STATUS_INVALID_CRUNTIME_PARAMETER" },
	{ ((DWORD)0xC0000420L), "STATUS_ASSERTION_FAILURE" },
	{ ((DWORD)0xC015000FL), "STATUS_SXS_EARLY_DEACTIVATION" },
	{ ((DWORD)0xC0150010L), "STATUS_SXS_INVALID_DEACTIVATION" },
	{ 0 },
};

static const_values_t maximum_wait_objects[] = {
	{ 64, "MAXIMUM_WAIT_OBJECTS" },
	{ MAXCHAR, "MAXIMUM_SUSPEND_COUNT" },
	{ 0 },
};

static const_values_t xsave_align[] = {
	{ 64, "XSAVE_ALIGN" },
	{ 0 },
};

static const_values_t minimal_xstate_area_length[] = {
	{ sizeof(XSAVE_AREA), "MINIMAL_XSTATE_AREA_LENGTH" },
	{ 0 },
};

static const_values_t _mm_hint_t0[] = {
	{ 1, "_MM_HINT_T0" },
	{ 2, "_MM_HINT_T1" },
	{ 3, "_MM_HINT_T2" },
	{ 0, "_MM_HINT_NTA" },
	{ 0 },
};

#if 0 /* FIXME i#1550: resolve ifdef macros */
static const_values_t pf_temporal_level_1[] = {
	{ _MM_HINT_T0, "PF_TEMPORAL_LEVEL_1" },
	{ _MM_HINT_T1, "PF_TEMPORAL_LEVEL_2" },
	{ _MM_HINT_T2, "PF_TEMPORAL_LEVEL_3" },
	{ 0 },
};

static const_values_t pf_non_temporal_level_all[] = {
	{ _MM_HINT_NTA, "PF_NON_TEMPORAL_LEVEL_ALL" },
	{ 0 },
};

static const_values_t exception_read_fault[] = {
	{ 0, "EXCEPTION_READ_FAULT" },
	{ 1, "EXCEPTION_WRITE_FAULT" },
	{ 8, "EXCEPTION_EXECUTE_FAULT" },
	{ 0 },
};
#endif

static const_values_t context_amd64[] = {
	{ 0x00100000, "CONTEXT_AMD64" },
#if 0 /* FIXME i#1550: resolve ifdef macros */
	{ (CONTEXT_AMD64 |
	0x0000001L), "CONTEXT_CONTROL" },
	{ (CONTEXT_AMD64 |
		0x0000002L), "CONTEXT_INTEGER" },
		{ (CONTEXT_AMD64 |
			0x0000004L), "CONTEXT_SEGMENTS" },
			{ (CONTEXT_AMD64 |
				0x0000008L), "CONTEXT_FLOATING_POINT" },
				{ (CONTEXT_AMD64 |
					0x0000010L), "CONTEXT_DEBUG_REGISTERS" },
#endif
					{ (CONTEXT_CONTROL |
						CONTEXT_INTEGER |
						CONTEXT_FLOATING_POINT), "CONTEXT_FULL" },
						{ (CONTEXT_CONTROL |
							CONTEXT_INTEGER |
							CONTEXT_SEGMENTS |
							CONTEXT_FLOATING_POINT |
							CONTEXT_DEBUG_REGISTERS), "CONTEXT_ALL" },
#if 0 /* FIXME i#1550: resolve ifdef macros */
							{ (CONTEXT_AMD64 |
								0x0000020L), "CONTEXT_XSTATE" },
#endif
								{ 0x08000000, "CONTEXT_EXCEPTION_ACTIVE" },
								{ 0x10000000, "CONTEXT_SERVICE_ACTIVE" },
								{ 0x40000000, "CONTEXT_EXCEPTION_REQUEST" },
								{ 0x80000000, "CONTEXT_EXCEPTION_REPORTING" },
								{ 0 },
};

static const_values_t initial_mxcsr[] = {
	{ 0x00001f80, "INITIAL_MXCSR" },
	{ 0x0000027f, "INITIAL_FPCSR" },
	{ 0 },
};

static const_values_t runtime_function_indirect[] = {
	{ 0x00000001, "RUNTIME_FUNCTION_INDIRECT" },
	{ 0 },
};

static const_values_t unwind_history_table_size[] = {
	{ 12, "UNWIND_HISTORY_TABLE_SIZE" },
	{ 0 },
};

static const_values_t size_of_80387_registers[] = {
	{ 80, "SIZE_OF_80387_REGISTERS" },
	{ 0 },
};

static const_values_t context_i386[] = {
	{ 0x00010000, "CONTEXT_i386" },
	{ 0x00010000, "CONTEXT_i486" },
#if 0 /* FIXME i#1550: CONTEXT_i386 doesn't compile for x64 platforms */
	{ (CONTEXT_i386 |
	0x00000001L), "CONTEXT_CONTROL" },
	{ (CONTEXT_i386 |
		0x00000002L), "CONTEXT_INTEGER" },
		{ (CONTEXT_i386 |
			0x00000004L), "CONTEXT_SEGMENTS" },
			{ (CONTEXT_i386 |
				0x00000008L), "CONTEXT_FLOATING_POINT" },
				{ (CONTEXT_i386 |
					0x00000010L), "CONTEXT_DEBUG_REGISTERS" },
					{ (CONTEXT_i386 |
						0x00000020L), "CONTEXT_EXTENDED_REGISTERS" },
						{ (CONTEXT_CONTROL |
							CONTEXT_INTEGER |
							CONTEXT_SEGMENTS), "CONTEXT_FULL" },
							{ (CONTEXT_CONTROL |
								CONTEXT_INTEGER |
								CONTEXT_SEGMENTS |
								CONTEXT_FLOATING_POINT |
								CONTEXT_DEBUG_REGISTERS |
								CONTEXT_EXTENDED_REGISTERS), "CONTEXT_ALL" },
								{ (CONTEXT_i386 |
									0x00000040L), "CONTEXT_XSTATE" },
#endif
									{ 0 },
};

static const_values_t maximum_supported_extension[] = {
	{ 512, "MAXIMUM_SUPPORTED_EXTENSION" },
	{ 0 },
};

static const_values_t break_debug_base[] = {
	{ 0x00080000, "BREAK_DEBUG_BASE" },
#if 0 /* FIXME i#1550: resolve ifdef macros */
	{ (BREAK_DEBUG_BASE + 3), "ASSERT_BREAKPOINT" },
#endif
	{ 0 },
};

static const_values_t md_lfhint_none[] = {
	{ 0x00000000, "MD_LFHINT_NONE" },
	{ 0x00000001, "MD_LFHINT_NT1" },
	{ 0x00000002, "MD_LFHINT_NT2" },
	{ 0x00000003, "MD_LFHINT_NTA" },
	{ 0 },
};


#if 0 /* FIXME i#1550: resolve the same structures */
static const_values_t pf_temporal_level_1[] = {
	{ MD_LFHINT_NONE, "PF_TEMPORAL_LEVEL_1" },
	{ MD_LFHINT_NT1, "PF_TEMPORAL_LEVEL_2" },
	{ MD_LFHINT_NT2, "PF_TEMPORAL_LEVEL_3" },
	{ 0 },
};

static const_values_t pf_non_temporal_level_all[] = {
	{ MD_LFHINT_NTA, "PF_NON_TEMPORAL_LEVEL_ALL" },
	{ 0 },
};
#endif

static const_values_t exception_read_fault[] = {
	{ 0, "EXCEPTION_READ_FAULT" },
	{ 1, "EXCEPTION_WRITE_FAULT" },
	{ 2, "EXCEPTION_EXECUTE_FAULT" },
	{ 0 },
};

static const_values_t context_ia64[] = {
	{ 0x00080000, "CONTEXT_IA64" },
#if 0 /* FIXME i#1550: resolve ifdef macros */
	{ (CONTEXT_IA64 |
	0x00000001L), "CONTEXT_CONTROL" },
	{ (CONTEXT_IA64 |
		0x00000002L), "CONTEXT_LOWER_FLOATING_POINT" },
		{ (CONTEXT_IA64 |
			0x00000004L), "CONTEXT_HIGHER_FLOATING_POINT" },
			{ (CONTEXT_IA64 |
				0x00000008L), "CONTEXT_INTEGER" },
				{ (CONTEXT_IA64 |
					0x00000010L), "CONTEXT_DEBUG" },
					{ (CONTEXT_IA64 |
						0x00000020L), "CONTEXT_IA32_CONTROL" },
						{ (CONTEXT_LOWER_FLOATING_POINT |
							CONTEXT_HIGHER_FLOATING_POINT), "CONTEXT_FLOATING_POINT" },
							{ (CONTEXT_CONTROL |
								CONTEXT_FLOATING_POINT |
								CONTEXT_INTEGER |
								CONTEXT_IA32_CONTROL), "CONTEXT_FULL" },
								{ (CONTEXT_CONTROL |
									CONTEXT_FLOATING_POINT |
									CONTEXT_INTEGER |
									CONTEXT_DEBUG |
									CONTEXT_IA32_CONTROL), "CONTEXT_ALL" },
#endif
									{ 0x08000000, "CONTEXT_EXCEPTION_ACTIVE" },
									{ 0x10000000, "CONTEXT_SERVICE_ACTIVE" },
									{ 0x40000000, "CONTEXT_EXCEPTION_REQUEST" },
									{ 0x80000000, "CONTEXT_EXCEPTION_REPORTING" },
									{ 0 },
};

static const_values_t wow64_context_i386[] = {
	{ 0x00010000, "WOW64_CONTEXT_i386" },
	{ 0x00010000, "WOW64_CONTEXT_i486" },
	{ (WOW64_CONTEXT_i386 |
	0x00000001L), "WOW64_CONTEXT_CONTROL" },
	{ (WOW64_CONTEXT_i386 |
		0x00000002L), "WOW64_CONTEXT_INTEGER" },
		{ (WOW64_CONTEXT_i386 |
			0x00000004L), "WOW64_CONTEXT_SEGMENTS" },
			{ (WOW64_CONTEXT_i386 |
				0x00000008L), "WOW64_CONTEXT_FLOATING_POINT" },
				{ (WOW64_CONTEXT_i386 |
					0x00000010L), "WOW64_CONTEXT_DEBUG_REGISTERS" },
					{ (WOW64_CONTEXT_i386 |
						0x00000020L), "WOW64_CONTEXT_EXTENDED_REGISTERS" },
						{ (WOW64_CONTEXT_CONTROL |
							WOW64_CONTEXT_INTEGER |
							WOW64_CONTEXT_SEGMENTS), "WOW64_CONTEXT_FULL" },
							{ (WOW64_CONTEXT_CONTROL |
								WOW64_CONTEXT_INTEGER |
								WOW64_CONTEXT_SEGMENTS |
								WOW64_CONTEXT_FLOATING_POINT |
								WOW64_CONTEXT_DEBUG_REGISTERS |
								WOW64_CONTEXT_EXTENDED_REGISTERS), "WOW64_CONTEXT_ALL" },
								{ (WOW64_CONTEXT_i386 |
									0x00000040L), "WOW64_CONTEXT_XSTATE" },
									{ 0 },
};

static const_values_t wow64_size_of_80387_registers[] = {
	{ 80, "WOW64_SIZE_OF_80387_REGISTERS" },
	{ 512, "WOW64_MAXIMUM_SUPPORTED_EXTENSION" },
	{ 0 },
};

static const_values_t exception_noncontinuable[] = {
	{ 0x00000001, "EXCEPTION_NONCONTINUABLE" },
	{ 15, "EXCEPTION_MAXIMUM_PARAMETERS" },
	{ 0 },
};

static const_values_t right_flags[] = {
	{ (0x00010000L), "DELETE" },
	{ (0x00020000L), "READ_CONTROL" },
	{ (0x00040000L), "WRITE_DAC" },
	{ (0x00080000L), "WRITE_OWNER" },
	{ (0x00100000L), "SYNCHRONIZE" },
	{ (0x000F0000L), "STANDARD_RIGHTS_REQUIRED" },
	{ (READ_CONTROL), "STANDARD_RIGHTS_READ" },
	{ (READ_CONTROL), "STANDARD_RIGHTS_WRITE" },
	{ (READ_CONTROL), "STANDARD_RIGHTS_EXECUTE" },
	{ (0x001F0000L), "STANDARD_RIGHTS_ALL" },
	{ 0 },
};

static const_values_t specific_rights_all[] = {
	{ (0x0000FFFFL), "SPECIFIC_RIGHTS_ALL" },
	{ (0x01000000L), "ACCESS_SYSTEM_SECURITY" },
	{ (0x02000000L), "MAXIMUM_ALLOWED" },
	{ (0x80000000L), "GENERIC_READ" },
	{ (0x40000000L), "GENERIC_WRITE" },
	{ (0x20000000L), "GENERIC_EXECUTE" },
	{ (0x10000000L), "GENERIC_ALL" },
	{ 0 },
};

static const_values_t sid_revision[] = {
	{ (1), "SID_REVISION" },
	{ (15), "SID_MAX_SUB_AUTHORITIES" },
	{ (1), "SID_RECOMMENDED_SUB_AUTHORITIES" },
	{ 0 },
};

static const_values_t security_max_sid_size[] = {
	{ (sizeof(SID) - sizeof(DWORD) + (SID_MAX_SUB_AUTHORITIES * sizeof(DWORD))), "SECURITY_MAX_SID_SIZE" },
	{ 0 },
};

static const_values_t sid_hash_size[] = {
	{ 32, "SID_HASH_SIZE" },
	{ 0 },
};

/* FIXME i#1550: resolve the same entries */
static const_values_t security_null_rid[] = {
	{ (0x00000000L), "SECURITY_NULL_RID" },
	{ (0x00000000L), "SECURITY_WORLD_RID" },
	{ (0x00000000L), "SECURITY_LOCAL_RID" },
	{ (0x00000001L), "SECURITY_LOCAL_LOGON_RID" },
	{ (0x00000000L), "SECURITY_CREATOR_OWNER_RID" },
	{ (0x00000001L), "SECURITY_CREATOR_GROUP_RID" },
	{ (0x00000002L), "SECURITY_CREATOR_OWNER_SERVER_RID" },
	{ (0x00000003L), "SECURITY_CREATOR_GROUP_SERVER_RID" },
	{ (0x00000004L), "SECURITY_CREATOR_OWNER_RIGHTS_RID" },
	{ (0x00000001L), "SECURITY_DIALUP_RID" },
	{ (0x00000002L), "SECURITY_NETWORK_RID" },
	{ (0x00000003L), "SECURITY_BATCH_RID" },
	{ (0x00000004L), "SECURITY_INTERACTIVE_RID" },
	{ (0x00000005L), "SECURITY_LOGON_IDS_RID" },
	{ (3L), "SECURITY_LOGON_IDS_RID_COUNT" },
	{ (0x00000006L), "SECURITY_SERVICE_RID" },
	{ (0x00000007L), "SECURITY_ANONYMOUS_LOGON_RID" },
	{ (0x00000008L), "SECURITY_PROXY_RID" },
	{ (0x00000009L), "SECURITY_ENTERPRISE_CONTROLLERS_RID" },
	{ SECURITY_ENTERPRISE_CONTROLLERS_RID, "SECURITY_SERVER_LOGON_RID" },
	{ (0x0000000AL), "SECURITY_PRINCIPAL_SELF_RID" },
	{ (0x0000000BL), "SECURITY_AUTHENTICATED_USER_RID" },
	{ (0x0000000CL), "SECURITY_RESTRICTED_CODE_RID" },
	{ (0x0000000DL), "SECURITY_TERMINAL_SERVER_RID" },
	{ (0x0000000EL), "SECURITY_REMOTE_LOGON_RID" },
	{ (0x0000000FL), "SECURITY_THIS_ORGANIZATION_RID" },
	{ (0x00000011L), "SECURITY_IUSER_RID" },
	{ (0x00000012L), "SECURITY_LOCAL_SYSTEM_RID" },
	{ (0x00000013L), "SECURITY_LOCAL_SERVICE_RID" },
	{ (0x00000014L), "SECURITY_NETWORK_SERVICE_RID" },
	{ (0x00000015L), "SECURITY_NT_NON_UNIQUE" },
	{ (3L), "SECURITY_NT_NON_UNIQUE_SUB_AUTH_COUNT" },
	{ (0x00000016L), "SECURITY_ENTERPRISE_READONLY_CONTROLLERS_RID" },
	{ (0x00000020L), "SECURITY_BUILTIN_DOMAIN_RID" },
	{ (0x00000021L), "SECURITY_WRITE_RESTRICTED_CODE_RID" },
	{ (0x00000040L), "SECURITY_PACKAGE_BASE_RID" },
	{ (2L), "SECURITY_PACKAGE_RID_COUNT" },
	{ (0x0000000AL), "SECURITY_PACKAGE_NTLM_RID" },
	{ (0x0000000EL), "SECURITY_PACKAGE_SCHANNEL_RID" },
	{ (0x00000015L), "SECURITY_PACKAGE_DIGEST_RID" },
	{ (0x00000041L), "SECURITY_CRED_TYPE_BASE_RID" },
	{ (2L), "SECURITY_CRED_TYPE_RID_COUNT" },
	{ (0x00000001L), "SECURITY_CRED_TYPE_THIS_ORG_CERT_RID" },
	{ (0x00000050L), "SECURITY_MIN_BASE_RID" },
	{ (0x00000050L), "SECURITY_SERVICE_ID_BASE_RID" },
	{ (6L), "SECURITY_SERVICE_ID_RID_COUNT" },
	{ (0x00000051L), "SECURITY_RESERVED_ID_BASE_RID" },
	{ (0x00000052L), "SECURITY_APPPOOL_ID_BASE_RID" },
	{ (6L), "SECURITY_APPPOOL_ID_RID_COUNT" },
	{ (0x00000053L), "SECURITY_VIRTUALSERVER_ID_BASE_RID" },
	{ (6L), "SECURITY_VIRTUALSERVER_ID_RID_COUNT" },
	{ (0x00000054L), "SECURITY_USERMODEDRIVERHOST_ID_BASE_RID" },
	{ (6L), "SECURITY_USERMODEDRIVERHOST_ID_RID_COUNT" },
	{ (0x00000055L), "SECURITY_CLOUD_INFRASTRUCTURE_SERVICES_ID_BASE_RID" },
	{ (6L), "SECURITY_CLOUD_INFRASTRUCTURE_SERVICES_ID_RID_COUNT" },
	{ (0x00000056L), "SECURITY_WMIHOST_ID_BASE_RID" },
	{ (6L), "SECURITY_WMIHOST_ID_RID_COUNT" },
	{ (0x00000057L), "SECURITY_TASK_ID_BASE_RID" },
	{ (0x00000058L), "SECURITY_NFS_ID_BASE_RID" },
	{ (0x00000059L), "SECURITY_COM_ID_BASE_RID" },
	{ (6L), "SECURITY_VIRTUALACCOUNT_ID_RID_COUNT" },
	{ (0x0000006FL), "SECURITY_MAX_BASE_RID" },
	{ (0x000003E7L), "SECURITY_MAX_ALWAYS_FILTERED" },
	{ (0x000003E8L), "SECURITY_MIN_NEVER_FILTERED" },
	{ (0x000003E8L), "SECURITY_OTHER_ORGANIZATION_RID" },
	{ (0x00000070L), "SECURITY_WINDOWSMOBILE_ID_BASE_RID" },
	{ 0 },
};

static const_values_t domain_group_rid_enterprise_readonly_domain_controllers[] = {
	{ (0x000001F2L), "DOMAIN_GROUP_RID_ENTERPRISE_READONLY_DOMAIN_CONTROLLERS" },
	{ (0x000001F3L), "FOREST_USER_RID_MAX" },
	{ (0x000001F4L), "DOMAIN_USER_RID_ADMIN" },
	{ (0x000001F5L), "DOMAIN_USER_RID_GUEST" },
	{ (0x000001F6L), "DOMAIN_USER_RID_KRBTGT" },
	{ (0x000003E7L), "DOMAIN_USER_RID_MAX" },
	{ 0 },
};

static const_values_t domain_group_rid_admins[] = {
	{ (0x00000200L), "DOMAIN_GROUP_RID_ADMINS" },
	{ (0x00000201L), "DOMAIN_GROUP_RID_USERS" },
	{ (0x00000202L), "DOMAIN_GROUP_RID_GUESTS" },
	{ (0x00000203L), "DOMAIN_GROUP_RID_COMPUTERS" },
	{ (0x00000204L), "DOMAIN_GROUP_RID_CONTROLLERS" },
	{ (0x00000205L), "DOMAIN_GROUP_RID_CERT_ADMINS" },
	{ (0x00000206L), "DOMAIN_GROUP_RID_SCHEMA_ADMINS" },
	{ (0x00000207L), "DOMAIN_GROUP_RID_ENTERPRISE_ADMINS" },
	{ (0x00000208L), "DOMAIN_GROUP_RID_POLICY_ADMINS" },
	{ (0x00000209L), "DOMAIN_GROUP_RID_READONLY_CONTROLLERS" },
	{ 0 },
};

static const_values_t domain_alias_rid_admins[] = {
	{ (0x00000220L), "DOMAIN_ALIAS_RID_ADMINS" },
	{ (0x00000221L), "DOMAIN_ALIAS_RID_USERS" },
	{ (0x00000222L), "DOMAIN_ALIAS_RID_GUESTS" },
	{ (0x00000223L), "DOMAIN_ALIAS_RID_POWER_USERS" },
	{ (0x00000224L), "DOMAIN_ALIAS_RID_ACCOUNT_OPS" },
	{ (0x00000225L), "DOMAIN_ALIAS_RID_SYSTEM_OPS" },
	{ (0x00000226L), "DOMAIN_ALIAS_RID_PRINT_OPS" },
	{ (0x00000227L), "DOMAIN_ALIAS_RID_BACKUP_OPS" },
	{ (0x00000228L), "DOMAIN_ALIAS_RID_REPLICATOR" },
	{ (0x00000229L), "DOMAIN_ALIAS_RID_RAS_SERVERS" },
	{ (0x0000022AL), "DOMAIN_ALIAS_RID_PREW2KCOMPACCESS" },
	{ (0x0000022BL), "DOMAIN_ALIAS_RID_REMOTE_DESKTOP_USERS" },
	{ (0x0000022CL), "DOMAIN_ALIAS_RID_NETWORK_CONFIGURATION_OPS" },
	{ (0x0000022DL), "DOMAIN_ALIAS_RID_INCOMING_FOREST_TRUST_BUILDERS" },
	{ (0x0000022EL), "DOMAIN_ALIAS_RID_MONITORING_USERS" },
	{ (0x0000022FL), "DOMAIN_ALIAS_RID_LOGGING_USERS" },
	{ (0x00000230L), "DOMAIN_ALIAS_RID_AUTHORIZATIONACCESS" },
	{ (0x00000231L), "DOMAIN_ALIAS_RID_TS_LICENSE_SERVERS" },
	{ (0x00000232L), "DOMAIN_ALIAS_RID_DCOM_USERS" },
	{ (0x00000238L), "DOMAIN_ALIAS_RID_IUSERS" },
	{ (0x00000239L), "DOMAIN_ALIAS_RID_CRYPTO_OPERATORS" },
	{ (0x0000023BL), "DOMAIN_ALIAS_RID_CACHEABLE_PRINCIPALS_GROUP" },
	{ (0x0000023CL), "DOMAIN_ALIAS_RID_NON_CACHEABLE_PRINCIPALS_GROUP" },
	{ (0x0000023DL), "DOMAIN_ALIAS_RID_EVENT_LOG_READERS_GROUP" },
	{ (0x0000023EL), "DOMAIN_ALIAS_RID_CERTSVC_DCOM_ACCESS_GROUP" },
	{ 0 },
};

static const_values_t security_mandatory_untrusted_rid[] = {
	{ (0x00000000L), "SECURITY_MANDATORY_UNTRUSTED_RID" },
	{ (0x00001000L), "SECURITY_MANDATORY_LOW_RID" },
	{ (0x00002000L), "SECURITY_MANDATORY_MEDIUM_RID" },
	{ (SECURITY_MANDATORY_MEDIUM_RID + 0x100), "SECURITY_MANDATORY_MEDIUM_PLUS_RID" },
	{ (0x00003000L), "SECURITY_MANDATORY_HIGH_RID" },
	{ (0x00004000L), "SECURITY_MANDATORY_SYSTEM_RID" },
	{ (0x00005000L), "SECURITY_MANDATORY_PROTECTED_PROCESS_RID" },
	{ SECURITY_MANDATORY_SYSTEM_RID, "SECURITY_MANDATORY_MAXIMUM_USER_RID" },
	{ 0 },
};

static const_values_t se_group_mandatory[] = {
	{ (0x00000001L), "SE_GROUP_MANDATORY" },
	{ (0x00000002L), "SE_GROUP_ENABLED_BY_DEFAULT" },
	{ (0x00000004L), "SE_GROUP_ENABLED" },
	{ (0x00000008L), "SE_GROUP_OWNER" },
	{ (0x00000010L), "SE_GROUP_USE_FOR_DENY_ONLY" },
	{ (0x00000020L), "SE_GROUP_INTEGRITY" },
	{ (0x00000040L), "SE_GROUP_INTEGRITY_ENABLED" },
	{ (0xC0000000L), "SE_GROUP_LOGON_ID" },
	{ (0x20000000L), "SE_GROUP_RESOURCE" },
	{ (SE_GROUP_MANDATORY |
	SE_GROUP_ENABLED_BY_DEFAULT |
		SE_GROUP_ENABLED |
		SE_GROUP_OWNER |
		SE_GROUP_USE_FOR_DENY_ONLY |
		SE_GROUP_LOGON_ID |
		SE_GROUP_RESOURCE |
		SE_GROUP_INTEGRITY |
		SE_GROUP_INTEGRITY_ENABLED), "SE_GROUP_VALID_ATTRIBUTES" },
		{ 0 },
};

static const_values_t acl_revision[] = {
	{ (2), "ACL_REVISION" },
	{ (4), "ACL_REVISION_DS" },
	{ (1), "ACL_REVISION1" },
	{ 0 },
};

static const_values_t min_acl_revision[] = {
	{ ACL_REVISION2, "MIN_ACL_REVISION" },
	{ 0 },
};

static const_values_t acl_revision2[] = {
	{ (2), "ACL_REVISION2" },
	{ (3), "ACL_REVISION3" },
	{ (4), "ACL_REVISION4" },
	{ 0 },
};

static const_values_t max_acl_revision[] = {
	{ ACL_REVISION4, "MAX_ACL_REVISION" },
	{ 0 },
};

static const_values_t access_min_ms_ace_type[] = {
	{ (0x00000000), "ACCESS_MIN_MS_ACE_TYPE" },
	{ (0x00000000), "ACCESS_ALLOWED_ACE_TYPE" },
	{ (0x00000001), "ACCESS_DENIED_ACE_TYPE" },
	{ (0x00000002), "SYSTEM_AUDIT_ACE_TYPE" },
	{ (0x00000003), "SYSTEM_ALARM_ACE_TYPE" },
	{ (0x00000003), "ACCESS_MAX_MS_V2_ACE_TYPE" },
	{ (0x00000004), "ACCESS_ALLOWED_COMPOUND_ACE_TYPE" },
	{ (0x00000004), "ACCESS_MAX_MS_V3_ACE_TYPE" },
	{ (0x00000005), "ACCESS_MIN_MS_OBJECT_ACE_TYPE" },
	{ (0x00000005), "ACCESS_ALLOWED_OBJECT_ACE_TYPE" },
	{ (0x00000006), "ACCESS_DENIED_OBJECT_ACE_TYPE" },
	{ (0x00000007), "SYSTEM_AUDIT_OBJECT_ACE_TYPE" },
	{ (0x00000008), "SYSTEM_ALARM_OBJECT_ACE_TYPE" },
	{ (0x00000008), "ACCESS_MAX_MS_OBJECT_ACE_TYPE" },
	{ (0x00000008), "ACCESS_MAX_MS_V4_ACE_TYPE" },
	{ (0x00000008), "ACCESS_MAX_MS_ACE_TYPE" },
	{ (0x00000009), "ACCESS_ALLOWED_CALLBACK_ACE_TYPE" },
	{ (0x0000000A), "ACCESS_DENIED_CALLBACK_ACE_TYPE" },
	{ (0x0000000B), "ACCESS_ALLOWED_CALLBACK_OBJECT_ACE_TYPE" },
	{ (0x0000000C), "ACCESS_DENIED_CALLBACK_OBJECT_ACE_TYPE" },
	{ (0x0000000D), "SYSTEM_AUDIT_CALLBACK_ACE_TYPE" },
	{ (0x0000000E), "SYSTEM_ALARM_CALLBACK_ACE_TYPE" },
	{ (0x0000000F), "SYSTEM_AUDIT_CALLBACK_OBJECT_ACE_TYPE" },
	{ (0x00000010), "SYSTEM_ALARM_CALLBACK_OBJECT_ACE_TYPE" },
	{ (0x00000011), "SYSTEM_MANDATORY_LABEL_ACE_TYPE" },
	{ (0x00000011), "ACCESS_MAX_MS_V5_ACE_TYPE" },
	{ 0 },
};

static const_values_t object_inherit_ace[] = {
	{ (0x00000001), "OBJECT_INHERIT_ACE" },
	{ (0x00000002), "CONTAINER_INHERIT_ACE" },
	{ (0x00000004), "NO_PROPAGATE_INHERIT_ACE" },
	{ (0x00000008), "INHERIT_ONLY_ACE" },
	{ (0x00000010), "INHERITED_ACE" },
	{ (0x0000001F), "VALID_INHERIT_FLAGS" },
	{ 0 },
};

static const_values_t successful_access_ace_flag[] = {
	{ (0x00000040), "SUCCESSFUL_ACCESS_ACE_FLAG" },
	{ (0x00000080), "FAILED_ACCESS_ACE_FLAG" },
	{ 0 },
};

static const_values_t system_mandatory_label_no_write_up[] = {
	{ 0x00000001, "SYSTEM_MANDATORY_LABEL_NO_WRITE_UP" },
	{ 0x00000002, "SYSTEM_MANDATORY_LABEL_NO_READ_UP" },
	{ 0x00000004, "SYSTEM_MANDATORY_LABEL_NO_EXECUTE_UP" },
	{ (SYSTEM_MANDATORY_LABEL_NO_WRITE_UP |
	SYSTEM_MANDATORY_LABEL_NO_READ_UP |
		SYSTEM_MANDATORY_LABEL_NO_EXECUTE_UP), "SYSTEM_MANDATORY_LABEL_VALID_MASK" },
		{ 0 },
};

static const_values_t ace_object_type_present[] = {
	{ 0x00000001, "ACE_OBJECT_TYPE_PRESENT" },
	{ 0x00000002, "ACE_INHERITED_OBJECT_TYPE_PRESENT" },
	{ 0 },
};

static const_values_t security_descriptor_revision[] = {
	{ (1), "SECURITY_DESCRIPTOR_REVISION" },
	{ (1), "SECURITY_DESCRIPTOR_REVISION1" },
	{ 0 },
};

static const_values_t security_descriptor_min_length[] = {
	{ (sizeof(SECURITY_DESCRIPTOR)), "SECURITY_DESCRIPTOR_MIN_LENGTH" },
	{ 0 },
};

static const_values_t se_owner_defaulted[] = {
	{ (0x00000001), "SE_OWNER_DEFAULTED" },
	{ (0x00000002), "SE_GROUP_DEFAULTED" },
	{ (0x00000004), "SE_DACL_PRESENT" },
	{ (0x00000008), "SE_DACL_DEFAULTED" },
	{ (0x00000010), "SE_SACL_PRESENT" },
	{ (0x00000020), "SE_SACL_DEFAULTED" },
	{ (0x00000100), "SE_DACL_AUTO_INHERIT_REQ" },
	{ (0x00000200), "SE_SACL_AUTO_INHERIT_REQ" },
	{ (0x00000400), "SE_DACL_AUTO_INHERITED" },
	{ (0x00000800), "SE_SACL_AUTO_INHERITED" },
	{ (0x00001000), "SE_DACL_PROTECTED" },
	{ (0x00002000), "SE_SACL_PROTECTED" },
	{ (0x00004000), "SE_RM_CONTROL_VALID" },
	{ (0x00008000), "SE_SELF_RELATIVE" },
	{ 0 },
};

static const_values_t access_object_guid[] = {
	{ 0, "ACCESS_OBJECT_GUID" },
	{ 1, "ACCESS_PROPERTY_SET_GUID" },
	{ 2, "ACCESS_PROPERTY_GUID" },
	{ 4, "ACCESS_MAX_LEVEL" },
	{ 0 },
};

static const_values_t audit_allow_no_privilege[] = {
	{ 0x00000001, "AUDIT_ALLOW_NO_PRIVILEGE" },
	{ 0 },
};

static const_values_t se_privilege_enabled_by_default[] = {
	{ (0x00000001L), "SE_PRIVILEGE_ENABLED_BY_DEFAULT" },
	{ (0x00000002L), "SE_PRIVILEGE_ENABLED" },
	{ (0X00000004L), "SE_PRIVILEGE_REMOVED" },
	{ (0x80000000L), "SE_PRIVILEGE_USED_FOR_ACCESS" },
	{ (SE_PRIVILEGE_ENABLED_BY_DEFAULT |
	SE_PRIVILEGE_ENABLED |
		SE_PRIVILEGE_REMOVED |
		SE_PRIVILEGE_USED_FOR_ACCESS), "SE_PRIVILEGE_VALID_ATTRIBUTES" },
		{ 0 },
};

static const_values_t privilege_set_all_necessary[] = {
	{ (1), "PRIVILEGE_SET_ALL_NECESSARY" },
	{ 0 },
};

static const_values_t access_reason_type_mask[] = {
	{ 0xffff0000, "ACCESS_REASON_TYPE_MASK" },
	{ 0x0000ffff, "ACCESS_REASON_DATA_MASK" },
	{ 0 },
};

static const_values_t se_security_descriptor_flag_no_owner_ace[] = {
	{ 0x00000001, "SE_SECURITY_DESCRIPTOR_FLAG_NO_OWNER_ACE" },
	{ 0x00000002, "SE_SECURITY_DESCRIPTOR_FLAG_NO_LABEL_ACE" },
	{ 0x00000003, "SE_SECURITY_DESCRIPTOR_VALID_FLAGS" },
	{ 0 },
};

static const_values_t token_assign_primary[] = {
	{ (0x00000001), "TOKEN_ASSIGN_PRIMARY" },
	{ (0x00000002), "TOKEN_DUPLICATE" },
	{ (0x00000004), "TOKEN_IMPERSONATE" },
	{ (0x00000008), "TOKEN_QUERY" },
	{ (0x00000010), "TOKEN_QUERY_SOURCE" },
	{ (0x00000020), "TOKEN_ADJUST_PRIVILEGES" },
	{ (0x00000040), "TOKEN_ADJUST_GROUPS" },
	{ (0x00000080), "TOKEN_ADJUST_DEFAULT" },
	{ (0x00000100), "TOKEN_ADJUST_SESSIONID" },
	{ (STANDARD_RIGHTS_REQUIRED |
	TOKEN_ASSIGN_PRIMARY |
		TOKEN_DUPLICATE |
		TOKEN_IMPERSONATE |
		TOKEN_QUERY |
		TOKEN_QUERY_SOURCE |
		TOKEN_ADJUST_PRIVILEGES |
		TOKEN_ADJUST_GROUPS |
		TOKEN_ADJUST_DEFAULT), "TOKEN_ALL_ACCESS_P" },
		{ (TOKEN_ALL_ACCESS_P |
			TOKEN_ADJUST_SESSIONID), "TOKEN_ALL_ACCESS" },
			{ (TOKEN_ALL_ACCESS_P), "TOKEN_ALL_ACCESS" },
			{ (STANDARD_RIGHTS_READ |
				TOKEN_QUERY), "TOKEN_READ" },
				{ (STANDARD_RIGHTS_WRITE |
					TOKEN_ADJUST_PRIVILEGES |
					TOKEN_ADJUST_GROUPS |
					TOKEN_ADJUST_DEFAULT), "TOKEN_WRITE" },
					{ (STANDARD_RIGHTS_EXECUTE), "TOKEN_EXECUTE" },
					{ 0 },
};

static const_values_t token_mandatory_policy_off[] = {
	{ 0x00000000, "TOKEN_MANDATORY_POLICY_OFF" },
	{ 0x00000001, "TOKEN_MANDATORY_POLICY_NO_WRITE_UP" },
	{ 0x00000002, "TOKEN_MANDATORY_POLICY_NEW_PROCESS_MIN" },
	{ (TOKEN_MANDATORY_POLICY_NO_WRITE_UP |
	TOKEN_MANDATORY_POLICY_NEW_PROCESS_MIN), "TOKEN_MANDATORY_POLICY_VALID_MASK" },
	{ 0 },
};

static const_values_t policy_audit_subcategory_count[] = {
	{ (53), "POLICY_AUDIT_SUBCATEGORY_COUNT" },
	{ 0 },
};

static const_values_t token_source_length[] = {
	{ 8, "TOKEN_SOURCE_LENGTH" },
	{ 0 },
};

static const_values_t security_dynamic_tracking[] = {
	{ (TRUE), "SECURITY_DYNAMIC_TRACKING" },
	{ (FALSE), "SECURITY_STATIC_TRACKING" },
	{ 0 },
};

static const_values_t disable_max_privilege[] = {
	{ 0x00000001, "DISABLE_MAX_PRIVILEGE" },
	{ 0x00000002, "SANDBOX_INERT" },
	{ 0x00000004, "LUA_TOKEN" },
	{ 0x00000008, "WRITE_RESTRICTED" },
	{ 0 },
};

static const_values_t owner_security_information[] = {
	{ (0x00000001L), "OWNER_SECURITY_INFORMATION" },
	{ (0x00000002L), "GROUP_SECURITY_INFORMATION" },
	{ (0x00000004L), "DACL_SECURITY_INFORMATION" },
	{ (0x00000008L), "SACL_SECURITY_INFORMATION" },
	{ (0x00000010L), "LABEL_SECURITY_INFORMATION" },
	{ 0 },
};

static const_values_t protected_dacl_security_information[] = {
	{ (0x80000000L), "PROTECTED_DACL_SECURITY_INFORMATION" },
	{ (0x40000000L), "PROTECTED_SACL_SECURITY_INFORMATION" },
	{ (0x20000000L), "UNPROTECTED_DACL_SECURITY_INFORMATION" },
	{ (0x10000000L), "UNPROTECTED_SACL_SECURITY_INFORMATION" },
	{ 0 },
};

static const_values_t process_terminate[] = {
	{ (0x00000001), "PROCESS_TERMINATE" },
	{ (0x00000002), "PROCESS_CREATE_THREAD" },
	{ (0x00000004), "PROCESS_SET_SESSIONID" },
	{ (0x00000008), "PROCESS_VM_OPERATION" },
	{ (0x00000010), "PROCESS_VM_READ" },
	{ (0x00000020), "PROCESS_VM_WRITE" },
	{ (0x00000040), "PROCESS_DUP_HANDLE" },
	{ (0x00000080), "PROCESS_CREATE_PROCESS" },
	{ (0x00000100), "PROCESS_SET_QUOTA" },
	{ (0x00000200), "PROCESS_SET_INFORMATION" },
	{ (0x00000400), "PROCESS_QUERY_INFORMATION" },
	{ (0x00000800), "PROCESS_SUSPEND_RESUME" },
	{ (0x00001000), "PROCESS_QUERY_LIMITED_INFORMATION" },
	{ (STANDARD_RIGHTS_REQUIRED |
	SYNCHRONIZE |
		0x0000FFFF), "PROCESS_ALL_ACCESS" },
		{ (STANDARD_RIGHTS_REQUIRED |
			SYNCHRONIZE |
			0x00000FFF), "PROCESS_ALL_ACCESS" },
			{ 0 },
};

static const_values_t maximum_proc_per_group[] = {
	{ 64, "MAXIMUM_PROC_PER_GROUP" },
	{ 32, "MAXIMUM_PROC_PER_GROUP" },
	{ MAXIMUM_PROC_PER_GROUP, "MAXIMUM_PROCESSORS" },
	{ 0 },
};

static const_values_t thread_terminate[] = {
	{ (0x00000001), "THREAD_TERMINATE" },
	{ (0x00000002), "THREAD_SUSPEND_RESUME" },
	{ (0x00000008), "THREAD_GET_CONTEXT" },
	{ (0x00000010), "THREAD_SET_CONTEXT" },
	{ (0x00000040), "THREAD_QUERY_INFORMATION" },
	{ (0x00000020), "THREAD_SET_INFORMATION" },
	{ (0x00000080), "THREAD_SET_THREAD_TOKEN" },
	{ (0x00000100), "THREAD_IMPERSONATE" },
	{ (0x00000200), "THREAD_DIRECT_IMPERSONATION" },
	{ (0x00000400), "THREAD_SET_LIMITED_INFORMATION" },
	{ (0x00000800), "THREAD_QUERY_LIMITED_INFORMATION" },
	{ (STANDARD_RIGHTS_REQUIRED |
	SYNCHRONIZE |
		0x0000FFFF), "THREAD_ALL_ACCESS" },
		{ (STANDARD_RIGHTS_REQUIRED |
			SYNCHRONIZE |
			0x000003FF), "THREAD_ALL_ACCESS" },
			{ 0 },
};

static const_values_t job_object_assign_process[] = {
	{ (0x00000001), "JOB_OBJECT_ASSIGN_PROCESS" },
	{ (0x00000002), "JOB_OBJECT_SET_ATTRIBUTES" },
	{ (0x00000004), "JOB_OBJECT_QUERY" },
	{ (0x00000008), "JOB_OBJECT_TERMINATE" },
	{ (0x00000010), "JOB_OBJECT_SET_SECURITY_ATTRIBUTES" },
	{ (STANDARD_RIGHTS_REQUIRED |
	SYNCHRONIZE |
		0x0000001F), "JOB_OBJECT_ALL_ACCESS" },
		{ 0 },
};

static const_values_t fls_maximum_available[] = {
	{ 128, "FLS_MAXIMUM_AVAILABLE" },
	{ 64, "TLS_MINIMUM_AVAILABLE" },
	{ 0 },
};

static const_values_t thread_base_priority_lowrt[] = {
	{ 15, "THREAD_BASE_PRIORITY_LOWRT" },
	{ 2, "THREAD_BASE_PRIORITY_MAX" },
	{ (-2), "THREAD_BASE_PRIORITY_MIN" },
	{ (-15), "THREAD_BASE_PRIORITY_IDLE" },
	{ 0 },
};

static const_values_t quota_limits_hardws_min_enable[] = {
	{ 0x00000001, "QUOTA_LIMITS_HARDWS_MIN_ENABLE" },
	{ 0x00000002, "QUOTA_LIMITS_HARDWS_MIN_DISABLE" },
	{ 0x00000004, "QUOTA_LIMITS_HARDWS_MAX_ENABLE" },
	{ 0x00000008, "QUOTA_LIMITS_HARDWS_MAX_DISABLE" },
	{ 0x00000010, "QUOTA_LIMITS_USE_DEFAULT_LIMITS" },
	{ 0 },
};

static const_values_t max_hw_counters[] = {
	{ 16, "MAX_HW_COUNTERS" },
	{ 0 },
};

static const_values_t thread_profiling_flag_dispatch[] = {
	{ 0x00000001, "THREAD_PROFILING_FLAG_DISPATCH" },
	{ 0 },
};

static const_values_t job_object_terminate_at_end_of_job[] = {
	{ 0, "JOB_OBJECT_TERMINATE_AT_END_OF_JOB" },
	{ 1, "JOB_OBJECT_POST_AT_END_OF_JOB" },
	{ 1, "JOB_OBJECT_MSG_END_OF_JOB_TIME" },
	{ 2, "JOB_OBJECT_MSG_END_OF_PROCESS_TIME" },
	{ 3, "JOB_OBJECT_MSG_ACTIVE_PROCESS_LIMIT" },
	{ 4, "JOB_OBJECT_MSG_ACTIVE_PROCESS_ZERO" },
	{ 6, "JOB_OBJECT_MSG_NEW_PROCESS" },
	{ 7, "JOB_OBJECT_MSG_EXIT_PROCESS" },
	{ 8, "JOB_OBJECT_MSG_ABNORMAL_EXIT_PROCESS" },
	{ 9, "JOB_OBJECT_MSG_PROCESS_MEMORY_LIMIT" },
	{ 10, "JOB_OBJECT_MSG_JOB_MEMORY_LIMIT" },
	{ 0 },
};

static const_values_t job_object_limit_workingset[] = {
	{ 0x00000001, "JOB_OBJECT_LIMIT_WORKINGSET" },
	{ 0x00000002, "JOB_OBJECT_LIMIT_PROCESS_TIME" },
	{ 0x00000004, "JOB_OBJECT_LIMIT_JOB_TIME" },
	{ 0x00000008, "JOB_OBJECT_LIMIT_ACTIVE_PROCESS" },
	{ 0x00000010, "JOB_OBJECT_LIMIT_AFFINITY" },
	{ 0x00000020, "JOB_OBJECT_LIMIT_PRIORITY_CLASS" },
	{ 0x00000040, "JOB_OBJECT_LIMIT_PRESERVE_JOB_TIME" },
	{ 0x00000080, "JOB_OBJECT_LIMIT_SCHEDULING_CLASS" },
	{ 0x00000100, "JOB_OBJECT_LIMIT_PROCESS_MEMORY" },
	{ 0x00000200, "JOB_OBJECT_LIMIT_JOB_MEMORY" },
	{ 0x00000400, "JOB_OBJECT_LIMIT_DIE_ON_UNHANDLED_EXCEPTION" },
	{ 0x00000800, "JOB_OBJECT_LIMIT_BREAKAWAY_OK" },
	{ 0x00001000, "JOB_OBJECT_LIMIT_SILENT_BREAKAWAY_OK" },
	{ 0x00002000, "JOB_OBJECT_LIMIT_KILL_ON_JOB_CLOSE" },
	{ 0x00004000, "JOB_OBJECT_LIMIT_SUBSET_AFFINITY" },
	{ 0x00008000, "JOB_OBJECT_LIMIT_RESERVED3" },
	{ 0x00010000, "JOB_OBJECT_LIMIT_RESERVED4" },
	{ 0x00020000, "JOB_OBJECT_LIMIT_RESERVED5" },
	{ 0x00040000, "JOB_OBJECT_LIMIT_RESERVED6" },
	{ 0x0007ffff, "JOB_OBJECT_LIMIT_VALID_FLAGS" },
	{ 0 },
};

static const_values_t job_object_basic_limit_valid_flags[] = {
	{ 0x000000ff, "JOB_OBJECT_BASIC_LIMIT_VALID_FLAGS" },
	{ 0x00007fff, "JOB_OBJECT_EXTENDED_LIMIT_VALID_FLAGS" },
	{ 0x0007ffff, "JOB_OBJECT_RESERVED_LIMIT_VALID_FLAGS" },
	{ 0 },
};

static const_values_t job_object_uilimit_none[] = {
	{ 0x00000000, "JOB_OBJECT_UILIMIT_NONE" },
	{ 0x00000001, "JOB_OBJECT_UILIMIT_HANDLES" },
	{ 0x00000002, "JOB_OBJECT_UILIMIT_READCLIPBOARD" },
	{ 0x00000004, "JOB_OBJECT_UILIMIT_WRITECLIPBOARD" },
	{ 0x00000008, "JOB_OBJECT_UILIMIT_SYSTEMPARAMETERS" },
	{ 0x00000010, "JOB_OBJECT_UILIMIT_DISPLAYSETTINGS" },
	{ 0x00000020, "JOB_OBJECT_UILIMIT_GLOBALATOMS" },
	{ 0x00000040, "JOB_OBJECT_UILIMIT_DESKTOP" },
	{ 0x00000080, "JOB_OBJECT_UILIMIT_EXITWINDOWS" },
	{ 0x000000FF, "JOB_OBJECT_UILIMIT_ALL" },
	{ 0 },
};

static const_values_t job_object_ui_valid_flags[] = {
	{ 0x000000FF, "JOB_OBJECT_UI_VALID_FLAGS" },
	{ 0 },
};

static const_values_t job_object_security_no_admin[] = {
	{ 0x00000001, "JOB_OBJECT_SECURITY_NO_ADMIN" },
	{ 0x00000002, "JOB_OBJECT_SECURITY_RESTRICTED_TOKEN" },
	{ 0x00000004, "JOB_OBJECT_SECURITY_ONLY_TOKEN" },
	{ 0x00000008, "JOB_OBJECT_SECURITY_FILTER_TOKENS" },
	{ 0x0000000f, "JOB_OBJECT_SECURITY_VALID_FLAGS" },
	{ 0 },
};

static const_values_t event_modify_state[] = {
	{ 0x00000002, "EVENT_MODIFY_STATE" },
	{ (STANDARD_RIGHTS_REQUIRED |
	SYNCHRONIZE |
		0x00000003), "EVENT_ALL_ACCESS" },
		{ 0 },
};

static const_values_t mutant_query_state[] = {
	{ 0x00000001, "MUTANT_QUERY_STATE" },
	{ (STANDARD_RIGHTS_REQUIRED |
	SYNCHRONIZE |
		MUTANT_QUERY_STATE), "MUTANT_ALL_ACCESS" },
		{ 0 },
};

static const_values_t semaphore_modify_state[] = {
	{ 0x00000002, "SEMAPHORE_MODIFY_STATE" },
	{ (STANDARD_RIGHTS_REQUIRED |
	SYNCHRONIZE |
		0x00000003), "SEMAPHORE_ALL_ACCESS" },
		{ 0 },
};

static const_values_t timer_query_state[] = {
	{ 0x00000001, "TIMER_QUERY_STATE" },
	{ 0x00000002, "TIMER_MODIFY_STATE" },
	{ (STANDARD_RIGHTS_REQUIRED |
	SYNCHRONIZE |
		TIMER_QUERY_STATE |
		TIMER_MODIFY_STATE), "TIMER_ALL_ACCESS" },
		{ 0 },
};

static const_values_t time_zone_id_unknown[] = {
	{ 0, "TIME_ZONE_ID_UNKNOWN" },
	{ 1, "TIME_ZONE_ID_STANDARD" },
	{ 2, "TIME_ZONE_ID_DAYLIGHT" },
	{ 0 },
};

static const_values_t ltp_pc_smt[] = {
	{ 0x00000001, "LTP_PC_SMT" },
	{ 0 },
};

static const_values_t cache_fully_associative[] = {
	{ 0x000000FF, "CACHE_FULLY_ASSOCIATIVE" },
	{ 0 },
};

static const_values_t processor_intel_386[] = {
	{ 386, "PROCESSOR_INTEL_386" },
	{ 486, "PROCESSOR_INTEL_486" },
	{ 586, "PROCESSOR_INTEL_PENTIUM" },
	{ 2200, "PROCESSOR_INTEL_IA64" },
	{ 0 },
};

static const_values_t processor_amd_x8664[] = {
	{ 8664, "PROCESSOR_AMD_X8664" },
	{ 4000, "PROCESSOR_MIPS_R4000" },
	{ 21064, "PROCESSOR_ALPHA_21064" },
	{ 601, "PROCESSOR_PPC_601" },
	{ 603, "PROCESSOR_PPC_603" },
	{ 604, "PROCESSOR_PPC_604" },
	{ 620, "PROCESSOR_PPC_620" },
	{ 10003, "PROCESSOR_HITACHI_SH3" },
	{ 10004, "PROCESSOR_HITACHI_SH3E" },
	{ 10005, "PROCESSOR_HITACHI_SH4" },
	{ 821, "PROCESSOR_MOTOROLA_821" },
	{ 103, "PROCESSOR_SHx_SH3" },
	{ 104, "PROCESSOR_SHx_SH4" },
	{ 2577, "PROCESSOR_STRONGARM" },
	{ 1824, "PROCESSOR_ARM720" },
	{ 2080, "PROCESSOR_ARM820" },
	{ 2336, "PROCESSOR_ARM920" },
	{ 70001, "PROCESSOR_ARM_7TDMI" },
	{ 0x0000494f, "PROCESSOR_OPTIL" },
	{ 0, "PROCESSOR_ARCHITECTURE_INTEL" },
	{ 1, "PROCESSOR_ARCHITECTURE_MIPS" },
	{ 2, "PROCESSOR_ARCHITECTURE_ALPHA" },
	{ 3, "PROCESSOR_ARCHITECTURE_PPC" },
	{ 4, "PROCESSOR_ARCHITECTURE_SHX" },
	{ 5, "PROCESSOR_ARCHITECTURE_ARM" },
	{ 6, "PROCESSOR_ARCHITECTURE_IA64" },
	{ 7, "PROCESSOR_ARCHITECTURE_ALPHA64" },
	{ 8, "PROCESSOR_ARCHITECTURE_MSIL" },
	{ 9, "PROCESSOR_ARCHITECTURE_AMD64" },
	{ 10, "PROCESSOR_ARCHITECTURE_IA32_ON_WIN64" },
	{ 0x0000FFFF, "PROCESSOR_ARCHITECTURE_UNKNOWN" },
	{ 0 },
};

static const_values_t pf_floating_point_precision_errata[] = {
	{ 0, "PF_FLOATING_POINT_PRECISION_ERRATA" },
	{ 1, "PF_FLOATING_POINT_EMULATED" },
	{ 0 },
};

static const_values_t pf_compare_exchange_double[] = {
	{ 2, "PF_COMPARE_EXCHANGE_DOUBLE" },
	{ 3, "PF_MMX_INSTRUCTIONS_AVAILABLE" },
	{ 4, "PF_PPC_MOVEMEM_64BIT_OK" },
	{ 5, "PF_ALPHA_BYTE_INSTRUCTIONS" },
	{ 6, "PF_XMMI_INSTRUCTIONS_AVAILABLE" },
	{ 7, "PF_3DNOW_INSTRUCTIONS_AVAILABLE" },
	{ 8, "PF_RDTSC_INSTRUCTION_AVAILABLE" },
	{ 9, "PF_PAE_ENABLED" },
	{ 10, "PF_XMMI64_INSTRUCTIONS_AVAILABLE" },
	{ 11, "PF_SSE_DAZ_MODE_AVAILABLE" },
	{ 12, "PF_NX_ENABLED" },
	{ 13, "PF_SSE3_INSTRUCTIONS_AVAILABLE" },
	{ 14, "PF_COMPARE_EXCHANGE128" },
	{ 15, "PF_COMPARE64_EXCHANGE128" },
	{ 16, "PF_CHANNELS_ENABLED" },
	{ 17, "PF_XSAVE_ENABLED" },
	{ 0 },
};

static const_values_t xstate_legacy_floating_point[] = {
	{ 0, "XSTATE_LEGACY_FLOATING_POINT" },
	{ 1, "XSTATE_LEGACY_SSE" },
	{ 0 },
};

static const_values_t xstate_gsse[] = {
	{ 2, "XSTATE_GSSE" },
	{ (1i64 << (XSTATE_LEGACY_FLOATING_POINT)), "XSTATE_MASK_LEGACY_FLOATING_POINT" },
	{ (1i64 << (XSTATE_LEGACY_SSE)), "XSTATE_MASK_LEGACY_SSE" },
	{ (XSTATE_MASK_LEGACY_FLOATING_POINT |
	XSTATE_MASK_LEGACY_SSE), "XSTATE_MASK_LEGACY" },
	{ (1i64 << (XSTATE_GSSE)), "XSTATE_MASK_GSSE" },
	{ 64, "MAXIMUM_XSTATE_FEATURES" },
	{ 0 },
};

static const_values_t section_query[] = {
	{ 0x00000001, "SECTION_QUERY" },
	{ 0x00000002, "SECTION_MAP_WRITE" },
	{ 0x00000004, "SECTION_MAP_READ" },
	{ 0x00000008, "SECTION_MAP_EXECUTE" },
	{ 0x00000010, "SECTION_EXTEND_SIZE" },
	{ 0x00000020, "SECTION_MAP_EXECUTE_EXPLICIT" },
	{ (STANDARD_RIGHTS_REQUIRED |
	SECTION_QUERY |
		SECTION_MAP_WRITE |
		SECTION_MAP_READ |
		SECTION_MAP_EXECUTE |
		SECTION_EXTEND_SIZE), "SECTION_ALL_ACCESS" },
		{ 0 },
};

static const_values_t session_query_access[] = {
	{ 0x00000001, "SESSION_QUERY_ACCESS" },
	{ 0x00000002, "SESSION_MODIFY_ACCESS" },
	{ (STANDARD_RIGHTS_REQUIRED |
	SESSION_QUERY_ACCESS |
		SESSION_MODIFY_ACCESS), "SESSION_ALL_ACCESS" },
		{ 0 },
};

static const_values_t page_noaccess[] = {
	{ 0x00000001, "PAGE_NOACCESS" },
	{ 0x00000002, "PAGE_READONLY" },
	{ 0x00000004, "PAGE_READWRITE" },
	{ 0x00000008, "PAGE_WRITECOPY" },
	{ 0x00000010, "PAGE_EXECUTE" },
	{ 0x00000020, "PAGE_EXECUTE_READ" },
	{ 0x00000040, "PAGE_EXECUTE_READWRITE" },
	{ 0x00000080, "PAGE_EXECUTE_WRITECOPY" },
	{ 0x00000100, "PAGE_GUARD" },
	{ 0x00000200, "PAGE_NOCACHE" },
	{ 0x00000400, "PAGE_WRITECOMBINE" },
	{ 0 },
};

static const_values_t sec_file[] = {
	{ 0x00800000, "SEC_FILE" },
	{ 0x01000000, "SEC_IMAGE" },
	{ 0x02000000, "SEC_PROTECTED_IMAGE" },
	{ 0x04000000, "SEC_RESERVE" },
	{ 0x08000000, "SEC_COMMIT" },
	{ 0x10000000, "SEC_NOCACHE" },
	{ 0x40000000, "SEC_WRITECOMBINE" },
	{ 0x80000000, "SEC_LARGE_PAGES" },
	/* Supported from Windows 8. Should be
	* combined with PAGE_READ_ONLY
	* (no other attributes are valid).
	*/
	{ 0x11000000, "SEC_IMAGE_NO_EXECUTE" },
	{ 0 },
};
static const_values_t write_watch_flag_reset[] = {
	{ 0x00000001, "WRITE_WATCH_FLAG_RESET" },
	{ 0 },
};

static const_values_t mem_commit[] = {
	{ 0x00001000, "MEM_COMMIT" },
	{ 0x00002000, "MEM_RESERVE" },
	{ 0x00004000, "MEM_DECOMMIT" },
	{ 0x00008000, "MEM_RELEASE" },
	{ 0x00010000, "MEM_FREE" },
	{ 0x00020000, "MEM_PRIVATE" },
	{ 0x00040000, "MEM_MAPPED" },
	{ 0x00080000, "MEM_RESET" },
	{ 0x00100000, "MEM_TOP_DOWN" },
	{ 0x00200000, "MEM_WRITE_WATCH" },
	{ 0x00400000, "MEM_PHYSICAL" },
	{ 0x00800000, "MEM_ROTATE" },
	{ SEC_IMAGE, "MEM_IMAGE" }, /* FIXME i#1550: resolve the same values */
	{ 0x01000000, "MEM_RESET_UNDO" }, /* supported from Windows 8 & 2012 */
	{ 0x20000000, "MEM_LARGE_PAGES" },
	{ 0x80000000, "MEM_4MB_PAGES" },
	{ 0 },
};

static const_values_t file_read_data[] = {
	{ (0x00000001), "FILE_READ_DATA" },
	{ (0x00000001), "FILE_LIST_DIRECTORY" },
	{ (0x00000002), "FILE_WRITE_DATA" },
	{ (0x00000002), "FILE_ADD_FILE" },
	{ (0x00000004), "FILE_APPEND_DATA" },
	{ (0x00000004), "FILE_ADD_SUBDIRECTORY" },
	{ (0x00000004), "FILE_CREATE_PIPE_INSTANCE" },
	{ (0x00000008), "FILE_READ_EA" },
	{ (0x00000010), "FILE_WRITE_EA" },
	{ (0x00000020), "FILE_EXECUTE" },
	{ (0x00000020), "FILE_TRAVERSE" },
	{ (0x00000040), "FILE_DELETE_CHILD" },
	{ (0x00000080), "FILE_READ_ATTRIBUTES" },
	{ (0x00000100), "FILE_WRITE_ATTRIBUTES" },
	{ (STANDARD_RIGHTS_REQUIRED |
	SYNCHRONIZE |
		0x000001FF), "FILE_ALL_ACCESS" },
		{ (STANDARD_RIGHTS_READ |
			FILE_READ_DATA |
			FILE_READ_ATTRIBUTES |
			FILE_READ_EA |
			SYNCHRONIZE), "FILE_GENERIC_READ" },
			{ (STANDARD_RIGHTS_WRITE |
				FILE_WRITE_DATA |
				FILE_WRITE_ATTRIBUTES |
				FILE_WRITE_EA |
				FILE_APPEND_DATA |
				SYNCHRONIZE), "FILE_GENERIC_WRITE" },
				{ (STANDARD_RIGHTS_EXECUTE |
					FILE_READ_ATTRIBUTES |
					FILE_EXECUTE |
					SYNCHRONIZE), "FILE_GENERIC_EXECUTE" },
					{ 0 },
};

static const_values_t file_share_read[] = {
	{ 0x00000001, "FILE_SHARE_READ" },
	{ 0x00000002, "FILE_SHARE_WRITE" },
	{ 0x00000004, "FILE_SHARE_DELETE" },
	{ 0 },
};

static const_values_t file_attribute_readonly[] = {
	{ 0x00000001, "FILE_ATTRIBUTE_READONLY" },
	{ 0x00000002, "FILE_ATTRIBUTE_HIDDEN" },
	{ 0x00000004, "FILE_ATTRIBUTE_SYSTEM" },
	{ 0x00000010, "FILE_ATTRIBUTE_DIRECTORY" },
	{ 0x00000020, "FILE_ATTRIBUTE_ARCHIVE" },
	{ 0x00000040, "FILE_ATTRIBUTE_DEVICE" },
	{ 0x00000080, "FILE_ATTRIBUTE_NORMAL" },
	{ 0x00000100, "FILE_ATTRIBUTE_TEMPORARY" },
	{ 0x00000200, "FILE_ATTRIBUTE_SPARSE_FILE" },
	{ 0x00000400, "FILE_ATTRIBUTE_REPARSE_POINT" },
	{ 0x00000800, "FILE_ATTRIBUTE_COMPRESSED" },
	{ 0x00001000, "FILE_ATTRIBUTE_OFFLINE" },
	{ 0x00002000, "FILE_ATTRIBUTE_NOT_CONTENT_INDEXED" },
	{ 0x00004000, "FILE_ATTRIBUTE_ENCRYPTED" },
	{ 0x00010000, "FILE_ATTRIBUTE_VIRTUAL" },
	{ 0 },
};

static const_values_t file_notify_change_file_name[] = {
	{ 0x00000001, "FILE_NOTIFY_CHANGE_FILE_NAME" },
	{ 0x00000002, "FILE_NOTIFY_CHANGE_DIR_NAME" },
	{ 0x00000004, "FILE_NOTIFY_CHANGE_ATTRIBUTES" },
	{ 0x00000008, "FILE_NOTIFY_CHANGE_SIZE" },
	{ 0x00000010, "FILE_NOTIFY_CHANGE_LAST_WRITE" },
	{ 0x00000020, "FILE_NOTIFY_CHANGE_LAST_ACCESS" },
	{ 0x00000040, "FILE_NOTIFY_CHANGE_CREATION" },
	{ 0x00000100, "FILE_NOTIFY_CHANGE_SECURITY" },
	{ 0 },
};

static const_values_t file_action_added[] = {
	{ 0x00000001, "FILE_ACTION_ADDED" },
	{ 0x00000002, "FILE_ACTION_REMOVED" },
	{ 0x00000003, "FILE_ACTION_MODIFIED" },
	{ 0x00000004, "FILE_ACTION_RENAMED_OLD_NAME" },
	{ 0x00000005, "FILE_ACTION_RENAMED_NEW_NAME" },
	{ 0 },
};

static const_values_t mailslot_no_message[] = {
	{ ((DWORD)-1), "MAILSLOT_NO_MESSAGE" },
	{ ((DWORD)-1), "MAILSLOT_WAIT_FOREVER" },
	{ 0 },
};

static const_values_t file_case_sensitive_search[] = {
	{ 0x00000001, "FILE_CASE_SENSITIVE_SEARCH" },
	{ 0x00000002, "FILE_CASE_PRESERVED_NAMES" },
	{ 0 },
};

static const_values_t file_unicode_on_disk[] = {
	{ 0x00000004, "FILE_UNICODE_ON_DISK" },
	{ 0x00000008, "FILE_PERSISTENT_ACLS" },
	{ 0x00000010, "FILE_FILE_COMPRESSION" },
	{ 0x00000020, "FILE_VOLUME_QUOTAS" },
	{ 0x00000040, "FILE_SUPPORTS_SPARSE_FILES" },
	{ 0x00000080, "FILE_SUPPORTS_REPARSE_POINTS" },
	{ 0x00000100, "FILE_SUPPORTS_REMOTE_STORAGE" },
	{ 0x00008000, "FILE_VOLUME_IS_COMPRESSED" },
	{ 0x00010000, "FILE_SUPPORTS_OBJECT_IDS" },
	{ 0x00020000, "FILE_SUPPORTS_ENCRYPTION" },
	{ 0x00040000, "FILE_NAMED_STREAMS" },
	{ 0x00080000, "FILE_READ_ONLY_VOLUME" },
	{ 0x00100000, "FILE_SEQUENTIAL_WRITE_ONCE" },
	{ 0x00200000, "FILE_SUPPORTS_TRANSACTIONS" },
	{ 0x00400000, "FILE_SUPPORTS_HARD_LINKS" },
	{ 0x00800000, "FILE_SUPPORTS_EXTENDED_ATTRIBUTES" },
	{ 0x01000000, "FILE_SUPPORTS_OPEN_BY_FILE_ID" },
	{ 0x02000000, "FILE_SUPPORTS_USN_JOURNAL" },
	{ 0 },
};

static const_values_t reparse_guid_data_buffer_header_size[] = {
	{ FIELD_OFFSET(REPARSE_GUID_DATA_BUFFER,GenericReparseBuffer), "REPARSE_GUID_DATA_BUFFER_HEADER_SIZE" },
	{ 0 },
};

static const_values_t maximum_reparse_data_buffer_size[] = {
	{ (16 * 1024), "MAXIMUM_REPARSE_DATA_BUFFER_SIZE" },
	{ 0 },
};

static const_values_t io_reparse_tag_reserved_zero[] = {
	{ (0), "IO_REPARSE_TAG_RESERVED_ZERO" },
	{ (1), "IO_REPARSE_TAG_RESERVED_ONE" },
	{ IO_REPARSE_TAG_RESERVED_ONE, "IO_REPARSE_TAG_RESERVED_RANGE" },
	{ 0 },
};

static const_values_t io_reparse_tag_mount_point[] = {
	{ (0xA0000003L), "IO_REPARSE_TAG_MOUNT_POINT" },
	{ (0xC0000004L), "IO_REPARSE_TAG_HSM" },
	{ (0x80000006L), "IO_REPARSE_TAG_HSM2" },
	{ (0x80000007L), "IO_REPARSE_TAG_SIS" },
	{ (0x80000008L), "IO_REPARSE_TAG_WIM" },
	{ (0x80000009L), "IO_REPARSE_TAG_CSV" },
	{ (0x8000000AL), "IO_REPARSE_TAG_DFS" },
	{ (0xA000000CL), "IO_REPARSE_TAG_SYMLINK" },
	{ (0x80000012L), "IO_REPARSE_TAG_DFSR" },
	{ 0 },
};

static const_values_t io_completion_modify_state[] = {
	{ 0x00000002, "IO_COMPLETION_MODIFY_STATE" },
	{ (STANDARD_RIGHTS_REQUIRED |
	SYNCHRONIZE |
		0x00000003), "IO_COMPLETION_ALL_ACCESS" },
		{ 0 },
};

static const_values_t duplicate_close_source[] = {
	{ 0x00000001, "DUPLICATE_CLOSE_SOURCE" },
	{ 0x00000002, "DUPLICATE_SAME_ACCESS" },
	{ 0x00000004, "DUPLICATE_SAME_ATTRIBUTES" },
	{ 0 },
};

static const_values_t perfstate_policy_change_ideal[] = {
	{ 0, "PERFSTATE_POLICY_CHANGE_IDEAL" },
	{ 1, "PERFSTATE_POLICY_CHANGE_SINGLE" },
	{ 2, "PERFSTATE_POLICY_CHANGE_ROCKET" },
	{ PERFSTATE_POLICY_CHANGE_ROCKET, "PERFSTATE_POLICY_CHANGE_MAX" },
	{ 0 },
};

static const_values_t processor_perf_boost_policy_disabled[] = {
	{ 0, "PROCESSOR_PERF_BOOST_POLICY_DISABLED" },
	{ 100, "PROCESSOR_PERF_BOOST_POLICY_MAX" },
	{ 0 },
};

static const_values_t core_parking_policy_change_ideal[] = {
	{ 0, "CORE_PARKING_POLICY_CHANGE_IDEAL" },
	{ 1, "CORE_PARKING_POLICY_CHANGE_SINGLE" },
	{ 2, "CORE_PARKING_POLICY_CHANGE_ROCKET" },
	{ CORE_PARKING_POLICY_CHANGE_ROCKET, "CORE_PARKING_POLICY_CHANGE_MAX" },
	{ 0 },
};

static const_values_t power_device_idle_policy_performance[] = {
	{ 0, "POWER_DEVICE_IDLE_POLICY_PERFORMANCE" },
	{ 1, "POWER_DEVICE_IDLE_POLICY_CONSERVATIVE" },
	{ 0 },
};

static const_values_t power_system_maximum[] = {
	{ 7, "POWER_SYSTEM_MAXIMUM" },
	{ 0 },
};

static const_values_t es_system_required[] = {
	{ ((DWORD)0x00000001), "ES_SYSTEM_REQUIRED" },
	{ ((DWORD)0x00000002), "ES_DISPLAY_REQUIRED" },
	{ ((DWORD)0x00000004), "ES_USER_PRESENT" },
	{ ((DWORD)0x00000040), "ES_AWAYMODE_REQUIRED" },
	{ ((DWORD)0x80000000), "ES_CONTINUOUS" },
	{ 0 },
};

static const_values_t diagnostic_reason_version[] = {
	{ 0, "DIAGNOSTIC_REASON_VERSION" },
	{ 0x00000001, "DIAGNOSTIC_REASON_SIMPLE_STRING" },
	{ 0x00000002, "DIAGNOSTIC_REASON_DETAILED_STRING" },
	{ 0x80000000, "DIAGNOSTIC_REASON_NOT_SPECIFIED" },
	{ (~0x80000003), "DIAGNOSTIC_REASON_INVALID_FLAGS" },
	{ 0 },
};

static const_values_t power_request_context_version[] = {
	{ 0, "POWER_REQUEST_CONTEXT_VERSION" },
	{ 0x00000001, "POWER_REQUEST_CONTEXT_SIMPLE_STRING" },
	{ 0x00000002, "POWER_REQUEST_CONTEXT_DETAILED_STRING" },
	{ 3, "PowerRequestMaximum" },
	{ 0 },
};

static const_values_t pdcap_d0_supported[] = {
	{ 0x00000001, "PDCAP_D0_SUPPORTED" },
	{ 0x00000002, "PDCAP_D1_SUPPORTED" },
	{ 0x00000004, "PDCAP_D2_SUPPORTED" },
	{ 0x00000008, "PDCAP_D3_SUPPORTED" },
	{ 0x00000010, "PDCAP_WAKE_FROM_D0_SUPPORTED" },
	{ 0x00000020, "PDCAP_WAKE_FROM_D1_SUPPORTED" },
	{ 0x00000040, "PDCAP_WAKE_FROM_D2_SUPPORTED" },
	{ 0x00000080, "PDCAP_WAKE_FROM_D3_SUPPORTED" },
	{ 0x00000100, "PDCAP_WARM_EJECT_SUPPORTED" },
	{ 0 },
};

static const_values_t power_setting_value_version[] = {
	{ (0x00000001), "POWER_SETTING_VALUE_VERSION" },
	{ 0 },
};

static const_values_t proc_idle_bucket_count[] = {
	{ 6, "PROC_IDLE_BUCKET_COUNT" },
	{ 16, "PROC_IDLE_BUCKET_COUNT_EX" },
	{ 0 },
};

static const_values_t acpi_ppm_software_all[] = {
	{ 0x000000FC, "ACPI_PPM_SOFTWARE_ALL" },
	{ 0x000000FD, "ACPI_PPM_SOFTWARE_ANY" },
	{ 0x000000FE, "ACPI_PPM_HARDWARE_ALL" },
	{ 0 },
};

static const_values_t ms_ppm_software_all[] = {
	{ 0x00000001, "MS_PPM_SOFTWARE_ALL" },
	{ 0 },
};

static const_values_t ppm_firmware_acpi1c2[] = {
	{ 0x00000001, "PPM_FIRMWARE_ACPI1C2" },
	{ 0x00000002, "PPM_FIRMWARE_ACPI1C3" },
	{ 0x00000004, "PPM_FIRMWARE_ACPI1TSTATES" },
	{ 0x00000008, "PPM_FIRMWARE_CST" },
	{ 0x00000010, "PPM_FIRMWARE_CSD" },
	{ 0x00000020, "PPM_FIRMWARE_PCT" },
	{ 0x00000040, "PPM_FIRMWARE_PSS" },
	{ 0x00000080, "PPM_FIRMWARE_XPSS" },
	{ 0x00000100, "PPM_FIRMWARE_PPC" },
	{ 0x00000200, "PPM_FIRMWARE_PSD" },
	{ 0x00000400, "PPM_FIRMWARE_PTC" },
	{ 0x00000800, "PPM_FIRMWARE_TSS" },
	{ 0x00001000, "PPM_FIRMWARE_TPC" },
	{ 0x00002000, "PPM_FIRMWARE_TSD" },
	{ 0x00004000, "PPM_FIRMWARE_PCCH" },
	{ 0x00008000, "PPM_FIRMWARE_PCCP" },
	{ 0 },
};

static const_values_t power_action_query_allowed[] = {
	{ 0x00000001, "POWER_ACTION_QUERY_ALLOWED" },
	{ 0x00000002, "POWER_ACTION_UI_ALLOWED" },
	{ 0x00000004, "POWER_ACTION_OVERRIDE_APPS" },
	{ 0x08000000, "POWER_ACTION_PSEUDO_TRANSITION" },
	{ 0x10000000, "POWER_ACTION_LIGHTEST_FIRST" },
	{ 0x20000000, "POWER_ACTION_LOCK_CONSOLE" },
	{ 0x40000000, "POWER_ACTION_DISABLE_WAKES" },
	{ 0x80000000, "POWER_ACTION_CRITICAL" },
	{ 0 },
};

static const_values_t power_level_user_notify_text[] = {
	{ 0x00000001, "POWER_LEVEL_USER_NOTIFY_TEXT" },
	{ 0x00000002, "POWER_LEVEL_USER_NOTIFY_SOUND" },
	{ 0x00000004, "POWER_LEVEL_USER_NOTIFY_EXEC" },
	{ 0x00000008, "POWER_USER_NOTIFY_BUTTON" },
	{ 0x00000010, "POWER_USER_NOTIFY_SHUTDOWN" },
	{ 0x00000020, "POWER_USER_NOTIFY_FORCED_SHUTDOWN" },
	{ 0x80000000, "POWER_FORCE_TRIGGER_RESET" },
	{ 0 },
};

static const_values_t battery_discharge_flags_eventcode_mask[] = {
	{ 0x00000007, "BATTERY_DISCHARGE_FLAGS_EVENTCODE_MASK" },
	{ 0x80000000, "BATTERY_DISCHARGE_FLAGS_ENABLE" },
	{ 0 },
};

static const_values_t num_discharge_policies[] = {
	{ 4, "NUM_DISCHARGE_POLICIES" },
	{ 0, "DISCHARGE_POLICY_CRITICAL" },
	{ 1, "DISCHARGE_POLICY_LOW" },
	{ 0 },
};

static const_values_t processor_idlestate_policy_count[] = {
	{ 0x00000003, "PROCESSOR_IDLESTATE_POLICY_COUNT" },
	{ 0 },
};

static const_values_t po_throttle_none[] = {
	{ 0, "PO_THROTTLE_NONE" },
	{ 1, "PO_THROTTLE_CONSTANT" },
	{ 2, "PO_THROTTLE_DEGRADE" },
	{ 3, "PO_THROTTLE_ADAPTIVE" },
	{ 4, "PO_THROTTLE_MAXIMUM" },
	{ 0 },
};

static const_values_t image_dos_signature[] = {
	{ 0x00005A4D, "IMAGE_DOS_SIGNATURE" },
	{ 0x0000454E, "IMAGE_OS2_SIGNATURE" },
	{ 0x0000454C, "IMAGE_OS2_SIGNATURE_LE" },
	{ 0x0000454C, "IMAGE_VXD_SIGNATURE" },
	{ 0x00004550, "IMAGE_NT_SIGNATURE" },
	{ 0 },
};

#if 0 /* FIXME i#1550: resolve ifdef macros */
static const_values_t image_dos_signature[] = {
	{ 0x00004D5A, "IMAGE_DOS_SIGNATURE" },
	{ 0x00004E45, "IMAGE_OS2_SIGNATURE" },
	{ 0x00004C45, "IMAGE_OS2_SIGNATURE_LE" },
	{ 0x50450000, "IMAGE_NT_SIGNATURE" },
	{ 0 },
};
#endif

static const_values_t image_sizeof_file_header[] = {
	{ 20, "IMAGE_SIZEOF_FILE_HEADER" },
	{ 0 },
};

static const_values_t image_file_relocs_stripped[] = {
	{ 0x00000001, "IMAGE_FILE_RELOCS_STRIPPED" },
	{ 0x00000002, "IMAGE_FILE_EXECUTABLE_IMAGE" },
	{ 0x00000004, "IMAGE_FILE_LINE_NUMS_STRIPPED" },
	{ 0x00000008, "IMAGE_FILE_LOCAL_SYMS_STRIPPED" },
	{ 0x00000010, "IMAGE_FILE_AGGRESIVE_WS_TRIM" },
	{ 0x00000020, "IMAGE_FILE_LARGE_ADDRESS_AWARE" },
	{ 0x00000080, "IMAGE_FILE_BYTES_REVERSED_LO" },
	{ 0x00000100, "IMAGE_FILE_32BIT_MACHINE" },
	{ 0x00000200, "IMAGE_FILE_DEBUG_STRIPPED" },
	{ 0x00000400, "IMAGE_FILE_REMOVABLE_RUN_FROM_SWAP" },
	{ 0x00000800, "IMAGE_FILE_NET_RUN_FROM_SWAP" },
	{ 0x00001000, "IMAGE_FILE_SYSTEM" },
	{ 0x00002000, "IMAGE_FILE_DLL" },
	{ 0x00004000, "IMAGE_FILE_UP_SYSTEM_ONLY" },
	{ 0x00008000, "IMAGE_FILE_BYTES_REVERSED_HI" },
	{ 0 },
};

static const_values_t image_file_machine_unknown[] = {
	{ 0, "IMAGE_FILE_MACHINE_UNKNOWN" },
	{ 0x0000014c, "IMAGE_FILE_MACHINE_I386" },
	{ 0x00000162, "IMAGE_FILE_MACHINE_R3000" },
	{ 0x00000166, "IMAGE_FILE_MACHINE_R4000" },
	{ 0x00000168, "IMAGE_FILE_MACHINE_R10000" },
	{ 0x00000169, "IMAGE_FILE_MACHINE_WCEMIPSV2" },
	{ 0x00000184, "IMAGE_FILE_MACHINE_ALPHA" },
	{ 0x000001a2, "IMAGE_FILE_MACHINE_SH3" },
	{ 0x000001a3, "IMAGE_FILE_MACHINE_SH3DSP" },
	{ 0x000001a4, "IMAGE_FILE_MACHINE_SH3E" },
	{ 0x000001a6, "IMAGE_FILE_MACHINE_SH4" },
	{ 0x000001a8, "IMAGE_FILE_MACHINE_SH5" },
	{ 0x000001c0, "IMAGE_FILE_MACHINE_ARM" },
	{ 0x000001c2, "IMAGE_FILE_MACHINE_THUMB" },
	{ 0x000001d3, "IMAGE_FILE_MACHINE_AM33" },
	{ 0x000001F0, "IMAGE_FILE_MACHINE_POWERPC" },
	{ 0x000001f1, "IMAGE_FILE_MACHINE_POWERPCFP" },
	{ 0x00000200, "IMAGE_FILE_MACHINE_IA64" },
	{ 0x00000266, "IMAGE_FILE_MACHINE_MIPS16" },
	{ 0x00000284, "IMAGE_FILE_MACHINE_ALPHA64" },
	{ 0x00000366, "IMAGE_FILE_MACHINE_MIPSFPU" },
	{ 0x00000466, "IMAGE_FILE_MACHINE_MIPSFPU16" },
	{ IMAGE_FILE_MACHINE_ALPHA64, "IMAGE_FILE_MACHINE_AXP64" },
	{ 0x00000520, "IMAGE_FILE_MACHINE_TRICORE" },
	{ 0x00000CEF, "IMAGE_FILE_MACHINE_CEF" },
	{ 0x00000EBC, "IMAGE_FILE_MACHINE_EBC" },
	{ 0x00008664, "IMAGE_FILE_MACHINE_AMD64" },
	{ 0x00009041, "IMAGE_FILE_MACHINE_M32R" },
	{ 0x0000C0EE, "IMAGE_FILE_MACHINE_CEE" },
	{ 0 },
};

static const_values_t image_numberof_directory_entries[] = {
	{ 16, "IMAGE_NUMBEROF_DIRECTORY_ENTRIES" },
	{ 0 },
};

static const_values_t image_nt_optional_hdr32_magic[] = {
	{ 0x0000010b, "IMAGE_NT_OPTIONAL_HDR32_MAGIC" },
	{ 0x0000020b, "IMAGE_NT_OPTIONAL_HDR64_MAGIC" },
	{ 0x00000107, "IMAGE_ROM_OPTIONAL_HDR_MAGIC" },
	{ IMAGE_NT_OPTIONAL_HDR64_MAGIC, "IMAGE_NT_OPTIONAL_HDR_MAGIC" }, //ifdef win64
	{ IMAGE_NT_OPTIONAL_HDR32_MAGIC, "IMAGE_NT_OPTIONAL_HDR_MAGIC" }, //ifdef win32
	{ 0 },
};

static const_values_t image_subsystem_unknown[] = {
	{ 0, "IMAGE_SUBSYSTEM_UNKNOWN" },
	{ 1, "IMAGE_SUBSYSTEM_NATIVE" },
	{ 2, "IMAGE_SUBSYSTEM_WINDOWS_GUI" },
	{ 3, "IMAGE_SUBSYSTEM_WINDOWS_CUI" },
	{ 5, "IMAGE_SUBSYSTEM_OS2_CUI" },
	{ 7, "IMAGE_SUBSYSTEM_POSIX_CUI" },
	{ 8, "IMAGE_SUBSYSTEM_NATIVE_WINDOWS" },
	{ 9, "IMAGE_SUBSYSTEM_WINDOWS_CE_GUI" },
	{ 10, "IMAGE_SUBSYSTEM_EFI_APPLICATION" },
	{ 11, "IMAGE_SUBSYSTEM_EFI_BOOT_SERVICE_DRIVER" },
	{ 12, "IMAGE_SUBSYSTEM_EFI_RUNTIME_DRIVER" },
	{ 13, "IMAGE_SUBSYSTEM_EFI_ROM" },
	{ 14, "IMAGE_SUBSYSTEM_XBOX" },
	{ 16, "IMAGE_SUBSYSTEM_WINDOWS_BOOT_APPLICATION" },
	{ 0 },
};

static const_values_t image_dllcharacteristics_dynamic_base[] = {
	{ 0x00000040, "IMAGE_DLLCHARACTERISTICS_DYNAMIC_BASE" },
	{ 0x00000080, "IMAGE_DLLCHARACTERISTICS_FORCE_INTEGRITY" },
	{ 0x00000100, "IMAGE_DLLCHARACTERISTICS_NX_COMPAT" },
	{ 0x00000200, "IMAGE_DLLCHARACTERISTICS_NO_ISOLATION" },
	{ 0x00000400, "IMAGE_DLLCHARACTERISTICS_NO_SEH" },
	{ 0x00000800, "IMAGE_DLLCHARACTERISTICS_NO_BIND" },
	{ 0x00002000, "IMAGE_DLLCHARACTERISTICS_WDM_DRIVER" },
	{ 0x00008000, "IMAGE_DLLCHARACTERISTICS_TERMINAL_SERVER_AWARE" },
	{ 0 },
};

static const_values_t image_directory_entry_export[] = {
	{ 0, "IMAGE_DIRECTORY_ENTRY_EXPORT" },
	{ 1, "IMAGE_DIRECTORY_ENTRY_IMPORT" },
	{ 2, "IMAGE_DIRECTORY_ENTRY_RESOURCE" },
	{ 3, "IMAGE_DIRECTORY_ENTRY_EXCEPTION" },
	{ 4, "IMAGE_DIRECTORY_ENTRY_SECURITY" },
	{ 5, "IMAGE_DIRECTORY_ENTRY_BASERELOC" },
	{ 6, "IMAGE_DIRECTORY_ENTRY_DEBUG" },
	{ 7, "IMAGE_DIRECTORY_ENTRY_ARCHITECTURE" },
	{ 8, "IMAGE_DIRECTORY_ENTRY_GLOBALPTR" },
	{ 9, "IMAGE_DIRECTORY_ENTRY_TLS" },
	{ 10, "IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG" },
	{ 11, "IMAGE_DIRECTORY_ENTRY_BOUND_IMPORT" },
	{ 12, "IMAGE_DIRECTORY_ENTRY_IAT" },
	{ 13, "IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT" },
	{ 14, "IMAGE_DIRECTORY_ENTRY_COM_DESCRIPTOR" },
	{ 0 },
};

static const_values_t image_sizeof_short_name[] = {
	{ 8, "IMAGE_SIZEOF_SHORT_NAME" },
	{ 0 },
};

static const_values_t image_sizeof_section_header[] = {
	{ 40, "IMAGE_SIZEOF_SECTION_HEADER" },
	{ 0 },
};

static const_values_t image_scn_type_no_pad[] = {
	{ 0x00000008, "IMAGE_SCN_TYPE_NO_PAD" },
	{ 0x00000020, "IMAGE_SCN_CNT_CODE" },
	{ 0x00000040, "IMAGE_SCN_CNT_INITIALIZED_DATA" },
	{ 0x00000080, "IMAGE_SCN_CNT_UNINITIALIZED_DATA" },
	{ 0x00000100, "IMAGE_SCN_LNK_OTHER" },
	{ 0x00000200, "IMAGE_SCN_LNK_INFO" },
	{ 0x00000800, "IMAGE_SCN_LNK_REMOVE" },
	{ 0x00001000, "IMAGE_SCN_LNK_COMDAT" },
	{ 0x00004000, "IMAGE_SCN_NO_DEFER_SPEC_EXC" },
	{ 0x00008000, "IMAGE_SCN_GPREL" },
	{ 0x00008000, "IMAGE_SCN_MEM_FARDATA" },
	{ 0x00020000, "IMAGE_SCN_MEM_PURGEABLE" },
	{ 0x00020000, "IMAGE_SCN_MEM_16BIT" },
	{ 0x00040000, "IMAGE_SCN_MEM_LOCKED" },
	{ 0x00080000, "IMAGE_SCN_MEM_PRELOAD" },
	{ 0x00100000, "IMAGE_SCN_ALIGN_1BYTES" },
	{ 0x00200000, "IMAGE_SCN_ALIGN_2BYTES" },
	{ 0x00300000, "IMAGE_SCN_ALIGN_4BYTES" },
	{ 0x00400000, "IMAGE_SCN_ALIGN_8BYTES" },
	{ 0x00500000, "IMAGE_SCN_ALIGN_16BYTES" },
	{ 0x00600000, "IMAGE_SCN_ALIGN_32BYTES" },
	{ 0x00700000, "IMAGE_SCN_ALIGN_64BYTES" },
	{ 0x00800000, "IMAGE_SCN_ALIGN_128BYTES" },
	{ 0x00900000, "IMAGE_SCN_ALIGN_256BYTES" },
	{ 0x00A00000, "IMAGE_SCN_ALIGN_512BYTES" },
	{ 0x00B00000, "IMAGE_SCN_ALIGN_1024BYTES" },
	{ 0x00C00000, "IMAGE_SCN_ALIGN_2048BYTES" },
	{ 0x00D00000, "IMAGE_SCN_ALIGN_4096BYTES" },
	{ 0x00E00000, "IMAGE_SCN_ALIGN_8192BYTES" },
	{ 0x00F00000, "IMAGE_SCN_ALIGN_MASK" },
	{ 0x01000000, "IMAGE_SCN_LNK_NRELOC_OVFL" },
	{ 0x02000000, "IMAGE_SCN_MEM_DISCARDABLE" },
	{ 0x04000000, "IMAGE_SCN_MEM_NOT_CACHED" },
	{ 0x08000000, "IMAGE_SCN_MEM_NOT_PAGED" },
	{ 0x10000000, "IMAGE_SCN_MEM_SHARED" },
	{ 0x20000000, "IMAGE_SCN_MEM_EXECUTE" },
	{ 0x40000000, "IMAGE_SCN_MEM_READ" },
	{ 0x80000000, "IMAGE_SCN_MEM_WRITE" },
	{ 0x00000001, "IMAGE_SCN_SCALE_INDEX" },
	{ 0 },
};

static const_values_t image_sizeof_symbol[] = {
	{ 18, "IMAGE_SIZEOF_SYMBOL" },
	{ 0 },
};

static const_values_t image_sym_undefined[] = {
	{ (SHORT)0, "IMAGE_SYM_UNDEFINED" },
	{ (SHORT)-1, "IMAGE_SYM_ABSOLUTE" },
	{ (SHORT)-2, "IMAGE_SYM_DEBUG" },
	{ 0x0000FEFF, "IMAGE_SYM_SECTION_MAX" },
	{ MAXLONG, "IMAGE_SYM_SECTION_MAX_EX" },
	{ 0 },
};

static const_values_t image_sym_type_null[] = {
	{ 0x00000000, "IMAGE_SYM_TYPE_NULL" },
	{ 0x00000001, "IMAGE_SYM_TYPE_VOID" },
	{ 0x00000002, "IMAGE_SYM_TYPE_CHAR" },
	{ 0x00000003, "IMAGE_SYM_TYPE_SHORT" },
	{ 0x00000004, "IMAGE_SYM_TYPE_INT" },
	{ 0x00000005, "IMAGE_SYM_TYPE_LONG" },
	{ 0x00000006, "IMAGE_SYM_TYPE_FLOAT" },
	{ 0x00000007, "IMAGE_SYM_TYPE_DOUBLE" },
	{ 0x00000008, "IMAGE_SYM_TYPE_STRUCT" },
	{ 0x00000009, "IMAGE_SYM_TYPE_UNION" },
	{ 0x0000000A, "IMAGE_SYM_TYPE_ENUM" },
	{ 0x0000000B, "IMAGE_SYM_TYPE_MOE" },
	{ 0x0000000C, "IMAGE_SYM_TYPE_BYTE" },
	{ 0x0000000D, "IMAGE_SYM_TYPE_WORD" },
	{ 0x0000000E, "IMAGE_SYM_TYPE_UINT" },
	{ 0x0000000F, "IMAGE_SYM_TYPE_DWORD" },
	{ 0x00008000, "IMAGE_SYM_TYPE_PCODE" },
	{ 0 },
};

static const_values_t image_sym_dtype_null[] = {
	{ 0, "IMAGE_SYM_DTYPE_NULL" },
	{ 1, "IMAGE_SYM_DTYPE_POINTER" },
	{ 2, "IMAGE_SYM_DTYPE_FUNCTION" },
	{ 3, "IMAGE_SYM_DTYPE_ARRAY" },
	{ (BYTE)-1, "IMAGE_SYM_CLASS_END_OF_FUNCTION" },
	{ 0 },
};

static const_values_t image_sym_class_null[] = {
	{ 0x00000000, "IMAGE_SYM_CLASS_NULL" },
	{ 0x00000001, "IMAGE_SYM_CLASS_AUTOMATIC" },
	{ 0x00000002, "IMAGE_SYM_CLASS_EXTERNAL" },
	{ 0x00000003, "IMAGE_SYM_CLASS_STATIC" },
	{ 0x00000004, "IMAGE_SYM_CLASS_REGISTER" },
	{ 0x00000005, "IMAGE_SYM_CLASS_EXTERNAL_DEF" },
	{ 0x00000006, "IMAGE_SYM_CLASS_LABEL" },
	{ 0x00000007, "IMAGE_SYM_CLASS_UNDEFINED_LABEL" },
	{ 0x00000008, "IMAGE_SYM_CLASS_MEMBER_OF_STRUCT" },
	{ 0x00000009, "IMAGE_SYM_CLASS_ARGUMENT" },
	{ 0x0000000A, "IMAGE_SYM_CLASS_STRUCT_TAG" },
	{ 0x0000000B, "IMAGE_SYM_CLASS_MEMBER_OF_UNION" },
	{ 0x0000000C, "IMAGE_SYM_CLASS_UNION_TAG" },
	{ 0x0000000D, "IMAGE_SYM_CLASS_TYPE_DEFINITION" },
	{ 0x0000000E, "IMAGE_SYM_CLASS_UNDEFINED_STATIC" },
	{ 0x0000000F, "IMAGE_SYM_CLASS_ENUM_TAG" },
	{ 0x00000010, "IMAGE_SYM_CLASS_MEMBER_OF_ENUM" },
	{ 0x00000011, "IMAGE_SYM_CLASS_REGISTER_PARAM" },
	{ 0x00000012, "IMAGE_SYM_CLASS_BIT_FIELD" },
	{ 0x00000044, "IMAGE_SYM_CLASS_FAR_EXTERNAL" },
	{ 0x00000064, "IMAGE_SYM_CLASS_BLOCK" },
	{ 0x00000065, "IMAGE_SYM_CLASS_FUNCTION" },
	{ 0x00000066, "IMAGE_SYM_CLASS_END_OF_STRUCT" },
	{ 0x00000067, "IMAGE_SYM_CLASS_FILE" },
	{ 0x00000068, "IMAGE_SYM_CLASS_SECTION" },
	{ 0x00000069, "IMAGE_SYM_CLASS_WEAK_EXTERNAL" },
	{ 0x0000006B, "IMAGE_SYM_CLASS_CLR_TOKEN" },
	{ 0 },
};

static const_values_t n_btmask[] = {
	{ 0x0000000F, "N_BTMASK" },
	{ 0x00000030, "N_TMASK" },
	{ 0x000000C0, "N_TMASK1" },
	{ 0x000000F0, "N_TMASK2" },
	{ 4, "N_BTSHFT" },
	{ 2, "N_TSHIFT" },
	{ 0 },
};

static const_values_t image_comdat_select_noduplicates[] = {
	{ 1, "IMAGE_COMDAT_SELECT_NODUPLICATES" },
	{ 2, "IMAGE_COMDAT_SELECT_ANY" },
	{ 3, "IMAGE_COMDAT_SELECT_SAME_SIZE" },
	{ 4, "IMAGE_COMDAT_SELECT_EXACT_MATCH" },
	{ 5, "IMAGE_COMDAT_SELECT_ASSOCIATIVE" },
	{ 6, "IMAGE_COMDAT_SELECT_LARGEST" },
	{ 7, "IMAGE_COMDAT_SELECT_NEWEST" },
	{ 0 },
};

static const_values_t image_weak_extern_search_nolibrary[] = {
	{ 1, "IMAGE_WEAK_EXTERN_SEARCH_NOLIBRARY" },
	{ 2, "IMAGE_WEAK_EXTERN_SEARCH_LIBRARY" },
	{ 3, "IMAGE_WEAK_EXTERN_SEARCH_ALIAS" },
	{ 0 },
};

static const_values_t image_rel_i386_absolute[] = {
	{ 0x00000000, "IMAGE_REL_I386_ABSOLUTE" },
	{ 0x00000001, "IMAGE_REL_I386_DIR16" },
	{ 0x00000002, "IMAGE_REL_I386_REL16" },
	{ 0x00000006, "IMAGE_REL_I386_DIR32" },
	{ 0x00000007, "IMAGE_REL_I386_DIR32NB" },
	{ 0x00000009, "IMAGE_REL_I386_SEG12" },
	{ 0x0000000A, "IMAGE_REL_I386_SECTION" },
	{ 0x0000000B, "IMAGE_REL_I386_SECREL" },
	{ 0x0000000C, "IMAGE_REL_I386_TOKEN" },
	{ 0x0000000D, "IMAGE_REL_I386_SECREL7" },
	{ 0x00000014, "IMAGE_REL_I386_REL32" },
	{ 0 },
};

static const_values_t image_rel_mips_absolute[] = {
	{ 0x00000000, "IMAGE_REL_MIPS_ABSOLUTE" },
	{ 0x00000001, "IMAGE_REL_MIPS_REFHALF" },
	{ 0x00000002, "IMAGE_REL_MIPS_REFWORD" },
	{ 0x00000003, "IMAGE_REL_MIPS_JMPADDR" },
	{ 0x00000004, "IMAGE_REL_MIPS_REFHI" },
	{ 0x00000005, "IMAGE_REL_MIPS_REFLO" },
	{ 0x00000006, "IMAGE_REL_MIPS_GPREL" },
	{ 0x00000007, "IMAGE_REL_MIPS_LITERAL" },
	{ 0x0000000A, "IMAGE_REL_MIPS_SECTION" },
	{ 0x0000000B, "IMAGE_REL_MIPS_SECREL" },
	{ 0x0000000C, "IMAGE_REL_MIPS_SECRELLO" },
	{ 0x0000000D, "IMAGE_REL_MIPS_SECRELHI" },
	{ 0x0000000E, "IMAGE_REL_MIPS_TOKEN" },
	{ 0x00000010, "IMAGE_REL_MIPS_JMPADDR16" },
	{ 0x00000022, "IMAGE_REL_MIPS_REFWORDNB" },
	{ 0x00000025, "IMAGE_REL_MIPS_PAIR" },
	{ 0 },
};

static const_values_t image_rel_alpha_absolute[] = {
	{ 0x00000000, "IMAGE_REL_ALPHA_ABSOLUTE" },
	{ 0x00000001, "IMAGE_REL_ALPHA_REFLONG" },
	{ 0x00000002, "IMAGE_REL_ALPHA_REFQUAD" },
	{ 0x00000003, "IMAGE_REL_ALPHA_GPREL32" },
	{ 0x00000004, "IMAGE_REL_ALPHA_LITERAL" },
	{ 0x00000005, "IMAGE_REL_ALPHA_LITUSE" },
	{ 0x00000006, "IMAGE_REL_ALPHA_GPDISP" },
	{ 0x00000007, "IMAGE_REL_ALPHA_BRADDR" },
	{ 0x00000008, "IMAGE_REL_ALPHA_HINT" },
	{ 0x00000009, "IMAGE_REL_ALPHA_INLINE_REFLONG" },
	{ 0x0000000A, "IMAGE_REL_ALPHA_REFHI" },
	{ 0x0000000B, "IMAGE_REL_ALPHA_REFLO" },
	{ 0x0000000C, "IMAGE_REL_ALPHA_PAIR" },
	{ 0x0000000D, "IMAGE_REL_ALPHA_MATCH" },
	{ 0x0000000E, "IMAGE_REL_ALPHA_SECTION" },
	{ 0x0000000F, "IMAGE_REL_ALPHA_SECREL" },
	{ 0x00000010, "IMAGE_REL_ALPHA_REFLONGNB" },
	{ 0x00000011, "IMAGE_REL_ALPHA_SECRELLO" },
	{ 0x00000012, "IMAGE_REL_ALPHA_SECRELHI" },
	{ 0x00000013, "IMAGE_REL_ALPHA_REFQ3" },
	{ 0x00000014, "IMAGE_REL_ALPHA_REFQ2" },
	{ 0x00000015, "IMAGE_REL_ALPHA_REFQ1" },
	{ 0x00000016, "IMAGE_REL_ALPHA_GPRELLO" },
	{ 0x00000017, "IMAGE_REL_ALPHA_GPRELHI" },
	{ 0 },
};

static const_values_t image_rel_ppc_absolute[] = {
	{ 0x00000000, "IMAGE_REL_PPC_ABSOLUTE" },
	{ 0x00000001, "IMAGE_REL_PPC_ADDR64" },
	{ 0x00000002, "IMAGE_REL_PPC_ADDR32" },
	{ 0x00000003, "IMAGE_REL_PPC_ADDR24" },
	{ 0x00000004, "IMAGE_REL_PPC_ADDR16" },
	{ 0x00000005, "IMAGE_REL_PPC_ADDR14" },
	{ 0x00000006, "IMAGE_REL_PPC_REL24" },
	{ 0x00000007, "IMAGE_REL_PPC_REL14" },
	{ 0x00000008, "IMAGE_REL_PPC_TOCREL16" },
	{ 0x00000009, "IMAGE_REL_PPC_TOCREL14" },
	{ 0x0000000A, "IMAGE_REL_PPC_ADDR32NB" },
	{ 0x0000000B, "IMAGE_REL_PPC_SECREL" },
	{ 0x0000000C, "IMAGE_REL_PPC_SECTION" },
	{ 0x0000000D, "IMAGE_REL_PPC_IFGLUE" },
	{ 0x0000000E, "IMAGE_REL_PPC_IMGLUE" },
	{ 0x0000000F, "IMAGE_REL_PPC_SECREL16" },
	{ 0x00000010, "IMAGE_REL_PPC_REFHI" },
	{ 0x00000011, "IMAGE_REL_PPC_REFLO" },
	{ 0x00000012, "IMAGE_REL_PPC_PAIR" },
	{ 0x00000013, "IMAGE_REL_PPC_SECRELLO" },
	{ 0x00000014, "IMAGE_REL_PPC_SECRELHI" },
	{ 0x00000015, "IMAGE_REL_PPC_GPREL" },
	{ 0x00000016, "IMAGE_REL_PPC_TOKEN" },
	{ 0x000000FF, "IMAGE_REL_PPC_TYPEMASK" },
	{ 0x00000100, "IMAGE_REL_PPC_NEG" },
	{ 0x00000200, "IMAGE_REL_PPC_BRTAKEN" },
	{ 0x00000400, "IMAGE_REL_PPC_BRNTAKEN" },
	{ 0x00000800, "IMAGE_REL_PPC_TOCDEFN" },
	{ 0 },
};

static const_values_t image_rel_sh3_absolute[] = {
	{ 0x00000000, "IMAGE_REL_SH3_ABSOLUTE" },
	{ 0x00000001, "IMAGE_REL_SH3_DIRECT16" },
	{ 0x00000002, "IMAGE_REL_SH3_DIRECT32" },
	{ 0x00000003, "IMAGE_REL_SH3_DIRECT8" },
	{ 0x00000004, "IMAGE_REL_SH3_DIRECT8_WORD" },
	{ 0x00000005, "IMAGE_REL_SH3_DIRECT8_LONG" },
	{ 0x00000006, "IMAGE_REL_SH3_DIRECT4" },
	{ 0x00000007, "IMAGE_REL_SH3_DIRECT4_WORD" },
	{ 0x00000008, "IMAGE_REL_SH3_DIRECT4_LONG" },
	{ 0x00000009, "IMAGE_REL_SH3_PCREL8_WORD" },
	{ 0x0000000A, "IMAGE_REL_SH3_PCREL8_LONG" },
	{ 0x0000000B, "IMAGE_REL_SH3_PCREL12_WORD" },
	{ 0x0000000C, "IMAGE_REL_SH3_STARTOF_SECTION" },
	{ 0x0000000D, "IMAGE_REL_SH3_SIZEOF_SECTION" },
	{ 0x0000000E, "IMAGE_REL_SH3_SECTION" },
	{ 0x0000000F, "IMAGE_REL_SH3_SECREL" },
	{ 0x00000010, "IMAGE_REL_SH3_DIRECT32_NB" },
	{ 0x00000011, "IMAGE_REL_SH3_GPREL4_LONG" },
	{ 0x00000012, "IMAGE_REL_SH3_TOKEN" },
	{ 0x00000013, "IMAGE_REL_SHM_PCRELPT" },
	{ 0x00000014, "IMAGE_REL_SHM_REFLO" },
	{ 0x00000015, "IMAGE_REL_SHM_REFHALF" },
	{ 0x00000016, "IMAGE_REL_SHM_RELLO" },
	{ 0x00000017, "IMAGE_REL_SHM_RELHALF" },
	{ 0x00000018, "IMAGE_REL_SHM_PAIR" },
	{ 0x00008000, "IMAGE_REL_SH_NOMODE" },
	{ 0 },
};

static const_values_t image_rel_arm_absolute[] = {
	{ 0x00000000, "IMAGE_REL_ARM_ABSOLUTE" },
	{ 0x00000001, "IMAGE_REL_ARM_ADDR32" },
	{ 0x00000002, "IMAGE_REL_ARM_ADDR32NB" },
	{ 0x00000003, "IMAGE_REL_ARM_BRANCH24" },
	{ 0x00000004, "IMAGE_REL_ARM_BRANCH11" },
	{ 0x00000005, "IMAGE_REL_ARM_TOKEN" },
	{ 0x00000006, "IMAGE_REL_ARM_GPREL12" },
	{ 0x00000007, "IMAGE_REL_ARM_GPREL7" },
	{ 0x00000008, "IMAGE_REL_ARM_BLX24" },
	{ 0x00000009, "IMAGE_REL_ARM_BLX11" },
	{ 0x0000000E, "IMAGE_REL_ARM_SECTION" },
	{ 0x0000000F, "IMAGE_REL_ARM_SECREL" },
	{ 0 },
};

static const_values_t image_rel_am_absolute[] = {
	{ 0x00000000, "IMAGE_REL_AM_ABSOLUTE" },
	{ 0x00000001, "IMAGE_REL_AM_ADDR32" },
	{ 0x00000002, "IMAGE_REL_AM_ADDR32NB" },
	{ 0x00000003, "IMAGE_REL_AM_CALL32" },
	{ 0x00000004, "IMAGE_REL_AM_FUNCINFO" },
	{ 0x00000005, "IMAGE_REL_AM_REL32_1" },
	{ 0x00000006, "IMAGE_REL_AM_REL32_2" },
	{ 0x00000007, "IMAGE_REL_AM_SECREL" },
	{ 0x00000008, "IMAGE_REL_AM_SECTION" },
	{ 0x00000009, "IMAGE_REL_AM_TOKEN" },
	{ 0 },
};

static const_values_t image_rel_amd64_absolute[] = {
	{ 0x00000000, "IMAGE_REL_AMD64_ABSOLUTE" },
	{ 0x00000001, "IMAGE_REL_AMD64_ADDR64" },
	{ 0x00000002, "IMAGE_REL_AMD64_ADDR32" },
	{ 0x00000003, "IMAGE_REL_AMD64_ADDR32NB" },
	{ 0x00000004, "IMAGE_REL_AMD64_REL32" },
	{ 0x00000005, "IMAGE_REL_AMD64_REL32_1" },
	{ 0x00000006, "IMAGE_REL_AMD64_REL32_2" },
	{ 0x00000007, "IMAGE_REL_AMD64_REL32_3" },
	{ 0x00000008, "IMAGE_REL_AMD64_REL32_4" },
	{ 0x00000009, "IMAGE_REL_AMD64_REL32_5" },
	{ 0x0000000A, "IMAGE_REL_AMD64_SECTION" },
	{ 0x0000000B, "IMAGE_REL_AMD64_SECREL" },
	{ 0x0000000C, "IMAGE_REL_AMD64_SECREL7" },
	{ 0x0000000D, "IMAGE_REL_AMD64_TOKEN" },
	{ 0x0000000E, "IMAGE_REL_AMD64_SREL32" },
	{ 0x0000000F, "IMAGE_REL_AMD64_PAIR" },
	{ 0x00000010, "IMAGE_REL_AMD64_SSPAN32" },
	{ 0 },
};

static const_values_t image_rel_ia64_absolute[] = {
	{ 0x00000000, "IMAGE_REL_IA64_ABSOLUTE" },
	{ 0x00000001, "IMAGE_REL_IA64_IMM14" },
	{ 0x00000002, "IMAGE_REL_IA64_IMM22" },
	{ 0x00000003, "IMAGE_REL_IA64_IMM64" },
	{ 0x00000004, "IMAGE_REL_IA64_DIR32" },
	{ 0x00000005, "IMAGE_REL_IA64_DIR64" },
	{ 0x00000006, "IMAGE_REL_IA64_PCREL21B" },
	{ 0x00000007, "IMAGE_REL_IA64_PCREL21M" },
	{ 0x00000008, "IMAGE_REL_IA64_PCREL21F" },
	{ 0x00000009, "IMAGE_REL_IA64_GPREL22" },
	{ 0x0000000A, "IMAGE_REL_IA64_LTOFF22" },
	{ 0x0000000B, "IMAGE_REL_IA64_SECTION" },
	{ 0x0000000C, "IMAGE_REL_IA64_SECREL22" },
	{ 0x0000000D, "IMAGE_REL_IA64_SECREL64I" },
	{ 0x0000000E, "IMAGE_REL_IA64_SECREL32" },
	{ 0x00000010, "IMAGE_REL_IA64_DIR32NB" },
	{ 0x00000011, "IMAGE_REL_IA64_SREL14" },
	{ 0x00000012, "IMAGE_REL_IA64_SREL22" },
	{ 0x00000013, "IMAGE_REL_IA64_SREL32" },
	{ 0x00000014, "IMAGE_REL_IA64_UREL32" },
	{ 0x00000015, "IMAGE_REL_IA64_PCREL60X" },
	{ 0x00000016, "IMAGE_REL_IA64_PCREL60B" },
	{ 0x00000017, "IMAGE_REL_IA64_PCREL60F" },
	{ 0x00000018, "IMAGE_REL_IA64_PCREL60I" },
	{ 0x00000019, "IMAGE_REL_IA64_PCREL60M" },
	{ 0x0000001A, "IMAGE_REL_IA64_IMMGPREL64" },
	{ 0x0000001B, "IMAGE_REL_IA64_TOKEN" },
	{ 0x0000001C, "IMAGE_REL_IA64_GPREL32" },
	{ 0x0000001F, "IMAGE_REL_IA64_ADDEND" },
	{ 0 },
};

static const_values_t image_rel_cef_absolute[] = {
	{ 0x00000000, "IMAGE_REL_CEF_ABSOLUTE" },
	{ 0x00000001, "IMAGE_REL_CEF_ADDR32" },
	{ 0x00000002, "IMAGE_REL_CEF_ADDR64" },
	{ 0x00000003, "IMAGE_REL_CEF_ADDR32NB" },
	{ 0x00000004, "IMAGE_REL_CEF_SECTION" },
	{ 0x00000005, "IMAGE_REL_CEF_SECREL" },
	{ 0x00000006, "IMAGE_REL_CEF_TOKEN" },
	{ 0 },
};

static const_values_t image_rel_cee_absolute[] = {
	{ 0x00000000, "IMAGE_REL_CEE_ABSOLUTE" },
	{ 0x00000001, "IMAGE_REL_CEE_ADDR32" },
	{ 0x00000002, "IMAGE_REL_CEE_ADDR64" },
	{ 0x00000003, "IMAGE_REL_CEE_ADDR32NB" },
	{ 0x00000004, "IMAGE_REL_CEE_SECTION" },
	{ 0x00000005, "IMAGE_REL_CEE_SECREL" },
	{ 0x00000006, "IMAGE_REL_CEE_TOKEN" },
	{ 0 },
};

static const_values_t image_rel_m32r_absolute[] = {
	{ 0x00000000, "IMAGE_REL_M32R_ABSOLUTE" },
	{ 0x00000001, "IMAGE_REL_M32R_ADDR32" },
	{ 0x00000002, "IMAGE_REL_M32R_ADDR32NB" },
	{ 0x00000003, "IMAGE_REL_M32R_ADDR24" },
	{ 0x00000004, "IMAGE_REL_M32R_GPREL16" },
	{ 0x00000005, "IMAGE_REL_M32R_PCREL24" },
	{ 0x00000006, "IMAGE_REL_M32R_PCREL16" },
	{ 0x00000007, "IMAGE_REL_M32R_PCREL8" },
	{ 0x00000008, "IMAGE_REL_M32R_REFHALF" },
	{ 0x00000009, "IMAGE_REL_M32R_REFHI" },
	{ 0x0000000A, "IMAGE_REL_M32R_REFLO" },
	{ 0x0000000B, "IMAGE_REL_M32R_PAIR" },
	{ 0x0000000C, "IMAGE_REL_M32R_SECTION" },
	{ 0x0000000D, "IMAGE_REL_M32R_SECREL32" },
	{ 0x0000000E, "IMAGE_REL_M32R_TOKEN" },
	{ 0 },
};

static const_values_t image_rel_ebc_absolute[] = {
	{ 0x00000000, "IMAGE_REL_EBC_ABSOLUTE" },
	{ 0x00000001, "IMAGE_REL_EBC_ADDR32NB" },
	{ 0x00000002, "IMAGE_REL_EBC_REL32" },
	{ 0x00000003, "IMAGE_REL_EBC_SECTION" },
	{ 0x00000004, "IMAGE_REL_EBC_SECREL" },
	{ 0 },
};

static const_values_t emarch_enc_i17_imm7b_inst_word_x[] = {
	{ 3, "EMARCH_ENC_I17_IMM7B_INST_WORD_X" },
	{ 7, "EMARCH_ENC_I17_IMM7B_SIZE_X" },
	{ 4, "EMARCH_ENC_I17_IMM7B_INST_WORD_POS_X" },
	{ 0, "EMARCH_ENC_I17_IMM7B_VAL_POS_X" },
	{ 0 },
};

static const_values_t emarch_enc_i17_imm9d_inst_word_x[] = {
	{ 3, "EMARCH_ENC_I17_IMM9D_INST_WORD_X" },
	{ 9, "EMARCH_ENC_I17_IMM9D_SIZE_X" },
	{ 18, "EMARCH_ENC_I17_IMM9D_INST_WORD_POS_X" },
	{ 7, "EMARCH_ENC_I17_IMM9D_VAL_POS_X" },
	{ 0 },
};

static const_values_t emarch_enc_i17_imm5c_inst_word_x[] = {
	{ 3, "EMARCH_ENC_I17_IMM5C_INST_WORD_X" },
	{ 5, "EMARCH_ENC_I17_IMM5C_SIZE_X" },
	{ 13, "EMARCH_ENC_I17_IMM5C_INST_WORD_POS_X" },
	{ 16, "EMARCH_ENC_I17_IMM5C_VAL_POS_X" },
	{ 0 },
};

static const_values_t emarch_enc_i17_ic_inst_word_x[] = {
	{ 3, "EMARCH_ENC_I17_IC_INST_WORD_X" },
	{ 1, "EMARCH_ENC_I17_IC_SIZE_X" },
	{ 12, "EMARCH_ENC_I17_IC_INST_WORD_POS_X" },
	{ 21, "EMARCH_ENC_I17_IC_VAL_POS_X" },
	{ 0 },
};

static const_values_t emarch_enc_i17_imm41a_inst_word_x[] = {
	{ 1, "EMARCH_ENC_I17_IMM41a_INST_WORD_X" },
	{ 10, "EMARCH_ENC_I17_IMM41a_SIZE_X" },
	{ 14, "EMARCH_ENC_I17_IMM41a_INST_WORD_POS_X" },
	{ 22, "EMARCH_ENC_I17_IMM41a_VAL_POS_X" },
	{ 0 },
};

static const_values_t emarch_enc_i17_imm41b_inst_word_x[] = {
	{ 1, "EMARCH_ENC_I17_IMM41b_INST_WORD_X" },
	{ 8, "EMARCH_ENC_I17_IMM41b_SIZE_X" },
	{ 24, "EMARCH_ENC_I17_IMM41b_INST_WORD_POS_X" },
	{ 32, "EMARCH_ENC_I17_IMM41b_VAL_POS_X" },
	{ 0 },
};

static const_values_t emarch_enc_i17_imm41c_inst_word_x[] = {
	{ 2, "EMARCH_ENC_I17_IMM41c_INST_WORD_X" },
	{ 23, "EMARCH_ENC_I17_IMM41c_SIZE_X" },
	{ 0, "EMARCH_ENC_I17_IMM41c_INST_WORD_POS_X" },
	{ 40, "EMARCH_ENC_I17_IMM41c_VAL_POS_X" },
	{ 0 },
};

static const_values_t emarch_enc_i17_sign_inst_word_x[] = {
	{ 3, "EMARCH_ENC_I17_SIGN_INST_WORD_X" },
	{ 1, "EMARCH_ENC_I17_SIGN_SIZE_X" },
	{ 27, "EMARCH_ENC_I17_SIGN_INST_WORD_POS_X" },
	{ 63, "EMARCH_ENC_I17_SIGN_VAL_POS_X" },
	{ 0 },
};

static const_values_t x3_opcode_inst_word_x[] = {
	{ 3, "X3_OPCODE_INST_WORD_X" },
	{ 4, "X3_OPCODE_SIZE_X" },
	{ 28, "X3_OPCODE_INST_WORD_POS_X" },
	{ 0, "X3_OPCODE_SIGN_VAL_POS_X" },
	{ 0 },
};

static const_values_t x3_i_inst_word_x[] = {
	{ 3, "X3_I_INST_WORD_X" },
	{ 1, "X3_I_SIZE_X" },
	{ 27, "X3_I_INST_WORD_POS_X" },
	{ 59, "X3_I_SIGN_VAL_POS_X" },
	{ 0 },
};

static const_values_t x3_d_wh_inst_word_x[] = {
	{ 3, "X3_D_WH_INST_WORD_X" },
	{ 3, "X3_D_WH_SIZE_X" },
	{ 24, "X3_D_WH_INST_WORD_POS_X" },
	{ 0, "X3_D_WH_SIGN_VAL_POS_X" },
	{ 0 },
};

static const_values_t x3_imm20_inst_word_x[] = {
	{ 3, "X3_IMM20_INST_WORD_X" },
	{ 20, "X3_IMM20_SIZE_X" },
	{ 4, "X3_IMM20_INST_WORD_POS_X" },
	{ 0, "X3_IMM20_SIGN_VAL_POS_X" },
	{ 0 },
};

static const_values_t x3_imm39_1_inst_word_x[] = {
	{ 2, "X3_IMM39_1_INST_WORD_X" },
	{ 23, "X3_IMM39_1_SIZE_X" },
	{ 0, "X3_IMM39_1_INST_WORD_POS_X" },
	{ 36, "X3_IMM39_1_SIGN_VAL_POS_X" },
	{ 0 },
};

static const_values_t x3_imm39_2_inst_word_x[] = {
	{ 1, "X3_IMM39_2_INST_WORD_X" },
	{ 16, "X3_IMM39_2_SIZE_X" },
	{ 16, "X3_IMM39_2_INST_WORD_POS_X" },
	{ 20, "X3_IMM39_2_SIGN_VAL_POS_X" },
	{ 0 },
};

static const_values_t x3_p_inst_word_x[] = {
	{ 3, "X3_P_INST_WORD_X" },
	{ 4, "X3_P_SIZE_X" },
	{ 0, "X3_P_INST_WORD_POS_X" },
	{ 0, "X3_P_SIGN_VAL_POS_X" },
	{ 0 },
};

static const_values_t x3_tmplt_inst_word_x[] = {
	{ 0, "X3_TMPLT_INST_WORD_X" },
	{ 4, "X3_TMPLT_SIZE_X" },
	{ 0, "X3_TMPLT_INST_WORD_POS_X" },
	{ 0, "X3_TMPLT_SIGN_VAL_POS_X" },
	{ 0 },
};

static const_values_t x3_btype_qp_inst_word_x[] = {
	{ 2, "X3_BTYPE_QP_INST_WORD_X" },
	{ 9, "X3_BTYPE_QP_SIZE_X" },
	{ 23, "X3_BTYPE_QP_INST_WORD_POS_X" },
	{ 0, "X3_BTYPE_QP_INST_VAL_POS_X" },
	{ 0 },
};

static const_values_t x3_empty_inst_word_x[] = {
	{ 1, "X3_EMPTY_INST_WORD_X" },
	{ 2, "X3_EMPTY_SIZE_X" },
	{ 14, "X3_EMPTY_INST_WORD_POS_X" },
	{ 0, "X3_EMPTY_INST_VAL_POS_X" },
	{ 0 },
};

static const_values_t image_rel_based_absolute[] = {
	{ 0, "IMAGE_REL_BASED_ABSOLUTE" },
	{ 1, "IMAGE_REL_BASED_HIGH" },
	{ 2, "IMAGE_REL_BASED_LOW" },
	{ 3, "IMAGE_REL_BASED_HIGHLOW" },
	{ 4, "IMAGE_REL_BASED_HIGHADJ" },
	{ 5, "IMAGE_REL_BASED_MIPS_JMPADDR" },
	{ 9, "IMAGE_REL_BASED_MIPS_JMPADDR16" },
	{ 9, "IMAGE_REL_BASED_IA64_IMM64" },
	{ 10, "IMAGE_REL_BASED_DIR64" },
	{ 0 },
};

static const_values_t image_archive_start_size[] = {
	{ 8, "IMAGE_ARCHIVE_START_SIZE" },
	{ 0 },
};

static const_values_t image_debug_type_unknown[] = {
	{ 0, "IMAGE_DEBUG_TYPE_UNKNOWN" },
	{ 1, "IMAGE_DEBUG_TYPE_COFF" },
	{ 2, "IMAGE_DEBUG_TYPE_CODEVIEW" },
	{ 3, "IMAGE_DEBUG_TYPE_FPO" },
	{ 4, "IMAGE_DEBUG_TYPE_MISC" },
	{ 5, "IMAGE_DEBUG_TYPE_EXCEPTION" },
	{ 6, "IMAGE_DEBUG_TYPE_FIXUP" },
	{ 7, "IMAGE_DEBUG_TYPE_OMAP_TO_SRC" },
	{ 8, "IMAGE_DEBUG_TYPE_OMAP_FROM_SRC" },
	{ 9, "IMAGE_DEBUG_TYPE_BORLAND" },
	{ 10, "IMAGE_DEBUG_TYPE_RESERVED10" },
	{ 11, "IMAGE_DEBUG_TYPE_CLSID" },
	{ 0 },
};

static const_values_t frame_fpo[] = {
	{ 0, "FRAME_FPO" },
	{ 1, "FRAME_TRAP" },
	{ 2, "FRAME_TSS" },
	{ 3, "FRAME_NONFPO" },
	{ 0 },
};

static const_values_t sizeof_rfpo_data[] = {
	{ 16, "SIZEOF_RFPO_DATA" },
	{ 0 },
};

static const_values_t image_separate_debug_flags_mask[] = {
	{ 0x00008000, "IMAGE_SEPARATE_DEBUG_FLAGS_MASK" },
	{ 0x00008000, "IMAGE_SEPARATE_DEBUG_MISMATCH" },
	{ 0 },
};

static const_values_t import_object_hdr_sig2[] = {
	{ 0x0000ffff, "IMPORT_OBJECT_HDR_SIG2" },
	{ 0 },
};

static const_values_t rtl_run_once_init[] = {
	{ { 0 }, "RTL_RUN_ONCE_INIT" },
	{ 0x00000001UL, "RTL_RUN_ONCE_CHECK_ONLY" },
	{ 0x00000002UL, "RTL_RUN_ONCE_ASYNC" },
	{ 0x00000004UL, "RTL_RUN_ONCE_INIT_FAILED" },
	{ 2, "RTL_RUN_ONCE_CTX_RESERVED_BITS" },
	{ 0 },
};

static const_values_t heap_no_serialize[] = {
	{ 0x00000001, "HEAP_NO_SERIALIZE" },
	{ 0x00000002, "HEAP_GROWABLE" },
	{ 0x00000004, "HEAP_GENERATE_EXCEPTIONS" },
	{ 0x00000008, "HEAP_ZERO_MEMORY" },
	{ 0x00000010, "HEAP_REALLOC_IN_PLACE_ONLY" },
	{ 0x00000020, "HEAP_TAIL_CHECKING_ENABLED" },
	{ 0x00000040, "HEAP_FREE_CHECKING_ENABLED" },
	{ 0x00000080, "HEAP_DISABLE_COALESCE_ON_FREE" },
	{ 0x00010000, "HEAP_CREATE_ALIGN_16" },
	{ 0x00020000, "HEAP_CREATE_ENABLE_TRACING" },
	{ 0x00040000, "HEAP_CREATE_ENABLE_EXECUTE" },
	{ 0x00000FFF, "HEAP_MAXIMUM_TAG" },
	{ 0x00008000, "HEAP_PSEUDO_TAG_FLAG" },
	{ 18, "HEAP_TAG_SHIFT" },
	{ 0 },
};

static const_values_t is_text_unicode_ascii16[] = {
	{ 0x00000001, "IS_TEXT_UNICODE_ASCII16" },
	{ 0x00000010, "IS_TEXT_UNICODE_REVERSE_ASCII16" },
	{ 0x00000002, "IS_TEXT_UNICODE_STATISTICS" },
	{ 0x00000020, "IS_TEXT_UNICODE_REVERSE_STATISTICS" },
	{ 0x00000004, "IS_TEXT_UNICODE_CONTROLS" },
	{ 0x00000040, "IS_TEXT_UNICODE_REVERSE_CONTROLS" },
	{ 0x00000008, "IS_TEXT_UNICODE_SIGNATURE" },
	{ 0x00000080, "IS_TEXT_UNICODE_REVERSE_SIGNATURE" },
	{ 0x00000100, "IS_TEXT_UNICODE_ILLEGAL_CHARS" },
	{ 0x00000200, "IS_TEXT_UNICODE_ODD_LENGTH" },
	{ 0x00000400, "IS_TEXT_UNICODE_DBCS_LEADBYTE" },
	{ 0x00001000, "IS_TEXT_UNICODE_NULL_BYTES" },
	{ 0x0000000F, "IS_TEXT_UNICODE_UNICODE_MASK" },
	{ 0x000000F0, "IS_TEXT_UNICODE_REVERSE_MASK" },
	{ 0x00000F00, "IS_TEXT_UNICODE_NOT_UNICODE_MASK" },
	{ 0x0000F000, "IS_TEXT_UNICODE_NOT_ASCII_MASK" },
	{ 0 },
};

static const_values_t compression_format_none[] = {
	{ (0x00000000), "COMPRESSION_FORMAT_NONE" },
	{ (0x00000001), "COMPRESSION_FORMAT_DEFAULT" },
	{ (0x00000002), "COMPRESSION_FORMAT_LZNT1" },
	{ 0 },
};

static const_values_t compression_engine_standard[] = {
	{ (0x00000000), "COMPRESSION_ENGINE_STANDARD" },
	{ (0x00000100), "COMPRESSION_ENGINE_MAXIMUM" },
	{ (0x00000200), "COMPRESSION_ENGINE_HIBER" },
	{ 0 },
};

static const_values_t sef_dacl_auto_inherit[] = {
	{ 0x00000001, "SEF_DACL_AUTO_INHERIT" },
	{ 0x00000002, "SEF_SACL_AUTO_INHERIT" },
	{ 0x00000004, "SEF_DEFAULT_DESCRIPTOR_FOR_OBJECT" },
	{ 0x00000008, "SEF_AVOID_PRIVILEGE_CHECK" },
	{ 0x00000010, "SEF_AVOID_OWNER_CHECK" },
	{ 0x00000020, "SEF_DEFAULT_OWNER_FROM_PARENT" },
	{ 0x00000040, "SEF_DEFAULT_GROUP_FROM_PARENT" },
	{ 0x00000100, "SEF_MACL_NO_WRITE_UP" },
	{ 0x00000200, "SEF_MACL_NO_READ_UP" },
	{ 0x00000400, "SEF_MACL_NO_EXECUTE_UP" },
	{ 0x00001000, "SEF_AVOID_OWNER_RESTRICTION" },
	{ (SEF_MACL_NO_WRITE_UP |
	SEF_MACL_NO_READ_UP |
		SEF_MACL_NO_EXECUTE_UP), "SEF_MACL_VALID_FLAGS" },
		{ 0 },
};

static const_values_t message_resource_unicode[] = {
	{ 0x00000001, "MESSAGE_RESOURCE_UNICODE" },
	{ 0 },
};

static const_values_t ver_equal[] = {
	{ 1, "VER_EQUAL" },
	{ 2, "VER_GREATER" },
	{ 3, "VER_GREATER_EQUAL" },
	{ 4, "VER_LESS" },
	{ 5, "VER_LESS_EQUAL" },
	{ 6, "VER_AND" },
	{ 7, "VER_OR" },
	{ 0 },
};

static const_values_t ver_condition_mask[] = {
	{ 7, "VER_CONDITION_MASK" },
	{ 3, "VER_NUM_BITS_PER_CONDITION_MASK" },
	{ 0 },
};

static const_values_t ver_minorversion[] = {
	{ 0x00000001, "VER_MINORVERSION" },
	{ 0x00000002, "VER_MAJORVERSION" },
	{ 0x00000004, "VER_BUILDNUMBER" },
	{ 0x00000008, "VER_PLATFORMID" },
	{ 0x00000010, "VER_SERVICEPACKMINOR" },
	{ 0x00000020, "VER_SERVICEPACKMAJOR" },
	{ 0x00000040, "VER_SUITENAME" },
	{ 0x00000080, "VER_PRODUCT_TYPE" },
	{ 0 },
};

static const_values_t ver_nt_workstation[] = {
	{ 0x00000001, "VER_NT_WORKSTATION" },
	{ 0x00000002, "VER_NT_DOMAIN_CONTROLLER" },
	{ 0x00000003, "VER_NT_SERVER" },
	{ 0 },
};

static const_values_t ver_platform_win32s[] = {
	{ 0, "VER_PLATFORM_WIN32s" },
	{ 1, "VER_PLATFORM_WIN32_WINDOWS" },
	{ 2, "VER_PLATFORM_WIN32_NT" },
	{ 0 },
};

static const_values_t rtl_ums_version[] = {
	{ (0x00000100), "RTL_UMS_VERSION" },
	{ 0 },
};

static const_values_t rtl_critsect_type[] = {
	{ 0, "RTL_CRITSECT_TYPE" },
	{ 1, "RTL_RESOURCE_TYPE" },
	{ 0 },
};

static const_values_t rtl_critical_section_flag_no_debug_info[] = {
	{ 0x01000000, "RTL_CRITICAL_SECTION_FLAG_NO_DEBUG_INFO" },
	{ 0x02000000, "RTL_CRITICAL_SECTION_FLAG_DYNAMIC_SPIN" },
	{ 0x04000000, "RTL_CRITICAL_SECTION_FLAG_STATIC_INIT" },
	{ 0xFF000000, "RTL_CRITICAL_SECTION_ALL_FLAG_BITS" },
	{ (RTL_CRITICAL_SECTION_ALL_FLAG_BITS&(~(RTL_CRITICAL_SECTION_FLAG_NO_DEBUG_INFO |
	RTL_CRITICAL_SECTION_FLAG_DYNAMIC_SPIN |
		RTL_CRITICAL_SECTION_FLAG_STATIC_INIT))), "RTL_CRITICAL_SECTION_FLAG_RESERVED" },
		{ 0 },
};

static const_values_t rtl_critical_section_debug_flag_static_init[] = {
	{ 0x00000001, "RTL_CRITICAL_SECTION_DEBUG_FLAG_STATIC_INIT" },
	{ 0 },
};

static const_values_t rtl_srwlock_init[] = {
	{ { 0 }, "RTL_SRWLOCK_INIT" },
	{ 0 },
};

static const_values_t rtl_condition_variable_init[] = {
	{ { 0 }, "RTL_CONDITION_VARIABLE_INIT" },
	{ 0x00000001, "RTL_CONDITION_VARIABLE_LOCKMODE_SHARED" },
	{ 0 },
};

static const_values_t wt_executedefault[] = {
	{ 0x00000000, "WT_EXECUTEDEFAULT" },
	{ 0x00000001, "WT_EXECUTEINIOTHREAD" },
	{ 0x00000002, "WT_EXECUTEINUITHREAD" },
	{ 0x00000004, "WT_EXECUTEINWAITTHREAD" },
	{ 0x00000008, "WT_EXECUTEONLYONCE" },
	{ 0x00000020, "WT_EXECUTEINTIMERTHREAD" },
	{ 0x00000010, "WT_EXECUTELONGFUNCTION" },
	{ 0x00000040, "WT_EXECUTEINPERSISTENTIOTHREAD" },
	{ 0x00000080, "WT_EXECUTEINPERSISTENTTHREAD" },
	{ 0x00000100, "WT_TRANSFER_IMPERSONATION" },
	{ 0 },
};

static const_values_t wt_executeinlongthread[] = {
	{ 0x00000010, "WT_EXECUTEINLONGTHREAD" },
	{ 0x00000008, "WT_EXECUTEDELETEWAIT" },
	{ 0 },
};

static const_values_t activation_context_path_type_none[] = {
	{ (1), "ACTIVATION_CONTEXT_PATH_TYPE_NONE" },
	{ (2), "ACTIVATION_CONTEXT_PATH_TYPE_WIN32_FILE" },
	{ (3), "ACTIVATION_CONTEXT_PATH_TYPE_URL" },
	{ (4), "ACTIVATION_CONTEXT_PATH_TYPE_ASSEMBLYREF" },
	{ 0 },
};

static const_values_t max_supported_os_num[] = {
	{ (4), "MAX_SUPPORTED_OS_NUM" },
	{ 0 },
};

static const_values_t invalid_os_count[] = {
	{ (0x0000ffff), "INVALID_OS_COUNT" },
	{ 0 },
};

static const_values_t performance_data_version[] = {
	{ 1, "PERFORMANCE_DATA_VERSION" },
	{ 0 },
};

static const_values_t read_thread_profiling_flag_dispatching[] = {
	{ 0x00000001, "READ_THREAD_PROFILING_FLAG_DISPATCHING" },
	{ 0x00000002, "READ_THREAD_PROFILING_FLAG_HARDWARE_COUNTERS" },
	{ 0 },
};

static const_values_t dll_process_attach[] = {
	{ 1, "DLL_PROCESS_ATTACH" },
	{ 2, "DLL_THREAD_ATTACH" },
	{ 3, "DLL_THREAD_DETACH" },
	{ 0, "DLL_PROCESS_DETACH" },
	{ 0 },
};

static const_values_t eventlog_sequential_read[] = {
	{ 0x00000001, "EVENTLOG_SEQUENTIAL_READ" },
	{ 0x00000002, "EVENTLOG_SEEK_READ" },
	{ 0x00000004, "EVENTLOG_FORWARDS_READ" },
	{ 0x00000008, "EVENTLOG_BACKWARDS_READ" },
	{ 0 },
};

static const_values_t eventlog_success[] = {
	{ 0x00000000, "EVENTLOG_SUCCESS" },
	{ 0x00000001, "EVENTLOG_ERROR_TYPE" },
	{ 0x00000002, "EVENTLOG_WARNING_TYPE" },
	{ 0x00000004, "EVENTLOG_INFORMATION_TYPE" },
	{ 0x00000008, "EVENTLOG_AUDIT_SUCCESS" },
	{ 0x00000010, "EVENTLOG_AUDIT_FAILURE" },
	{ 0 },
};

static const_values_t eventlog_start_paired_event[] = {
	{ 0x00000001, "EVENTLOG_START_PAIRED_EVENT" },
	{ 0x00000002, "EVENTLOG_END_PAIRED_EVENT" },
	{ 0x00000004, "EVENTLOG_END_ALL_PAIRED_EVENTS" },
	{ 0x00000008, "EVENTLOG_PAIRED_EVENT_ACTIVE" },
	{ 0x00000010, "EVENTLOG_PAIRED_EVENT_INACTIVE" },
	{ 0 },
};

static const_values_t maxlogicallognamesize[] = {
	{ 256, "MAXLOGICALLOGNAMESIZE" },
	{ 0 },
};

static const_values_t key_query_value[] = {
	{ (0x00000001), "KEY_QUERY_VALUE" },
	{ (0x00000002), "KEY_SET_VALUE" },
	{ (0x00000004), "KEY_CREATE_SUB_KEY" },
	{ (0x00000008), "KEY_ENUMERATE_SUB_KEYS" },
	{ (0x00000010), "KEY_NOTIFY" },
	{ (0x00000020), "KEY_CREATE_LINK" },
	{ (0x00000200), "KEY_WOW64_32KEY" },
	{ (0x00000100), "KEY_WOW64_64KEY" },
	{ (0x00000300), "KEY_WOW64_RES" },
	{ ((STANDARD_RIGHTS_READ |
	KEY_QUERY_VALUE |
		KEY_ENUMERATE_SUB_KEYS |
		KEY_NOTIFY)&(~SYNCHRONIZE)), "KEY_READ" },
		{ ((STANDARD_RIGHTS_WRITE |
			KEY_SET_VALUE |
			KEY_CREATE_SUB_KEY)&(~SYNCHRONIZE)), "KEY_WRITE" },
			{ ((KEY_READ)&(~SYNCHRONIZE)), "KEY_EXECUTE" },
			{ ((STANDARD_RIGHTS_ALL |
				KEY_QUERY_VALUE |
				KEY_SET_VALUE |
				KEY_CREATE_SUB_KEY |
				KEY_ENUMERATE_SUB_KEYS |
				KEY_NOTIFY |
				KEY_CREATE_LINK)&(~SYNCHRONIZE)), "KEY_ALL_ACCESS" },
				{ 0 },
};

static const_values_t reg_option_reserved[] = {
	{ (0x00000000L), "REG_OPTION_RESERVED" },
	{ (0x00000000L), "REG_OPTION_NON_VOLATILE" },
	{ (0x00000001L), "REG_OPTION_VOLATILE" },
	{ (0x00000002L), "REG_OPTION_CREATE_LINK" },
	{ (0x00000004L), "REG_OPTION_BACKUP_RESTORE" },
	{ (0x00000008L), "REG_OPTION_OPEN_LINK" },
	{ (REG_OPTION_RESERVED |
	REG_OPTION_NON_VOLATILE |
		REG_OPTION_VOLATILE |
		REG_OPTION_CREATE_LINK |
		REG_OPTION_BACKUP_RESTORE |
		REG_OPTION_OPEN_LINK), "REG_LEGAL_OPTION" },
		{ (REG_OPTION_RESERVED |
			REG_OPTION_BACKUP_RESTORE |
			REG_OPTION_OPEN_LINK), "REG_OPEN_LEGAL_OPTION" },
			{ 0 },
};

static const_values_t reg_created_new_key[] = {
	{ (0x00000001L), "REG_CREATED_NEW_KEY" },
	{ (0x00000002L), "REG_OPENED_EXISTING_KEY" },
	{ 0 },
};

static const_values_t reg_standard_format[] = {
	{ 1, "REG_STANDARD_FORMAT" },
	{ 2, "REG_LATEST_FORMAT" },
	{ 4, "REG_NO_COMPRESSION" },
	{ 0 },
};

static const_values_t reg_whole_hive_volatile[] = {
	{ (0x00000001L), "REG_WHOLE_HIVE_VOLATILE" },
	{ (0x00000002L), "REG_REFRESH_HIVE" },
	{ (0x00000004L), "REG_NO_LAZY_FLUSH" },
	{ (0x00000008L), "REG_FORCE_RESTORE" },
	{ (0x00000010L), "REG_APP_HIVE" },
	{ (0x00000020L), "REG_PROCESS_PRIVATE" },
	{ (0x00000040L), "REG_START_JOURNAL" },
	{ (0x00000080L), "REG_HIVE_EXACT_FILE_GROWTH" },
	{ (0x00000100L), "REG_HIVE_NO_RM" },
	{ (0x00000200L), "REG_HIVE_SINGLE_LOG" },
	{ (0x00000400L), "REG_BOOT_HIVE" },
	{ 0 },
};

static const_values_t reg_force_unload[] = {
	{ 1, "REG_FORCE_UNLOAD" },
	{ 0 },
};

static const_values_t reg_notify_change_name[] = {
	{ (0x00000001L), "REG_NOTIFY_CHANGE_NAME" },
	{ (0x00000002L), "REG_NOTIFY_CHANGE_ATTRIBUTES" },
	{ (0x00000004L), "REG_NOTIFY_CHANGE_LAST_SET" },
	{ (0x00000008L), "REG_NOTIFY_CHANGE_SECURITY" },
	{ (REG_NOTIFY_CHANGE_NAME |
	REG_NOTIFY_CHANGE_ATTRIBUTES |
		REG_NOTIFY_CHANGE_LAST_SET |
		REG_NOTIFY_CHANGE_SECURITY), "REG_LEGAL_CHANGE_FILTER" },
		{ 0 },
};

static const_values_t reg_none[] = {
	{ (0), "REG_NONE" },
	{ (1), "REG_SZ" },
	{ (2), "REG_EXPAND_SZ" },
	{ (3), "REG_BINARY" },
	{ (4), "REG_DWORD" },
	{ (4), "REG_DWORD_LITTLE_ENDIAN" },
	{ (5), "REG_DWORD_BIG_ENDIAN" },
	{ (6), "REG_LINK" },
	{ (7), "REG_MULTI_SZ" },
	{ (8), "REG_RESOURCE_LIST" },
	{ (9), "REG_FULL_RESOURCE_DESCRIPTOR" },
	{ (10), "REG_RESOURCE_REQUIREMENTS_LIST" },
	{ (11), "REG_QWORD" },
	{ (11), "REG_QWORD_LITTLE_ENDIAN" },
	{ 0 },
};

static const_values_t service_kernel_driver[] = {
	{ 0x00000001, "SERVICE_KERNEL_DRIVER" },
	{ 0x00000002, "SERVICE_FILE_SYSTEM_DRIVER" },
	{ 0x00000004, "SERVICE_ADAPTER" },
	{ 0x00000008, "SERVICE_RECOGNIZER_DRIVER" },
	{ (SERVICE_KERNEL_DRIVER |
	SERVICE_FILE_SYSTEM_DRIVER |
		SERVICE_RECOGNIZER_DRIVER), "SERVICE_DRIVER" },
		{ 0x00000010, "SERVICE_WIN32_OWN_PROCESS" },
		{ 0x00000020, "SERVICE_WIN32_SHARE_PROCESS" },
		{ (SERVICE_WIN32_OWN_PROCESS |
			SERVICE_WIN32_SHARE_PROCESS), "SERVICE_WIN32" },
			{ 0x00000100, "SERVICE_INTERACTIVE_PROCESS" },
			{ (SERVICE_WIN32 |
				SERVICE_ADAPTER |
				SERVICE_DRIVER |
				SERVICE_INTERACTIVE_PROCESS), "SERVICE_TYPE_ALL" },
				{ 0 },
};

static const_values_t service_boot_start[] = {
	{ 0x00000000, "SERVICE_BOOT_START" },
	{ 0x00000001, "SERVICE_SYSTEM_START" },
	{ 0x00000002, "SERVICE_AUTO_START" },
	{ 0x00000003, "SERVICE_DEMAND_START" },
	{ 0x00000004, "SERVICE_DISABLED" },
	{ 0 },
};

static const_values_t service_error_ignore[] = {
	{ 0x00000000, "SERVICE_ERROR_IGNORE" },
	{ 0x00000001, "SERVICE_ERROR_NORMAL" },
	{ 0x00000002, "SERVICE_ERROR_SEVERE" },
	{ 0x00000003, "SERVICE_ERROR_CRITICAL" },
	{ 0 },
};

static const_values_t cm_service_network_boot_load[] = {
	{ 0x00000001, "CM_SERVICE_NETWORK_BOOT_LOAD" },
	{ 0x00000002, "CM_SERVICE_VIRTUAL_DISK_BOOT_LOAD" },
	{ 0x00000004, "CM_SERVICE_USB_DISK_BOOT_LOAD" },
	{ (CM_SERVICE_NETWORK_BOOT_LOAD |
	CM_SERVICE_VIRTUAL_DISK_BOOT_LOAD |
		CM_SERVICE_USB_DISK_BOOT_LOAD), "CM_SERVICE_VALID_PROMOTION_MASK" },
		{ 0 },
};

static const_values_t tape_erase_short[] = {
	{ 0L, "TAPE_ERASE_SHORT" },
	{ 1L, "TAPE_ERASE_LONG" },
	{ 0 },
};

static const_values_t tape_load[] = {
	{ 0L, "TAPE_LOAD" },
	{ 1L, "TAPE_UNLOAD" },
	{ 2L, "TAPE_TENSION" },
	{ 3L, "TAPE_LOCK" },
	{ 4L, "TAPE_UNLOCK" },
	{ 5L, "TAPE_FORMAT" },
	{ 0 },
};

static const_values_t tape_setmarks[] = {
	{ 0L, "TAPE_SETMARKS" },
	{ 1L, "TAPE_FILEMARKS" },
	{ 2L, "TAPE_SHORT_FILEMARKS" },
	{ 3L, "TAPE_LONG_FILEMARKS" },
	{ 0 },
};

static const_values_t tape_absolute_position[] = {
	{ 0L, "TAPE_ABSOLUTE_POSITION" },
	{ 1L, "TAPE_LOGICAL_POSITION" },
	{ 2L, "TAPE_PSEUDO_LOGICAL_POSITION" },
	{ 0 },
};

static const_values_t tape_rewind[] = {
	{ 0L, "TAPE_REWIND" },
	{ 1L, "TAPE_ABSOLUTE_BLOCK" },
	{ 2L, "TAPE_LOGICAL_BLOCK" },
	{ 3L, "TAPE_PSEUDO_LOGICAL_BLOCK" },
	{ 4L, "TAPE_SPACE_END_OF_DATA" },
	{ 5L, "TAPE_SPACE_RELATIVE_BLOCKS" },
	{ 6L, "TAPE_SPACE_FILEMARKS" },
	{ 7L, "TAPE_SPACE_SEQUENTIAL_FMKS" },
	{ 8L, "TAPE_SPACE_SETMARKS" },
	{ 9L, "TAPE_SPACE_SEQUENTIAL_SMKS" },
	{ 0 },
};

static const_values_t tape_drive_fixed[] = {
	{ 0x00000001, "TAPE_DRIVE_FIXED" },
	{ 0x00000002, "TAPE_DRIVE_SELECT" },
	{ 0x00000004, "TAPE_DRIVE_INITIATOR" },
	{ 0x00000010, "TAPE_DRIVE_ERASE_SHORT" },
	{ 0x00000020, "TAPE_DRIVE_ERASE_LONG" },
	{ 0x00000040, "TAPE_DRIVE_ERASE_BOP_ONLY" },
	{ 0x00000080, "TAPE_DRIVE_ERASE_IMMEDIATE" },
	{ 0x00000100, "TAPE_DRIVE_TAPE_CAPACITY" },
	{ 0x00000200, "TAPE_DRIVE_TAPE_REMAINING" },
	{ 0x00000400, "TAPE_DRIVE_FIXED_BLOCK" },
	{ 0x00000800, "TAPE_DRIVE_VARIABLE_BLOCK" },
	{ 0x00001000, "TAPE_DRIVE_WRITE_PROTECT" },
	{ 0x00002000, "TAPE_DRIVE_EOT_WZ_SIZE" },
	{ 0x00010000, "TAPE_DRIVE_ECC" },
	{ 0x00020000, "TAPE_DRIVE_COMPRESSION" },
	{ 0x00040000, "TAPE_DRIVE_PADDING" },
	{ 0x00080000, "TAPE_DRIVE_REPORT_SMKS" },
	{ 0x00100000, "TAPE_DRIVE_GET_ABSOLUTE_BLK" },
	{ 0x00200000, "TAPE_DRIVE_GET_LOGICAL_BLK" },
	{ 0x00400000, "TAPE_DRIVE_SET_EOT_WZ_SIZE" },
	{ 0x01000000, "TAPE_DRIVE_EJECT_MEDIA" },
	{ 0x02000000, "TAPE_DRIVE_CLEAN_REQUESTS" },
	{ 0x04000000, "TAPE_DRIVE_SET_CMP_BOP_ONLY" },
	{ 0x80000000, "TAPE_DRIVE_RESERVED_BIT" },
	{ 0x80000001, "TAPE_DRIVE_LOAD_UNLOAD" },
	{ 0x80000002, "TAPE_DRIVE_TENSION" },
	{ 0x80000004, "TAPE_DRIVE_LOCK_UNLOCK" },
	{ 0x80000008, "TAPE_DRIVE_REWIND_IMMEDIATE" },
	{ 0x80000010, "TAPE_DRIVE_SET_BLOCK_SIZE" },
	{ 0x80000020, "TAPE_DRIVE_LOAD_UNLD_IMMED" },
	{ 0x80000040, "TAPE_DRIVE_TENSION_IMMED" },
	{ 0x80000080, "TAPE_DRIVE_LOCK_UNLK_IMMED" },
	{ 0x80000100, "TAPE_DRIVE_SET_ECC" },
	{ 0x80000200, "TAPE_DRIVE_SET_COMPRESSION" },
	{ 0x80000400, "TAPE_DRIVE_SET_PADDING" },
	{ 0x80000800, "TAPE_DRIVE_SET_REPORT_SMKS" },
	{ 0x80001000, "TAPE_DRIVE_ABSOLUTE_BLK" },
	{ 0x80002000, "TAPE_DRIVE_ABS_BLK_IMMED" },
	{ 0x80004000, "TAPE_DRIVE_LOGICAL_BLK" },
	{ 0x80008000, "TAPE_DRIVE_LOG_BLK_IMMED" },
	{ 0x80010000, "TAPE_DRIVE_END_OF_DATA" },
	{ 0x80020000, "TAPE_DRIVE_RELATIVE_BLKS" },
	{ 0x80040000, "TAPE_DRIVE_FILEMARKS" },
	{ 0x80080000, "TAPE_DRIVE_SEQUENTIAL_FMKS" },
	{ 0x80100000, "TAPE_DRIVE_SETMARKS" },
	{ 0x80200000, "TAPE_DRIVE_SEQUENTIAL_SMKS" },
	{ 0x80400000, "TAPE_DRIVE_REVERSE_POSITION" },
	{ 0x80800000, "TAPE_DRIVE_SPACE_IMMEDIATE" },
	{ 0x81000000, "TAPE_DRIVE_WRITE_SETMARKS" },
	{ 0x82000000, "TAPE_DRIVE_WRITE_FILEMARKS" },
	{ 0x84000000, "TAPE_DRIVE_WRITE_SHORT_FMKS" },
	{ 0x88000000, "TAPE_DRIVE_WRITE_LONG_FMKS" },
	{ 0x90000000, "TAPE_DRIVE_WRITE_MARK_IMMED" },
	{ 0xA0000000, "TAPE_DRIVE_FORMAT" },
	{ 0xC0000000, "TAPE_DRIVE_FORMAT_IMMEDIATE" },
	{ 0x80000000, "TAPE_DRIVE_HIGH_FEATURES" },
	{ 0 },
};

static const_values_t tape_fixed_partitions[] = {
	{ 0L, "TAPE_FIXED_PARTITIONS" },
	{ 1L, "TAPE_SELECT_PARTITIONS" },
	{ 2L, "TAPE_INITIATOR_PARTITIONS" },
	{ 0 },
};

static const_values_t tape_query_drive_parameters[] = {
	{ 0L, "TAPE_QUERY_DRIVE_PARAMETERS" },
	{ 1L, "TAPE_QUERY_MEDIA_CAPACITY" },
	{ 2L, "TAPE_CHECK_FOR_DRIVE_PROBLEM" },
	{ 3L, "TAPE_QUERY_IO_ERROR_DATA" },
	{ 4L, "TAPE_QUERY_DEVICE_ERROR_DATA" },
	{ 0 },
};

static const_values_t transactionmanager_query_information[] = {
	{ (0x00000001), "TRANSACTIONMANAGER_QUERY_INFORMATION" },
	{ (0x00000002), "TRANSACTIONMANAGER_SET_INFORMATION" },
	{ (0x00000004), "TRANSACTIONMANAGER_RECOVER" },
	{ (0x00000008), "TRANSACTIONMANAGER_RENAME" },
	{ (0x00000010), "TRANSACTIONMANAGER_CREATE_RM" },
	{ (0x00000020), "TRANSACTIONMANAGER_BIND_TRANSACTION" },
	{ (STANDARD_RIGHTS_READ |
	TRANSACTIONMANAGER_QUERY_INFORMATION), "TRANSACTIONMANAGER_GENERIC_READ" },
	{ (STANDARD_RIGHTS_WRITE |
		TRANSACTIONMANAGER_SET_INFORMATION |
		TRANSACTIONMANAGER_RECOVER |
		TRANSACTIONMANAGER_RENAME |
		TRANSACTIONMANAGER_CREATE_RM), "TRANSACTIONMANAGER_GENERIC_WRITE" },
		{ (STANDARD_RIGHTS_EXECUTE), "TRANSACTIONMANAGER_GENERIC_EXECUTE" },
		{ (STANDARD_RIGHTS_REQUIRED |
			TRANSACTIONMANAGER_GENERIC_READ |
			TRANSACTIONMANAGER_GENERIC_WRITE |
			TRANSACTIONMANAGER_GENERIC_EXECUTE |
			TRANSACTIONMANAGER_BIND_TRANSACTION), "TRANSACTIONMANAGER_ALL_ACCESS" },
			{ 0 },
};

static const_values_t transaction_query_information[] = {
	{ (0x00000001), "TRANSACTION_QUERY_INFORMATION" },
	{ (0x00000002), "TRANSACTION_SET_INFORMATION" },
	{ (0x00000004), "TRANSACTION_ENLIST" },
	{ (0x00000008), "TRANSACTION_COMMIT" },
	{ (0x00000010), "TRANSACTION_ROLLBACK" },
	{ (0x00000020), "TRANSACTION_PROPAGATE" },
	{ (0x00000040), "TRANSACTION_RIGHT_RESERVED1" },
	{ (STANDARD_RIGHTS_READ |
	TRANSACTION_QUERY_INFORMATION |
		SYNCHRONIZE), "TRANSACTION_GENERIC_READ" },
		{ (STANDARD_RIGHTS_WRITE |
			TRANSACTION_SET_INFORMATION |
			TRANSACTION_COMMIT |
			TRANSACTION_ENLIST |
			TRANSACTION_ROLLBACK |
			TRANSACTION_PROPAGATE |
			SYNCHRONIZE), "TRANSACTION_GENERIC_WRITE" },
			{ (STANDARD_RIGHTS_EXECUTE |
				TRANSACTION_COMMIT |
				TRANSACTION_ROLLBACK |
				SYNCHRONIZE), "TRANSACTION_GENERIC_EXECUTE" },
				{ (STANDARD_RIGHTS_REQUIRED |
					TRANSACTION_GENERIC_READ |
					TRANSACTION_GENERIC_WRITE |
					TRANSACTION_GENERIC_EXECUTE), "TRANSACTION_ALL_ACCESS" },
					{ (TRANSACTION_GENERIC_READ |
						STANDARD_RIGHTS_WRITE |
						TRANSACTION_SET_INFORMATION |
						TRANSACTION_ENLIST |
						TRANSACTION_ROLLBACK |
						TRANSACTION_PROPAGATE |
						SYNCHRONIZE), "TRANSACTION_RESOURCE_MANAGER_RIGHTS" },
						{ 0 },
};

static const_values_t resourcemanager_query_information[] = {
	{ (0x00000001), "RESOURCEMANAGER_QUERY_INFORMATION" },
	{ (0x00000002), "RESOURCEMANAGER_SET_INFORMATION" },
	{ (0x00000004), "RESOURCEMANAGER_RECOVER" },
	{ (0x00000008), "RESOURCEMANAGER_ENLIST" },
	{ (0x00000010), "RESOURCEMANAGER_GET_NOTIFICATION" },
	{ (0x00000020), "RESOURCEMANAGER_REGISTER_PROTOCOL" },
	{ (0x00000040), "RESOURCEMANAGER_COMPLETE_PROPAGATION" },
	{ (STANDARD_RIGHTS_READ |
	RESOURCEMANAGER_QUERY_INFORMATION |
		SYNCHRONIZE), "RESOURCEMANAGER_GENERIC_READ" },
		{ (STANDARD_RIGHTS_WRITE |
			RESOURCEMANAGER_SET_INFORMATION |
			RESOURCEMANAGER_RECOVER |
			RESOURCEMANAGER_ENLIST |
			RESOURCEMANAGER_GET_NOTIFICATION |
			RESOURCEMANAGER_REGISTER_PROTOCOL |
			RESOURCEMANAGER_COMPLETE_PROPAGATION |
			SYNCHRONIZE), "RESOURCEMANAGER_GENERIC_WRITE" },
			{ (STANDARD_RIGHTS_EXECUTE |
				RESOURCEMANAGER_RECOVER |
				RESOURCEMANAGER_ENLIST |
				RESOURCEMANAGER_GET_NOTIFICATION |
				RESOURCEMANAGER_COMPLETE_PROPAGATION |
				SYNCHRONIZE), "RESOURCEMANAGER_GENERIC_EXECUTE" },
				{ (STANDARD_RIGHTS_REQUIRED |
					RESOURCEMANAGER_GENERIC_READ |
					RESOURCEMANAGER_GENERIC_WRITE |
					RESOURCEMANAGER_GENERIC_EXECUTE), "RESOURCEMANAGER_ALL_ACCESS" },
					{ 0 },
};

static const_values_t enlistment_query_information[] = {
	{ (0x00000001), "ENLISTMENT_QUERY_INFORMATION" },
	{ (0x00000002), "ENLISTMENT_SET_INFORMATION" },
	{ (0x00000004), "ENLISTMENT_RECOVER" },
	{ (0x00000008), "ENLISTMENT_SUBORDINATE_RIGHTS" },
	{ (0x00000010), "ENLISTMENT_SUPERIOR_RIGHTS" },
	{ (STANDARD_RIGHTS_READ |
	ENLISTMENT_QUERY_INFORMATION), "ENLISTMENT_GENERIC_READ" },
	{ (STANDARD_RIGHTS_WRITE |
		ENLISTMENT_SET_INFORMATION |
		ENLISTMENT_RECOVER |
		ENLISTMENT_SUBORDINATE_RIGHTS |
		ENLISTMENT_SUPERIOR_RIGHTS), "ENLISTMENT_GENERIC_WRITE" },
		{ (STANDARD_RIGHTS_EXECUTE |
			ENLISTMENT_RECOVER |
			ENLISTMENT_SUBORDINATE_RIGHTS |
			ENLISTMENT_SUPERIOR_RIGHTS), "ENLISTMENT_GENERIC_EXECUTE" },
			{ (STANDARD_RIGHTS_REQUIRED |
				ENLISTMENT_GENERIC_READ |
				ENLISTMENT_GENERIC_WRITE |
				ENLISTMENT_GENERIC_EXECUTE), "ENLISTMENT_ALL_ACCESS" },
				{ 0 },
};

static const_values_t pcteb[] = {
	{ 0x00000018, "PcTeb" },
	{ 0 },
};

static const_values_t activation_context_section_assembly_information[] = {
	{ (1), "ACTIVATION_CONTEXT_SECTION_ASSEMBLY_INFORMATION" },
	{ (2), "ACTIVATION_CONTEXT_SECTION_DLL_REDIRECTION" },
	{ (3), "ACTIVATION_CONTEXT_SECTION_WINDOW_CLASS_REDIRECTION" },
	{ (4), "ACTIVATION_CONTEXT_SECTION_COM_SERVER_REDIRECTION" },
	{ (5), "ACTIVATION_CONTEXT_SECTION_COM_INTERFACE_REDIRECTION" },
	{ (6), "ACTIVATION_CONTEXT_SECTION_COM_TYPE_LIBRARY_REDIRECTION" },
	{ (7), "ACTIVATION_CONTEXT_SECTION_COM_PROGID_REDIRECTION" },
	{ (8), "ACTIVATION_CONTEXT_SECTION_GLOBAL_OBJECT_RENAME_TABLE" },
	{ (9), "ACTIVATION_CONTEXT_SECTION_CLR_SURROGATES" },
	{ (10), "ACTIVATION_CONTEXT_SECTION_APPLICATION_SETTINGS" },
	{ (11), "ACTIVATION_CONTEXT_SECTION_COMPATIBILITY_INFO" },
	{ 0 },
};

static const_values_t invalid_handle_value[] = {
	{ ((LONG_PTR)-1), "INVALID_HANDLE_VALUE" },
	{ 0 },
};

static const_values_t invalid_file_size[] = {
	{ ((DWORD)0xFFFFFFFF), "INVALID_FILE_SIZE" },
	{ 0 },
};

static const_values_t invalid_set_file_pointer[] = {
	{ ((DWORD)-1), "INVALID_SET_FILE_POINTER" },
	{ 0 },
};

static const_values_t invalid_file_attributes[] = {
	{ ((DWORD)-1), "INVALID_FILE_ATTRIBUTES" },
	{ 0 },
};

static const_values_t file_begin[] = {
	{ 0, "FILE_BEGIN" },
	{ 1, "FILE_CURRENT" },
	{ 2, "FILE_END" },
	{ 0 },
};

static const_values_t time_zone_id_invalid[] = {
	{ ((DWORD)0xFFFFFFFF), "TIME_ZONE_ID_INVALID" },
	{ 0 },
};

static const_values_t wait_failed[] = {
	{ ((DWORD)0xFFFFFFFF), "WAIT_FAILED" },
	{ ((STATUS_WAIT_0)+0), "WAIT_OBJECT_0" },
	{ 0x00000102L, "WAIT_TIMEOUT" },
	{ ((STATUS_ABANDONED_WAIT_0)+0), "WAIT_ABANDONED" },
	{ ((STATUS_ABANDONED_WAIT_0)+0), "WAIT_ABANDONED_0" },
	{ 0 },
};

static const_values_t wait_io_completion[] = {
	{ STATUS_USER_APC, "WAIT_IO_COMPLETION" },
	{ STATUS_PENDING, "STILL_ACTIVE" },
	{ STATUS_ACCESS_VIOLATION, "EXCEPTION_ACCESS_VIOLATION" },
	{ STATUS_DATATYPE_MISALIGNMENT, "EXCEPTION_DATATYPE_MISALIGNMENT" },
	{ STATUS_BREAKPOINT, "EXCEPTION_BREAKPOINT" },
	{ STATUS_SINGLE_STEP, "EXCEPTION_SINGLE_STEP" },
	{ STATUS_ARRAY_BOUNDS_EXCEEDED, "EXCEPTION_ARRAY_BOUNDS_EXCEEDED" },
	{ STATUS_FLOAT_DENORMAL_OPERAND, "EXCEPTION_FLT_DENORMAL_OPERAND" },
	{ STATUS_FLOAT_DIVIDE_BY_ZERO, "EXCEPTION_FLT_DIVIDE_BY_ZERO" },
	{ STATUS_FLOAT_INEXACT_RESULT, "EXCEPTION_FLT_INEXACT_RESULT" },
	{ STATUS_FLOAT_INVALID_OPERATION, "EXCEPTION_FLT_INVALID_OPERATION" },
	{ STATUS_FLOAT_OVERFLOW, "EXCEPTION_FLT_OVERFLOW" },
	{ STATUS_FLOAT_STACK_CHECK, "EXCEPTION_FLT_STACK_CHECK" },
	{ STATUS_FLOAT_UNDERFLOW, "EXCEPTION_FLT_UNDERFLOW" },
	{ STATUS_INTEGER_DIVIDE_BY_ZERO, "EXCEPTION_INT_DIVIDE_BY_ZERO" },
	{ STATUS_INTEGER_OVERFLOW, "EXCEPTION_INT_OVERFLOW" },
	{ STATUS_PRIVILEGED_INSTRUCTION, "EXCEPTION_PRIV_INSTRUCTION" },
	{ STATUS_IN_PAGE_ERROR, "EXCEPTION_IN_PAGE_ERROR" },
	{ STATUS_ILLEGAL_INSTRUCTION, "EXCEPTION_ILLEGAL_INSTRUCTION" },
	{ STATUS_NONCONTINUABLE_EXCEPTION, "EXCEPTION_NONCONTINUABLE_EXCEPTION" },
	{ STATUS_STACK_OVERFLOW, "EXCEPTION_STACK_OVERFLOW" },
	{ STATUS_INVALID_DISPOSITION, "EXCEPTION_INVALID_DISPOSITION" },
	{ STATUS_GUARD_PAGE_VIOLATION, "EXCEPTION_GUARD_PAGE" },
	{ STATUS_INVALID_HANDLE, "EXCEPTION_INVALID_HANDLE" },
	{ STATUS_CONTROL_C_EXIT, "CONTROL_C_EXIT" },
	{ 0 },
};

static const_values_t file_flag_write_through[] = {
	{ 0x80000000, "FILE_FLAG_WRITE_THROUGH" },
	{ 0x40000000, "FILE_FLAG_OVERLAPPED" },
	{ 0x20000000, "FILE_FLAG_NO_BUFFERING" },
	{ 0x10000000, "FILE_FLAG_RANDOM_ACCESS" },
	{ 0x08000000, "FILE_FLAG_SEQUENTIAL_SCAN" },
	{ 0x04000000, "FILE_FLAG_DELETE_ON_CLOSE" },
	{ 0x02000000, "FILE_FLAG_BACKUP_SEMANTICS" },
	{ 0x01000000, "FILE_FLAG_POSIX_SEMANTICS" },
	{ 0x00200000, "FILE_FLAG_OPEN_REPARSE_POINT" },
	{ 0x00100000, "FILE_FLAG_OPEN_NO_RECALL" },
	{ 0x00080000, "FILE_FLAG_FIRST_PIPE_INSTANCE" },
	{ 0 },
};

static const_values_t create_new[] = {
	{ 1, "CREATE_NEW" },
	{ 2, "CREATE_ALWAYS" },
	{ 3, "OPEN_EXISTING" },
	{ 4, "OPEN_ALWAYS" },
	{ 5, "TRUNCATE_EXISTING" },
	{ 0 },
};

static const_values_t progress_continue[] = {
	{ 0, "PROGRESS_CONTINUE" },
	{ 1, "PROGRESS_CANCEL" },
	{ 2, "PROGRESS_STOP" },
	{ 3, "PROGRESS_QUIET" },
	{ 0 },
};

static const_values_t callback_chunk_finished[] = {
	{ 0x00000000, "CALLBACK_CHUNK_FINISHED" },
	{ 0x00000001, "CALLBACK_STREAM_SWITCH" },
	{ 0 },
};

static const_values_t copy_file_fail_if_exists[] = {
	{ 0x00000001, "COPY_FILE_FAIL_IF_EXISTS" },
	{ 0x00000002, "COPY_FILE_RESTARTABLE" },
	{ 0x00000004, "COPY_FILE_OPEN_SOURCE_FOR_WRITE" },
	{ 0x00000008, "COPY_FILE_ALLOW_DECRYPTED_DESTINATION" },
	{ 0x00000800, "COPY_FILE_COPY_SYMLINK" },
	{ 0x00001000, "COPY_FILE_NO_BUFFERING" },
	{ 0 },
};

static const_values_t replacefile_write_through[] = {
	{ 0x00000001, "REPLACEFILE_WRITE_THROUGH" },
	{ 0x00000002, "REPLACEFILE_IGNORE_MERGE_ERRORS" },
	{ 0x00000004, "REPLACEFILE_IGNORE_ACL_ERRORS" },
	{ 0 },
};

static const_values_t pipe_access_inbound[] = {
	{ 0x00000001, "PIPE_ACCESS_INBOUND" },
	{ 0x00000002, "PIPE_ACCESS_OUTBOUND" },
	{ 0x00000003, "PIPE_ACCESS_DUPLEX" },
	{ 0 },
};

static const_values_t pipe_client_end[] = {
	{ 0x00000000, "PIPE_CLIENT_END" },
	{ 0x00000001, "PIPE_SERVER_END" },
	{ 0 },
};

static const_values_t pipe_wait[] = {
	{ 0x00000000, "PIPE_WAIT" },
	{ 0x00000001, "PIPE_NOWAIT" },
	{ 0 },
};

static const_values_t pipe_readmode_byte[] = {
	{ 0x00000000, "PIPE_READMODE_BYTE" },
	{ 0x00000002, "PIPE_READMODE_MESSAGE" },
	{ 0 },
};

static const_values_t pipe_type_byte[] = {
	{ 0x00000000, "PIPE_TYPE_BYTE" },
	{ 0x00000004, "PIPE_TYPE_MESSAGE" },
	{ 0 },
};

static const_values_t pipe_accept_remote_clients[] = {
	{ 0x00000000, "PIPE_ACCEPT_REMOTE_CLIENTS" },
	{ 0x00000008, "PIPE_REJECT_REMOTE_CLIENTS" },
	{ 255, "PIPE_UNLIMITED_INSTANCES" },
	{ 0 },
};

static const_values_t security_anonymous[] = {
	{ (SecurityAnonymous << 16), "SECURITY_ANONYMOUS" },
	{ (SecurityIdentification << 16), "SECURITY_IDENTIFICATION" },
	{ (SecurityImpersonation << 16), "SECURITY_IMPERSONATION" },
	{ (SecurityDelegation << 16), "SECURITY_DELEGATION" },
	{ 0x00040000, "SECURITY_CONTEXT_TRACKING" },
	{ 0x00080000, "SECURITY_EFFECTIVE_ONLY" },
	{ 0x00100000, "SECURITY_SQOS_PRESENT" },
	{ 0x001F0000, "SECURITY_VALID_SQOS_FLAGS" },
	{ 0 },
};

static const_values_t init_once_static_init[] = {
	{ RTL_RUN_ONCE_INIT, "INIT_ONCE_STATIC_INIT" },
	{ RTL_RUN_ONCE_CHECK_ONLY, "INIT_ONCE_CHECK_ONLY" },
	{ RTL_RUN_ONCE_ASYNC, "INIT_ONCE_ASYNC" },
	{ RTL_RUN_ONCE_INIT_FAILED, "INIT_ONCE_INIT_FAILED" },
	{ RTL_RUN_ONCE_CTX_RESERVED_BITS, "INIT_ONCE_CTX_RESERVED_BITS" },
	{ 0 },
};

static const_values_t fail_fast_generate_exception_address[] = {
	{ 0x00000001, "FAIL_FAST_GENERATE_EXCEPTION_ADDRESS" },
	{ 0x00000002, "FAIL_FAST_NO_HARD_ERROR_DLG" },
	{ 0 },
};

static const_values_t srwlock_init[] = {
	{ RTL_SRWLOCK_INIT, "SRWLOCK_INIT" },
	{ 0 },
};

static const_values_t condition_variable_init[] = {
	{ RTL_CONDITION_VARIABLE_INIT, "CONDITION_VARIABLE_INIT" },
	{ RTL_CONDITION_VARIABLE_LOCKMODE_SHARED, "CONDITION_VARIABLE_LOCKMODE_SHARED" },
	{ 0 },
};

static const_values_t mutex_modify_state[] = {
	{ MUTANT_QUERY_STATE, "MUTEX_MODIFY_STATE" },
	{ MUTANT_ALL_ACCESS, "MUTEX_ALL_ACCESS" },
	{ 0 },
};

static const_values_t sp_serialcomm[] = {
	{ ((DWORD)0x00000001), "SP_SERIALCOMM" },
	{ 0 },
};

static const_values_t pst_unspecified[] = {
	{ ((DWORD)0x00000000), "PST_UNSPECIFIED" },
	{ ((DWORD)0x00000001), "PST_RS232" },
	{ ((DWORD)0x00000002), "PST_PARALLELPORT" },
	{ ((DWORD)0x00000003), "PST_RS422" },
	{ ((DWORD)0x00000004), "PST_RS423" },
	{ ((DWORD)0x00000005), "PST_RS449" },
	{ ((DWORD)0x00000006), "PST_MODEM" },
	{ ((DWORD)0x00000021), "PST_FAX" },
	{ ((DWORD)0x00000022), "PST_SCANNER" },
	{ ((DWORD)0x00000100), "PST_NETWORK_BRIDGE" },
	{ ((DWORD)0x00000101), "PST_LAT" },
	{ ((DWORD)0x00000102), "PST_TCPIP_TELNET" },
	{ ((DWORD)0x00000103), "PST_X25" },
	{ 0 },
};

static const_values_t pcf_dtrdsr[] = {
	{ ((DWORD)0x00000001), "PCF_DTRDSR" },
	{ ((DWORD)0x00000002), "PCF_RTSCTS" },
	{ ((DWORD)0x00000004), "PCF_RLSD" },
	{ ((DWORD)0x00000008), "PCF_PARITY_CHECK" },
	{ ((DWORD)0x00000010), "PCF_XONXOFF" },
	{ ((DWORD)0x00000020), "PCF_SETXCHAR" },
	{ ((DWORD)0x00000040), "PCF_TOTALTIMEOUTS" },
	{ ((DWORD)0x00000080), "PCF_INTTIMEOUTS" },
	{ ((DWORD)0x00000100), "PCF_SPECIALCHARS" },
	{ ((DWORD)0x00000200), "PCF_16BITMODE" },
	{ 0 },
};

static const_values_t sp_parity[] = {
	{ ((DWORD)0x00000001), "SP_PARITY" },
	{ ((DWORD)0x00000002), "SP_BAUD" },
	{ ((DWORD)0x00000004), "SP_DATABITS" },
	{ ((DWORD)0x00000008), "SP_STOPBITS" },
	{ ((DWORD)0x00000010), "SP_HANDSHAKING" },
	{ ((DWORD)0x00000020), "SP_PARITY_CHECK" },
	{ ((DWORD)0x00000040), "SP_RLSD" },
	{ 0 },
};

static const_values_t baud_075[] = {
	{ ((DWORD)0x00000001), "BAUD_075" },
	{ ((DWORD)0x00000002), "BAUD_110" },
	{ ((DWORD)0x00000004), "BAUD_134_5" },
	{ ((DWORD)0x00000008), "BAUD_150" },
	{ ((DWORD)0x00000010), "BAUD_300" },
	{ ((DWORD)0x00000020), "BAUD_600" },
	{ ((DWORD)0x00000040), "BAUD_1200" },
	{ ((DWORD)0x00000080), "BAUD_1800" },
	{ ((DWORD)0x00000100), "BAUD_2400" },
	{ ((DWORD)0x00000200), "BAUD_4800" },
	{ ((DWORD)0x00000400), "BAUD_7200" },
	{ ((DWORD)0x00000800), "BAUD_9600" },
	{ ((DWORD)0x00001000), "BAUD_14400" },
	{ ((DWORD)0x00002000), "BAUD_19200" },
	{ ((DWORD)0x00004000), "BAUD_38400" },
	{ ((DWORD)0x00008000), "BAUD_56K" },
	{ ((DWORD)0x00010000), "BAUD_128K" },
	{ ((DWORD)0x00020000), "BAUD_115200" },
	{ ((DWORD)0x00040000), "BAUD_57600" },
	{ ((DWORD)0x10000000), "BAUD_USER" },
	{ 0 },
};

static const_values_t databits_5[] = {
	{ ((WORD)0x00000001), "DATABITS_5" },
	{ ((WORD)0x00000002), "DATABITS_6" },
	{ ((WORD)0x00000004), "DATABITS_7" },
	{ ((WORD)0x00000008), "DATABITS_8" },
	{ ((WORD)0x00000010), "DATABITS_16" },
	{ ((WORD)0x00000020), "DATABITS_16X" },
	{ 0 },
};

static const_values_t stopbits_10[] = {
	{ ((WORD)0x00000001), "STOPBITS_10" },
	{ ((WORD)0x00000002), "STOPBITS_15" },
	{ ((WORD)0x00000004), "STOPBITS_20" },
	{ 0 },
};

static const_values_t parity_none[] = {
	{ ((WORD)0x00000100), "PARITY_NONE" },
	{ ((WORD)0x00000200), "PARITY_ODD" },
	{ ((WORD)0x00000400), "PARITY_EVEN" },
	{ ((WORD)0x00000800), "PARITY_MARK" },
	{ ((WORD)0x00001000), "PARITY_SPACE" },
	{ 0 },
};

static const_values_t commprop_initialized[] = {
	{ ((DWORD)0xE73CF52E), "COMMPROP_INITIALIZED" },
	{ 0 },
};

static const_values_t dtr_control_disable[] = {
	{ 0x00000000, "DTR_CONTROL_DISABLE" },
	{ 0x00000001, "DTR_CONTROL_ENABLE" },
	{ 0x00000002, "DTR_CONTROL_HANDSHAKE" },
	{ 0 },
};

static const_values_t rts_control_disable[] = {
	{ 0x00000000, "RTS_CONTROL_DISABLE" },
	{ 0x00000001, "RTS_CONTROL_ENABLE" },
	{ 0x00000002, "RTS_CONTROL_HANDSHAKE" },
	{ 0x00000003, "RTS_CONTROL_TOGGLE" },
	{ 0 },
};

static const_values_t gmem_fixed[] = {
	{ 0x00000000, "GMEM_FIXED" },
	{ 0x00000002, "GMEM_MOVEABLE" },
	{ 0x00000010, "GMEM_NOCOMPACT" },
	{ 0x00000020, "GMEM_NODISCARD" },
	{ 0x00000040, "GMEM_ZEROINIT" },
	{ 0x00000080, "GMEM_MODIFY" },
	{ 0x00000100, "GMEM_DISCARDABLE" },
	{ 0x00001000, "GMEM_NOT_BANKED" },
	{ 0x00002000, "GMEM_SHARE" },
	{ 0x00002000, "GMEM_DDESHARE" },
	{ 0x00004000, "GMEM_NOTIFY" },
	{ GMEM_NOT_BANKED, "GMEM_LOWER" },
	{ 0x00007F72, "GMEM_VALID_FLAGS" },
	{ 0x00008000, "GMEM_INVALID_HANDLE" },
	{ (GMEM_MOVEABLE |
	GMEM_ZEROINIT), "GHND" },
	{ (GMEM_FIXED |
		GMEM_ZEROINIT), "GPTR" },
		{ 0 },
};

/* FIXME i#1550: Perhaps this structure may
* be included in previous.
*/
static const_values_t gmem_discarded[] = {
	{ 0x00004000, "GMEM_DISCARDED" },
	{ 0x000000FF, "GMEM_LOCKCOUNT" },
	{ 0 },
};

static const_values_t lmem_fixed[] = {
	{ 0x00000000, "LMEM_FIXED" },
	{ 0x00000002, "LMEM_MOVEABLE" },
	{ 0x00000010, "LMEM_NOCOMPACT" },
	{ 0x00000020, "LMEM_NODISCARD" },
	{ 0x00000040, "LMEM_ZEROINIT" },
	{ 0x00000080, "LMEM_MODIFY" },
	{ 0x00000F00, "LMEM_DISCARDABLE" },
	{ 0x00000F72, "LMEM_VALID_FLAGS" },
	{ 0x00008000, "LMEM_INVALID_HANDLE" },
	{ (LMEM_MOVEABLE |
	LMEM_ZEROINIT), "LHND" },
	{ (LMEM_FIXED |
		LMEM_ZEROINIT), "LPTR" },
		{ 0 },
};

static const_values_t nonzerolhnd[] = {
	{ (LMEM_MOVEABLE), "NONZEROLHND" },
	{ 0 },
};

static const_values_t nonzerolptr[] = {
	{ (LMEM_FIXED), "NONZEROLPTR" },
	{ 0 },
};

/* FIXME i#1550: Perhaps this structure may be
* included in lmem_fixed.
*/
static const_values_t lmem_discarded[] = {
	{ 0x00004000, "LMEM_DISCARDED" },
	{ 0x000000FF, "LMEM_LOCKCOUNT" },
	{ 0 },
};

static const_values_t numa_no_preferred_node[] = {
	{ ((DWORD)-1), "NUMA_NO_PREFERRED_NODE" },
	{ 0 },
};

static const_values_t debug_process[] = {
	{ 0x00000001, "DEBUG_PROCESS" },
	{ 0x00000002, "DEBUG_ONLY_THIS_PROCESS" },
	{ 0x00000004, "CREATE_SUSPENDED" },
	{ 0x00000008, "DETACHED_PROCESS" },
	{ 0x00000010, "CREATE_NEW_CONSOLE" },
	{ 0x00000020, "NORMAL_PRIORITY_CLASS" },
	{ 0x00000040, "IDLE_PRIORITY_CLASS" },
	{ 0x00000080, "HIGH_PRIORITY_CLASS" },
	{ 0x00000100, "REALTIME_PRIORITY_CLASS" },
	{ 0x00000200, "CREATE_NEW_PROCESS_GROUP" },
	{ 0x00000400, "CREATE_UNICODE_ENVIRONMENT" },
	{ 0x00000800, "CREATE_SEPARATE_WOW_VDM" },
	{ 0x00001000, "CREATE_SHARED_WOW_VDM" },
	{ 0x00002000, "CREATE_FORCEDOS" },
	{ 0x00004000, "BELOW_NORMAL_PRIORITY_CLASS" },
	{ 0x00008000, "ABOVE_NORMAL_PRIORITY_CLASS" },
	{ 0x00010000, "INHERIT_PARENT_AFFINITY" },
	{ 0x00020000, "INHERIT_CALLER_PRIORITY" },
	{ 0x00040000, "CREATE_PROTECTED_PROCESS" },
	{ 0x00080000, "EXTENDED_STARTUPINFO_PRESENT" },
	{ 0x00100000, "PROCESS_MODE_BACKGROUND_BEGIN" },
	{ 0x00200000, "PROCESS_MODE_BACKGROUND_END" },
	{ 0x01000000, "CREATE_BREAKAWAY_FROM_JOB" },
	{ 0x02000000, "CREATE_PRESERVE_CODE_AUTHZ_LEVEL" },
	{ 0x04000000, "CREATE_DEFAULT_ERROR_MODE" },
	{ 0x08000000, "CREATE_NO_WINDOW" },
	{ 0x10000000, "PROFILE_USER" },
	{ 0x20000000, "PROFILE_KERNEL" },
	{ 0x40000000, "PROFILE_SERVER" },
	{ 0x80000000, "CREATE_IGNORE_SYSTEM_DEFAULT" },
	{ 0 },
};

static const_values_t stack_size_param_is_a_reservation[] = {
	{ 0x00010000, "STACK_SIZE_PARAM_IS_A_RESERVATION" },
	{ 0 },
};

static const_values_t thread_priority_lowest[] = {
	{ THREAD_BASE_PRIORITY_MIN, "THREAD_PRIORITY_LOWEST" },
	{ (THREAD_PRIORITY_LOWEST + 1), "THREAD_PRIORITY_BELOW_NORMAL" },
	{ 0, "THREAD_PRIORITY_NORMAL" },
	{ THREAD_BASE_PRIORITY_MAX, "THREAD_PRIORITY_HIGHEST" },
	{ (THREAD_PRIORITY_HIGHEST - 1), "THREAD_PRIORITY_ABOVE_NORMAL" },
	{ (MAXLONG), "THREAD_PRIORITY_ERROR_RETURN" },
	{ THREAD_BASE_PRIORITY_LOWRT, "THREAD_PRIORITY_TIME_CRITICAL" },
	{ THREAD_BASE_PRIORITY_IDLE, "THREAD_PRIORITY_IDLE" },
	{ 0 },
};

static const_values_t thread_mode_background_begin[] = {
	{ 0x00010000, "THREAD_MODE_BACKGROUND_BEGIN" },
	{ 0x00020000, "THREAD_MODE_BACKGROUND_END" },
	{ 0 },
};

static const_values_t volume_name_dos[] = {
	{ 0x00000000, "VOLUME_NAME_DOS" },
	{ 0x00000001, "VOLUME_NAME_GUID" },
	{ 0x00000002, "VOLUME_NAME_NT" },
	{ 0x00000004, "VOLUME_NAME_NONE" },
	{ 0 },
};

static const_values_t file_name_normalized[] = {
	{ 0x00000000, "FILE_NAME_NORMALIZED" },
	{ 0x00000008, "FILE_NAME_OPENED" },
	{ 0 },
};

static const_values_t exception_debug_event[] = {
	{ 1, "EXCEPTION_DEBUG_EVENT" },
	{ 2, "CREATE_THREAD_DEBUG_EVENT" },
	{ 3, "CREATE_PROCESS_DEBUG_EVENT" },
	{ 4, "EXIT_THREAD_DEBUG_EVENT" },
	{ 5, "EXIT_PROCESS_DEBUG_EVENT" },
	{ 6, "LOAD_DLL_DEBUG_EVENT" },
	{ 7, "UNLOAD_DLL_DEBUG_EVENT" },
	{ 8, "OUTPUT_DEBUG_STRING_EVENT" },
	{ 9, "RIP_EVENT" },
	{ 0 },
};

static const_values_t drive_unknown[] = {
	{ 0, "DRIVE_UNKNOWN" },
	{ 1, "DRIVE_NO_ROOT_DIR" },
	{ 2, "DRIVE_REMOVABLE" },
	{ 3, "DRIVE_FIXED" },
	{ 4, "DRIVE_REMOTE" },
	{ 5, "DRIVE_CDROM" },
	{ 6, "DRIVE_RAMDISK" },
	{ 0 },
};

static const_values_t file_type_unknown[] = {
	{ 0x00000000, "FILE_TYPE_UNKNOWN" },
	{ 0x00000001, "FILE_TYPE_DISK" },
	{ 0x00000002, "FILE_TYPE_CHAR" },
	{ 0x00000003, "FILE_TYPE_PIPE" },
	{ 0x00008000, "FILE_TYPE_REMOTE" },
	{ 0 },
};

static const_values_t std_input_handle[] = {
	{ ((DWORD)-10), "STD_INPUT_HANDLE" },
	{ ((DWORD)-11), "STD_OUTPUT_HANDLE" },
	{ ((DWORD)-12), "STD_ERROR_HANDLE" },
	{ 0 },
};

static const_values_t noparity[] = {
	{ 0, "NOPARITY" },
	{ 1, "ODDPARITY" },
	{ 2, "EVENPARITY" },
	{ 3, "MARKPARITY" },
	{ 4, "SPACEPARITY" },
	{ 0 },
};

static const_values_t onestopbit[] = {
	{ 0, "ONESTOPBIT" },
	{ 1, "ONE5STOPBITS" },
	{ 2, "TWOSTOPBITS" },
	{ 0 },
};

static const_values_t ignore[] = {
	{ 0, "IGNORE" },
	{ 0 },
};

static const_values_t infinite[] = {
	{ 0xFFFFFFFF, "INFINITE" },
	{ 0 },
};

static const_values_t cbr_110[] = {
	{ 110, "CBR_110" },
	{ 300, "CBR_300" },
	{ 600, "CBR_600" },
	{ 1200, "CBR_1200" },
	{ 2400, "CBR_2400" },
	{ 4800, "CBR_4800" },
	{ 9600, "CBR_9600" },
	{ 14400, "CBR_14400" },
	{ 19200, "CBR_19200" },
	{ 38400, "CBR_38400" },
	{ 56000, "CBR_56000" },
	{ 57600, "CBR_57600" },
	{ 115200, "CBR_115200" },
	{ 128000, "CBR_128000" },
	{ 256000, "CBR_256000" },
	{ 0 },
};

static const_values_t ce_rxover[] = {
	{ 0x00000001, "CE_RXOVER" },
	{ 0x00000002, "CE_OVERRUN" },
	{ 0x00000004, "CE_RXPARITY" },
	{ 0x00000008, "CE_FRAME" },
	{ 0x00000010, "CE_BREAK" },
	{ 0x00000100, "CE_TXFULL" },
	{ 0x00000200, "CE_PTO" },
	{ 0x00000400, "CE_IOE" },
	{ 0x00000800, "CE_DNS" },
	{ 0x00001000, "CE_OOP" },
	{ 0x00008000, "CE_MODE" },
	{ 0 },
};

static const_values_t ie_badid[] = {
	{ (-1), "IE_BADID" },
	{ (-2), "IE_OPEN" },
	{ (-3), "IE_NOPEN" },
	{ (-4), "IE_MEMORY" },
	{ (-5), "IE_DEFAULT" },
	{ (-10), "IE_HARDWARE" },
	{ (-11), "IE_BYTESIZE" },
	{ (-12), "IE_BAUDRATE" },
	{ 0 },
};

static const_values_t ev_rxchar[] = {
	{ 0x00000001, "EV_RXCHAR" },
	{ 0x00000002, "EV_RXFLAG" },
	{ 0x00000004, "EV_TXEMPTY" },
	{ 0x00000008, "EV_CTS" },
	{ 0x00000010, "EV_DSR" },
	{ 0x00000020, "EV_RLSD" },
	{ 0x00000040, "EV_BREAK" },
	{ 0x00000080, "EV_ERR" },
	{ 0x00000100, "EV_RING" },
	{ 0x00000200, "EV_PERR" },
	{ 0x00000400, "EV_RX80FULL" },
	{ 0x00000800, "EV_EVENT1" },
	{ 0x00001000, "EV_EVENT2" },
	{ 0 },
};

static const_values_t setxoff[] = {
	{ 1, "SETXOFF" },
	{ 2, "SETXON" },
	{ 3, "SETRTS" },
	{ 4, "CLRRTS" },
	{ 5, "SETDTR" },
	{ 6, "CLRDTR" },
	{ 7, "RESETDEV" },
	{ 8, "SETBREAK" },
	{ 9, "CLRBREAK" },
	{ 0 },
};

static const_values_t purge_txabort[] = {
	{ 0x00000001, "PURGE_TXABORT" },
	{ 0x00000002, "PURGE_RXABORT" },
	{ 0x00000004, "PURGE_TXCLEAR" },
	{ 0x00000008, "PURGE_RXCLEAR" },
	{ 0 },
};

static const_values_t lptx[] = {
	{ 0x00000080, "LPTx" },
	{ 0 },
};

static const_values_t ms_cts_on[] = {
	{ ((DWORD)0x00000010), "MS_CTS_ON" },
	{ ((DWORD)0x00000020), "MS_DSR_ON" },
	{ ((DWORD)0x00000040), "MS_RING_ON" },
	{ ((DWORD)0x00000080), "MS_RLSD_ON" },
	{ 0 },
};

static const_values_t s_queueempty[] = {
	{ 0, "S_QUEUEEMPTY" },
	{ 1, "S_THRESHOLD" },
	{ 2, "S_ALLTHRESHOLD" },
	{ 0, "S_NORMAL" },
	{ 1, "S_LEGATO" },
	{ 2, "S_STACCATO" },
	{ 0, "S_PERIOD512" },
	{ 1, "S_PERIOD1024" },
	{ 2, "S_PERIOD2048" },
	{ 3, "S_PERIODVOICE" },
	{ 4, "S_WHITE512" },
	{ 5, "S_WHITE1024" },
	{ 6, "S_WHITE2048" },
	{ 7, "S_WHITEVOICE" },
	{ (-1), "S_SERDVNA" },
	{ (-2), "S_SEROFM" },
	{ (-3), "S_SERMACT" },
	{ (-4), "S_SERQFUL" },
	{ (-5), "S_SERBDNT" },
	{ (-6), "S_SERDLN" },
	{ (-7), "S_SERDCC" },
	{ (-8), "S_SERDTP" },
	{ (-9), "S_SERDVL" },
	{ (-10), "S_SERDMD" },
	{ (-11), "S_SERDSH" },
	{ (-12), "S_SERDPT" },
	{ (-13), "S_SERDFQ" },
	{ (-14), "S_SERDDR" },
	{ (-15), "S_SERDSR" },
	{ (-16), "S_SERDST" },
	{ 0 },
};

static const_values_t nmpwait_wait_forever[] = {
	{ 0xffffffff, "NMPWAIT_WAIT_FOREVER" },
	{ 0x00000001, "NMPWAIT_NOWAIT" },
	{ 0x00000000, "NMPWAIT_USE_DEFAULT_WAIT" },
	{ 0 },
};

static const_values_t fs_case_is_preserved[] = {
	{ FILE_CASE_PRESERVED_NAMES, "FS_CASE_IS_PRESERVED" },
	{ FILE_CASE_SENSITIVE_SEARCH, "FS_CASE_SENSITIVE" },
	{ 0 },
};

static const_values_t fs_unicode_stored_on_disk[] = {
	{ FILE_UNICODE_ON_DISK, "FS_UNICODE_STORED_ON_DISK" },
	{ FILE_PERSISTENT_ACLS, "FS_PERSISTENT_ACLS" },
	{ FILE_VOLUME_IS_COMPRESSED, "FS_VOL_IS_COMPRESSED" },
	{ FILE_FILE_COMPRESSION, "FS_FILE_COMPRESSION" },
	{ FILE_SUPPORTS_ENCRYPTION, "FS_FILE_ENCRYPTION" },
	{ 0 },
};

static const_values_t file_map_copy[] = {
	{ SECTION_QUERY, "FILE_MAP_COPY" },
	{ SECTION_MAP_WRITE, "FILE_MAP_WRITE" },
	{ SECTION_MAP_READ, "FILE_MAP_READ" },
	{ SECTION_ALL_ACCESS, "FILE_MAP_ALL_ACCESS" },
	{ SECTION_MAP_EXECUTE_EXPLICIT, "FILE_MAP_EXECUTE" },
	{ 0 },
};

static const_values_t of_read[] = {
	{ 0x00000000, "OF_READ" },
	{ 0x00000001, "OF_WRITE" },
	{ 0x00000002, "OF_READWRITE" },
	{ 0x00000000, "OF_SHARE_COMPAT" },
	{ 0x00000010, "OF_SHARE_EXCLUSIVE" },
	{ 0x00000020, "OF_SHARE_DENY_WRITE" },
	{ 0x00000030, "OF_SHARE_DENY_READ" },
	{ 0x00000040, "OF_SHARE_DENY_NONE" },
	{ 0x00000100, "OF_PARSE" },
	{ 0x00000200, "OF_DELETE" },
	{ 0x00000400, "OF_VERIFY" },
	{ 0x00000800, "OF_CANCEL" },
	{ 0x00001000, "OF_CREATE" },
	{ 0x00002000, "OF_PROMPT" },
	{ 0x00004000, "OF_EXIST" },
	{ 0x00008000, "OF_REOPEN" },
	{ 0 },
};

static const_values_t ofs_maxpathname[] = {
	{ 128, "OFS_MAXPATHNAME" },
	{ 0 },
};

static const_values_t maxintatom[] = {
	{ 0x0000C000, "MAXINTATOM" },
	{ 0 },
};

static const_values_t invalid_atom[] = {
	{ ((ATOM)0), "INVALID_ATOM" },
	{ 0 },
};

static const_values_t process_heap_region[] = {
	{ 0x00000001, "PROCESS_HEAP_REGION" },
	{ 0x00000002, "PROCESS_HEAP_UNCOMMITTED_RANGE" },
	{ 0x00000004, "PROCESS_HEAP_ENTRY_BUSY" },
	{ 0x00000010, "PROCESS_HEAP_ENTRY_MOVEABLE" },
	{ 0x00000020, "PROCESS_HEAP_ENTRY_DDESHARE" },
	{ 0 },
};

static const_values_t scs_32bit_binary[] = {
	{ 0, "SCS_32BIT_BINARY" },
	{ 1, "SCS_DOS_BINARY" },
	{ 2, "SCS_WOW_BINARY" },
	{ 3, "SCS_PIF_BINARY" },
	{ 4, "SCS_POSIX_BINARY" },
	{ 5, "SCS_OS216_BINARY" },
	{ 6, "SCS_64BIT_BINARY" },
	{ 0 },
};

static const_values_t process_affinity_enable_auto_update[] = {
	{ 0x00000001UL, "PROCESS_AFFINITY_ENABLE_AUTO_UPDATE" },
	{ 0 },
};

static const_values_t fiber_flag_float_switch[] = {
	{ 0x00000001, "FIBER_FLAG_FLOAT_SWITCH" },
	{ 0 },
};

static const_values_t ums_version[] = {
	{ RTL_UMS_VERSION, "UMS_VERSION" },
	{ 0 },
};

static const_values_t process_dep_enable[] = {
	{ 0x00000001, "PROCESS_DEP_ENABLE" },
	{ 0x00000002, "PROCESS_DEP_DISABLE_ATL_THUNK_EMULATION" },
	{ 0 },
};

static const_values_t file_skip_completion_port_on_success[] = {
	{ 0x00000001, "FILE_SKIP_COMPLETION_PORT_ON_SUCCESS" },
	{ 0x00000002, "FILE_SKIP_SET_EVENT_ON_HANDLE" },
	{ 0 },
};

static const_values_t sem_failcriticalerrors[] = {
	{ 0x00000001, "SEM_FAILCRITICALERRORS" },
	{ 0x00000002, "SEM_NOGPFAULTERRORBOX" },
	{ 0x00000004, "SEM_NOALIGNMENTFAULTEXCEPT" },
	{ 0x00008000, "SEM_NOOPENFILEERRORBOX" },
	{ 0 },
};

static const_values_t lockfile_fail_immediately[] = {
	{ 0x00000001, "LOCKFILE_FAIL_IMMEDIATELY" },
	{ 0x00000002, "LOCKFILE_EXCLUSIVE_LOCK" },
	{ 0 },
};

static const_values_t handle_flag_inherit[] = {
	{ 0x00000001, "HANDLE_FLAG_INHERIT" },
	{ 0x00000002, "HANDLE_FLAG_PROTECT_FROM_CLOSE" },
	{ 0 },
};

static const_values_t hinstance_error[] = {
	{ 32, "HINSTANCE_ERROR" },
	{ 0 },
};

static const_values_t get_tape_media_information[] = {
	{ 0, "GET_TAPE_MEDIA_INFORMATION" },
	{ 1, "GET_TAPE_DRIVE_INFORMATION" },
	{ 0 },
};

static const_values_t set_tape_media_information[] = {
	{ 0, "SET_TAPE_MEDIA_INFORMATION" },
	{ 1, "SET_TAPE_DRIVE_INFORMATION" },
	{ 0 },
};

static const_values_t file_cache_max_hard_enable[] = {
	{ 0x00000001, "FILE_CACHE_MAX_HARD_ENABLE" },
	{ 0x00000002, "FILE_CACHE_MAX_HARD_DISABLE" },
	{ 0 },
};

static const_values_t file_cache_min_hard_enable[] = {
	{ 0x00000004, "FILE_CACHE_MIN_HARD_ENABLE" },
	{ 0x00000008, "FILE_CACHE_MIN_HARD_DISABLE" },
	{ 0 },
};

static const_values_t format_message_allocate_buffer[] = {
	{ 0x00000100, "FORMAT_MESSAGE_ALLOCATE_BUFFER" },
	{ 0x00000200, "FORMAT_MESSAGE_IGNORE_INSERTS" },
	{ 0x00000400, "FORMAT_MESSAGE_FROM_STRING" },
	{ 0x00000800, "FORMAT_MESSAGE_FROM_HMODULE" },
	{ 0x00001000, "FORMAT_MESSAGE_FROM_SYSTEM" },
	{ 0x00002000, "FORMAT_MESSAGE_ARGUMENT_ARRAY" },
	{ 0x000000FF, "FORMAT_MESSAGE_MAX_WIDTH_MASK" },
	{ 0 },
};

static const_values_t file_encryptable[] = {
	{ 0, "FILE_ENCRYPTABLE" },
	{ 1, "FILE_IS_ENCRYPTED" },
	{ 2, "FILE_SYSTEM_ATTR" },
	{ 3, "FILE_ROOT_DIR" },
	{ 4, "FILE_SYSTEM_DIR" },
	{ 5, "FILE_UNKNOWN" },
	{ 6, "FILE_SYSTEM_NOT_SUPPORT" },
	{ 7, "FILE_USER_DISALLOWED" },
	{ 8, "FILE_READ_ONLY" },
	{ 9, "FILE_DIR_DISALLOWED" },
	{ 0 },
};

static const_values_t efs_use_recovery_keys[] = {
	{ (0x00000001), "EFS_USE_RECOVERY_KEYS" },
	{ 0 },
};

static const_values_t create_for_import[] = {
	{ (1), "CREATE_FOR_IMPORT" },
	{ (2), "CREATE_FOR_DIR" },
	{ (4), "OVERWRITE_HIDDEN" },
	{ (8), "EFSRPC_SECURE_ONLY" },
	{ 0 },
};

static const_values_t fls_out_of_indexes[] = {
	{ ((DWORD)0xFFFFFFFF), "FLS_OUT_OF_INDEXES" },
	{ 0 },
};

static const_values_t tls_out_of_indexes[] = {
	{ ((DWORD)0xFFFFFFFF), "TLS_OUT_OF_INDEXES" },
	{ 0 },
};

static const_values_t backup_invalid[] = {
	{ 0x00000000, "BACKUP_INVALID" },
	{ 0x00000001, "BACKUP_DATA" },
	{ 0x00000002, "BACKUP_EA_DATA" },
	{ 0x00000003, "BACKUP_SECURITY_DATA" },
	{ 0x00000004, "BACKUP_ALTERNATE_DATA" },
	{ 0x00000005, "BACKUP_LINK" },
	{ 0x00000006, "BACKUP_PROPERTY_DATA" },
	{ 0x00000007, "BACKUP_OBJECT_ID" },
	{ 0x00000008, "BACKUP_REPARSE_DATA" },
	{ 0x00000009, "BACKUP_SPARSE_BLOCK" },
	{ 0x0000000a, "BACKUP_TXFS_DATA" },
	{ 0 },
};

static const_values_t stream_normal_attribute[] = {
	{ 0x00000000, "STREAM_NORMAL_ATTRIBUTE" },
	{ 0x00000001, "STREAM_MODIFIED_WHEN_READ" },
	{ 0x00000002, "STREAM_CONTAINS_SECURITY" },
	{ 0x00000004, "STREAM_CONTAINS_PROPERTIES" },
	{ 0x00000008, "STREAM_SPARSE_ATTRIBUTE" },
	{ 0 },
};

static const_values_t startf_useshowwindow[] = {
	{ 0x00000001, "STARTF_USESHOWWINDOW" },
	{ 0x00000002, "STARTF_USESIZE" },
	{ 0x00000004, "STARTF_USEPOSITION" },
	{ 0x00000008, "STARTF_USECOUNTCHARS" },
	{ 0x00000010, "STARTF_USEFILLATTRIBUTE" },
	{ 0x00000020, "STARTF_RUNFULLSCREEN" },
	{ 0x00000040, "STARTF_FORCEONFEEDBACK" },
	{ 0x00000080, "STARTF_FORCEOFFFEEDBACK" },
	{ 0x00000100, "STARTF_USESTDHANDLES" },
	{ 0x00000200, "STARTF_USEHOTKEY" },
	{ 0x00000800, "STARTF_TITLEISLINKNAME" },
	{ 0x00001000, "STARTF_TITLEISAPPID" },
	{ 0x00002000, "STARTF_PREVENTPINNING" },
	{ 0 },
};

static const_values_t shutdown_noretry[] = {
	{ 0x00000001, "SHUTDOWN_NORETRY" },
	{ 0 },
};

static const_values_t create_mutex_initial_owner[] = {
	{ 0x00000001, "CREATE_MUTEX_INITIAL_OWNER" },
	{ 0 },
};

static const_values_t create_event_manual_reset[] = {
	{ 0x00000001, "CREATE_EVENT_MANUAL_RESET" },
	{ 0x00000002, "CREATE_EVENT_INITIAL_SET" },
	{ 0 },
};

static const_values_t create_waitable_timer_manual_reset[] = {
	{ 0x00000001, "CREATE_WAITABLE_TIMER_MANUAL_RESET" },
	{ 0 },
};

static const_values_t dont_resolve_dll_references[] = {
	{ 0x00000001, "DONT_RESOLVE_DLL_REFERENCES" },
	{ 0x00000002, "LOAD_LIBRARY_AS_DATAFILE" },
	{ 0x00000008, "LOAD_WITH_ALTERED_SEARCH_PATH" },
	{ 0x00000010, "LOAD_IGNORE_CODE_AUTHZ_LEVEL" },
	{ 0x00000020, "LOAD_LIBRARY_AS_IMAGE_RESOURCE" },
	{ 0x00000040, "LOAD_LIBRARY_AS_DATAFILE_EXCLUSIVE" },
	{ 0x00000080, "LOAD_LIBRARY_REQUIRE_SIGNED_TARGET" },
	{ 0 },
};

static const_values_t get_module_handle_ex_flag_pin[] = {
	{ (0x00000001), "GET_MODULE_HANDLE_EX_FLAG_PIN" },
	{ (0x00000002), "GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT" },
	{ (0x00000004), "GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS" },
	{ 0 },
};

static const_values_t process_name_native[] = {
	{ 0x00000001, "PROCESS_NAME_NATIVE" },
	{ 0 },
};

static const_values_t proc_thread_attribute_number[] = {
	{ 0x0000FFFF, "PROC_THREAD_ATTRIBUTE_NUMBER" },
	{ 0x00010000, "PROC_THREAD_ATTRIBUTE_THREAD" },
	{ 0x00020000, "PROC_THREAD_ATTRIBUTE_INPUT" },
	{ 0x00040000, "PROC_THREAD_ATTRIBUTE_ADDITIVE" },
	{ 0 },
};

static const_values_t process_creation_mitigation_policy_dep_enable[] = {
	{ 0x00000001, "PROCESS_CREATION_MITIGATION_POLICY_DEP_ENABLE" },
	{ 0x00000002, "PROCESS_CREATION_MITIGATION_POLICY_DEP_ATL_THUNK_ENABLE" },
	{ 0x00000004, "PROCESS_CREATION_MITIGATION_POLICY_SEHOP_ENABLE" },
	{ 0 },
};

static const_values_t proc_thread_attribute_replace_value[] = {
	{ 0x00000001, "PROC_THREAD_ATTRIBUTE_REPLACE_VALUE" },
	{ 0 },
};

static const_values_t resource_enum_ln[] = {
	{ (0x00000001), "RESOURCE_ENUM_LN" },
	{ (0x00000002), "RESOURCE_ENUM_MUI" },
	{ (0x00000004), "RESOURCE_ENUM_MUI_SYSTEM" },
	{ (0x00000008), "RESOURCE_ENUM_VALIDATE" },
	{ (0x00000010), "RESOURCE_ENUM_MODULE_EXACT" },
	{ 0 },
};

static const_values_t base_search_path_flags[] = {
	{ 0x00000001, "BASE_SEARCH_PATH_ENABLE_SAFE_SEARCHMODE" },
	{ 0x00010000, "BASE_SEARCH_PATH_DISABLE_SAFE_SEARCHMODE" },
	{ 0x00008000, "BASE_SEARCH_PATH_PERMANENT" },
	{ ~0x00018001, "BASE_SEARCH_PATH_INVALID_FLAGS" },
	{ 0 },
};

static const_values_t ddd_raw_target_path[] = {
	{ 0x00000001, "DDD_RAW_TARGET_PATH" },
	{ 0x00000002, "DDD_REMOVE_DEFINITION" },
	{ 0x00000004, "DDD_EXACT_MATCH_ON_REMOVE" },
	{ 0x00000008, "DDD_NO_BROADCAST_SYSTEM" },
	{ 0x00000010, "DDD_LUID_BROADCAST_DRIVE" },
	{ 0 },
};

static const_values_t find_first_ex_case_sensitive[] = {
	{ 0x00000001, "FIND_FIRST_EX_CASE_SENSITIVE" },
	{ 0x00000002, "FIND_FIRST_EX_LARGE_FETCH" },
	{ 0 },
};

static const_values_t movefile_flags[] = {
	{ 0x00000001, "MOVEFILE_REPLACE_EXISTING" },
	{ 0x00000002, "MOVEFILE_COPY_ALLOWED" },
	{ 0x00000004, "MOVEFILE_DELAY_UNTIL_REBOOT" },
	{ 0x00000008, "MOVEFILE_WRITE_THROUGH" },
	{ 0x00000010, "MOVEFILE_CREATE_HARDLINK" },
	{ 0x00000020, "MOVEFILE_FAIL_IF_NOT_TRACKABLE" },
	{ 0 },
};

static const_values_t max_compname_length[] = {
	{ 15, "MAX_COMPUTERNAME_LENGTH" },
	{ 31, "MAX_COMPUTERNAME_LENGTH" },
	{ 0 },
};

static const_values_t logon_logon_flags[] = {
	{ 2, "LOGON32_LOGON_INTERACTIVE" },
	{ 3, "LOGON32_LOGON_NETWORK" },
	{ 4, "LOGON32_LOGON_BATCH" },
	{ 5, "LOGON32_LOGON_SERVICE" },
	{ 7, "LOGON32_LOGON_UNLOCK" },
	{ 8, "LOGON32_LOGON_NETWORK_CLEARTEXT" },
	{ 9, "LOGON32_LOGON_NEW_CREDENTIALS" },
	{ 0 },
};

static const_values_t logon_provider[] = {
	{ 0, "LOGON32_PROVIDER_DEFAULT" },
	{ 1, "LOGON32_PROVIDER_WINNT35" },
	{ 2, "LOGON32_PROVIDER_WINNT40" },
	{ 3, "LOGON32_PROVIDER_WINNT50" },
	{ 4, "LOGON32_PROVIDER_VIRTUAL" },
	{ 0 },
};

static const_values_t logon_flags[] = {
	{ 0x00000001, "LOGON_WITH_PROFILE" },
	{ 0x00000002, "LOGON_NETCREDENTIALS_ONLY" },
	{ 0x80000000, "LOGON_ZERO_PASSWORD_BUFFER" },
	{ 0 },
};

static const_values_t private_namespace_flag[] = {
	{ 0x00000001, "PRIVATE_NAMESPACE_FLAG_DESTROY" },
	{ 0 },
};

static const_values_t hw_profile_guidlen[] = {
	{ 39, "HW_PROFILE_GUIDLEN" },
	{ 0 },
};

static const_values_t max_profile_len[] = {
	{ 80, "MAX_PROFILE_LEN" },
	{ 0 },
};

static const_values_t dockinfo_undocked[] = {
	{ (0x00000001), "DOCKINFO_UNDOCKED" },
	{ (0x00000002), "DOCKINFO_DOCKED" },
	{ (0x00000004), "DOCKINFO_USER_SUPPLIED" },
	{ (DOCKINFO_USER_SUPPLIED |
	DOCKINFO_UNDOCKED), "DOCKINFO_USER_UNDOCKED" },
	{ (DOCKINFO_USER_SUPPLIED |
		DOCKINFO_DOCKED), "DOCKINFO_USER_DOCKED" },
		{ 0 },
};

static const_values_t tc_normal[] = {
	{ 0, "TC_NORMAL" },
	{ 1, "TC_HARDERR" },
	{ 2, "TC_GP_TRAP" },
	{ 3, "TC_SIGNAL" },
	{ 0 },
};

static const_values_t ac_line[] = {
	{ 0x00000000, "AC_LINE_OFFLINE" },
	{ 0x00000001, "AC_LINE_ONLINE" },
	{ 0x00000002, "AC_LINE_BACKUP_POWER" },
	{ 0x000000FF, "AC_LINE_UNKNOWN" },
	{ 0 },
};

static const_values_t battery_flag[] = {
	{ 0x00000001, "BATTERY_FLAG_HIGH" },
	{ 0x00000002, "BATTERY_FLAG_LOW" },
	{ 0x00000004, "BATTERY_FLAG_CRITICAL" },
	{ 0x00000008, "BATTERY_FLAG_CHARGING" },
	{ 0x00000080, "BATTERY_FLAG_NO_BATTERY" },
	{ 0x000000FF, "BATTERY_FLAG_UNKNOWN" },
	{ 0 },
};

static const_values_t battery_percentage_unknown[] = {
	{ 0x000000FF, "BATTERY_PERCENTAGE_UNKNOWN" },
	{ 0xFFFFFFFF, "BATTERY_LIFE_UNKNOWN" },
	{ 0 },
};

static const_values_t actctx_flag_processor[] = {
	{ (0x00000001), "ACTCTX_FLAG_PROCESSOR_ARCHITECTURE_VALID" },
	{ (0x00000002), "ACTCTX_FLAG_LANGID_VALID" },
	{ (0x00000004), "ACTCTX_FLAG_ASSEMBLY_DIRECTORY_VALID" },
	{ (0x00000008), "ACTCTX_FLAG_RESOURCE_NAME_VALID" },
	{ (0x00000010), "ACTCTX_FLAG_SET_PROCESS_DEFAULT" },
	{ (0x00000020), "ACTCTX_FLAG_APPLICATION_NAME_VALID" },
	{ (0x00000040), "ACTCTX_FLAG_SOURCE_IS_ASSEMBLYREF" },
	{ (0x00000080), "ACTCTX_FLAG_HMODULE_VALID" },
	{ 0 },
};

static const_values_t deactivate_actctx_flag[] = {
	{ (0x00000001), "DEACTIVATE_ACTCTX_FLAG_FORCE_EARLY_DEACTIVATION" },
	{ 0 },
};

static const_values_t find_actctx_section[] = {
	{ (0x00000001), "FIND_ACTCTX_SECTION_KEY_RETURN_HACTCTX" },
	{ (0x00000002), "FIND_ACTCTX_SECTION_KEY_RETURN_FLAGS" },
	{ (0x00000004), "FIND_ACTCTX_SECTION_KEY_RETURN_ASSEMBLY_METADATA" },
	{ 0 },
};

static const_values_t activation_context_basic_info[] = {
	{ 1, "ACTIVATION_CONTEXT_BASIC_INFORMATION_DEFINED" },
	{ 0 },
};

static const_values_t query_actctx_flag[] = {
	{ (0x00000004), "QUERY_ACTCTX_FLAG_USE_ACTIVE_ACTCTX" },
	{ (0x00000008), "QUERY_ACTCTX_FLAG_ACTCTX_IS_HMODULE" },
	{ (0x00000010), "QUERY_ACTCTX_FLAG_ACTCTX_IS_ADDRESS" },
	{ (0x80000000), "QUERY_ACTCTX_FLAG_NO_ADDREF" },
	{ 0 },
};

static const_values_t restart_max_cmd_line[] = {
	{ 1024, "RESTART_MAX_CMD_LINE" },
	{ 1, "RESTART_NO_CRASH" },
	{ 2, "RESTART_NO_HANG" },
	{ 4, "RESTART_NO_PATCH" },
	{ 8, "RESTART_NO_REBOOT" },
	{ 0 },
};

static const_values_t recovery_default_ping_interval[] = {
	{ 5000, "RECOVERY_DEFAULT_PING_INTERVAL" },
	{ (5 * 60 * 1000), "RECOVERY_MAX_PING_INTERVAL" },
	{ 0 },
};

static const_values_t remote_protocol_info_flag[] = {
	{ 0x00000001, "REMOTE_PROTOCOL_INFO_FLAG_LOOPBACK" },
	{ 0x00000002, "REMOTE_PROTOCOL_INFO_FLAG_OFFLINE" },
	{ 0 },
};

static const_values_t symbolic_link_flag_directory[] = {
	{ (0x00000001), "SYMBOLIC_LINK_FLAG_DIRECTORY" },
	{ 0 },
};

static const_values_t valid_symbolic_link_flags[] = {
	{ SYMBOLIC_LINK_FLAG_DIRECTORY, "VALID_SYMBOLIC_LINK_FLAGS" },
	{ 0 },
};

static const_values_t define_interlocked[] = {
	{ 0, "MICROSOFT_WINBASE_H_DEFINE_INTERLOCKED_CPLUSPLUS_OVERLOADS" },
	{ 0 },
};

static const_values_t strict[] = {
	{ 1, "STRICT" },
	{ 0 },
};

static const_values_t winver[] = {
	{ 0x00000500, "WINVER" },
	{ 0 },
};

static const_values_t max_path[] = {
	{ 260, "MAX_PATH" },
	{ 0 },
};

static const_values_t hfile_error[] = {
	{ ((HFILE)-1), "HFILE_ERROR" },
	{ 0 },
};

static const_values_t dm_update[] = {
	{ 1, "DM_UPDATE" },
	{ 2, "DM_COPY" },
	{ 4, "DM_PROMPT" },
	{ 8, "DM_MODIFY" },
	{ DM_MODIFY, "DM_IN_BUFFER" },
	{ DM_PROMPT, "DM_IN_PROMPT" },
	{ DM_COPY, "DM_OUT_BUFFER" },
	{ DM_UPDATE, "DM_OUT_DEFAULT" },
	{ 0 },
};

static const_values_t dc_fields[] = {
	{ 1, "DC_FIELDS" },
	{ 2, "DC_PAPERS" },
	{ 3, "DC_PAPERSIZE" },
	{ 4, "DC_MINEXTENT" },
	{ 5, "DC_MAXEXTENT" },
	{ 6, "DC_BINS" },
	{ 7, "DC_DUPLEX" },
	{ 8, "DC_SIZE" },
	{ 9, "DC_EXTRA" },
	{ 10, "DC_VERSION" },
	{ 11, "DC_DRIVER" },
	{ 12, "DC_BINNAMES" },
	{ 13, "DC_ENUMRESOLUTIONS" },
	{ 14, "DC_FILEDEPENDENCIES" },
	{ 15, "DC_TRUETYPE" },
	{ 16, "DC_PAPERNAMES" },
	{ 17, "DC_ORIENTATION" },
	{ 18, "DC_COPIES" },
	{ 0 },
};
/* winternl.h */
static const_values_t obj_inherit[] = {
	{ 0x00000002L, "OBJ_INHERIT" },
	{ 0x00000010L, "OBJ_PERMANENT" },
	{ 0x00000020L, "OBJ_EXCLUSIVE" },
	{ 0x00000040L, "OBJ_CASE_INSENSITIVE" },
	{ 0x00000080L, "OBJ_OPENIF" },
	{ 0x00000100L, "OBJ_OPENLINK" },
	{ 0x00000200L, "OBJ_KERNEL_HANDLE" },
	{ 0x00000400L, "OBJ_FORCE_ACCESS_CHECK" },
	{ 0x000007F2L, "OBJ_VALID_ATTRIBUTES" },
	{ 0 },
};
static const_values_t file_supersede[] = {
	{ 0x00000000, "FILE_SUPERSEDE" },
	{ 0x00000001, "FILE_OPEN" },
	{ 0x00000002, "FILE_CREATE" },
	{ 0x00000003, "FILE_OPEN_IF" },
	{ 0x00000004, "FILE_OVERWRITE" },
	{ 0x00000005, "FILE_OVERWRITE_IF" },
	{ 0x00000005, "FILE_MAXIMUM_DISPOSITION" },
	{ 0 },
};
static const_values_t file_directory_file[] = {
	{ 0x00000001, "FILE_DIRECTORY_FILE" },
	{ 0x00000002, "FILE_WRITE_THROUGH" },
	{ 0x00000004, "FILE_SEQUENTIAL_ONLY" },
	{ 0x00000008, "FILE_NO_INTERMEDIATE_BUFFERING" },
	{ 0x00000010, "FILE_SYNCHRONOUS_IO_ALERT" },
	{ 0x00000020, "FILE_SYNCHRONOUS_IO_NONALERT" },
	{ 0x00000040, "FILE_NON_DIRECTORY_FILE" },
	{ 0x00000080, "FILE_CREATE_TREE_CONNECTION" },
	{ 0x00000100, "FILE_COMPLETE_IF_OPLOCKED" },
	{ 0x00000200, "FILE_NO_EA_KNOWLEDGE" },
	{ 0x00000400, "FILE_OPEN_REMOTE_INSTANCE" },
	{ 0x00000800, "FILE_RANDOM_ACCESS" },
	{ 0x00001000, "FILE_DELETE_ON_CLOSE" },
	{ 0x00002000, "FILE_OPEN_BY_FILE_ID" },
	{ 0x00004000, "FILE_OPEN_FOR_BACKUP_INTENT" },
	{ 0x00008000, "FILE_NO_COMPRESSION" },
	{ 0x00010000, "FILE_OPEN_REQUIRING_OPLOCK" },
	{ 0x00100000, "FILE_RESERVE_OPFILTER" },
	{ 0x00200000, "FILE_OPEN_REPARSE_POINT" },
	{ 0x00400000, "FILE_OPEN_NO_RECALL" },
	{ 0x00800000, "FILE_OPEN_FOR_FREE_SPACE_QUERY" },
	{ 0x00ffffff, "FILE_VALID_OPTION_FLAGS" },
	{ 0x00000032, "FILE_VALID_PIPE_OPTION_FLAGS" },
	{ 0x00000032, "FILE_VALID_MAILSLOT_OPTION_FLAGS" },
	{ 0x00000036, "FILE_VALID_SET_FLAGS" },
	{ 0 },
};
static const_values_t file_superseded[] = {
	{ 0x00000000, "FILE_SUPERSEDED" },
	{ 0x00000001, "FILE_OPENED" },
	{ 0x00000002, "FILE_CREATED" },
	{ 0x00000003, "FILE_OVERWRITTEN" },
	{ 0x00000004, "FILE_EXISTS" },
	{ 0x00000005, "FILE_DOES_NOT_EXIST" },
	{ 0 },
};
/* There isn't any information about flags
* for NtAlpcConnectPort, NtAlpcAcceptConnectPort. We're using this
* research paper: http://recon.cx/2008/a/thomas_garnier/LPC-ALPC-paper.pdf
* to fill possible flag values.
*/
static const_values_t alpc_sync_connection[] = {
	{ 0x00020000, "ALPC_SYNC_CONNECTION" },
	{ 0x00100000, "ALPC_USER_WAIT_MODE" },
	{ 0x00200000, "ALPC_WAIT_IS_ALERTABLE" },
	{ 0 },
};
/* evntrace.h */
static const_values_t event_trace_type_info[] = {
	{ 0x00000000, "EVENT_TRACE_TYPE_INFO" },
	{ 0x00000001, "EVENT_TRACE_TYPE_START" },
	{ 0x00000002, "EVENT_TRACE_TYPE_END" },
	{ 0x00000003, "EVENT_TRACE_TYPE_DC_START" },
	{ 0x00000004, "EVENT_TRACE_TYPE_DC_END" },
	{ 0x00000005, "EVENT_TRACE_TYPE_EXTENSION" },
	{ 0x00000006, "EVENT_TRACE_TYPE_REPLY" },
	{ 0x00000007, "EVENT_TRACE_TYPE_DEQUEUE" },
	{ 0x00000008, "EVENT_TRACE_TYPE_CHECKPOINT" },
	{ 0x00000009, "EVENT_TRACE_TYPE_WINEVT_SEND" },
	{ 0x000000F0, "EVENT_TRACE_TYPE_WINEVT_RECEIVE" },
	{ 0 },
};
static const_values_t winevent_trace_type_info[] = {
	{ 0x00000002, "EVENT_TRACE_TYPE_STOP" },
	{ 0x00000007, "EVENT_TRACE_TYPE_RESUME" },
	{ 0x00000008, "EVENT_TRACE_TYPE_SUSPEND" },
	{ 0x00000009, "EVENT_TRACE_TYPE_WINEVT_SEND" },
	{ 0x000000F0, "EVENT_TRACE_TYPE_WINEVT_RECEIVE" },
	{ 0 },
};
static const_values_t trace_level_none[] = {
	{ 0, "TRACE_LEVEL_NONE" },
	{ 1, "TRACE_LEVEL_CRITICAL" },
	{ 1, "TRACE_LEVEL_FATAL" }, /* Deprecated name */
	{ 2, "TRACE_LEVEL_ERROR" },
	{ 3, "TRACE_LEVEL_WARNING" },
	{ 4, "TRACE_LEVEL_INFORMATION" },
	{ 5, "TRACE_LEVEL_VERBOSE" },
	{ 6, "TRACE_LEVEL_RESERVED6" },
	{ 7, "TRACE_LEVEL_RESERVED7" },
	{ 8, "TRACE_LEVEL_RESERVED8" },
	{ 9, "TRACE_LEVEL_RESERVED9" },
	{ 0 },
};
static const_values_t event_trace_type_load[] = {
	{ 0x0000000a, "EVENT_TRACE_TYPE_LOAD" },
	{ 0 },
};
static const_values_t event_trace_type_io_read[] = {
	{ 0x0000000a, "EVENT_TRACE_TYPE_IO_READ" },
	{ 0x0000000b, "EVENT_TRACE_TYPE_IO_WRITE" },
	{ 0x0000000c, "EVENT_TRACE_TYPE_IO_READ_INIT" },
	{ 0x0000000d, "EVENT_TRACE_TYPE_IO_WRITE_INIT" },
	{ 0x0000000e, "EVENT_TRACE_TYPE_IO_FLUSH" },
	{ 0x0000000f, "EVENT_TRACE_TYPE_IO_FLUSH_INIT" },
	{ 0 },
};
static const_values_t event_trace_type_mm_tf[] = {
	{ 0x0000000a, "EVENT_TRACE_TYPE_MM_TF" },
	{ 0x0000000b, "EVENT_TRACE_TYPE_MM_DZF" },
	{ 0x0000000c, "EVENT_TRACE_TYPE_MM_COW" },
	{ 0x0000000d, "EVENT_TRACE_TYPE_MM_GPF" },
	{ 0x0000000e, "EVENT_TRACE_TYPE_MM_HPF" },
	{ 0x0000000f, "EVENT_TRACE_TYPE_MM_AV" },
	{ 0 },
};
static const_values_t event_trace_type_send[] = {
	{ 0x0000000a, "EVENT_TRACE_TYPE_SEND" },
	{ 0x0000000b, "EVENT_TRACE_TYPE_RECEIVE" },
	{ 0x0000000c, "EVENT_TRACE_TYPE_CONNECT" },
	{ 0x0000000d, "EVENT_TRACE_TYPE_DISCONNECT" },
	{ 0x0000000e, "EVENT_TRACE_TYPE_RETRANSMIT" },
	{ 0x0000000f, "EVENT_TRACE_TYPE_ACCEPT" },
	{ 0x00000010, "EVENT_TRACE_TYPE_RECONNECT" },
	{ 0x00000011, "EVENT_TRACE_TYPE_CONNFAIL" },
	{ 0x00000012, "EVENT_TRACE_TYPE_COPY_TCP" },
	{ 0x00000013, "EVENT_TRACE_TYPE_COPY_ARP" },
	{ 0x00000014, "EVENT_TRACE_TYPE_ACKFULL" },
	{ 0x00000015, "EVENT_TRACE_TYPE_ACKPART" },
	{ 0x00000016, "EVENT_TRACE_TYPE_ACKDUP" },
	{ 0 },
};
static const_values_t event_trace_type_guidmap[] = {
	{ 0x0000000a, "EVENT_TRACE_TYPE_GUIDMAP" },
	{ 0x0000000b, "EVENT_TRACE_TYPE_CONFIG" },
	{ 0x0000000c, "EVENT_TRACE_TYPE_SIDINFO" },
	{ 0x0000000d, "EVENT_TRACE_TYPE_SECURITY" },
	{ 0 },
};
static const_values_t event_trace_type_regcreate[] = {
	{ 0x0000000a, "EVENT_TRACE_TYPE_REGCREATE" },
	{ 0x0000000b, "EVENT_TRACE_TYPE_REGOPEN" },
	{ 0x0000000c, "EVENT_TRACE_TYPE_REGDELETE" },
	{ 0x0000000d, "EVENT_TRACE_TYPE_REGQUERY" },
	{ 0x0000000e, "EVENT_TRACE_TYPE_REGSETVALUE" },
	{ 0x0000000f, "EVENT_TRACE_TYPE_REGDELETEVALUE" },
	{ 0x00000010, "EVENT_TRACE_TYPE_REGQUERYVALUE" },
	{ 0x00000011, "EVENT_TRACE_TYPE_REGENUMERATEKEY" },
	{ 0x00000012, "EVENT_TRACE_TYPE_REGENUMERATEVALUEKEY" },
	{ 0x00000013, "EVENT_TRACE_TYPE_REGQUERYMULTIPLEVALUE" },
	{ 0x00000014, "EVENT_TRACE_TYPE_REGSETINFORMATION" },
	{ 0x00000015, "EVENT_TRACE_TYPE_REGFLUSH" },
	{ 0x00000016, "EVENT_TRACE_TYPE_REGKCBCREATE" },
	{ 0x00000017, "EVENT_TRACE_TYPE_REGKCBDELETE" },
	{ 0x00000018, "EVENT_TRACE_TYPE_REGKCBRUNDOWNBEGIN" },
	{ 0x00000019, "EVENT_TRACE_TYPE_REGKCBRUNDOWNEND" },
	{ 0x0000001a, "EVENT_TRACE_TYPE_REGVIRTUALIZE" },
	{ 0x0000001b, "EVENT_TRACE_TYPE_REGCLOSE" },
	{ 0x0000001c, "EVENT_TRACE_TYPE_REGSETSECURITY" },
	{ 0x0000001d, "EVENT_TRACE_TYPE_REGQUERYSECURITY" },
	{ 0x0000001e, "EVENT_TRACE_TYPE_REGCOMMIT" },
	{ 0x0000001f, "EVENT_TRACE_TYPE_REGPREPARE" },
	{ 0x00000020, "EVENT_TRACE_TYPE_REGROLLBACK" },
	{ 0x00000021, "EVENT_TRACE_TYPE_REGMOUNTHIVE" },
	{ 0 },
};
static const_values_t event_trace_type_config_cpu[] = {
	{ 0x0000000a, "EVENT_TRACE_TYPE_CONFIG_CPU" },
	{ 0x0000000b, "EVENT_TRACE_TYPE_CONFIG_PHYSICALDISK" },
	{ 0x0000000c, "EVENT_TRACE_TYPE_CONFIG_LOGICALDISK" },
	{ 0x0000000d, "EVENT_TRACE_TYPE_CONFIG_NIC" },
	{ 0x0000000e, "EVENT_TRACE_TYPE_CONFIG_VIDEO" },
	{ 0x0000000f, "EVENT_TRACE_TYPE_CONFIG_SERVICES" },
	{ 0x00000010, "EVENT_TRACE_TYPE_CONFIG_POWER" },
	{ 0x00000011, "EVENT_TRACE_TYPE_CONFIG_NETINFO" },
	{ 0x00000015, "EVENT_TRACE_TYPE_CONFIG_IRQ" },
	{ 0x00000016, "EVENT_TRACE_TYPE_CONFIG_PNP" },
	{ 0x00000017, "EVENT_TRACE_TYPE_CONFIG_IDECHANNEL" },
	{ 0x00000019, "EVENT_TRACE_TYPE_CONFIG_PLATFORM" },
	{ 0 },
};
static const_values_t event_trace_flag_process[] = {
	{ 0x00000001, "EVENT_TRACE_FLAG_PROCESS" },
	{ 0x00000002, "EVENT_TRACE_FLAG_THREAD" },
	{ 0x00000004, "EVENT_TRACE_FLAG_IMAGE_LOAD" },
	{ 0x00000100, "EVENT_TRACE_FLAG_DISK_IO" },
	{ 0x00000200, "EVENT_TRACE_FLAG_DISK_FILE_IO" },
	{ 0x00001000, "EVENT_TRACE_FLAG_MEMORY_PAGE_FAULTS" },
	{ 0x00002000, "EVENT_TRACE_FLAG_MEMORY_HARD_FAULTS" },
	{ 0x00010000, "EVENT_TRACE_FLAG_NETWORK_TCPIP" },
	{ 0x00020000, "EVENT_TRACE_FLAG_REGISTRY" },
	{ 0x00040000, "EVENT_TRACE_FLAG_DBGPRINT" },
	{ 0x00000008, "EVENT_TRACE_FLAG_PROCESS_COUNTERS" },
	{ 0x00000010, "EVENT_TRACE_FLAG_CSWITCH" },
	{ 0x00000020, "EVENT_TRACE_FLAG_DPC" },
	{ 0x00000040, "EVENT_TRACE_FLAG_INTERRUPT" },
	{ 0x00000080, "EVENT_TRACE_FLAG_SYSTEMCALL" },
	{ 0x00000400, "EVENT_TRACE_FLAG_DISK_IO_INIT" },
	{ 0x00100000, "EVENT_TRACE_FLAG_ALPC" },
	{ 0x00200000, "EVENT_TRACE_FLAG_SPLIT_IO" },
	{ 0x00800000, "EVENT_TRACE_FLAG_DRIVER" },
	{ 0x01000000, "EVENT_TRACE_FLAG_PROFILE" },
	{ 0x02000000, "EVENT_TRACE_FLAG_FILE_IO" },
	{ 0x04000000, "EVENT_TRACE_FLAG_FILE_IO_INIT" },
	{ 0x00000800, "EVENT_TRACE_FLAG_DISPATCHER" },
	{ 0x00004000, "EVENT_TRACE_FLAG_VIRTUAL_ALLOC" },
	{ 0x80000000, "EVENT_TRACE_FLAG_EXTENSION" },
	{ 0x40000000, "EVENT_TRACE_FLAG_FORWARD_WMI" },
	{ 0x20000000, "EVENT_TRACE_FLAG_ENABLE_RESERVE" },
	{ 0 },
};
static const_values_t event_trace_file_mode_none[] = {
	{ 0x00000000, "EVENT_TRACE_FILE_MODE_NONE" },
	{ 0x00000001, "EVENT_TRACE_FILE_MODE_SEQUENTIAL" },
	{ 0x00000002, "EVENT_TRACE_FILE_MODE_CIRCULAR" },
	{ 0x00000004, "EVENT_TRACE_FILE_MODE_APPEND" },
	{ 0x00000100, "EVENT_TRACE_REAL_TIME_MODE" },
	{ 0x00000200, "EVENT_TRACE_DELAY_OPEN_FILE_MODE" },
	{ 0x00000400, "EVENT_TRACE_BUFFERING_MODE" },
	{ 0x00000800, "EVENT_TRACE_PRIVATE_LOGGER_MODE" },
	{ 0x00001000, "EVENT_TRACE_ADD_HEADER_MODE" },
	{ 0x00004000, "EVENT_TRACE_USE_GLOBAL_SEQUENCE" },
	{ 0x00008000, "EVENT_TRACE_USE_LOCAL_SEQUENCE" },
	{ 0x00010000, "EVENT_TRACE_RELOG_MODE" },
	{ 0x01000000, "EVENT_TRACE_USE_PAGED_MEMORY" },
	{ 0x00000008, "EVENT_TRACE_FILE_MODE_NEWFILE" },
	{ 0x00000020, "EVENT_TRACE_FILE_MODE_PREALLOCATE" },
	{ 0x00000040, "EVENT_TRACE_NONSTOPPABLE_MODE" },
	{ 0x00000080, "EVENT_TRACE_SECURE_MODE" },
	{ 0x00002000, "EVENT_TRACE_USE_KBYTES_FOR_SIZE" },
	{ 0x00020000, "EVENT_TRACE_PRIVATE_IN_PROC" },
	{ 0x00100000, "EVENT_TRACE_MODE_RESERVED" },
	{ 0x10000000, "EVENT_TRACE_NO_PER_PROCESSOR_BUFFERING" },
	{ 0 },
};
static const_values_t event_trace_control_query[] = {
	{ 0, "EVENT_TRACE_CONTROL_QUERY" },
	{ 1, "EVENT_TRACE_CONTROL_STOP" },
	{ 2, "EVENT_TRACE_CONTROL_UPDATE" },
	{ 3, "EVENT_TRACE_CONTROL_FLUSH" },
	{ 0 },
};
static const_values_t trace_message_sequence[] = {
	{ 1, "TRACE_MESSAGE_SEQUENCE" },
	{ 2, "TRACE_MESSAGE_GUID" },
	{ 4, "TRACE_MESSAGE_COMPONENTID" },
	{ 8, "TRACE_MESSAGE_TIMESTAMP" },
	{ 16, "TRACE_MESSAGE_PERFORMANCE_TIMESTAMP" },
	{ 32, "TRACE_MESSAGE_SYSTEMINFO" },
	{ 0x00000040, "TRACE_MESSAGE_POINTER32" },
	{ 0x00000080, "TRACE_MESSAGE_POINTER64" },
	{ 0x0000ffff, "TRACE_MESSAGE_FLAG_MASK" },
	{ 0 },
};
static const_values_t event_trace_use_proctime[] = {
	{ 0x00000001, "EVENT_TRACE_USE_PROCTIME" },
	{ 0x00000002, "EVENT_TRACE_USE_NOCPUTIME" },
	{ 0 },
};
static const_values_t trace_header_flag_use_timestamp[] = {
	{ 0x00000200, "TRACE_HEADER_FLAG_USE_TIMESTAMP" },
	{ 0x00020000, "TRACE_HEADER_FLAG_TRACED_GUID" },
	{ 0x00040000, "TRACE_HEADER_FLAG_LOG_WNODE" },
	{ 0x00080000, "TRACE_HEADER_FLAG_USE_GUID_PTR" },
	{ 0x00100000, "TRACE_HEADER_FLAG_USE_MOF_PTR" },
	{ 0 },
};
static const_values_t etw_null_type_value[] = {
	{ 0, "ETW_NULL_TYPE_VALUE" },
	{ 1, "ETW_OBJECT_TYPE_VALUE" },
	{ 2, "ETW_STRING_TYPE_VALUE" },
	{ 3, "ETW_SBYTE_TYPE_VALUE" },
	{ 4, "ETW_BYTE_TYPE_VALUE" },
	{ 5, "ETW_INT16_TYPE_VALUE" },
	{ 6, "ETW_UINT16_TYPE_VALUE" },
	{ 7, "ETW_INT32_TYPE_VALUE" },
	{ 8, "ETW_UINT32_TYPE_VALUE" },
	{ 9, "ETW_INT64_TYPE_VALUE" },
	{ 10, "ETW_UINT64_TYPE_VALUE" },
	{ 11, "ETW_CHAR_TYPE_VALUE" },
	{ 12, "ETW_SINGLE_TYPE_VALUE" },
	{ 13, "ETW_DOUBLE_TYPE_VALUE" },
	{ 14, "ETW_BOOLEAN_TYPE_VALUE" },
	{ 15, "ETW_DECIMAL_TYPE_VALUE" },
	{ 101, "ETW_GUID_TYPE_VALUE" },
	{ 102, "ETW_ASCIICHAR_TYPE_VALUE" },
	{ 103, "ETW_ASCIISTRING_TYPE_VALUE" },
	{ 104, "ETW_COUNTED_STRING_TYPE_VALUE" },
	{ 105, "ETW_POINTER_TYPE_VALUE" },
	{ 106, "ETW_SIZET_TYPE_VALUE" },
	{ 107, "ETW_HIDDEN_TYPE_VALUE" },
	{ 108, "ETW_BOOL_TYPE_VALUE" },
	{ 109, "ETW_COUNTED_ANSISTRING_TYPE_VALUE" },
	{ 110, "ETW_REVERSED_COUNTED_STRING_TYPE_VALUE" },
	{ 111, "ETW_REVERSED_COUNTED_ANSISTRING_TYPE_VALUE" },
	{ 112, "ETW_NON_NULL_TERMINATED_STRING_TYPE_VALUE" },
	{ 113, "ETW_REDUCED_ANSISTRING_TYPE_VALUE" },
	{ 114, "ETW_REDUCED_STRING_TYPE_VALUE" },
	{ 115, "ETW_SID_TYPE_VALUE" },
	{ 116, "ETW_VARIANT_TYPE_VALUE" },
	{ 117, "ETW_PTVECTOR_TYPE_VALUE" },
	{ 118, "ETW_WMITIME_TYPE_VALUE" },
	{ 119, "ETW_DATETIME_TYPE_VALUE" },
	{ 120, "ETW_REFRENCE_TYPE_VALUE" },
	{ 0 },
};
static const_values_t trace_provider_flag_legacy[] = {
	{ (0x00000001), "TRACE_PROVIDER_FLAG_LEGACY" },
	{ (0x00000002), "TRACE_PROVIDER_FLAG_PRE_ENABLE" },
	{ 0 },
};
static const_values_t event_control_code_disable_provider[] = {
	{ 0, "EVENT_CONTROL_CODE_DISABLE_PROVIDER" },
	{ 1, "EVENT_CONTROL_CODE_ENABLE_PROVIDER" },
	{ 2, "EVENT_CONTROL_CODE_CAPTURE_STATE" },
	{ 0 },
};

const_values_t *const_struct_array[] = {
	anysize_array,
	max_natural_alignment,
	memory_allocation_alignment,
	system_cache_alignment_size,
	pragma_deprecated_ddk,
	ucschar_invalid_character,
	min_ucschar,
	max_ucschar,
	all_processor_groups,
	application_error_mask,
#if 0 /* FIXME i#1550: truncation of "__int64" to "int" */
	maxlonglong,
#endif
	unicode_string_max_bytes,
	minchar,
	ver_server_nt,
	product_undefined,
	lang_neutral,
	sublang_neutral,
	sublang_afrikaans_south_africa,
	sublang_albanian_albania,
	sublang_alsatian_france,
	sublang_amharic_ethiopia,
	sublang_arabic_saudi_arabia,
	sublang_armenian_armenia,
	sublang_assamese_india,
	sublang_azeri_latin,
	sublang_bashkir_russia,
	sublang_basque_basque,
	sublang_belarusian_belarus,
	sublang_bengali_india,
	sublang_bosnian_bosnia_herzegovina_latin,
	sublang_breton_france,
	sublang_bulgarian_bulgaria,
	sublang_catalan_catalan,
	sublang_chinese_traditional,
	sublang_corsican_france,
	sublang_czech_czech_republic,
	sublang_croatian_croatia,
	sublang_croatian_bosnia_herzegovina_latin,
	sublang_danish_denmark,
	sublang_dari_afghanistan,
	sublang_divehi_maldives,
	sublang_dutch,
	sublang_english_us,
	sublang_estonian_estonia,
	sublang_faeroese_faroe_islands,
	sublang_filipino_philippines,
	sublang_finnish_finland,
	sublang_french,
	sublang_frisian_netherlands,
	sublang_galician_galician,
	sublang_georgian_georgia,
	sublang_german,
	sublang_greek_greece,
	sublang_greenlandic_greenland,
	sublang_gujarati_india,
	sublang_hausa_nigeria_latin,
	sublang_hebrew_israel,
	sublang_hindi_india,
	sublang_hungarian_hungary,
	sublang_icelandic_iceland,
	sublang_igbo_nigeria,
	sublang_indonesian_indonesia,
	sublang_inuktitut_canada,
	sublang_irish_ireland,
	sublang_italian,
	sublang_japanese_japan,
	sublang_kannada_india,
	sublang_kashmiri_sasia,
	sublang_kazak_kazakhstan,
	sublang_khmer_cambodia,
	sublang_kiche_guatemala,
	sublang_kinyarwanda_rwanda,
	sublang_konkani_india,
	sublang_korean,
	sublang_kyrgyz_kyrgyzstan,
	sublang_lao_lao,
	sublang_latvian_latvia,
	sublang_lithuanian,
	sublang_luxembourgish_luxembourg,
	sublang_macedonian_macedonia,
	sublang_malay_malaysia,
	sublang_malayalam_india,
	sublang_maltese_malta,
	sublang_maori_new_zealand,
	sublang_mapudungun_chile,
	sublang_marathi_india,
	sublang_mohawk_mohawk,
	sublang_mongolian_cyrillic_mongolia,
	sublang_nepali_india,
	sublang_norwegian_bokmal,
	sublang_occitan_france,
	sublang_oriya_india,
	sublang_pashto_afghanistan,
	sublang_persian_iran,
	sublang_polish_poland,
	sublang_portuguese,
	sublang_punjabi_india,
	sublang_quechua_bolivia,
	sublang_romanian_romania,
	sublang_romansh_switzerland,
	sublang_russian_russia,
	sublang_sami_northern_norway,
	sublang_sanskrit_india,
	sublang_scottish_gaelic,
	sublang_serbian_croatia,
	sublang_sindhi_india,
	sublang_sindhi_afghanistan,
	sublang_sinhalese_sri_lanka,
	sublang_sotho_northern_south_africa,
	sublang_slovak_slovakia,
	sublang_slovenian_slovenia,
	sublang_spanish,
	sublang_swahili_kenya,
	sublang_swedish,
	sublang_syriac_syria,
	sublang_tajik_tajikistan,
	sublang_tamazight_algeria_latin,
	sublang_tamil_india,
	sublang_tatar_russia,
	sublang_telugu_india,
	sublang_thai_thailand,
	sublang_tibetan_prc,
	sublang_tigrigna_eritrea,
	sublang_tswana_south_africa,
	sublang_turkish_turkey,
	sublang_turkmen_turkmenistan,
	sublang_uighur_prc,
	sublang_ukrainian_ukraine,
	sublang_upper_sorbian_germany,
	sublang_urdu_pakistan,
	sublang_uzbek_latin,
	sublang_vietnamese_vietnam,
	sublang_welsh_united_kingdom,
	sublang_wolof_senegal,
	sublang_xhosa_south_africa,
	sublang_yakut_russia,
	sublang_yi_prc,
	sublang_yoruba_nigeria,
	sublang_zulu_south_africa,
	sort_default,
	sort_japanese_xjis,
	sort_chinese_big5,
	sort_chinese_prcp,
	sort_korean_ksc,
	sort_german_phone_book,
	sort_hungarian_default,
	sort_georgian_traditional,
	nls_valid_locale_mask,
	locale_name_max_length,
	lang_system_default,
	locale_system_default,
	status_wait_0,
	maximum_wait_objects,
	xsave_align,
	minimal_xstate_area_length,
	_mm_hint_t0,
#if 0 /* FIXME i#1550: resolve ifdef macros */
	pf_temporal_level_1,
	pf_non_temporal_level_all,
	exception_read_fault,
#endif
	context_amd64,
	initial_mxcsr,
	runtime_function_indirect,
	unwind_history_table_size,
	size_of_80387_registers,
	context_i386,
	maximum_supported_extension,
	break_debug_base,
	md_lfhint_none,
#if 0 /* FIXME i#1550: resolve ifdef macros */
	pf_temporal_level_1,
	pf_non_temporal_level_all,
#endif
	exception_read_fault,
	context_ia64,
	wow64_context_i386,
	wow64_size_of_80387_registers,
	exception_noncontinuable,
	right_flags,
	specific_rights_all,
	sid_revision,
	security_max_sid_size,
	sid_hash_size,
	security_null_rid,
	domain_group_rid_enterprise_readonly_domain_controllers,
	domain_group_rid_admins,
	domain_alias_rid_admins,
	security_mandatory_untrusted_rid,
	se_group_mandatory,
	acl_revision,
	min_acl_revision,
	acl_revision2,
	max_acl_revision,
	access_min_ms_ace_type,
	object_inherit_ace,
	successful_access_ace_flag,
	system_mandatory_label_no_write_up,
	ace_object_type_present,
	security_descriptor_revision,
	security_descriptor_min_length,
	se_owner_defaulted,
	access_object_guid,
	audit_allow_no_privilege,
	se_privilege_enabled_by_default,
	privilege_set_all_necessary,
	access_reason_type_mask,
	se_security_descriptor_flag_no_owner_ace,
	token_assign_primary,
	token_mandatory_policy_off,
	policy_audit_subcategory_count,
	token_source_length,
	security_dynamic_tracking,
	disable_max_privilege,
	owner_security_information,
	protected_dacl_security_information,
	process_terminate,
	maximum_proc_per_group,
	thread_terminate,
	job_object_assign_process,
	fls_maximum_available,
	thread_base_priority_lowrt,
	quota_limits_hardws_min_enable,
	max_hw_counters,
	thread_profiling_flag_dispatch,
	job_object_terminate_at_end_of_job,
	job_object_limit_workingset,
	job_object_basic_limit_valid_flags,
	job_object_uilimit_none,
	job_object_ui_valid_flags,
	job_object_security_no_admin,
	event_modify_state,
	mutant_query_state,
	semaphore_modify_state,
	timer_query_state,
	time_zone_id_unknown,
	ltp_pc_smt,
	cache_fully_associative,
	processor_intel_386,
	processor_amd_x8664,
	pf_floating_point_precision_errata,
	pf_compare_exchange_double,
	xstate_legacy_floating_point,
	xstate_gsse,
	section_query,
	session_query_access,
	page_noaccess,
	sec_file,
	write_watch_flag_reset,
	mem_commit,
	file_read_data,
	file_share_read,
	file_attribute_readonly,
	file_notify_change_file_name,
	file_action_added,
	mailslot_no_message,
	file_case_sensitive_search,
	file_unicode_on_disk,
	reparse_guid_data_buffer_header_size,
	maximum_reparse_data_buffer_size,
	io_reparse_tag_reserved_zero,
	io_reparse_tag_mount_point,
	io_completion_modify_state,
	duplicate_close_source,
	perfstate_policy_change_ideal,
	processor_perf_boost_policy_disabled,
	core_parking_policy_change_ideal,
	power_device_idle_policy_performance,
	power_system_maximum,
	es_system_required,
	diagnostic_reason_version,
	power_request_context_version,
	pdcap_d0_supported,
	power_setting_value_version,
	proc_idle_bucket_count,
	acpi_ppm_software_all,
	ms_ppm_software_all,
	ppm_firmware_acpi1c2,
	power_action_query_allowed,
	power_level_user_notify_text,
	battery_discharge_flags_eventcode_mask,
	num_discharge_policies,
	processor_idlestate_policy_count,
	po_throttle_none,
	image_dos_signature,
#if 0 /* FIXME i#1550: resolve ifdef macros */
	image_dos_signature,
#endif
	image_sizeof_file_header,
	image_file_relocs_stripped,
	image_file_machine_unknown,
	image_numberof_directory_entries,
	image_nt_optional_hdr32_magic,
	image_subsystem_unknown,
	image_dllcharacteristics_dynamic_base,
	image_directory_entry_export,
	image_sizeof_short_name,
	image_sizeof_section_header,
	image_scn_type_no_pad,
	image_sizeof_symbol,
	image_sym_undefined,
	image_sym_type_null,
	image_sym_dtype_null,
	image_sym_class_null,
	n_btmask,
	image_comdat_select_noduplicates,
	image_weak_extern_search_nolibrary,
	image_rel_i386_absolute,
	image_rel_mips_absolute,
	image_rel_alpha_absolute,
	image_rel_ppc_absolute,
	image_rel_sh3_absolute,
	image_rel_arm_absolute,
	image_rel_am_absolute,
	image_rel_amd64_absolute,
	image_rel_ia64_absolute,
	image_rel_cef_absolute,
	image_rel_cee_absolute,
	image_rel_m32r_absolute,
	image_rel_ebc_absolute,
	emarch_enc_i17_imm7b_inst_word_x,
	emarch_enc_i17_imm9d_inst_word_x,
	emarch_enc_i17_imm5c_inst_word_x,
	emarch_enc_i17_ic_inst_word_x,
	emarch_enc_i17_imm41a_inst_word_x,
	emarch_enc_i17_imm41b_inst_word_x,
	emarch_enc_i17_imm41c_inst_word_x,
	emarch_enc_i17_sign_inst_word_x,
	x3_opcode_inst_word_x,
	x3_i_inst_word_x,
	x3_d_wh_inst_word_x,
	x3_imm20_inst_word_x,
	x3_imm39_1_inst_word_x,
	x3_imm39_2_inst_word_x,
	x3_p_inst_word_x,
	x3_tmplt_inst_word_x,
	x3_btype_qp_inst_word_x,
	x3_empty_inst_word_x,
	image_rel_based_absolute,
	image_archive_start_size,
	image_debug_type_unknown,
	frame_fpo,
	sizeof_rfpo_data,
	image_separate_debug_flags_mask,
	import_object_hdr_sig2,
	rtl_run_once_init,
	heap_no_serialize,
	is_text_unicode_ascii16,
	compression_format_none,
	compression_engine_standard,
	sef_dacl_auto_inherit,
	message_resource_unicode,
	ver_equal,
	ver_condition_mask,
	ver_minorversion,
	ver_nt_workstation,
	ver_platform_win32s,
	rtl_ums_version,
	rtl_critsect_type,
	rtl_critical_section_flag_no_debug_info,
	rtl_critical_section_debug_flag_static_init,
	rtl_srwlock_init,
	rtl_condition_variable_init,
	wt_executedefault,
	wt_executeinlongthread,
	activation_context_path_type_none,
	max_supported_os_num,
	invalid_os_count,
	performance_data_version,
	read_thread_profiling_flag_dispatching,
	dll_process_attach,
	eventlog_sequential_read,
	eventlog_success,
	eventlog_start_paired_event,
	maxlogicallognamesize,
	key_query_value,
	reg_option_reserved,
	reg_created_new_key,
	reg_standard_format,
	reg_whole_hive_volatile,
	reg_force_unload,
	reg_notify_change_name,
	reg_none,
	service_kernel_driver,
	service_boot_start,
	service_error_ignore,
	cm_service_network_boot_load,
	tape_erase_short,
	tape_load,
	tape_setmarks,
	tape_absolute_position,
	tape_rewind,
	tape_drive_fixed,
	tape_fixed_partitions,
	tape_query_drive_parameters,
	transactionmanager_query_information,
	transaction_query_information,
	resourcemanager_query_information,
	enlistment_query_information,
	pcteb,
	activation_context_section_assembly_information,
	invalid_handle_value,
	invalid_file_size,
	invalid_set_file_pointer,
	invalid_file_attributes,
	file_begin,
	time_zone_id_invalid,
	wait_failed,
	wait_io_completion,
	file_flag_write_through,
	create_new,
	progress_continue,
	callback_chunk_finished,
	copy_file_fail_if_exists,
	replacefile_write_through,
	pipe_access_inbound,
	pipe_client_end,
	pipe_wait,
	pipe_readmode_byte,
	pipe_type_byte,
	pipe_accept_remote_clients,
	security_anonymous,
	init_once_static_init,
	fail_fast_generate_exception_address,
	srwlock_init,
	condition_variable_init,
	mutex_modify_state,
	sp_serialcomm,
	pst_unspecified,
	pcf_dtrdsr,
	sp_parity,
	baud_075,
	databits_5,
	stopbits_10,
	parity_none,
	commprop_initialized,
	dtr_control_disable,
	rts_control_disable,
	gmem_fixed,
	gmem_discarded,
	lmem_fixed,
	nonzerolhnd,
	nonzerolptr,
	lmem_discarded,
	numa_no_preferred_node,
	debug_process,
	stack_size_param_is_a_reservation,
	thread_priority_lowest,
	thread_mode_background_begin,
	volume_name_dos,
	file_name_normalized,
	exception_debug_event,
	drive_unknown,
	file_type_unknown,
	std_input_handle,
	noparity,
	onestopbit,
	ignore,
	infinite,
	cbr_110,
	ce_rxover,
	ie_badid,
	ev_rxchar,
	setxoff,
	purge_txabort,
	lptx,
	ms_cts_on,
	s_queueempty,
	nmpwait_wait_forever,
	fs_case_is_preserved,
	fs_unicode_stored_on_disk,
	file_map_copy,
	of_read,
	ofs_maxpathname,
	maxintatom,
	invalid_atom,
	process_heap_region,
	scs_32bit_binary,
	process_affinity_enable_auto_update,
	fiber_flag_float_switch,
	ums_version,
	process_dep_enable,
	file_skip_completion_port_on_success,
	sem_failcriticalerrors,
	lockfile_fail_immediately,
	handle_flag_inherit,
	hinstance_error,
	get_tape_media_information,
	set_tape_media_information,
	file_cache_max_hard_enable,
	file_cache_min_hard_enable,
	format_message_allocate_buffer,
	file_encryptable,
	efs_use_recovery_keys,
	create_for_import,
	fls_out_of_indexes,
	tls_out_of_indexes,
	backup_invalid,
	stream_normal_attribute,
	startf_useshowwindow,
	shutdown_noretry,
	create_mutex_initial_owner,
	create_event_manual_reset,
	create_waitable_timer_manual_reset,
	dont_resolve_dll_references,
	get_module_handle_ex_flag_pin,
	process_name_native,
	proc_thread_attribute_number,
	process_creation_mitigation_policy_dep_enable,
	proc_thread_attribute_replace_value,
	resource_enum_ln,
	base_search_path_flags,
	ddd_raw_target_path,
	find_first_ex_case_sensitive,
	movefile_flags,
	max_compname_length,
	logon_logon_flags,
	logon_provider,
	logon_flags,
	private_namespace_flag,
	hw_profile_guidlen,
	max_profile_len,
	dockinfo_undocked,
	tc_normal,
	ac_line,
	battery_flag,
	battery_percentage_unknown,
	actctx_flag_processor,
	deactivate_actctx_flag,
	find_actctx_section,
	activation_context_basic_info,
	query_actctx_flag,
	restart_max_cmd_line,
	recovery_default_ping_interval,
	remote_protocol_info_flag,
	symbolic_link_flag_directory,
	valid_symbolic_link_flags,
	define_interlocked,
	strict,
	winver,
	max_path,
	hfile_error,
	dm_update,
	dc_fields,
	obj_inherit,
	file_supersede,
	file_directory_file,
	file_superseded,
	alpc_sync_connection,
	event_trace_type_info,
	winevent_trace_type_info,
	trace_level_none,
	event_trace_type_load,
	event_trace_type_io_read,
	event_trace_type_mm_tf,
	event_trace_type_send,
	event_trace_type_guidmap,
	event_trace_type_regcreate,
	event_trace_type_config_cpu,
	event_trace_flag_process,
	event_trace_file_mode_none,
	event_trace_control_query,
	trace_message_sequence,
	event_trace_use_proctime,
	trace_header_flag_use_timestamp,
	etw_null_type_value,
	trace_provider_flag_legacy,
	event_control_code_disable_provider,
};

#define CONST_ARRAYS_NUM \
    (sizeof(const_struct_array)/sizeof(const_struct_array[0]))

size_t
get_const_arrays_num(void)
{
	return CONST_ARRAYS_NUM;
}