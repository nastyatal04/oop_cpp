#pragma once
#include<iostream>
class Flat
{
	int rooms;
public:
	Flat (int number)
	{
		rooms = number;
	}

	int  getRooms() { return rooms; }
	void setRooms(int number) { rooms = number; }	
};

class Rooms
{
	const char* name;
	int widch;
	int higth;
	int length;
	bool top;
public:
	Rooms(const char* name, int widch, int higth, int length, bool top)
	{
		Rooms::name = name;
		Rooms::widch = widch;
		Rooms::higth = higth;
		Rooms::length = length;
		Rooms::top = top;
	}

	const char* getname() { return name; }
	int getWidch() { return widch; }
	int getHigth() { return higth; }
	int getLength() { return length; }
	bool getTop() { return top; }

	void setWidch(int widch) { Rooms::widch = widch; }
	void setHigth(int higth) { Rooms::higth = higth; }
	void setLength(int length) { Rooms::length = length; }
	void setTop(bool top) { Rooms::top = top; }
};

class Roll
{
	const char* name_roll;
	int size;
	int prise;
public:
	Roll(const char* name_roll, int size, int prise)
	{
		Roll::name_roll = name_roll;
		Roll::size = size;
		Roll::prise = prise;
	}
	const char* getName_roll() { return name_roll; }
	int getSize() { return size; }
	int getPrise() { return prise; }

	void setName_roll(const char* name_roll) { Roll::name_roll = name_roll; }
	void setSize(int size) { Roll::size = size; }
	void setPrise(int prise) { Roll::prise = prise; }

	int amountRoll(Flat flat, Rooms* room);
	int priseRoll();
};

