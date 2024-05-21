#define _CRT_SECURE_NO_WARNINGS
#include "Group.h"
#include <cstdio>
#include<iostream>
using namespace std;

void Group::reading_name_group()
{
    FILE* in;
    if (fopen_s(&in, "C://Users//5//OneDrive//Рабочий стол//Новая папка//group.txt", "r") != NULL)
        cout << "error";
    else
    {
        int i(0);
        while (!(feof(in)))
        {
            fscanf(in, "%s", name_group[i]);
            ++i;
        }
    }
}

void Group::reading_list_lessons()
{
    FILE* in;
    if (fopen_s(&in, "C://Users//5//OneDrive//Рабочий стол//Новая папка//lessons.txt", "r") != NULL)
        cout << "error";
    else
    {
        int i(0);
        while (!(feof(in)))
        {
            fscanf(in, "%s", list_lessons[i]);
            ++i;
        }
    }
}

void Group::reading_list_students()
{
    FILE* in;
    if (fopen_s(&in, "C://Users//5//OneDrive//Рабочий стол//Новая папка//name_students.txt", "r") != NULL)
        cout << "error";
    else
    {
        int i(0);
        while (!feof(in))
        {
            fscanf(in, "%s", list_student[i]);
            ++i;
        }
    }
}

//void Student::reading_name()
//{
//    FILE* in;
//    if (fopen_s(&in, "C://Users//5//OneDrive//Рабочий стол//Новая папка//otzenki.txt", "r") != NULL)
//        cout << "error";
//    else
//    {
//        int i = 1;
//        while (!(feof(in)))
//        {
//            fscanf(in, "%s", name[i]);
//            ++i;              
//        }
//    }
//}

void Student::reading_rating()
{
    FILE* in;
    if (fopen_s(&in, "C://Users//5//OneDrive//Рабочий стол//Новая папка//otzenki.txt", "r") != NULL)
        cout << "error";
    else
    {
        int val;
        int i = 0, j=0;
        while (!(feof(in)))
        {
            fscanf(in, "%d", &val);
            rating[i][j] = val;
            ++j;
            if (j == 5)
            {
                ++i;
                j = 0;
            }
        }
    }
}

//void Student::data_student(const char* name_s)
//{
//    Group gr;
//    gr.reading_list_students();
//    char** array_list_stud = gr.get_list_student();
//    for (int i = 0; i < 4; ++i)
//    {
//        if (!strcmp(array_list_stud[i]), name_s)
//        {
//
//        }
//    }
//}

//void Student::reading_rating()
//{
//    FILE* in;
//    if (fopen_s(&in, "C://Users//5//OneDrive//Рабочий стол//Новая папка//otzenki.txt", "r") != NULL)
//        cout << "error";
//    else
//    {
//        int i = 0;
//        while (!(feof(in)))
//        {
//            fscanf(in, "%s", rating[i]);
//            ++i;
//        }
//    }
//}

//void Student::printf_students()
//{
//    for (int i = 0; i < 5; ++i)
//    {
//        cout << name[i]<<"\t";
//        for (int j = 0; j < 5; ++j)
//        {
//            cout << rating[i] << "\t";
//        }
//        cout << endl;
//    }
//}

//void Student::data_student(const char* name_s)
//{
//    for (int i = 0; i < 4; ++i)
//    {
//        if (strcmp(name[i], name_s))
//        {
//            cout << name[i] << ":" << rating[i];
//        }
//    }
//}