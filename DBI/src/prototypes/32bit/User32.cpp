// The following code was obtained using a slightly modified version
// of the Deviare parser from the PyREBox project. Credits:
// https://github.com/Cisco-Talos/pyrebox/blob/master/mw_monitor2/deviare_db_parser.py

#include "../pyrebox.h"

libcall_info_t User32_info[] = {
	{ "ActivateKeyboardLayout",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hkl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "AddClipboardFormatListener",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AdjustWindowRect",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{ 1, "dwStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "bMenu", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AdjustWindowRectEx",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{ 1, "dwStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "bMenu", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "dwExStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AllowSetForegroundWindow",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "dwProcessId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AnimateWindow",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "dwTime", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AnyPopup",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "AppendMenuA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "uIDNewItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpNewItem", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "AppendMenuW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "uIDNewItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpNewItem", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "ArrangeIconicWindows",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AttachThreadInput",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "idAttach", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "idAttachTo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "fAttach", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BeginDeferWindowPos",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "nNumWindows", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BeginPaint",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpPaint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPAINTSTRUCT", 512, OUT },
	}
	},
	{ "BlockInput",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "fBlockIt", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BringWindowToTop",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BroadcastSystemMessageA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 2, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "BroadcastSystemMessageExA",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 2, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "pbsmInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "BSMINFO", 160, UNK },
	}
	},
	{ "BroadcastSystemMessageExW",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 2, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "pbsmInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "BSMINFO", 160, UNK },
	}
	},
	{ "BroadcastSystemMessageW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 2, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CalculatePopupWindowPosition",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "anchorPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{ 1, "windowSize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, IN },
		{ 2, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "excludeRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 4, "popupWindowPosition", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
	}
	},
	{ "CallMsgFilterA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, UNK },
		{ 1, "nCode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CallMsgFilterW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, UNK },
		{ 1, "nCode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CallNextHookEx",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hhk", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nCode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CallWindowProcA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpPrevWndFunc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CallWindowProcW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpPrevWndFunc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CancelShutdown",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "CascadeWindows",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, OUT },
		{ 0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "wHow", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 3, "cKids", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "lpKids", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "ChangeClipboardChain",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWndRemove", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hWndNewNext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ChangeDisplaySettingsA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpDevMode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, IN },
		{ 1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ChangeDisplaySettingsExA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszDeviceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 1, "lpDevMode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, IN },
		{ 2, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "dwflags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "lParam", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "ChangeDisplaySettingsExW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszDeviceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 1, "lpDevMode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, IN },
		{ 2, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "dwflags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "lParam", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "ChangeDisplaySettingsW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpDevMode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, IN },
		{ 1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ChangeMenuA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "cmd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpszNewItem", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 3, "cmdInsert", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ChangeMenuW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "cmd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpszNewItem", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 3, "cmdInsert", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ChangeWindowMessageFilter",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "message", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "dwFlag", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ChangeWindowMessageFilterEx",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "message", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "action", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "pChangeFilterStruct", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCHANGEFILTERSTRUCT", 64, UNK },
	}
	},
	{ "CharLowerA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{ 0, "lpsz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "CharLowerBuffA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpsz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "cchLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CharLowerBuffW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 1, "cchLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CharLowerW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{ 0, "lpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "CharNextA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{ 0, "lpsz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "CharNextExA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{ 0, "CodePage", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{ 1, "lpCurrentChar", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CharNextW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{ 0, "lpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "CharPrevA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{ 0, "lpszStart", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "lpszCurrent", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "CharPrevExA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{ 0, "CodePage", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{ 1, "lpStart", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "lpCurrentChar", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CharPrevW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{ 0, "lpszStart", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 1, "lpszCurrent", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "CharToOemA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "pSrc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "pDst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "CharToOemBuffA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszSrc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "lpszDst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "cchDstLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CharToOemBuffW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszSrc", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 1, "lpszDst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "cchDstLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CharToOemW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "pSrc", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 1, "pDst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "CharUpperA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{ 0, "lpsz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "CharUpperBuffA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpsz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "cchLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CharUpperBuffW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 1, "cchLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CharUpperW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{ 0, "lpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "CheckDlgButton",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nIDButton", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "uCheck", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CheckMenuItem",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uIDCheckItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "uCheck", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CheckMenuRadioItem",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hmenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "first", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "last", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "check", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CheckRadioButton",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nIDFirstButton", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "nIDLastButton", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "nIDCheckButton", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ChildWindowFromPoint",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "Point", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
	}
	},
	{ "ChildWindowFromPointEx",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "pt", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
		{ 2, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ClientToScreen",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, INOUT },
	}
	},
	{ "ClipCursor",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "CloseClipboard",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "CloseDesktop",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDesktop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CloseGestureInfoHandle",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hGestureInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CloseTouchInputHandle",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hTouchInput", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CloseWindow",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CloseWindowStation",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWinSta", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CopyAcceleratorTableA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hAccelSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpAccelDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagACCEL", 48, UNK },
		{ 2, "cAccelEntries", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CopyAcceleratorTableW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hAccelSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpAccelDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagACCEL", 48, UNK },
		{ 2, "cAccelEntries", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CopyIcon",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hIcon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CopyImage",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CopyRect",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lprcDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 1, "lprcSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
	}
	},
	{ "CountClipboardFormats",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "CreateAcceleratorTableA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "paccel", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagACCEL", 48, UNK },
		{ 1, "cAccel", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateAcceleratorTableW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "paccel", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagACCEL", 48, UNK },
		{ 1, "cAccel", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateCaret",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hBitmap", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateCursor",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "xHotSpot", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "yHotSpot", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 4, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 5, "pvANDPlane", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{ 6, "pvXORPlane", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CreateDesktopA",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszDesktop", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 1, "lpszDevice", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "pDevmode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, UNK },
		{ 3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 5, "lpsa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
	}
	},
	{ "CreateDesktopExA",8,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszDesktop", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 1, "lpszDevice", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "pDevmode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, UNK },
		{ 3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 5, "lpsa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
		{ 6, "ulHeapSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 7, "pvoid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "CreateDesktopExW",8,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszDesktop", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 1, "lpszDevice", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "pDevmode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, UNK },
		{ 3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 5, "lpsa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
		{ 6, "ulHeapSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 7, "pvoid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "CreateDesktopW",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszDesktop", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 1, "lpszDevice", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "pDevmode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, UNK },
		{ 3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 5, "lpsa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
	}
	},
	{ "CreateDialogIndirectParamA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DLGTEMPLATE", 144, UNK },
		{ 2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 4, "dwInitParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateDialogIndirectParamAorW",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DLGTEMPLATE", 144, UNK },
		{ 2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 4, "lParamInit", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateDialogIndirectParamW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DLGTEMPLATE", 144, UNK },
		{ 2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 4, "dwInitParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateDialogParamA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpTemplateName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 4, "dwInitParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateDialogParamW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpTemplateName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 4, "dwInitParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateIcon",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "cPlanes", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{ 4, "cBitsPixel", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{ 5, "lpbANDbits", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 6, "lpbXORbits", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CreateIconFromResource",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "presbits", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 1, "dwResSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "fIcon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "dwVer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateIconFromResourceEx",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "presbits", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "dwResSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "fIcon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "dwVer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "cxDesired", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 5, "cyDesired", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 6, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateIconIndirect",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "piconinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ICONINFO", 160, IN },
	}
	},
	{ "CreateMDIWindowA",10,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpClassName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "lpWindowName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "dwStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 6, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 7, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 8, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 9, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateMDIWindowW",10,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 1, "lpWindowName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "dwStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 6, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 7, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 8, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 9, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateMenu",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "CreatePopupMenu",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "CreateWindowExA",12,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "dwExStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpClassName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "lpWindowName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 3, "dwStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 6, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 7, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 8, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 9, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 10, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 11, "lpParam", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "CreateWindowExW",12,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "dwExStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "lpWindowName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 3, "dwStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 6, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 7, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 8, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 9, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 10, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 11, "lpParam", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "CreateWindowStationA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpwinsta", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "lpsa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
	}
	},
	{ "CreateWindowStationW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpwinsta", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "lpsa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
	}
	},
	{ "DdeAbandonTransaction",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hConv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "idTransaction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeAccessData",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{ 0, "hData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pcbDataSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "DdeAddData",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pSrc", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 2, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "cbOff", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeClientTransaction",8,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 1, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "hConv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "hszItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "wFmt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 5, "wType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 6, "dwTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 7, "pdwResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "DdeCmpStringHandles",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hsz1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hsz2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeConnect",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hszService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "hszTopic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "pCC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCONVCONTEXT", 288, IN },
	}
	},
	{ "DdeConnectList",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hszService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "hszTopic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "hConvList", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "pCC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCONVCONTEXT", 288, IN },
	}
	},
	{ "DdeCreateDataHandle",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pSrc", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 2, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "cbOff", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "hszItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 5, "wFmt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 6, "afCmd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeCreateStringHandleA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "psz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "iCodePage", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DdeCreateStringHandleW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "iCodePage", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DdeDisconnect",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hConv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DdeDisconnectList",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hConvList", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeEnableCallback",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hConv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "wCmd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeFreeDataHandle",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DdeFreeStringHandle",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hsz", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DdeGetData",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pDst", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{ 2, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "cbOff", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeGetLastError",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeImpersonateClient",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hConv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeInitializeA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pidInst", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 1, "pfnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 2, "afCmd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "ulRes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DdeInitializeW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pidInst", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 1, "pfnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 2, "afCmd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "ulRes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DdeKeepStringHandle",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hsz", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DdeNameService",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hsz1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "hsz2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "afCmd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdePostAdvise",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hszTopic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "hszItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeQueryConvInfo",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hConv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "idTransaction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "pConvInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCONVINFO", 768, INOUT },
	}
	},
	{ "DdeQueryNextServer",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hConvList", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hConvPrev", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeQueryStringA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hsz", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "psz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 3, "cchMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "iCodePage", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DdeQueryStringW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hsz", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 3, "cchMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "iCodePage", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DdeReconnect",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hConv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeSetQualityOfService",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwndClient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pqosNew", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_QUALITY_OF_SERVICE", 96, IN },
		{ 2, "pqosPrev", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_QUALITY_OF_SERVICE", 96, OUT },
	}
	},
	{ "DdeSetUserHandle",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hConv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "id", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "hUser", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeUnaccessData",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeUninitialize",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DefDlgProcA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DefDlgProcW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DeferWindowPos",8,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWinPosInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "hWndInsertAfter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 6, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 7, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DefFrameProcA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hWndMDIClient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DefFrameProcW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hWndMDIClient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DefMDIChildProcA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DefMDIChildProcW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DefRawInputProc",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "paRawInput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagRAWINPUT", 320, IN },
		{ 1, "nInput", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "cbSizeHeader", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DefWindowProcA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DefWindowProcW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DeleteMenu",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeregisterShellHookWindow",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DestroyAcceleratorTable",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hAccel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DestroyCaret",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "DestroyCursor",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hCursor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DestroyIcon",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hIcon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DestroyMenu",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DestroyWindow",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DialogBoxIndirectParamA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hDialogTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DLGTEMPLATE", 144, UNK },
		{ 2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 4, "dwInitParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DialogBoxIndirectParamAorW",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DLGTEMPLATE", 144, UNK },
		{ 2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 4, "lParamInit", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DialogBoxIndirectParamW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hDialogTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DLGTEMPLATE", 144, UNK },
		{ 2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 4, "dwInitParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DialogBoxParamA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpTemplateName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 4, "dwInitParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DialogBoxParamW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpTemplateName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 4, "dwInitParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DisableProcessWindowsGhosting",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
	}
	},
	{ "DispatchMessageA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, UNK },
	}
	},
	{ "DispatchMessageW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, UNK },
	}
	},
	{ "DisplayConfigGetDeviceInfo",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "requestPacket", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DISPLAYCONFIG_DEVICE_INFO_HEADER", 160, UNK },
	}
	},
	{ "DisplayConfigSetDeviceInfo",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "setPacket", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DISPLAYCONFIG_DEVICE_INFO_HEADER", 160, UNK },
	}
	},
	{ "DlgDirListA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpPathSpec", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "nIDListBox", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "nIDStaticPath", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "uFileType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DlgDirListComboBoxA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpPathSpec", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "nIDComboBox", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "nIDStaticPath", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "uFiletype", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DlgDirListComboBoxW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpPathSpec", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "nIDComboBox", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "nIDStaticPath", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "uFiletype", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DlgDirListW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpPathSpec", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "nIDListBox", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "nIDStaticPath", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "uFileType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DlgDirSelectComboBoxExA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwndDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "cchOut", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "idComboBox", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DlgDirSelectComboBoxExW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwndDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "cchOut", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "idComboBox", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DlgDirSelectExA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwndDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "chCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "idListBox", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DlgDirSelectExW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwndDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "chCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "idListBox", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DragDetect",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pt", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
	}
	},
	{ "DragObject",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hwndFrom", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "fmt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "data", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "hcur", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DrawAnimatedRects",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "idAni", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "lprcFrom", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 3, "lprcTo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
	}
	},
	{ "DrawCaption",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 3, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DrawEdge",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "qrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{ 2, "edge", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "grfFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawFocusRect",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "DrawFrameControl",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DrawIcon",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "hIcon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawIconEx",9,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "xLeft", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "yTop", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "hIcon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "cxWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 5, "cyWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 6, "istepIfAniCur", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 7, "hbrFlickerFreeDraw", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 8, "diFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawMenuBar",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawStateA",10,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hbrFore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "qfnCallBack", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 3, "lData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 4, "wData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 5, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 6, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 7, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 8, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 9, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DrawStateW",10,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hbrFore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "qfnCallBack", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 3, "lData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 4, "wData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 5, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 6, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 7, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 8, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 9, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DrawTextA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpchText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "cchText", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 4, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DrawTextExA",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpchText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{ 2, "cchText", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{ 4, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 5, "lpdtp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDRAWTEXTPARAMS", 160, UNK },
	}
	},
	{ "DrawTextExW",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpchText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{ 2, "cchText", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{ 4, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 5, "lpdtp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDRAWTEXTPARAMS", 160, UNK },
	}
	},
	{ "DrawTextW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpchText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "cchText", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 4, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "EmptyClipboard",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "EnableMenuItem",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uIDEnableItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "uEnable", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnableScrollBar",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "wSBflags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wArrows", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "EnableWindow",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "bEnable", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EndDeferWindowPos",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWinPosInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EndDialog",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nResult", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EndMenu",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "EndPaint",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpPaint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPAINTSTRUCT", 512, IN },
	}
	},
	{ "EnumChildWindows",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{ 2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumClipboardFormats",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumDesktopsA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwinsta", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{ 2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumDesktopsW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwinsta", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{ 2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumDesktopWindows",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDesktop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{ 2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumDisplayDevicesA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpDevice", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "iDevNum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpDisplayDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DISPLAY_DEVICEA", 3392, UNK },
		{ 3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "EnumDisplayDevicesW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpDevice", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 1, "iDevNum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpDisplayDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DISPLAY_DEVICEW", 6720, UNK },
		{ 3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "EnumDisplayMonitors",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lprcClip", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 2, "lpfnEnum", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 3, "dwData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "EnumDisplaySettingsA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszDeviceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 1, "iModeNum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "lpDevMode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, OUT },
	}
	},
	{ "EnumDisplaySettingsExA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszDeviceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 1, "iModeNum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "lpDevMode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, OUT },
		{ 3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumDisplaySettingsExW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszDeviceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 1, "iModeNum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "lpDevMode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, OUT },
		{ 3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumDisplaySettingsW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszDeviceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 1, "iModeNum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "lpDevMode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, OUT },
	}
	},
	{ "EnumPropsA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
	}
	},
	{ "EnumPropsExA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "EnumPropsExW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "EnumPropsW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
	}
	},
	{ "EnumThreadWindows",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "dwThreadId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{ 2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumWindows",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{ 1, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumWindowStationsA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{ 1, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumWindowStationsW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{ 1, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EqualRect",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lprc1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{ 1, "lprc2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "ExcludeUpdateRgn",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ExitWindowsEx",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "dwReason", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FillRect",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 2, "hbr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "FindWindowA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpClassName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "lpWindowName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "FindWindowExA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hWndChildAfter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpszClass", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 3, "lpszWindow", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "FindWindowExW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hWndChildAfter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpszClass", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 3, "lpszWindow", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "FindWindowW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 1, "lpWindowName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "FlashWindow",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "bInvert", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FlashWindowEx",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "pfwi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FLASHWINFO", 160, IN },
	}
	},
	{ "FrameRect",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{ 2, "hbr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FreeDDElParam",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetActiveWindow",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetAltTabInfoA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "iItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "pati", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagALTTABINFO", 320, UNK },
		{ 3, "pszItemText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 4, "cchItemText", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetAltTabInfoW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "iItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "pati", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagALTTABINFO", 320, UNK },
		{ 3, "pszItemText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 4, "cchItemText", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetAncestor",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "gaFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetAsyncKeyState",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedWord, 0, 2, OUT },
		{ 0, "vKey", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCapture",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetCaretBlinkTime",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetCaretPos",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, OUT },
	}
	},
	{ "GetClassInfoA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpClassName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "lpWndClass", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWNDCLASSA", 320, UNK },
	}
	},
	{ "GetClassInfoExA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpszClass", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "lpwcx", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWNDCLASSEXA", 384, UNK },
	}
	},
	{ "GetClassInfoExW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpszClass", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "lpwcx", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWNDCLASSEXW", 384, UNK },
	}
	},
	{ "GetClassInfoW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "lpWndClass", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWNDCLASSW", 320, UNK },
	}
	},
	{ "GetClassLongA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetClassLongW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetClassNameA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpClassName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "nMaxCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetClassNameW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "nMaxCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetClassWord",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetClientRect",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, OUT },
	}
	},
	{ "GetClipboardData",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "uFormat", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetClipboardFormatNameA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpszFormatName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "cchMaxCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetClipboardFormatNameW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpszFormatName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "cchMaxCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetClipboardOwner",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetClipboardSequenceNumber",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetClipboardViewer",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetClipCursor",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, OUT },
	}
	},
	{ "GetComboBoxInfo",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwndCombo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pcbi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCOMBOBOXINFO", 416, OUT },
	}
	},
	{ "GetCursor",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetCursorInfo",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "pci", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCURSORINFO", 160, OUT },
	}
	},
	{ "GetCursorPos",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, OUT },
	}
	},
	{ "GetDC",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetDCEx",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hrgnClip", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDesktopWindow",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetDialogBaseUnits",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetDisplayConfigBufferSizes",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "numPathArrayElements", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 2, "numModeInfoArrayElements", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetDlgCtrlID",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetDlgItem",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDlgItemInt",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "lpTranslated", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{ 3, "bSigned", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDlgItemTextA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 3, "cchMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetDlgItemTextW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 3, "cchMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetDoubleClickTime",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetFocus",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetForegroundWindow",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetGestureConfig",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "pcIDs", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 4, "pGestureConfig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagGESTURECONFIG", 96, UNK },
		{ 5, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetGestureExtraArgs",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hGestureInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "cbExtraArgs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "pExtraArgs", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "GetGestureInfo",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hGestureInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "pGestureInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagGESTUREINFO", 384, UNK },
	}
	},
	{ "GetGuiResources",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uiFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetGUIThreadInfo",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "idThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pgui", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagGUITHREADINFO", 384, UNK },
	}
	},
	{ "GetIconInfo",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hIcon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "piconinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ICONINFO", 160, UNK },
	}
	},
	{ "GetIconInfoExA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hicon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "piconinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ICONINFOEXA", 4384, UNK },
	}
	},
	{ "GetIconInfoExW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hicon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "piconinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ICONINFOEXW", 8544, UNK },
	}
	},
	{ "GetInputState",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetKBCodePage",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetKeyboardLayout",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "idThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetKeyboardLayoutList",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "nBuff", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 1, "lpList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetKeyboardLayoutNameA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "pwszKLID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "GetKeyboardLayoutNameW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "pwszKLID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "GetKeyboardState",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpKeyState", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetKeyboardType",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "nTypeFlag", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetKeyNameTextA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "cchSize", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetKeyNameTextW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "cchSize", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetKeyState",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedWord, 0, 2, OUT },
		{ 0, "nVirtKey", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetLastActivePopup",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetLastInputInfo",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "plii", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLASTINPUTINFO", 64, OUT },
	}
	},
	{ "GetLayeredWindowAttributes",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pcrKey", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{ 2, "pbAlpha", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, OUT },
		{ 3, "pdwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetListBoxInfo",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMenu",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMenuBarInfo",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "idObject", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "idItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "pmbi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUBARINFO", 256, UNK },
	}
	},
	{ "GetMenuCheckMarkDimensions",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetMenuContextHelpId",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetMenuDefaultItem",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "fByPos", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "gmdiFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMenuInfo",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUINFO", 224, UNK },
	}
	},
	{ "GetMenuItemCount",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMenuItemID",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nPos", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMenuItemInfoA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hmenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "item", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "fByPosition", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lpmii", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUITEMINFOA", 384, UNK },
	}
	},
	{ "GetMenuItemInfoW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hmenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "item", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "fByPosition", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lpmii", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUITEMINFOW", 384, UNK },
	}
	},
	{ "GetMenuItemRect",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "uItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "lprcItem", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, OUT },
	}
	},
	{ "GetMenuState",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMenuStringA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uIDItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 3, "cchMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetMenuStringW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uIDItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 3, "cchMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetMessageA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, UNK },
		{ 1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wMsgFilterMin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "wMsgFilterMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetMessageExtraInfo",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetMessagePos",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetMessageTime",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetMessageW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, UNK },
		{ 1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wMsgFilterMin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "wMsgFilterMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetMonitorInfoA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMONITORINFO", 320, OUT },
	}
	},
	{ "GetMonitorInfoW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMONITORINFO", 320, OUT },
	}
	},
	{ "GetMouseMovePointsEx",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMOUSEMOVEPOINT", 128, IN },
		{ 2, "lpptBuf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMOUSEMOVEPOINT", 128, IN },
		{ 3, "nBufPoints", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 4, "resolution", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetNextDlgGroupItem",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hCtl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "bPrevious", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetNextDlgTabItem",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hCtl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "bPrevious", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetOpenClipboardWindow",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetParent",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetPhysicalCursorPos",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, OUT },
	}
	},
	{ "GetPriorityClipboardFormat",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "paFormatPriorityList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{ 1, "cFormats", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetProcessDefaultLayout",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "pdwDefaultLayout", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetProcessWindowStation",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetPropA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "GetPropW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "GetQueueStatus",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetRawInputBuffer",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRAWINPUT", 320, OUT },
		{ 1, "pcbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{ 2, "cbSizeHeader", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetRawInputData",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hRawInput", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uiCommand", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "pData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{ 3, "pcbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{ 4, "cbSizeHeader", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GetRawInputDeviceInfoA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hDevice", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uiCommand", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "pData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{ 3, "pcbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetRawInputDeviceInfoW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hDevice", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uiCommand", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "pData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{ 3, "pcbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetRawInputDeviceList",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pRawInputDeviceList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRAWINPUTDEVICELIST", 64, OUT },
		{ 1, "puiNumDevices", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{ 2, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetRegisteredRawInputDevices",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pRawInputDevices", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRAWINPUTDEVICE", 96, OUT },
		{ 1, "puiNumDevices", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{ 2, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetScrollBarInfo",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "idObject", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "psbi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSCROLLBARINFO", 480, UNK },
	}
	},
	{ "GetScrollInfo",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nBar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "lpsi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSCROLLINFO", 224, UNK },
	}
	},
	{ "GetScrollPos",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nBar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetScrollRange",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nBar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "lpMinPos", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 3, "lpMaxPos", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetShellWindow",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GetSubMenu",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nPos", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetSysColor",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetSysColorBrush",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetSystemMenu",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "bRevert", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetSystemMetrics",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTabbedTextExtentA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 2, "chCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "nTabPositions", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 4, "lpnTabStopPositions", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetTabbedTextExtentW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 2, "chCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "nTabPositions", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 4, "lpnTabStopPositions", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetThreadDesktop",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "dwThreadId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTitleBarInfo",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pti", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagTITLEBARINFO", 352, OUT },
	}
	},
	{ "GetTopWindow",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTouchInputInfo",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hTouchInput", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "cInputs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "pInputs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagTOUCHINPUT", 320, UNK },
		{ 3, "cbSize", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetUpdatedClipboardFormats",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpuiFormats", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{ 1, "cFormats", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "pcFormatsOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetUpdateRect",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, OUT },
		{ 2, "bErase", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetUpdateRgn",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hRgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "bErase", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetUserObjectInformationA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hObj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "pvInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{ 3, "nLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "lpnLengthNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetUserObjectInformationW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hObj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "pvInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{ 3, "nLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "lpnLengthNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetUserObjectSecurity",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hObj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pSIRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{ 2, "pSID", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{ 3, "nLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "lpnLengthNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetWindow",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uCmd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindowContextHelpId",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetWindowDC",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindowDisplayAffinity",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pdwAffinity", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetWindowInfo",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pwi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWINDOWINFO", 480, OUT },
	}
	},
	{ "GetWindowLongA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetWindowLongW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetWindowModuleFileNameA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "pszFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "cchFileNameMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetWindowModuleFileNameW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "pszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "cchFileNameMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetWindowPlacement",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpwndpl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWINDOWPLACEMENT", 352, OUT },
	}
	},
	{ "GetWindowRect",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, OUT },
	}
	},
	{ "GetWindowRgn",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hRgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindowRgnBox",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, OUT },
	}
	},
	{ "GetWindowTextA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "nMaxCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetWindowTextLengthA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetWindowTextLengthW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetWindowTextW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "nMaxCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetWindowThreadProcessId",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpdwProcessId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetWindowWord",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GrayStringA",9,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hBrush", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "lpOutputFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{ 3, "lpData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 4, "nCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 5, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 6, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 7, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 8, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GrayStringW",9,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hBrush", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "lpOutputFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{ 3, "lpData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 4, "nCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 5, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 6, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 7, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 8, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HideCaret",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HiliteMenuItem",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "uIDHiliteItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "uHilite", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImpersonateDdeClientWindow",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWndClient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hWndServer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IMPGetIMEA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagIMEPROA", 1440, UNK },
	}
	},
	{ "IMPGetIMEW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagIMEPROW", 2720, UNK },
	}
	},
	{ "IMPQueryIMEA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagIMEPROA", 1440, UNK },
	}
	},
	{ "IMPQueryIMEW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagIMEPROW", 2720, UNK },
	}
	},
	{ "IMPSetIMEA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagIMEPROA", 1440, UNK },
	}
	},
	{ "IMPSetIMEW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagIMEPROW", 2720, UNK },
	}
	},
	{ "InflateRect",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{ 1, "dx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "dy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InSendMessage",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "InSendMessageEx",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "InsertMenuA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "uIDNewItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lpNewItem", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "InsertMenuItemA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hmenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "item", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "fByPosition", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lpmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUITEMINFOA", 384, UNK },
	}
	},
	{ "InsertMenuItemW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hmenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "item", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "fByPosition", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lpmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUITEMINFOW", 384, UNK },
	}
	},
	{ "InsertMenuW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "uIDNewItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lpNewItem", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "InternalGetWindowText",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "cchMaxCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "IntersectRect",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lprcDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, OUT },
		{ 1, "lprcSrc1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{ 2, "lprcSrc2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "InvalidateRect",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 2, "bErase", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "InvalidateRgn",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hRgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "bErase", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InvertRect",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "IsCharAlphaA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "ch", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
	}
	},
	{ "IsCharAlphaNumericA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "ch", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
	}
	},
	{ "IsCharAlphaNumericW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "ch", NKT_DBFUNDTYPE_WideChar, 0, 2, UNK },
	}
	},
	{ "IsCharAlphaW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "ch", NKT_DBFUNDTYPE_WideChar, 0, 2, UNK },
	}
	},
	{ "IsCharLowerA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "ch", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
	}
	},
	{ "IsCharLowerW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "ch", NKT_DBFUNDTYPE_WideChar, 0, 2, UNK },
	}
	},
	{ "IsCharUpperA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "ch", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
	}
	},
	{ "IsCharUpperW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "ch", NKT_DBFUNDTYPE_WideChar, 0, 2, UNK },
	}
	},
	{ "IsChild",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsClipboardFormatAvailable",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsDialogMessageA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, UNK },
	}
	},
	{ "IsDialogMessageW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, UNK },
	}
	},
	{ "IsDlgButtonChecked",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nIDButton", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsGUIThread",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "bConvert", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsHungAppWindow",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsIconic",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsMenu",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsProcessDPIAware",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "IsRectEmpty",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "IsTouchWindow",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "pulFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "IsWindow",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsWindowEnabled",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsWindowUnicode",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsWindowVisible",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsWinEventHookInstalled",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsWow64Message",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "IsZoomed",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "keybd_event",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{ 0, "bVk", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{ 1, "bScan", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, UNK },
		{ 2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "dwExtraInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "KillTimer",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uIDEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LoadAcceleratorsA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpTableName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "LoadAcceleratorsW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpTableName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "LoadBitmapA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpBitmapName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "LoadBitmapW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpBitmapName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "LoadCursorA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpCursorName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "LoadCursorFromFileA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "LoadCursorFromFileW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "LoadCursorW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpCursorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "LoadIconA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpIconName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "LoadIconW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpIconName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "LoadImageA",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "fuLoad", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "LoadImageW",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "fuLoad", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "LoadKeyboardLayoutA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pwszKLID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "LoadKeyboardLayoutW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pwszKLID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "LoadMenuA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpMenuName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "LoadMenuIndirectA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpMenuTemplate", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "LoadMenuIndirectW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpMenuTemplate", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "LoadMenuW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpMenuName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "LoadStringA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 3, "cchBufferMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "LoadStringW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 3, "cchBufferMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "LockSetForegroundWindow",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "uLockCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LockWindowUpdate",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWndLock", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LockWorkStation",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "LogicalToPhysicalPoint",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, INOUT },
	}
	},
	{ "LookupIconIdFromDirectory",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "presbits", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 1, "fIcon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LookupIconIdFromDirectoryEx",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "presbits", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 1, "fIcon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "cxDesired", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "cyDesired", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 4, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MapDialogRect",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
	}
	},
	{ "MapVirtualKeyA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "uCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uMapType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "MapVirtualKeyExA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "uCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uMapType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "dwhkl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "MapVirtualKeyExW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "uCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uMapType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "dwhkl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "MapVirtualKeyW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "uCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uMapType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "MapWindowPoints",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWndFrom", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hWndTo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "lpPoints", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, INOUT },
		{ 3, "cPoints", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MenuItemFromPoint",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "ptScreen", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
	}
	},
	{ "MessageBeep",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "uType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MessageBoxA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "lpCaption", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 3, "uType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "MessageBoxExA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "lpCaption", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 3, "uType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "wLanguageId", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
	}
	},
	{ "MessageBoxExW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "lpCaption", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 3, "uType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "wLanguageId", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
	}
	},
	{ "MessageBoxIndirectA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpmbp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSGBOXPARAMSA", 320, UNK },
	}
	},
	{ "MessageBoxIndirectW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpmbp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSGBOXPARAMSW", 320, UNK },
	}
	},
	{ "MessageBoxW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "lpCaption", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 3, "uType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ModifyMenuA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMnu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "uIDNewItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lpNewItem", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "ModifyMenuW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMnu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "uPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "uIDNewItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lpNewItem", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "MonitorFromPoint",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pt", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
		{ 1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MonitorFromRect",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{ 1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MonitorFromWindow",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mouse_event",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{ 0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "dx", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "dy", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "dwData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "dwExtraInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "MoveWindow",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 4, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 5, "bRepaint", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MsgWaitForMultipleObjects",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "nCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pHandles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{ 2, "fWaitAll", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "dwMilliseconds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "dwWakeMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MsgWaitForMultipleObjectsEx",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "nCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pHandles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{ 2, "dwMilliseconds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "dwWakeMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NotifyWinEvent",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{ 0, "event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "idObject", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "idChild", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "OemKeyScan",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "wOemChar", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "OemToCharA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "pSrc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "pDst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "OemToCharBuffA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszSrc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "lpszDst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "cchDstLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "OemToCharBuffW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszSrc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "lpszDst", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "cchDstLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "OemToCharW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "pSrc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "pDst", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "OffsetRect",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{ 1, "dx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "dy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenClipboard",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWndNewOwner", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenDesktopA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszDesktop", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "fInherit", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenDesktopW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszDesktop", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "fInherit", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenIcon",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenInputDesktop",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "fInherit", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenWindowStationA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszWinSta", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 1, "fInherit", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenWindowStationW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszWinSta", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 1, "fInherit", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PackDDElParam",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uiLo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "uiHi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PaintDesktop",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PeekMessageA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, UNK },
		{ 1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wMsgFilterMin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "wMsgFilterMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "wRemoveMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PeekMessageW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, UNK },
		{ 1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wMsgFilterMin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "wMsgFilterMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "wRemoveMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PhysicalToLogicalPoint",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, INOUT },
	}
	},
	{ "PostMessageA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PostMessageW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PostQuitMessage",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{ 0, "nExitCode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PostThreadMessageA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "idThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PostThreadMessageW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "idThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PrintWindow",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hdcBlt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "nFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PrivateExtractIconsA",8,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "szFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "nIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "cxIcon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "cyIcon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "phicon", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 5, "piconid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 6, "nIcons", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 7, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PrivateExtractIconsW",8,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "szFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 1, "nIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "cxIcon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "cyIcon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "phicon", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 5, "piconid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 6, "nIcons", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 7, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PtInRect",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{ 1, "pt", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
	}
	},
	{ "QueryDisplayConfig",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "numPathArrayElements", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 2, "pathArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DISPLAYCONFIG_PATH_INFO", 704, UNK },
		{ 3, "numModeInfoArrayElements", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 4, "modeInfoArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DISPLAYCONFIG_MODE_INFO", 512, UNK },
		{ 5, "currentTopologyId", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "DISPLAYCONFIG_TOPOLOGY_ID", 32, UNK },
	}
	},
	{ "RealChildWindowFromPoint",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "ptParentClientCoords", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
	}
	},
	{ "RealGetWindowClassA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "ptszClassName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "cchClassNameMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "RealGetWindowClassW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "ptszClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "cchClassNameMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "RedrawWindow",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lprcUpdate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{ 2, "hrgnUpdate", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegisterClassA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, OUT },
		{ 0, "lpWndClass", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWNDCLASSA", 320, UNK },
	}
	},
	{ "RegisterClassExA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, OUT },
		{ 0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWNDCLASSEXA", 384, UNK },
	}
	},
	{ "RegisterClassExW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, OUT },
		{ 0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWNDCLASSEXW", 384, UNK },
	}
	},
	{ "RegisterClassW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, OUT },
		{ 0, "lpWndClass", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWNDCLASSW", 320, UNK },
	}
	},
	{ "RegisterClipboardFormatA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszFormat", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "RegisterClipboardFormatW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpszFormat", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "RegisterDeviceNotificationA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{ 0, "hRecipient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "NotificationFilter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{ 2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegisterDeviceNotificationW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{ 0, "hRecipient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "NotificationFilter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{ 2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegisterHotKey",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "id", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "fsModifiers", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "vk", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "RegisterPowerSettingNotification",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{ 0, "hRecipient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "PowerSettingGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{ 2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegisterRawInputDevices",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "pRawInputDevices", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRAWINPUTDEVICE", 96, IN },
		{ 1, "uiNumDevices", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegisterShellHookWindow",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegisterTouchWindow",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "ulFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "RegisterWindowMessageA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "RegisterWindowMessageW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "ReleaseCapture",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "ReleaseDC",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RemoveClipboardFormatListener",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RemoveMenu",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RemovePropA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "RemovePropW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "ReplyMessage",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lResult", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ReuseDDElParam",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 1, "msgIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "msgOut", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "uiLo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "uiHi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ScreenToClient",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
	}
	},
	{ "ScrollDC",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "dx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "dy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lprcScroll", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 4, "lprcClip", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 5, "hrgnUpdate", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 6, "lprcUpdate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
	}
	},
	{ "ScrollWindow",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "XAmount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "YAmount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 4, "lpClipRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
	}
	},
	{ "ScrollWindowEx",8,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "dx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "dy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "prcScroll", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{ 4, "prcClip", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{ 5, "hrgnUpdate", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 6, "prcUpdate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, OUT },
		{ 7, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SendDlgItemMessageA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SendDlgItemMessageW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SendIMEMessageExA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SendIMEMessageExW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SendInput",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "cInputs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "pInputs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagINPUT", 224, IN },
		{ 2, "cbSize", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SendMessageA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SendMessageCallbackA",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "lpResultCallBack", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 5, "dwData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SendMessageCallbackW",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "lpResultCallBack", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 5, "dwData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SendMessageTimeoutA",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "fuFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 5, "uTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 6, "lpdwResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "SendMessageTimeoutW",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "fuFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 5, "uTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 6, "lpdwResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "SendMessageW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SendNotifyMessageA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SendNotifyMessageW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetActiveWindow",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetCapture",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetCaretBlinkTime",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "uMSeconds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetCaretPos",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 1, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetClassLongA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "dwNewLong", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetClassLongW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "dwNewLong", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetClassWord",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "wNewWord", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "SetClipboardData",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "uFormat", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hMem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetClipboardViewer",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWndNewViewer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetCursor",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hCursor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetCursorPos",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 1, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetDebugErrorLevel",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{ 0, "dwLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetDisplayConfig",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "numPathArrayElements", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "pathArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DISPLAYCONFIG_PATH_INFO", 704, UNK },
		{ 2, "numModeInfoArrayElements", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "modeInfoArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DISPLAYCONFIG_MODE_INFO", 512, UNK },
		{ 4, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetDlgItemInt",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "uValue", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "bSigned", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetDlgItemTextA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "SetDlgItemTextW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SetDoubleClickTime",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetFocus",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetForegroundWindow",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetGestureConfig",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "cIDs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "pGestureConfig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagGESTURECONFIG", 96, UNK },
		{ 4, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetKeyboardState",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpKeyState", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SetLastErrorEx",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{ 0, "dwErrCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "dwType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetLayeredWindowAttributes",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "crKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "bAlpha", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{ 3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetMenu",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetMenuContextHelpId",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetMenuDefaultItem",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "fByPos", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetMenuInfo",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUINFO", 224, UNK },
	}
	},
	{ "SetMenuItemBitmaps",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "hBitmapUnchecked", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "hBitmapChecked", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetMenuItemInfoA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hmenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "item", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "fByPositon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lpmii", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUITEMINFOA", 384, UNK },
	}
	},
	{ "SetMenuItemInfoW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hmenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "item", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "fByPositon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lpmii", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUITEMINFOW", 384, UNK },
	}
	},
	{ "SetMessageExtraInfo",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetMessageQueue",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "cMessagesMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetParent",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWndChild", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hWndNewParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetPhysicalCursorPos",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 1, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetProcessDefaultLayout",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "dwDefaultLayout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetProcessDPIAware",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "SetProcessWindowStation",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWinSta", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetPropA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "hData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetPropW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "hData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetRect",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 1, "xLeft", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "yTop", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "xRight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "yBottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetRectEmpty",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, OUT },
	}
	},
	{ "SetScrollInfo",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nBar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "lpsi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSCROLLINFO", 224, UNK },
		{ 3, "redraw", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetScrollPos",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nBar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "nPos", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "bRedraw", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetScrollRange",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nBar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "nMinPos", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "nMaxPos", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "bRedraw", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetSysColors",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "cElements", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 1, "lpaElements", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{ 2, "lpaRgbValues", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SetSystemCursor",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hcur", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "id", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetThreadDesktop",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDesktop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetTimer",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nIDEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "uElapse", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "lpTimerFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "SetUserObjectInformationA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hObj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "pvInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{ 3, "nLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetUserObjectInformationW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hObj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "pvInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{ 3, "nLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetUserObjectSecurity",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hObj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pSIRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{ 2, "pSID", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SetWindowContextHelpId",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetWindowDisplayAffinity",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "dwAffinity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetWindowLongA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "dwNewLong", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetWindowLongW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "dwNewLong", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetWindowPlacement",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpwndpl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWINDOWPLACEMENT", 352, IN },
	}
	},
	{ "SetWindowPos",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hWndInsertAfter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 6, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetWindowRgn",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hRgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "bRedraw", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetWindowsHookA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "nFilterType", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 1, "pfnFilterProc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
	}
	},
	{ "SetWindowsHookExA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "idHook", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 1, "lpfn", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 2, "hmod", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "dwThreadId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetWindowsHookExW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "idHook", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 1, "lpfn", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 2, "hmod", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "dwThreadId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetWindowsHookW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "nFilterType", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 1, "pfnFilterProc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
	}
	},
	{ "SetWindowTextA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "SetWindowTextW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SetWindowWord",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "wNewWord", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, UNK },
	}
	},
	{ "SetWinEventHook",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "eventMin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "eventMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "hmodWinEventProc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "pfnWinEventProc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 4, "idProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 5, "idThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 6, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShowCaret",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShowCursor",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "bShow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShowOwnedPopups",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "fShow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShowScrollBar",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "wBar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "bShow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ShowWindow",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nCmdShow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShowWindowAsync",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nCmdShow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShutdownBlockReasonCreate",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pwszReason", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ShutdownBlockReasonDestroy",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShutdownBlockReasonQuery",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pwszBuff", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{ 2, "pcchBuff", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SoundSentry",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "SubtractRect",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lprcDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, OUT },
		{ 1, "lprcSrc1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{ 2, "lprcSrc2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "SwapMouseButton",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "fSwap", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SwitchDesktop",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hDesktop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SwitchToThisWindow",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "fUnknown", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SystemParametersInfoA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "uiAction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uiParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "pvParam", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{ 3, "fWinIni", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SystemParametersInfoW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "uiAction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uiParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "pvParam", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{ 3, "fWinIni", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TabbedTextOutA",8,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 4, "chCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "nTabPositions", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 6, "lpnTabStopPositions", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{ 7, "nTabOrigin", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TabbedTextOutW",8,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 4, "chCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "nTabPositions", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 6, "lpnTabStopPositions", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{ 7, "nTabOrigin", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TileWindows",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, OUT },
		{ 0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "wHow", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 3, "cKids", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 4, "lpKids", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "ToAscii",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "uVirtKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uScanCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "lpKeyState", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 3, "lpChar", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{ 4, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ToAsciiEx",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "uVirtKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uScanCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "lpKeyState", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 3, "lpChar", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{ 4, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 5, "dwhkl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ToUnicode",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "wVirtKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "wScanCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "lpKeyState", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 3, "pwszBuff", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{ 4, "cchBuff", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 5, "wFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ToUnicodeEx",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "wVirtKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "wScanCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "lpKeyState", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 3, "pwszBuff", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{ 4, "cchBuff", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 5, "wFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 6, "dwhkl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TrackMouseEvent",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpEventTrack", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagTRACKMOUSEEVENT", 128, UNK },
	}
	},
	{ "TrackPopupMenu",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "nReserved", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 6, "prcRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
	}
	},
	{ "TrackPopupMenuEx",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 5, "lptpm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagTPMPARAMS", 160, UNK },
	}
	},
	{ "TranslateAcceleratorA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hAccTable", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, UNK },
	}
	},
	{ "TranslateAcceleratorW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hAccTable", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, UNK },
	}
	},
	{ "TranslateMDISysAccel",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWndClient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
	}
	},
	{ "TranslateMessage",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
	}
	},
	{ "UnhookWindowsHook",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "nCode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 1, "pfnFilterProc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
	}
	},
	{ "UnhookWindowsHookEx",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hhk", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnhookWinEvent",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWinEventHook", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnionRect",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lprcDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, OUT },
		{ 1, "lprcSrc1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{ 2, "lprcSrc2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "UnloadKeyboardLayout",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hkl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnpackDDElParam",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "puiLo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{ 3, "puiHi", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "UnregisterClassA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpClassName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "UnregisterClassW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 1, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "UnregisterDeviceNotification",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "UnregisterHotKey",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "id", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnregisterPowerSettingNotification",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "UnregisterTouchWindow",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "UpdateLayeredWindow",9,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hdcDst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "pptDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{ 3, "psize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, IN },
		{ 4, "hdcSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 5, "pptSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{ 6, "crKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 7, "pblend", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_BLENDFUNCTION", 32, IN },
		{ 8, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UpdateLayeredWindowIndirect",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pULWInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagUPDATELAYEREDWINDOWINFO", 320, IN },
	}
	},
	{ "UpdateWindow",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UserHandleGrantAccess",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hUserHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hJob", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "bGrant", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ValidateRect",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "ValidateRgn",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hRgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VkKeyScanA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedWord, 0, 2, OUT },
		{ 0, "ch", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
	}
	},
	{ "VkKeyScanExA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedWord, 0, 2, OUT },
		{ 0, "ch", NKT_DBFUNDTYPE_AnsiChar, 0, 1, UNK },
		{ 1, "dwhkl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "VkKeyScanExW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedWord, 0, 2, OUT },
		{ 0, "ch", NKT_DBFUNDTYPE_WideChar, 0, 2, UNK },
		{ 1, "dwhkl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "VkKeyScanW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedWord, 0, 2, OUT },
		{ 0, "ch", NKT_DBFUNDTYPE_WideChar, 0, 2, UNK },
	}
	},
	{ "WaitForInputIdle",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "dwMilliseconds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "WaitMessage",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "WindowFromDC",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WindowFromPhysicalPoint",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "Point", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
	}
	},
	{ "WindowFromPoint",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "Point", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
	}
	},
	{ "WinHelpA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWndMain", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpszHelp", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "uCommand", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "dwData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "WinHelpW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hWndMain", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpszHelp", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "uCommand", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "dwData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "WINNLSEnableIME",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "WINNLSGetEnableStatus",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "WINNLSGetIMEHotkey",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "wsprintfA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "wsprintfW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 1, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "wvsprintfA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "arglist", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "wvsprintfW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 1, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "arglist", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
};
unsigned User32arraySize = (sizeof(User32_info) / sizeof(User32_info[0]));