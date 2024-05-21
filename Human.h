#pragma once
#include <iostream>
using namespace std;

class Date
{
	int day;
	int month;
	int year;
public:
	Date(int a, int b, int c) : day{ a }, month{b}, year{c}{}
	Date() : Date(1, 1, 1965){}

	void print()
	{
		cout << day << "." << month << "." << year<<endl;
	}
	
};

class Human
{
	static int countH;
	int id;
	char* name;
	char* surname;
	char* fathername;
	Date date;
	
public:
	Human(int _id, char* _name, char* _surname, char* _fathername, Date dat);
	Human() : Human(-1, nullptr, nullptr, nullptr, { 1,2,1967 }){}
	Human(const Human& obj);

	~Human();

	Human& setName(const char* _name);
	Human& setSurname(const char* _surname);
	Human& setFathername(const char* _fathername);

	char* getName() { return name; }
	char* getSurname() { return surname; }
	char* getFathername() { return fathername; }

	void print()
	{
		cout << id << " " << name << " " << surname << " " << fathername << " ";
		date.print();
	}

	static int getCountH(){ return countH; }
};




