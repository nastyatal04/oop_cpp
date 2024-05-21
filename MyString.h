#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <cstring>
#include <iostream>
using namespace std;
class MyString
{
	int size;
	char* mystring;
public:
	MyString(const char* str);
	MyString(int n);
	MyString(const MyString& obj);

	~MyString() { delete[] mystring; }
	
	void print() { cout << mystring << endl; }
	
	MyString& setMystring(const char* str);

	friend MyString operator&&(const MyString& str1, const MyString& str2);
};


