#include "MySet.h"
#include <iostream>

MySet::MySet(const MySet& obj) :MySet(obj.opacity)
{
	this->size = obj.size;
	for (int i = 0; i < obj.size; ++i)
		this->arr[i] = obj.arr[i];
}

MySet& MySet::push_back(int element)
{


	for (int i = 0; i < size; ++i)
	{
		if (this->arr[i] == element)
			return *this;
	}
	if (size == opacity)
	{
		int* temp = new int[opacity];
		for (int i = 0; i < size; ++i)
		{
			temp[i] = this->arr[i];
		}
		delete[] arr;
		this->opacity = 2 * this->opacity;
		arr = new int[opacity];
		for (int i = 0; i < size; ++i)
		{
			this->arr[i] = temp[i];
		}
		arr[size] = element;
		++size;
		return *this;
	}
	arr[size] = element;
	++size;
	return *this;
}

void MySet::print()
{
	for (int i = 0; i < size; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

MySet& MySet::del()
{
	arr[size-1] = 0;
	--(this->size);
	return *this;
}

MySet& MySet::del(int index)
{
	int n = size - 1;
	int* temp = new int[n];
	int k = 0;
	for (int i = 0; i < size; ++i)
	{
		if (i = index)
			continue;
		temp[k++] = arr[i];
	}
	delete[] arr;
	arr = new int[this->opacity];
	--(this->size);
	for (int i = 0; i < size; ++i)
	{
		this->arr[i] = temp[i];
	}
	
	return *this;
}

MySet operator+(const MySet& obj1, const MySet& obj2)
{
	int new_size = obj1.size+obj2.size;
	MySet obj(new_size);
	for (int i = 0; i < obj1.size; ++i)
	{
		obj.push_back(obj1.arr[i]);
	}
	for (int i = 0; i < obj2.size; ++i)
	{
		obj.push_back(obj2.arr[i]);
	}
	return obj;
}

MySet operator-(const MySet& obj1, const MySet& obj2)
{
	MySet obj(obj1.size);
	bool flag = false;
	int k = 0;
	for (int i = 0; i < obj1.size; ++i)
	{
		for (int j = 0; j < obj2.size; ++j)
		{
			if (obj1.arr[i] == obj2.arr[j])
			{
				flag = true;
				break;
			}
		}
		if(!flag)
		{
			obj.arr[k++] = obj1.arr[i];
			++obj.size;
		}
		flag = false;
	}
	return obj;
}

MySet operator&(const MySet& obj1, const MySet& obj2)
{
	int new_size = (obj1.size > obj2.size) ? obj1.size : obj2.size;
	MySet obj(new_size);
	bool flag = false;
	int k = 0;
	for (int i = 0; i < obj1.size; ++i)
	{
		for (int j = 0; j < obj2.size; ++j)
		{
			if (obj1.arr[i] == obj2.arr[j])
			{
				flag = true;
				break;
			}
		}
		if (flag)
		{
			obj.arr[k++] = obj1.arr[i];
			++obj.size;
		}
		flag = false;

	}
	return obj;
}

MySet& MySet::operator=(const MySet& obj)
{
	delete[] arr;
	this->size = obj.size;
	this->opacity = obj.opacity;
	arr = new int[opacity] {};
	for (int i = 0; i < this->size; ++i)
	{
		this->arr[i] = obj.arr[i];
	}
	return *this;
}

std::ostream& operator<<(std::ostream& out, const MySet& obj)
{
	for (int i = 0; i < obj.size; ++i)
	{
		out << obj.arr[i] << " ";
	}
	std::cout << std::endl;
	return out;
}

bool MySet::operator==(const MySet& obj)
{
	if (this->size != obj.size)
		return false;
	int count = 0;
	for (int i = 0; i < this->size; ++i)
	{
		for (int j = 0;j < this->size; ++j)
		{
			if (this->arr[i] != obj.arr[j])
				continue;
			++count;
			break;
		}
	}
	if (count == this->size) return true;
	return false;
}

//bool operator==(const MySet& obj1, const MySet& obj2)
//{
//	if (obj1.size != obj2.size)
//		return 0;
//	for (int i = 0; i < obj1.size; ++i)
//	{
//		for (int j = 0; j < obj1.size; ++j)
//		{
//			if(obj1.arr[i]!=obj2.arr[j])
//				return 0;
//		}
//	}
//	return 1;
//}

