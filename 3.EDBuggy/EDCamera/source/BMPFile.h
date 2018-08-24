#pragma once

#include <fstream>
using namespace std;

union BMPPaletteColor
{
	struct
	{
		unsigned char b;
		unsigned char g;
		unsigned char r;
		unsigned char unused;
	};

	size_t bpColor;
};

class BMPFile
{
	friend class BMPHeightMap;

private:
	BMPFile(const BMPFile &){}
	BMPFile &operator=(const BMPFile &){ return *this; }

protected:
	// File format definitions
	struct BMPFileHeader
	{
		char bfType[2];
		size_t bfSize;
		short bfReserved1;
		short bfReserved2;
		size_t bfOffBits;
	};

	struct BMPImageHeader
	{
		size_t biSize;
		size_t biWidth;
		size_t biHeight;
		short biPlanes;
		short biBitCount;
		size_t biCompression;
		size_t biSizeImage;
		size_t biXPelsPerMeter;
		size_t biYPelsPerMeter;
		size_t biClrUsed;
		size_t biClrImportant;		
	};

	// Members
	BMPFileHeader m_FileHeader;
	BMPImageHeader m_ImageHeader;

	BMPPaletteColor *m_pColorTable;
	unsigned char *m_pPixelData;

	char *m_pFileName;
	
public:

	BMPFile(void);
	BMPFile( const char *pFileName );
	virtual ~BMPFile(void);

	bool IsValid(void){ return m_pFileName != NULL; }
	bool IsPalettized(void){ return m_pColorTable != NULL; }
	size_t GetWidth(void){ return m_ImageHeader.biWidth; }
	size_t GetHeight(void){ return m_ImageHeader.biHeight; }
	const unsigned char *GetPixelData(void){ return m_pPixelData; }
	const BMPPaletteColor *GetPaletteColors(void){ return m_pColorTable; }

	bool LoadFromFile( const char *pFileName, bool bOverWrite = false );
};
