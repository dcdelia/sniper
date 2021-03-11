// The following code was obtained using a slightly modified version
// of the Deviare parser from the PyREBox project. Credits:
// https://github.com/Cisco-Talos/pyrebox/blob/master/mw_monitor2/deviare_db_parser.py

#include "pyrebox.h"

libcall_info_t Gdi32_info[] = {
	{ "AbortDoc",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AbortPath",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AddFontMemResourceEx",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pFileView", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{ 1, "cjSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "pvResrved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{ 3, "pNumFonts", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "AddFontResourceA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "AddFontResourceExA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "fl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "res", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "AddFontResourceExW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 1, "fl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "res", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "AddFontResourceW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "AngleArc",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "r", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "StartAngle", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
		{ 5, "SweepAngle", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
	}
	},
	{ "AnimatePalette",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hPal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iStartIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "cEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "ppe", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPALETTEENTRY", 32, IN },
	}
	},
	{ "Arc",9,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "x1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "x2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "y2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "x3", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 6, "y3", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 7, "x4", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 8, "y4", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ArcTo",9,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "left", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "top", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "right", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "bottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "xr1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 6, "yr1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 7, "xr2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 8, "yr2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "BeginPath",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BitBlt",9,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "hdcSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 6, "x1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 7, "y1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 8, "rop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CancelDC",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CheckColorsInGamut",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpRGBTriple", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRGBTRIPLE", 24, UNK },
		{ 2, "dlpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{ 3, "nCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ChoosePixelFormat",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "ppfd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPIXELFORMATDESCRIPTOR", 320, UNK },
	}
	},
	{ "Chord",9,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "x2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "y2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "x3", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 6, "y3", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 7, "x4", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 8, "y4", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CloseEnhMetaFile",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CloseFigure",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CloseMetaFile",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ColorCorrectPalette",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hPal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "deFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "num", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ColorMatchToTarget",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hdcTarget", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "action", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CombineRgn",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hrgnDst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hrgnSrc1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "hrgnSrc2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "iMode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CombineTransform",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpxfOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagXFORM", 192, UNK },
		{ 1, "lpxf1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagXFORM", 192, UNK },
		{ 2, "lpxf2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagXFORM", 192, UNK },
	}
	},
	{ "CopyEnhMetaFileA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hEnh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "CopyEnhMetaFileW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hEnh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "CopyMetaFileA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "CopyMetaFileW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "CreateBitmap",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 1, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "nPlanes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "nBitCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lpBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "CreateBitmapIndirect",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pbm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAP", 192, UNK },
	}
	},
	{ "CreateBrushIndirect",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "plbrush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGBRUSH", 96, UNK },
	}
	},
	{ "CreateColorSpaceA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lplcs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEA", 2624, UNK },
	}
	},
	{ "CreateColorSpaceW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lplcs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEW", 4704, UNK },
	}
	},
	{ "CreateCompatibleBitmap",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateCompatibleDC",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateDCA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pwszDriver", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "pwszDevice", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "pszPort", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 3, "pdm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, UNK },
	}
	},
	{ "CreateDCW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pwszDriver", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 1, "pwszDevice", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "pszPort", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 3, "pdm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, UNK },
	}
	},
	{ "CreateDIBitmap",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pbmih", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, UNK },
		{ 2, "flInit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "pjBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{ 4, "pbmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, UNK },
		{ 5, "iUsage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateDIBPatternBrush",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "iUsage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateDIBPatternBrushPt",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpPackedDIB", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{ 1, "iUsage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateDIBSection",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pbmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, IN },
		{ 2, "usage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "ppvBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, OUT },
		{ 4, "hSection", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 5, "offset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateDiscardableBitmap",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateEllipticRgn",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "x1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 1, "y1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "x2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "y2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateEllipticRgnIndirect",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
	}
	},
	{ "CreateEnhMetaFileA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpFilename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 2, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 3, "lpDesc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "CreateEnhMetaFileW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpFilename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 2, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 3, "lpDesc", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "CreateFontA",14,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "cHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 1, "cWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "cEscapement", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "cOrientation", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "cWeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "bItalic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 6, "bUnderline", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 7, "bStrikeOut", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 8, "iCharSet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 9, "iOutPrecision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 10, "iClipPrecision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 11, "iQuality", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 12, "iPitchAndFamily", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 13, "pszFaceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "CreateFontIndirectA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lplf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGFONTA", 480, IN },
	}
	},
	{ "CreateFontIndirectExA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagENUMLOGFONTEXDVA", 2080, UNK },
	}
	},
	{ "CreateFontIndirectExW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagENUMLOGFONTEXDVW", 3360, UNK },
	}
	},
	{ "CreateFontIndirectW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lplf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGFONTW", 736, IN },
	}
	},
	{ "CreateFontW",14,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "cHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 1, "cWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "cEscapement", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "cOrientation", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "cWeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "bItalic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 6, "bUnderline", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 7, "bStrikeOut", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 8, "iCharSet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 9, "iOutPrecision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 10, "iClipPrecision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 11, "iQuality", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 12, "iPitchAndFamily", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 13, "pszFaceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "CreateHalftonePalette",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateHatchBrush",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "iHatch", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateICA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pszDriver", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "pszDevice", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "pszPort", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 3, "pdm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, UNK },
	}
	},
	{ "CreateICW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pszDriver", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 1, "pszDevice", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "pszPort", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 3, "pdm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, UNK },
	}
	},
	{ "CreateMetaFileA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pszFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "CreateMetaFileW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pszFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "CreatePalette",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "plpal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGPALETTE", 64, UNK },
	}
	},
	{ "CreatePatternBrush",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hbm", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreatePen",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "iStyle", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 1, "cWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreatePenIndirect",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "plpen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGPEN", 128, UNK },
	}
	},
	{ "CreatePolygonRgn",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pptl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
		{ 1, "cPoint", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "iMode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreatePolyPolygonRgn",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "pptl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
		{ 1, "pc", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 2, "cPoly", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "iMode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateRectRgn",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "x1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 1, "y1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "x2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "y2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateRectRgnIndirect",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
	}
	},
	{ "CreateRoundRectRgn",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "x1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 1, "y1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "x2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "y2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "w", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "h", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "CreateScalableFontResourceA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "fdwHidden", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpszFont", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "lpszFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 3, "lpszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "CreateScalableFontResourceW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "fdwHidden", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpszFont", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "lpszFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 3, "lpszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "CreateSolidBrush",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DeleteColorSpace",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hcs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DeleteDC",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeleteEnhMetaFile",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hmf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DeleteMetaFile",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hmf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeleteObject",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "ho", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DescribePixelFormat",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "iPixelFormat", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "nBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "ppfd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPIXELFORMATDESCRIPTOR", 320, UNK },
	}
	},
	{ "DPtoLP",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
		{ 2, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "DrawEscape",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iEscape", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "cjIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lpIn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "Ellipse",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "left", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "top", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "right", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "bottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "EndDoc",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EndPage",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EndPath",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumEnhMetaFile",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hmf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "proc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 3, "param", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{ 4, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "EnumFontFamiliesA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpLogfont", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "lpProc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumFontFamiliesExA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpLogfont", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGFONTA", 480, IN },
		{ 2, "lpProc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "EnumFontFamiliesExW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpLogfont", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGFONTW", 736, IN },
		{ 2, "lpProc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "EnumFontFamiliesW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpLogfont", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "lpProc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumFontsA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpLogfont", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "lpProc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumFontsW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpLogfont", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "lpProc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumICMProfilesA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "proc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 2, "param", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "EnumICMProfilesW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "proc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 2, "param", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "EnumMetaFile",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hmf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "proc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 3, "param", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "EnumObjects",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "nType", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "lpFunc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "EqualRgn",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hrgn1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hrgn2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "Escape",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "iEscape", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "cjIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "pvIn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 4, "pvOut", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "ExcludeClipRect",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "left", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "top", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "right", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "bottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ExtCreatePen",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "iPenStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "cWidth", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "plbrush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGBRUSH", 96, UNK },
		{ 3, "cStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "pstyle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "ExtCreateRegion",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpx", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagXFORM", 192, UNK },
		{ 1, "nCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "lpData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RGNDATA", 288, UNK },
	}
	},
	{ "ExtEscape",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iEscape", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "cjInput", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lpInData", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 4, "cjOutput", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "lpOutData", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "ExtFloodFill",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ExtSelectClipRgn",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "mode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ExtTextOutA",8,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 5, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 6, "c", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 7, "lpDx", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "ExtTextOutW",8,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 5, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 6, "c", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 7, "lpDx", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FillPath",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FillRgn",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "hbr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FixBrushOrgEx",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "ptl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
	}
	},
	{ "FlattenPath",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FloodFill",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "FrameRgn",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "hbr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "w", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "h", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GdiAlphaBlend",11,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdcDest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "xoriginDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "yoriginDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "wDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "hDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "hdcSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 6, "xoriginSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 7, "yoriginSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 8, "wSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 9, "hSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 10, "ftn", NKT_DBOBJCLASS_Struct, "_BLENDFUNCTION", 32, UNK },
	}
	},
	{ "GdiComment",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GdiFlush",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GdiGetBatchLimit",0,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
	}
	},
	{ "GdiGradientFill",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "pVertex", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRIVERTEX", 128, UNK },
		{ 2, "nVertex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "pMesh", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{ 4, "nCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 5, "ulMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GdiSetBatchLimit",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "dw", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GdiTransparentBlt",11,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdcDest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "xoriginDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "yoriginDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "wDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 4, "hDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 5, "hdcSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 6, "xoriginSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 7, "yoriginSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 8, "wSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 9, "hSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 10, "crTransparent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetArcDirection",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetAspectRatioFilterEx",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpsize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, UNK },
	}
	},
	{ "GetBitmapBits",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "cb", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "lpvBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
	}
	},
	{ "GetBitmapDimensionEx",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpsize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, UNK },
	}
	},
	{ "GetBkColor",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetBkMode",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetBoundsRect",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 2, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetBrushOrgEx",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, OUT },
	}
	},
	{ "GetCharABCWidthsA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "wFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpABC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ABC", 96, OUT },
	}
	},
	{ "GetCharABCWidthsFloatA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "iLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpABC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ABCFLOAT", 96, UNK },
	}
	},
	{ "GetCharABCWidthsFloatW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "iLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpABC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ABCFLOAT", 96, UNK },
	}
	},
	{ "GetCharABCWidthsI",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "giFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "cgi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "pgi", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 4, "pabc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ABC", 96, UNK },
	}
	},
	{ "GetCharABCWidthsW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "wFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "wLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpABC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ABC", 96, OUT },
	}
	},
	{ "GetCharacterPlacementA",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 2, "nCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "nMexExtent", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "lpResults", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagGCP_RESULTSA", 288, INOUT },
		{ 5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCharacterPlacementW",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 2, "nCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "nMexExtent", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "lpResults", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagGCP_RESULTSW", 288, INOUT },
		{ 5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCharWidth32A",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "iLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpBuffer", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetCharWidth32W",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "iLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpBuffer", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetCharWidthA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "iLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpBuffer", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetCharWidthFloatA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "iLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpBuffer", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetCharWidthFloatW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "iLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpBuffer", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetCharWidthI",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "giFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "cgi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "pgi", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 4, "piWidths", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetCharWidthW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "iLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpBuffer", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
	}
	},
	{ "GetClipBox",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
	}
	},
	{ "GetClipRgn",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetColorAdjustment",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpca", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCOLORADJUSTMENT", 192, OUT },
	}
	},
	{ "GetColorSpace",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetCurrentObject",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetCurrentPositionEx",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
	}
	},
	{ "GetDCBrushColor",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDCOrgEx",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
	}
	},
	{ "GetDCPenColor",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDeviceCaps",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "index", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetDeviceGammaRamp",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpRamp", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "GetDIBColorTable",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iStart", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "cEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "prgbq", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRGBQUAD", 32, UNK },
	}
	},
	{ "GetDIBits",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hbm", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "start", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "cLines", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lpvBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, OUT },
		{ 5, "lpbmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, UNK },
		{ 6, "usage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetEnhMetaFileA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "GetEnhMetaFileBits",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hEMF", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "GetEnhMetaFileDescriptionA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hemf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "cchBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "lpDescription", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "GetEnhMetaFileDescriptionW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hemf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "cchBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "lpDescription", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "GetEnhMetaFileHeader",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hemf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpEnhMetaHeader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagENHMETAHEADER", 864, UNK },
	}
	},
	{ "GetEnhMetaFilePaletteEntries",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hemf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nNumEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpPaletteEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPALETTEENTRY", 32, UNK },
	}
	},
	{ "GetEnhMetaFilePixelFormat",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hemf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "cbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "ppfd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPIXELFORMATDESCRIPTOR", 320, UNK },
	}
	},
	{ "GetEnhMetaFileW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "GetFontData",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "dwTable", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "dwOffset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "pvBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{ 4, "cjBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetFontLanguageInfo",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetFontUnicodeRanges",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpgs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagGLYPHSET", 160, UNK },
	}
	},
	{ "GetGlyphIndicesA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpstr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 2, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "pgi", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{ 4, "fl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetGlyphIndicesW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpstr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 2, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "pgi", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, OUT },
		{ 4, "fl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetGlyphOutlineA",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uChar", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "fuFormat", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpgm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GLYPHMETRICS", 160, OUT },
		{ 4, "cjBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 5, "pvBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{ 6, "lpmat2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MAT2", 128, IN },
	}
	},
	{ "GetGlyphOutlineW",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "uChar", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "fuFormat", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "lpgm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GLYPHMETRICS", 160, OUT },
		{ 4, "cjBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 5, "pvBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{ 6, "lpmat2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MAT2", 128, IN },
	}
	},
	{ "GetGraphicsMode",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetICMProfileA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "pBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 2, "pszFilename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "GetICMProfileW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "pBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 2, "pszFilename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "GetKerningPairsA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nPairs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpKernPair", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagKERNINGPAIR", 64, UNK },
	}
	},
	{ "GetKerningPairsW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nPairs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpKernPair", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagKERNINGPAIR", 64, UNK },
	}
	},
	{ "GetLayout",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetLogColorSpaceA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hColorSpace", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEA", 2624, UNK },
		{ 2, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetLogColorSpaceW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hColorSpace", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEW", 4704, UNK },
		{ 2, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetMapMode",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMetaFileA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "GetMetaFileBitsEx",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hMF", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "cbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "GetMetaFileW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "GetMetaRgn",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMiterLimit",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "plimit", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "GetNearestColor",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetNearestPaletteIndex",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetObjectA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "GetObjectType",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetObjectW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "GetOutlineTextMetricsA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "cjCopy", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "potm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OUTLINETEXTMETRICA", 1696, UNK },
	}
	},
	{ "GetOutlineTextMetricsW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "cjCopy", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "potm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OUTLINETEXTMETRICW", 1728, UNK },
	}
	},
	{ "GetPaletteEntries",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hpal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iStart", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "cEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "pPalEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPALETTEENTRY", 32, UNK },
	}
	},
	{ "GetPath",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
		{ 2, "aj", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 3, "cpt", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetPixel",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetPixelFormat",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetPolyFillMode",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetRandomRgn",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetRasterizerCaps",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpraststat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RASTERIZER_STATUS", 48, UNK },
		{ 1, "cjBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetRegionData",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lpRgnData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RGNDATA", 288, OUT },
	}
	},
	{ "GetRgnBox",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, OUT },
	}
	},
	{ "GetROP2",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetStockObject",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "GetStretchBltMode",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetSystemPaletteEntries",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iStart", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "cEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "pPalEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPALETTEENTRY", 32, UNK },
	}
	},
	{ "GetSystemPaletteUse",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTextAlign",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTextCharacterExtra",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTextCharset",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTextCharsetInfo",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpSig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFONTSIGNATURE", 192, OUT },
		{ 2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTextColor",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTextExtentExPointA",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpszString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "cchString", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "nMaxExtent", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 4, "lpnFit", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{ 5, "lpnDx", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 6, "lpSize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, OUT },
	}
	},
	{ "GetTextExtentExPointI",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpwszString", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "cwchString", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "nMaxExtent", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 4, "lpnFit", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{ 5, "lpnDx", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 6, "lpSize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, OUT },
	}
	},
	{ "GetTextExtentExPointW",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpszString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "cchString", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "nMaxExtent", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 4, "lpnFit", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, OUT },
		{ 5, "lpnDx", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 6, "lpSize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, OUT },
	}
	},
	{ "GetTextExtentPoint32A",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 2, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "psizl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, UNK },
	}
	},
	{ "GetTextExtentPoint32W",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 2, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "psizl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, UNK },
	}
	},
	{ "GetTextExtentPointA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 2, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lpsz", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, UNK },
	}
	},
	{ "GetTextExtentPointI",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pgiIn", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 2, "cgi", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "psize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, UNK },
	}
	},
	{ "GetTextExtentPointW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 2, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lpsz", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, UNK },
	}
	},
	{ "GetTextFaceA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "GetTextFaceW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "GetTextMetricsA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lptm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagTEXTMETRICA", 448, OUT },
	}
	},
	{ "GetTextMetricsW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lptm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagTEXTMETRICW", 480, OUT },
	}
	},
	{ "GetViewportExtEx",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpsize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, OUT },
	}
	},
	{ "GetViewportOrgEx",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lppoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, OUT },
	}
	},
	{ "GetWindowExtEx",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpsize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, OUT },
	}
	},
	{ "GetWindowOrgEx",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lppoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, OUT },
	}
	},
	{ "GetWinMetaFileBits",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hemf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "cbData16", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "pData16", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 3, "iMapMode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "hdcRef", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWorldTransform",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpxf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagXFORM", 192, UNK },
	}
	},
	{ "IntersectClipRect",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "left", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "top", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "right", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "bottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "InvertRgn",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LineDDA",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "xStart", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 1, "yStart", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "xEnd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "yEnd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "lpProc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
		{ 5, "data", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "LineTo",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "LPtoDP",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
		{ 2, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "MaskBlt",12,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdcDest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "xDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "yDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "hdcSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 6, "xSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 7, "ySrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 8, "hbmMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 9, "xMask", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 10, "yMask", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 11, "rop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "ModifyWorldTransform",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpxf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagXFORM", 192, UNK },
		{ 2, "mode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "MoveToEx",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
	}
	},
	{ "OffsetClipRgn",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "OffsetRgn",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "OffsetViewportOrgEx",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
	}
	},
	{ "OffsetWindowOrgEx",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
	}
	},
	{ "PaintRgn",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PatBlt",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "w", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "h", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "rop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PathToRegion",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "Pie",9,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "left", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "top", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "right", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "bottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "xr1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 6, "yr1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 7, "xr2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 8, "yr2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PlayEnhMetaFile",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hmf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "PlayEnhMetaFileRecord",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "pht", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagHANDLETABLE", 32, UNK },
		{ 2, "pmr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagENHMETARECORD", 96, UNK },
		{ 3, "cht", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PlayMetaFile",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hmf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PlayMetaFileRecord",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpHandleTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagHANDLETABLE", 32, IN },
		{ 2, "lpMR", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMETARECORD", 64, UNK },
		{ 3, "noObjs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PlgBlt",10,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdcDest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{ 2, "hdcSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "xSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "ySrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 6, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 7, "hbmMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 8, "xMask", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 9, "yMask", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PolyBezier",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
		{ 2, "cpt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PolyBezierTo",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
		{ 2, "cpt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PolyDraw",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
		{ 2, "aj", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 3, "cpt", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "Polygon",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
		{ 2, "cpt", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "Polyline",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
		{ 2, "cpt", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PolylineTo",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
		{ 2, "cpt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PolyPolygon",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
		{ 2, "asz", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 3, "csz", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PolyPolyline",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
		{ 2, "asz", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
		{ 3, "csz", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PolyTextOutA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "ppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOLYTEXTA", 320, UNK },
		{ 2, "nstrings", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PolyTextOutW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "ppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOLYTEXTW", 320, UNK },
		{ 2, "nstrings", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "PtInRegion",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PtVisible",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RealizePalette",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "Rectangle",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "left", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "top", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "right", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "bottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "RectInRegion",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
	}
	},
	{ "RectVisible",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
	}
	},
	{ "RemoveFontMemResourceEx",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "RemoveFontResourceA",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RemoveFontResourceExA",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 1, "fl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "pdv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RemoveFontResourceExW",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 1, "fl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "pdv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RemoveFontResourceW",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ResetDCA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpdm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, UNK },
	}
	},
	{ "ResetDCW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpdm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, UNK },
	}
	},
	{ "ResizePalette",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hpal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "n", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "RestoreDC",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "nSavedDC", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RoundRect",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "left", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "top", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "right", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "bottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 6, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SaveDC",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ScaleViewportExtEx",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "xn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "dx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "yn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "yd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "lpsz", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, UNK },
	}
	},
	{ "ScaleWindowExtEx",6,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "xn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "xd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "yn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "yd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "lpsz", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, UNK },
	}
	},
	{ "SelectClipPath",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "mode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SelectClipRgn",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SelectObject",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SelectPalette",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hPal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "bForceBkgd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetAbortProc",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "proc", NKT_DBOBJCLASS_Typedef, 0, 0, UNK },
	}
	},
	{ "SetArcDirection",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "dir", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetBitmapBits",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hbm", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "pvBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "SetBitmapDimensionEx",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hbm", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "w", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "h", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lpsz", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, UNK },
	}
	},
	{ "SetBkColor",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetBkMode",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "mode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetBoundsRect",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, UNK },
		{ 2, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetBrushOrgEx",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, OUT },
	}
	},
	{ "SetColorAdjustment",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpca", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCOLORADJUSTMENT", 192, IN },
	}
	},
	{ "SetColorSpace",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "hcs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetDCBrushColor",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetDCPenColor",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetDeviceGammaRamp",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpRamp", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
	}
	},
	{ "SetDIBColorTable",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iStart", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "cEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "prgbq", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRGBQUAD", 32, UNK },
	}
	},
	{ "SetDIBits",7,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "hbm", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 2, "start", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 3, "cLines", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "lpBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, UNK },
		{ 5, "lpbmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, IN },
		{ 6, "ColorUse", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetDIBitsToDevice",12,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "xDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "yDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "w", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 4, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 5, "xSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 6, "ySrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 7, "StartScan", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 8, "cLines", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 9, "lpvBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{ 10, "lpbmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, IN },
		{ 11, "ColorUse", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetEnhMetaFileBits",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "pb", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "SetGraphicsMode",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iMode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetICMMode",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "mode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetICMProfileA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
	}
	},
	{ "SetICMProfileW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
	}
	},
	{ "SetLayout",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "l", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetMapMode",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iMode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetMapperFlags",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetMetaFileBitsEx",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "cbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SetMetaRgn",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetMiterLimit",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "limit", NKT_DBFUNDTYPE_Float, 0, 4, UNK },
		{ 2, "old", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, UNK },
	}
	},
	{ "SetPaletteEntries",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hpal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "iStart", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 2, "cEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "pPalEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPALETTEENTRY", 32, UNK },
	}
	},
	{ "SetPixel",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetPixelFormat",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "format", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "ppfd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPIXELFORMATDESCRIPTOR", 320, UNK },
	}
	},
	{ "SetPixelV",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetPolyFillMode",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "mode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetRectRgn",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "left", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "top", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "right", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "bottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetROP2",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "rop2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetStretchBltMode",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "mode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetSystemPaletteUse",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "use", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetTextAlign",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "align", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetTextCharacterExtra",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "extra", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetTextColor",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetTextJustification",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "extra", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "SetViewportExtEx",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lpsz", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, UNK },
	}
	},
	{ "SetViewportOrgEx",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
	}
	},
	{ "SetWindowExtEx",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lpsz", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, UNK },
	}
	},
	{ "SetWindowOrgEx",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, UNK },
	}
	},
	{ "SetWinMetaFileBits",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, OUT },
		{ 0, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpMeta16Data", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "hdcRef", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 3, "lpMFP", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMETAFILEPICT", 128, IN },
	}
	},
	{ "SetWorldTransform",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "lpxf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagXFORM", 192, UNK },
	}
	},
	{ "StartDocA",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpdi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DOCINFOA", 160, UNK },
	}
	},
	{ "StartDocW",2,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpdi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DOCINFOW", 160, UNK },
	}
	},
	{ "StartPage",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "StretchBlt",11,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdcDest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "xDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "yDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "wDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "hDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "hdcSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 6, "xSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 7, "ySrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 8, "wSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 9, "hSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 10, "rop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "StretchDIBits",13,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "xDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 2, "yDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 3, "DestWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 4, "DestHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 5, "xSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 6, "ySrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{ 7, "SrcWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 8, "SrcHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 9, "lpBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{ 10, "lpbmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, UNK },
		{ 11, "iUsage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 12, "rop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "StrokeAndFillPath",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "StrokePath",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SwapBuffers",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "TextOutA",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{ 4, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "TextOutW",5,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{ 1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
		{ 3, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{ 4, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "TranslateCharsetInfo",3,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "lpSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{ 1, "lpCs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCHARSETINFO", 256, OUT },
		{ 2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnrealizeObject",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "UpdateColors",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UpdateICMRegKeyA",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpszCMID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 2, "lpszFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, UNK },
		{ 3, "command", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "UpdateICMRegKeyW",4,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
		{ 1, "lpszCMID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 2, "lpszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, UNK },
		{ 3, "command", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, UNK },
	}
	},
	{ "WidenPath",1,
	{
		{ -1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, OUT },
		{ 0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};
unsigned Gdi32arraySize = (sizeof(Gdi32_info) / sizeof(Gdi32_info[0]));