#pragma once
class Group
{
	char** name_group;
	char** list_student;
	char** list_lessons;

public:
	Group(int size1=2, int size2=4, int size3=4, int size4 = 4)
	{
		name_group = new char* [size1];
		list_student = new char* [size2];
		list_lessons = new char* [size3];
		for (int i = 0; i < size1; ++i)
		{
			name_group[i] = new char[10];
		}
		for (int i = 0; i < size2; ++i)
		{
			list_student[i] = new char[15];
		}
		for (int i = 0; i < size3; ++i)
		{
			list_lessons[i] = new char[15];
		}
	}
	char** get_name_group() const { return name_group; }
	char** get_list_student() const { return list_student; }
	char** get_list_lessons() const { return list_lessons; }

	void reading_list_students();
	void reading_list_lessons();
	void reading_name_group();

	~Group()
	{
		for (int i = 0; i < 2; ++i)
		{
			delete[] name_group[i];
		}
		delete[] name_group;

		for (int i = 0; i < 2; ++i)
		{
			delete[] list_lessons[i];
		}
		delete[] list_lessons;

		for (int i = 0; i < 2; ++i)
		{
			delete[] list_student[i];
		}
		delete[] name_group;
	}
};

class Student
{
	char** name;
	char** list_lessons;
	int** rating;
public:
	Student()
	{
		/*tabel_noten = new char* [size2];
		for (int i(0); i < size2; ++i)
		{
			tabel_noten[i] = new char[5];
		}*/
		name = new char*[15];
		rating = new int* [4];
		for (int i = 0; i < 4; ++i)
		{
			name[i] = new char[15];
			rating[i] = new int[5];
		}
	}
	char** get_name() const { return name; }
	int** get_rating() const { return rating; }

	void reading_name();
	void reading_rating();
	//void printf_students();

	void data_student(const char* name_s);

	~Student()
	{
		for (int i = 0; i < 4; ++i)
		{
			delete[] name[i];
			delete[] rating[i];
		}
		delete[] name;
		delete[] rating;
	}
};
