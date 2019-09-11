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
	bool Load(string failname);//�t�@�C��������CSV�t�@�C����ǂݍ��݂܂��B
	wstring w(int y, int x);//CSV�t�@�C���̍s�iy�j�Ɨ�ix�j���w�肵�ăZ����wstring�^�Ŏ擾���܂��B
	int i(int y, int x);//CSV�t�@�C���̍s�iy�j�Ɨ�ix�j���w�肵�ăZ����int�^�Ŏ擾���܂��B
	int size_y();//CSV�t�@�C���̍s�����擾���܂��B
	int size_x(int y);//�s���w�肵�āACSV�t�@�C���̗񐔂��擾���܂��B
	void SetComma(wchar_t c);//��؂蕶�����w�肵�܂��B���̊֐����g�p���Ȃ��Ƃ��A�W����","����؂�Ɏg�p����܂��B

private:
	string mFilname;
	int mX;
	int mY;
	wchar_t mC;
};

#endif // !_CSVREADER_H_