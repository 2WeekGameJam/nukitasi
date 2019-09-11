#ifndef _CSVREADER_H_
#define _CSVREADER_H_


#pragma once
#include<stdio.h>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

class CSVReader
{
public:
	CSVReader();
	~CSVReader();
	bool Load(string failname);//ファイル名からCSVファイルを読み込みます。
	wstring w(int y, int x);//CSVファイルの行（y）と列（x）を指定してセルをwstring型で取得します。
	int i(int y, int x);//CSVファイルの行（y）と列（x）を指定してセルをint型で取得します。
	int size_y();//CSVファイルの行数を取得します。
	int size_x(int y);//行を指定して、CSVファイルの列数を取得します。
	void SetComma(wchar_t c);//区切り文字を指定します。この関数を使用しないとき、標準で","が区切りに使用されます。

private:
	string mFilname;
	int mX;
	int mY;
	wchar_t mC;
};

#endif // !_CSVREADER_H_