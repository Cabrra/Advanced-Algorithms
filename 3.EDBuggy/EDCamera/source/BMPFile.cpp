#include "BMPFile.h"

BMPFile::BMPFile(void)
{
	memset( &this->m_FileHeader, 0, sizeof(BMPFileHeader) );
	memset( &this->m_ImageHeader, 0, sizeof(BMPImageHeader) );

	m_pColorTable = NULL;
	m_pPixelData = NULL;
	m_pFileName = NULL;
}

BMPFile::BMPFile(const char *pFileName)
{
	memset( &this->m_FileHeader, 0, sizeof(BMPFileHeader) );
	memset( &this->m_ImageHeader, 0, sizeof(BMPImageHeader) );

	m_pColorTable = NULL;
	m_pPixelData = NULL;
	m_pFileName = NULL;

	LoadFromFile( pFileName );
}

BMPFile::~BMPFile(void)
{
	delete [] m_pColorTable;
	delete [] m_pPixelData;
	delete [] m_pFileName;
}

bool BMPFile::LoadFromFile( const char *pFileName, bool bOverWrite )
{
	ifstream bmpFile;
	BMPFileHeader tempFileHeader;
	BMPImageHeader tempImageHeader;
	int headerOffset;

	bmpFile.open( pFileName, ios_base::binary | ios_base::in );

	if( bmpFile.is_open() )
		bmpFile.read( tempFileHeader.bfType, sizeof(char)*2 );
	else
		return false;

	if( tempFileHeader.bfType[0] != 'B' && tempFileHeader.bfType[1] != 'M' )
	{
		bmpFile.close();
		return false;
	}

	bmpFile.read( (char*)&tempFileHeader.bfSize, sizeof( size_t ) );
	bmpFile.read( (char*)&tempFileHeader.bfReserved1, sizeof( short ) );
	bmpFile.read( (char*)&tempFileHeader.bfReserved2, sizeof( short ) );
	bmpFile.read( (char*)&tempFileHeader.bfOffBits, sizeof( size_t ) );

	bmpFile.read( (char*)&tempImageHeader.biSize, sizeof( size_t ) );

	if( tempImageHeader.biSize < 40 )
	{
		bmpFile.close();
		return false;
	}
	else
		headerOffset = (int)tempImageHeader.biSize - 40;

	bmpFile.read( (char*)&tempImageHeader.biWidth, sizeof(size_t) );
	bmpFile.read( (char*)&tempImageHeader.biHeight, sizeof(size_t) );
	bmpFile.read( (char*)&tempImageHeader.biPlanes, sizeof(short) );

	if( tempImageHeader.biPlanes != 1 )
	{
		bmpFile.close();
		return false;
	}

	bmpFile.read( (char*)&tempImageHeader.biBitCount, sizeof(short) );

	if( tempImageHeader.biBitCount != 8 && tempImageHeader.biBitCount != 24 )
	{
		bmpFile.close();
		return false;
	}

	bmpFile.read( (char*)&tempImageHeader.biCompression, sizeof( size_t ) );

	if( tempImageHeader.biCompression != 0 )
	{
		bmpFile.close();
		return false;
	}

	if( m_pFileName != NULL )
	{
		if( bOverWrite != true )
		{
			bmpFile.close();
			return false;
		}
		else 
		{
			delete [] m_pColorTable;
			delete [] m_pPixelData;
			delete [] m_pFileName;

			memset( &this->m_FileHeader, 0, sizeof(BMPFileHeader) );
			memset( &this->m_ImageHeader, 0, sizeof(BMPImageHeader) );

			m_pColorTable = NULL;
			m_pPixelData = NULL;
			m_pFileName = NULL;
		}
	}

	bmpFile.read( (char*)&tempImageHeader.biSizeImage, sizeof( size_t ) );
	bmpFile.read( (char*)&tempImageHeader.biXPelsPerMeter, sizeof( size_t ) );
	bmpFile.read( (char*)&tempImageHeader.biYPelsPerMeter, sizeof( size_t ) );
	bmpFile.read( (char*)&tempImageHeader.biClrUsed, sizeof( size_t ) );
	bmpFile.read( (char*)&tempImageHeader.biClrImportant, sizeof( size_t ) );

	bmpFile.seekg( headerOffset, ios_base::cur );
	
	m_pFileName = new char[ strlen(pFileName) + 1 ];	
	//strcpy_s( m_pFileName, strlen(pFileName) + 1, pFileName );
	strcpy( m_pFileName, pFileName );

	if( tempImageHeader.biBitCount == 8 )
	{
		int pad = (4 - ((int)tempImageHeader.biWidth & 3) ) & 3;

		m_pColorTable = new BMPPaletteColor[256];
		bmpFile.read( (char*)m_pColorTable, sizeof(size_t)*256 );

		m_pPixelData = new unsigned char[ tempImageHeader.biWidth * tempImageHeader.biHeight ];

		for( unsigned int i = 0; i < tempImageHeader.biHeight; ++i )
		{
			bmpFile.read( (char*)&m_pPixelData[tempImageHeader.biWidth * i], (std::streamsize)tempImageHeader.biWidth );
			bmpFile.seekg( pad, ios_base::cur );
		}
	}
	else
	{
		int pad = (4 - (((int)tempImageHeader.biWidth * 3) & 3) ) & 3;

		m_pPixelData = new unsigned char[ tempImageHeader.biWidth * 3 * tempImageHeader.biHeight ];

		for( unsigned int i = 0; i < tempImageHeader.biHeight; ++i )
		{
			bmpFile.read( (char*)&m_pPixelData[tempImageHeader.biWidth * 3 * i], (std::streamsize)tempImageHeader.biWidth * 3 );
			bmpFile.seekg( pad, ios_base::cur );
		}
	}

	m_FileHeader = tempFileHeader;
	m_ImageHeader = tempImageHeader;

	bmpFile.close();
	return true;
}


