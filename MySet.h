#pragma once
#include <iostream>
class MySet
{
	int opacity;
	int size;
	int* arr;
public:
	MySet(int _opacity) : opacity{ _opacity }, size{0}, arr{ new int[opacity] {} }{}
	MySet() :MySet(5) {}
	MySet(const MySet& obj);

	MySet& push_back(int element);
	MySet& del();
	MySet& del(int index);

	MySet& operator=(const MySet& obj1);
	friend MySet operator+(const MySet& obj1, const MySet& obj2);
	friend MySet operator-(const MySet& obj1, const MySet& obj2);
	friend MySet operator&(const MySet& obj1, const MySet& obj2);
	bool operator==(const MySet& obj);
	friend std::ostream& operator<<(std::ostream& out, const MySet& obj);

	void print();
	int getSize()const { return size; }
	int getOpacity()const { return opacity; }

	~MySet()
	{
		delete[] arr;
 	}
};

