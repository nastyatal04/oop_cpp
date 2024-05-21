#define _CRT_SECURE_NO_WARNINGS
#include "MyString.h"
#include <cstring>

MyString::MyString(const char* str) : size{ (int)strlen(str) }, mystring{ new char[size + 1] }
{
	strcpy(mystring, str);
}
MyString::MyString(int n) : size{ n }, mystring{ new char[size+1] }{};
MyString::MyString(const MyString& obj) : MyString(obj.size)
{
	strcpy(mystring, obj.mystring);
	mystring[size] = '\0';
}

MyString& MyString::setMystring(const char* str)
{
	if (this->size != strlen(str))
	{
		this->size = strlen(str);
		delete[] mystring;
		mystring = new char[size+1];
		strcpy(mystring, str);
	}
	else
	{
		strcpy(mystring, str);
	}
	return*this;
}

MyString operator&&(const MyString& str1, const MyString& str2)
{
	int k = 0;
	size_t innerSize = (str1.size < str2.size ? str1.size : str2.size);
	MyString innerString(innerSize);
	for (int i = 0; i < innerSize; ++i)
	{
		for (int j = 0; j < str2.size; ++j)
		{
			if (str1.mystring[i] == str2.mystring[j])
			{
				innerString.mystring[k++] = str1.mystring[i];
				++innerString.size;
			}
		}
	}
	innerString.mystring[k] = '\0';
	return innerString;
}

//Функции Ахмеда

//MyString::MyString(const char* str) : size{ std::strlen(str) }, mystring{ new char[size + 1] }
//{
//	strcpy(mystring, str);
//	mystring[size] = '\0';
//};

//MyString::MyString(size_t _size) : size{ _size }, mystring{ new char[_size + 1] }{};
//MyString::MyString(const MyString& obj) : MyString(obj.size)
//{
//	strcpy(mystring, obj.mystring);
//	mystring[size] = '\0';
//}

//MyString& MyString::setString(const char* str)
//{
//	if (this->size < strlen(str))
//	{
//		this->size = strlen(str);
//		if (mystring) delete[] mystring;
//		mystring = new char[size + 1];
//		strcpy(mystring, str);
//		mystring[size] = '\0';
//		return *this;
//	}
//	strcpy(mystring, str);
//	mystring[strlen(str)] = '\0';
//	return *this;
//}