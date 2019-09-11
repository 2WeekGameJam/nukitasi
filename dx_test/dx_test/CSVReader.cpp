



#include "CSVReader.h"
#include<stdio.h>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>


CSVReader::CSVReader()
	:mFilname(""),mX(0),mY(0),mC()
{
}


CSVReader::~CSVReader()
{
}

bool CSVReader::Load(string failname)
{

	return false;
}

wstring CSVReader::w(int y, int x)
{
	return wstring();
}

int CSVReader::i(int y, int x)
{
	return 0;
}

int CSVReader::size_y()
{
	return 0;
}

int CSVReader::size_x(int y)
{
	return 0;
}

void CSVReader::SetComma(wchar_t c)
{
}
