#define _CRT_SECURE_NO_WARNINGS
#include "Human.h"
#include <cstring>

int Human::countH{0};

Human::Human(int _id, char* _name, char* _surname, char* _fathername, Date dat) : \
id{ _id }, name{new char[15]}, surname{ new char[15]}, fathername{ new char[15] }, date{ dat }
{
	if(_name)
		strcpy(name, _name);
	if(_surname)
		strcpy(surname, _surname);
	if(_fathername)
		strcpy(fathername, _fathername);
	++countH;
};

Human::Human(const Human& obj) :id{ obj.id }, name{ new char[15] }, surname{ new char[15] }, fathername{ new char[15] }, date{ obj.date } 
{
	if(obj.name)
		strcpy(name, obj.name);
	if(obj.surname)
		strcpy(surname, obj.surname);
	if(obj.fathername)
		strcpy(fathername, obj.fathername);
	++countH;
};

Human& Human::setName(const char* _name)
{
	if (_name)
		strcpy(name, _name);
	return *this;
}
Human& Human::setSurname(const char* _surname)
{
	if (_surname)
		strcpy(surname, _surname);
	return *this;
}
Human& Human::setFathername(const char* _fathername)
{
	if (_fathername)
		strcpy(fathername, _fathername);
	return *this;
}

Human::~Human()
{
	if (name != nullptr)
		delete[] name;
	if (fathername != nullptr)
		delete[] fathername;
	if (surname != nullptr)
		delete[] surname;
}

