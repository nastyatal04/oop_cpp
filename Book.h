#pragma once
#include <iostream>
class Book
{
	const char* autor;
	const char* name;
	const char* isdatelstvo;
	int year;
	int kolvo_str;
public:
	Book(const char* aut, const char* name, const char* isdat, int year, int kolvo_str) :\
		autor{ aut }, name{ name }, isdatelstvo{ isdat }, year{ year }, kolvo_str{ kolvo_str }{};
	explicit Book(const char* _autor) : Book(_autor, nullptr, nullptr, 2022, 500) {};
	Book() :Book(nullptr, nullptr, nullptr, 2022, 500) {}

	void print() {
		std::cout << "autor: " << autor << "\nname: " << name << "\nisdatelstvo: " << isdatelstvo << "\nyear: " << year << "\nkolvo straniz: " << kolvo_str << "\n";
	}

	const char* getName() { return name; }

	const char* search(const char* str)
	{
		int res = strcmp(this->autor, str);
		if (!res)
			return this->name;
		return "net knig";
	}

	const char* get_autor()
	{
		return autor;
	}
};
