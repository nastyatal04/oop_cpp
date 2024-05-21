#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include <cstring>
#include <io.h>
#include <cstdio>
//#include "Data.h"
//#include "Array.h"
//#include "Group.h"
//#include "Flat.h"
//#include "Human.h"
//#include "MyString.h"
//#include "MySet.h"
//#include "Book.h"
//include "Airplane.h"
#include <typeinfo>
#include <math.h>
//#include <initializer_list>
//#include<conio.h>
#include <cassert>
#include <list>
#include <queue>
#include<windows.h>
using namespace std;

//// <, >
//class Time
//{
//    int uhr;
//    int minuten;
//    int sekunden;
//public:
//    Time(int uhr, int minuten, int sekunden): uhr{uhr}, minuten{minuten}, sekunden{sekunden}{}
//    Time() :Time(0, 0, 0){}
//
//    friend ostream& operator<<(ostream& out, Time tims);
//    friend istream& operator>>(istream& in, Time tims);
//    Time& operator++()
//    {
//        ++(this->sekunden);
//        return *this;
//    }
//    Time& operator--()
//    {
//        --(this->sekunden);
//        return *this;
//    }
//    bool operator==(const Time& obj)
//    {
//        return (obj.uhr == this->uhr) && (this->minuten == obj.minuten) && (this->sekunden == obj.sekunden);
//    }
//    bool operator!=(const Time& obj)
//    {
//        return (obj.uhr != this->uhr) || (this->minuten != obj.minuten) || (this->sekunden != obj.sekunden);
//    }
//    bool operator>(const Time obj)
//    {
//        if (this->uhr < obj.uhr)
//            return false;
//        if (this->minuten < obj.minuten)
//            return false;
//        if (this->sekunden < obj.sekunden)
//            return false;
//        return true;
//    }
//    Time& operator=(const Time obj)
//    {
//        this->uhr = obj.uhr;
//        this->minuten = obj.minuten;
//        this->sekunden = obj.sekunden;
//        return *this;
//    }
//    Time& operator+=(int value)
//    {
//        this->sekunden += value;
//        return *this;
//    }
//    Time& operator-=(int value)
//    {
//        this->sekunden -= value;
//        return *this;
//    }
//};
//
//ostream& operator<<(ostream& out, Time tims)
//{
//    out << tims.uhr << ':' << tims.minuten << ':' << tims.sekunden << endl;
//    return out;
//}
//
//istream& operator>>(istream& in, Time tims)
//{
//    in >> tims.uhr >> tims.minuten >> tims.sekunden;
//    return in;
//}
//
//class Complex
//{
//    int Re;
//    int Im;
//public:
//    Complex(int Re, int Im):Re{ Re }, Im{Im}{}
//    Complex() :Complex(1, 1){}
//    friend ostream& operator<<(ostream& out, Complex complexValue);
//    friend Complex operator+(Complex complex1, Complex complex2);
//    friend Complex operator-(Complex complex1, Complex complex2);
//    int sinRe() { return Re; }
//    int setIm() { return Im; }
//    void getRe(int re) { Re = re; }
//    void getIm(int im) { Im = im; }
//    Complex operator=(const Complex& obj)
//    {
//        this->Im = obj.Im;
//        this->Re = obj.Re;
//        return *this;
//    }
//    bool operator==(const Complex& obj)
//    {
//        return (this->Im == obj.Im) && (this->Re == obj.Re);
//    }
//    bool operator!=(const Complex& obj)
//    {
//        return (this->Im != obj.Im) || (this->Re != obj.Re);
//    }
//    
//};
//
//ostream& operator<<(ostream& out, Complex complexValue)
//{
//    out << '(' << complexValue.Re << ',' << complexValue.Im << ')' << endl;
//    return out;
//}
//
//Complex operator+(Complex complex1, Complex complex2)
//{
//    return Complex(complex1.Re + complex2.Re, complex1.Im + complex2.Im);
//}
//
//Complex operator-(Complex complex1, Complex complex2)
//{
//    return Complex(complex1.Re - complex2.Re, complex1.Im - complex2.Im);
//}
//
//
//
//class var
//{
//    int a;
//public:
//    operator int() const { return a; }
//};

//void CompressText(string& text)
//{
//    //for (int i = 0; i < text.size(); ++i)
//    //{
//    //    if (text[i] == ' ')
//    //    {
//    //        if (tempTxt[--k] == ' ')
//    //            continue;
//    //    }
//    //    tempTxt[k++] += text[i];
//    //    /*if (text[i] == ' ')
//    //    {
//    //        int k{ i };
//    //        while (text[k] == ' ')
//    //        {
//    //            ++count;
//    //            ++k;
//    //        }
//    //    }
//    //    text.replace(i, count, " ");*/
//    //}
//    for (int i = 0; i < text.size(); ++i)
//    {
//        if (text[i] == ' ' && text[i + 1] == ' ')
//        {
//            text.replace(i + 1, 1, "");
//            --i;
//        }
//    }
//}

////class Circle
////{
////    int radius;
////public:
////    Circle(int r): radius{r}{}
////
////    int getRad() { return radius; }
////
////    friend bool operator==(const Circle& c1, const Circle& c2);
////    friend bool operator>(const Circle& c1, const Circle& c2);
////    friend bool operator<(const Circle& c1, const Circle& c2);
////    void operator+=(int value) { this->radius += value; };
////    void operator-=(int value) { this->radius -= value; };
////};
////
////bool operator==(const Circle& c1, const Circle& c2)
////{
////    return c1.radius == c2.radius;
////}
////
////bool operator>(const Circle& c1, const Circle& c2)
////{
////    return c1.radius > c2.radius;
////}
////
////bool operator<(const Circle& c1, const Circle& c2)
////{
////    return c1.radius > c2.radius;
////}
//
////int indexS(Book arr[], const char* str)
////{
////    int res;
////    for (int i = 0; i < 2; ++i)
////    {
////        const char* s = arr[i].search(str);
////        res = strcmp(s, str);
////        if (!res)
////            return i;
////    }
////    return -1;
////}
//
////class A
////{
////    mutable int x;//mutable разрешит менять поле класса в константном методе
////    int y;
////public:
////    A(int a, int b) :x{ a }, y{ b }{};
////    A() : A(0, 0) {};
////    int getX() { return x; }
////
////    void setX(int a)const
////    {
////        (*this).x;//другой вариант записи this
////        int b = a;
////        ++b;
////        cout << a;
////    }
////};
//
////class Array
////{
////    int size;
////    int* arr = new int[size];
////public:
////    explicit Array(int _size) :size{ _size }, arr{ new int[size] }{}
////    Array(const Array& obj):Array(obj.size)
////    {
////        for (int i = 0; i < size; ++i)
////        {
////            arr[i] = obj.arr[i];
////        }
////    }
////    Array():Array(5){}
////
////    Array& randomize();
////    Array& resize(int new_size);
////    Array& sort();
////    int operator[](int index){ return this->arr[index];}
////    void operator()(int num)
////    {
////        for (int i = 0; i < size; ++i)
////        {
////            this->arr[i] += num;
////        }
////    }
////    int min_element();
////    int max_element();
////    void print();
////    ~Array()
////    {
////        delete[] arr;
////    }
////
////    void get_size(int size) { this->size = size; }
////
////};
////
////Array& Array::sort()
////{
////    for (int i = 0; i < size; ++i)
////        for(int j=0; j<size; ++j)
////            if (arr[j] < arr[i])
////                swap(arr[i], arr[j]);
////        return *this;
////}
////
////int Array::min_element()
////{
////    int min = arr[0];
////    for (int i = 1; i < size; ++i)
////    {
////        if (arr[i] < min)
////            min = arr[i];
////    }
////    return min;
////}
////
////int Array::max_element()
////{
////    int max = arr[0];
////    for (int i = 1; i < size; ++i)
////    {
////        if (arr[i] > max)
////            max = arr[i];
////    }
////    return max;
////}
////
////Array& Array::resize(int new_size)
////{
////    int* tmp = new int[new_size];
////    if (new_size != size)
////    {
////        for (int i = 0; i < new_size; ++i)
////        {
////            tmp[i] = arr[i];
////        }
////        delete[] arr;
////        arr = tmp;
////        size = new_size;
////        return*this;
////    }
////    for (int i = 0; i < this->size; ++i)
////    {
////        tmp[i] = arr[i];
////    }
////    delete[] arr;
////    arr = tmp;
////    return*this;
////}
////
////void Array::print()
////{
////    for (int i = 0; i < size; ++i)
////        std::cout << arr[i] << " ";
////    cout << endl;
////}
////
////Array& Array::randomize()
////{
////    for (int i = 0; i < size; ++i)
////    {
////        arr[i] = rand() % 101;
////    }
////    return *this;
////}
//
////class Point {
////    int x;
////    int y;
////    int z;
////public:
////    Point(int a, int b, int c):x{a}, y{b}, z{c}{}
////    Point(int a, int b):Point(a,b,0){}
////    Point(int a):Point(a,0,0){}
////    Point():Point(0,0,0){}
////
////    Point(const Point& obj):x{obj.x},y{obj.y}, z{obj.z}{}
////
////    //void setX(int a) { x = a; }
////    void setY(int b) { y = b; }
////    void setZ(int c) { z = c; }
////
////    int getX() { return x; }
////    int getY() { return y; }
////    int getZ() { return z; }
////
////   /* Point* setX(int a)
////    {
////        x = a;
////        return *this;
////    }*/
////
////};
//
////class Fraction
////{
////    int numerator;
////    int denominator;
////public:
////    Fraction(int num, int denom);
////    Fraction():Fraction(1,2){}
////
////    void print();
////    Fraction& add(const Fraction& fract);
////    Fraction& sub(const Fraction& fract);
////    Fraction& mul(const Fraction& fract);
////    Fraction& div(const Fraction& fract);
////
////    Fraction& add(int num);
////    Fraction& sub(int num);
////    Fraction& mul(int num);
////    Fraction& div(int num);
////
////    Fraction& redaktion();
////};
////
////Fraction::Fraction(int num, int denom) :numerator{ num }, denominator{ denom }{};
////
////void Fraction::print()
////{
////    if (!numerator)
////    {
////        cout << 0 << endl;
////        return;
////    }
////    else if (numerator == denominator)
////    {
////        cout << 1;
////        return;
////    }
////    cout << "(" << numerator << "/" << denominator << ")" << endl; 
////}
////
////Fraction& Fraction::add(const Fraction& fract)
////{
////    this->numerator = numerator * fract.denominator + denominator * fract.numerator;
////    this->denominator = denominator* fract.denominator;
////    return *this;
////}
////
////Fraction& Fraction::sub(const Fraction& fract)
////{
////    this->numerator = numerator* fract.denominator - denominator * fract.numerator;
////    this->denominator = denominator * fract.denominator;
////    return *this;
////}
////
////Fraction& Fraction::mul(const Fraction& fract)
////{
////    this->numerator = numerator * fract.numerator;
////    this->denominator = denominator * fract.denominator;
////    return *this;
////}
////
////Fraction& Fraction::div(const Fraction& fract)
////{
////    this->numerator = numerator * fract.denominator;
////    this->denominator = fract.numerator * denominator;
////    return *this;
////}
//////
////Fraction& Fraction::add(int num)
////{
////    this->numerator = numerator +  num* denominator;
////    this->denominator = denominator;
////    return *this;
////}
////
////Fraction& Fraction::sub(int num)
////{
////    this->numerator = numerator - denominator * num;
////    this->denominator = denominator;
////    return *this;
////}
////
////Fraction& Fraction::mul(int num)
////{
////    this->numerator = numerator * num;
////    this->denominator = denominator;
////    return *this;
////}
////
////Fraction& Fraction::div(int num)
////{
////    this->numerator = numerator;
////    this->denominator = num * denominator;
////    return *this;
////}
////
//////
////int f(int a, int b)
////{
////    if (!a || !b)
////        return a + b;
////    if (a > b)
////        return f(a % b, b);
////    return(b % a, a);
////}
////
////Fraction& Fraction::redaktion()
////{
////    if (numerator == denominator)
////    {
////        numerator = 1;
////        denominator = 1;
////        return *this;
////    }
////    int a = numerator;
////    int b = denominator;
////    while (true)
////    {
////        if (!a || !b)
////            break;
////        if (a > b)
////            a = a % b;
////        else
////            b = b % a;
////    }
////    int result = a + b;
////    this->numerator = numerator / result;
////    this->denominator = denominator / result;
////    return *this;
////}
//
////class Square {
////    static int length;
////    static int width;
////    static int count;
////public:
////    //Square(int a, int b):length{a}, width{b}{}
////    static int square_regtangle()
////    {
////        ++count;
////        return length * width;
////    }
////    static float square_treug()
////    {
////        ++count;
////        return 0.5 * length * width;
////    }
////    static int square_romb()
////    {
////        ++count;
////        return length * width;
////    }
////    static int getCount() { return count; }
////    void setLength(int a) { length = a; }
////    void setWidth(int a) { width = a; }
////};
////
////int Square::count = 0;
////int Square::length = 1;
////int Square::width = 1;
//
////class Array
////{
////    int size;
////    int* arr;
////public:
////    Array(int size) : size{size}, arr{new int[size]}{cout << "construktor for " << this << "\n"; }
////    Array():Array(5){ cout << "construktor for " << this << "\n"; }
////
////    Array(const Array& obj) : size{obj.size}, arr{new int[obj.size]}
////    {
////        cout << "construktor copy for " << this << "\n";
////        for (int i = 0; i < size; ++i)
////        {
////            arr[i] = obj.arr[i];
////        }
////    }
////
////    ~Array()
////    {
////        delete[]arr;
////        cout << "destructor for " << this << "\n";
////    }
////
////    void randomize();
////    void print();
////};
////
////void Array::randomize()
////{
////    for (int i = 0; i < size; ++i)
////    {
////        arr[i] = rand() % 51;
////    }
////}
////
////void Array::print()
////{
////    for (int i = 0; i < size; ++i)
////    {
////        cout << arr[i] << " ";
////    }
////    cout << endl;
////}
//
////
////class Point {
////    int x;
////    int y;
////    int z;
////public:
////    static int val;
////    /*Point() :x{}, y{}, z{}{}
////    Point(int a): x{a}, y{}, z{}{}
////    Point(int a, int b) : x{ a }, y{ b }, z{}{}
////    Point(int a, int b, int c): x{a}, y{b}, z{c}{}*/
////
////    Point(int a, int b, int c) : x{ a }, y{ b }, z{ c }{}//Делегированный конструктор
////    Point(int a, int b) : Point(a, b, 0){}
////    Point(int a) : Point(a, 0, 0){}
////    Point() :Point(0,0,0){}
////
////    int getX() { return x; }
////    int getY() { return y; }
////    int getZ() { return z; }
////};
////
////int Point::val{ 90 };//Статическое поле (переменная) класса
//
////class Tochka
////{
////    int x;
////    int y;
////    int z;
////public:
////    Tochka()
////    {
////        x = 0;
////        y = 0;
////        z = 0;
////    }
////    Tochka(int x, int y)
////    {
////        Tochka::x = x;
////        Tochka::y = y;
////        z = 0;
////    }
////    Tochka(int X, int Y, int Z)
////    {
////        x = X;
////        y = Y;
////        z = Z;
////    }
////
////    void file_scanf();
////    void file_printf();
////    
////    int get_X() { return x; }
////    int get_Y() { return y; }
////    int get_Z() { return z; }
////
////    void set_X(int X) { x = X; }
////    void set_Y(int Y) { y = Y; }
////    void set_Z(int Z) { z = Z; }
////    
////};
////
////void Tochka::file_scanf()//чтение из файла
////{
////    FILE* in;
////    if (fopen_s(&in, "C://Users//5//OneDrive//Рабочий стол//Новая папка//int.txt", "r") != NULL)
////        cout << "ERROR";
////    else
////    {
////        fscanf(in, "%i", &x);
////        fscanf(in, "%i", &y);
////        fscanf(in, "%i", &z);
////        fclose(in);
////        //cout << number;
////    }   
////}
////
////void Tochka::file_printf()//запись в файл??????????
////{
////    FILE* out;
////    fopen_s(&out, "C://Users//5//OneDrive//Рабочий стол//Новая папка//out.txt", "w");
////    fprintf(out, "%i%s", x, '\n');
////    fprintf(out, "%i%s", y, '\n');
////    fprintf(out, "%i%s", z, '\n');
////    fclose(out);
////}
//
////class Tochka
////{
////    double x;
////    double y;
////    double z;
////public:
////    Tochka()
////    {
////        x = 0;
////        y = 0;
////        z = 0;
////    }
////    Tochka(double X, double Y)
////    {
////        x = X;
////        y = Y;
////        z = 0;
////    }
////    Tochka(double X, double Y, double Z)
////    {
////        x = X;
////        y = Y;
////        z = Z;
////    }
////    void set_X(double X){x = X;}
////    void set_Y(double Y){y = Y;}
////    void set_Z(double Z){z = Z;}
////    double get_X(){return x;}
////    double get_Y(){return y;}
////    double get_Z(){return z;}
////
////    void save();
////    void inputdate();
////};
////
////void Tochka::inputdate()
////{
////    FILE* in;
////    if (fopen_s(&in, "C://Users//5//OneDrive//Рабочий стол//Новая папка//myfile.txt", "r") != NULL)
////        cout << "error";
////    else
////    {
////        char num;
////        while (!feof(in))
////        {
////            num = fgetc(in);
////            cout << num;
////        }
////        /*char str[10];
////        while (!feof(in))
////        {
////            fscanf(in, "%s", str);
////            cout << str << " ";
////        }*/
////    }
////
////}
////void Tochka::save()
////{
////    FILE* out;
////    fopen_s(&out, "C://Users//5//OneDrive//Рабочий стол//Новая папка//myfile.txt", "w");
////    fprintf(out, "%d", x);
////    fprintf(out, "%s", '\n');
////    fprintf(out, "%d", y);
////    fprintf(out, "%s", '\n');
////    fprintf(out, "%d", z);
////    fclose(out);
////}
//
////class Student
////{
////    char* name;
////    const char* data;
////    const char* telefon;
////    const char* stadt;
////    const char* land;
////    const char* schule;
////    const char* stadt_schule;
////    const char* land_schule;
////    const char* gruppa;
////public:
////    Student(char* Name, const char* Data, const char* Telefon, const char* Stadt, const char* Land, const char* Schule, const char* Stadt_schule, const char* Land_schule, const char* Gruppa)
////    {
////        name = Name;
////        data = Data;
////        telefon = Telefon;
////        stadt = Stadt;
////        land = Land;
////        schule = Schule;
////        stadt_schule = Stadt_schule;
////        land_schule = Land_schule;
////        gruppa = Gruppa;
////    }
////
////    Student()
////    {
////        name = nullptr;
////        data = nullptr;
////        telefon = nullptr;
////        gruppa = nullptr;
////    }
////
////    Student(const char* Name, const char* Data, const char* Telefon, const char* Gruppa)
////    {
////        name = new char[strlen(Name)+1];
////        int i;
////        for (i = 0; i < strlen(Name); ++i)
////        {
////            name[i] = Name[i];
////        }
////        name[i] = '\0';
////        data = Data;
////        telefon = Telefon;
////        gruppa = Gruppa;
////    }
////
////    Student(Student&& obj)
////    {
////        this->name = obj.name;
////        obj.name = 0;
////        this->data = obj.data;
////        obj.data = nullptr;
////        this->stadt = obj.stadt;
////        obj.stadt = nullptr;
////        this->land = obj.land;
////        obj.land = nullptr;
////        this->schule = obj.schule;
////        obj.schule = nullptr;
////        this->stadt_schule = obj.stadt_schule;
////        obj.stadt_schule = nullptr;
////        this->land_schule = obj.land_schule;
////        obj.land_schule = nullptr;
////        this->gruppa = obj.gruppa;
////        obj.gruppa = nullptr;
////    }
////
////    void set_name(char* Name) { name = Name; }
////    void set_data(const char* Data) { data = Data; }
////    void set_telefon(const char* Telefon) { telefon = telefon; }
////    void set_gruppa(const char* Gruppa) { gruppa = Gruppa; }
////
////    char* get_name(){return name;}
////    const char* get_data(){return data;}
////    const char* get_telefon(){return telefon;}
////    const char* get_stadt(){return stadt;}
////    const char* get_land(){return land;}
////    const char* get_schule(){return schule;}
////    const char* get_land_chule(){return schule;}
////    const char* get_stadt_schule(){return stadt_schule;}
////    const char* get_gruppa(){return gruppa;}
////
////    ~Student()
////    {
////        delete[] name;
////    }
////};
//
////class Lift
////{
////    int min_value; //макс этаж
////    int max_value; //мин этаж
////    bool turn_on; //включение /выключение лифта
////    int floor;//текущий этаж
////    bool work;//работает/не работает
////public:
////    Lift()//конструктор
////    {
////        min_value = 1;
////        max_value = 12;
////        floor = 1;
////        turn_on = false;
////        work = false;
////    }
////
////    //~Lift(){}//деструктор (не нужен, т.к. нкет динамического выделения памяти)
////
////    bool get_turn_on() //работает не работает
////    {
////        if (turn_on)
////            cout << "Лифт включён\n";
////        else
////            cout << "Лифт выключен\n";
////        return turn_on;
////    }
////
////    bool get_work() //работает не работает
////    {
////        if (work)
////            cout << "Лифт работает\n";
////        else
////            cout << "Лифт не работает\n";
////        return turn_on;
////    }
////
////    int get_floor()//текущий этаж
////    {
////        return floor;
////    }
////
////    void call(int new_floor)//обработка вызова лифта
////    {
////        cout << "Лифт вызвался на " << new_floor << " этаж\n";
////        turn_on = true;
////        move(new_floor);
////    }
////
////    void move(int new_floor) //обработка вызова лифта
////    {
////        cout << "Лифт движется на " << new_floor << " этаж\n";
////        floor = new_floor;
////        work = true;
////    }
////
////    void stop()//остановка лифта
////    {
////        turn_on = false;
////        work = false;
////    }
////};
//
////class MyClass {
////    int a;
////    int b;
////public:
////    MyClass()//перегруженный конструктор (только для заполнения объекта)
////    {
////        a = 0;
////        b = 0;
////    }
////    MyClass(int A)
////    {
////        a = A;
////        b = 0;
////    }
////    MyClass(int a, int b)///Конструктор можно пререгружать
////    {
////        this->a = a;//a=A(если конструктор принимает параметры А и В)
////        this->b = b;//b=B
//// 
////    }
////    void setA(int A)//Модификатор - изменяет (геттер)
////    {
////        a = A;
////    }
////    int getA()//Аксессор - выводит (сеттер)
////    {
////        return a;
////    }
////    int getB()//Аксессор - выводит (сеттер)
////    {
////        return b;
////    }
////};
//
////class Base
////{    
////    int a = 90;
////    float b = 10.5;
////public:
////    int getInt();
////};
////
////int Base::getInt()//Вынос тела метода из класса
////{
////    return a;
////}
////
////class Deraved : protected Base //наследование
////{
////    int c = 20;
////    int a = 9;
////public:
////    int getInt()
////    {
////        return c;
////    }
////};
////
////class A : public Base
////{
////    int c = 20;
////};
////
////class B : public Base
////{
////    int x = 200;
////};

//void DeleteComment(string& prog)
//{
//    int i;
//    int k = -1;
//    for (i = 0; i < prog.size()-1; ++i)
//    {
//        if (prog[i] == '/' && prog[i+1] == '/')
//            break;
//        if (prog[i] == '/' && prog[i+1] == '*')
//        {
//            k = i + 2;
//            while (prog[k] != '*' && prog[k+1] != '/')
//                ++k;
//            ++k;
//            break;
//        }
//    }
//    if (k == -1)
//        prog.erase(i);
//    else
//        prog.erase(prog.begin() + i, prog.begin() + k + 1);
//}

//void Substring(string& str, string& substr)
//{
//    //int position = -1;
//    //string result = str;
//    //for (int i = 0; i < str.size(); ++i)
//    //{        
//    //    for (int j = 0; j < substr.size(); ++j)
//    //    {
//    //        if (str[i] == substr[j])
//    //        {
//    //            ++i;
//    //            position = i;
//    //        }
//    //        else
//    //            break;
//    //    }
//    //    if (position != -1)
//    //    {
//    //        result.insert(position - str.size(), 1, '(');
//    //        result.insert(position, 1, ')');
//    //    }
//    //}
//    //return result;
//    int start{ 0 };
//    while (start!=-1)
//    {
//
//        start = str.find(substr, start);
//        if (start != -1)
//        {
//            str.insert(str.begin() + start, '(');
//            str.insert(str.begin() + start + substr.size(), ')');
//            start = start + substr.size();
//        }
//    }
//}

//class Steck
//{
//    enum { EMPTY = -1, FULL = 20 }; //переменные для начала и конца стека
//    char st[FULL + 1];  //массив элементов стека
//    int top;            //указатель на элемент стека
//public:
//    bool isEmpty();     //проверка на пустоу массива
//    bool isFull();      //проверка на переполнение массива
//    void push(char c);  //добавление элемента в стек
//    char pop();         //удаление элемета из стека
//    void clear();       //отчистка стека
//    int getCount();     //вывод количества элементов стеке
//    Steck();            //конструктор бесз параметров
//
//
//};
//Steck::Steck() { top = EMPTY; }//конструктор бесз параметров
//
//bool Steck::isEmpty(){return top == EMPTY;}//проверка на пустоу массива
//
//bool Steck::isFull(){return top == FULL;}//проверка на переполнение массива
//
//void Steck::push(char c)//добавление элемента в стек
//{
//    if (!isFull())
//        st[++top] = c;
//}
//
//char Steck::pop()//удаление элемета из стека
//{
//    if (!isEmpty())
//        return st[top--];
//    return 0;
//}
//
//void Steck::clear(){top = EMPTY;}//отчистка стека
//
//int Steck::getCount() { return top + 1; }//вывод количества элементов стеке

//class Queue
//{
//    int maxQueueLength;
//    int QueueLength;
//    int* Wait;
//public:
//    Queue(int m);
//    ~Queue();
//    void Add(int c);
//    int Extract();
//    void Clear();
//    bool isEmpty();
//    bool isFull();
//    int getCount();
//    void Show();
//};
//
//Queue::Queue(int m) :maxQueueLength{ m }, QueueLength{ 0 }, Wait{ new int[maxQueueLength] } {}
//Queue::~Queue() { delete[] Wait; }
//void Queue::Add(int c)
//{
//    if (!isFull())
//        Wait[QueueLength++] = c;
//}
//int Queue::Extract()
//{
//    if (!isEmpty())
//    {
//        int temp = Wait[0];
//        for (int i = 1; i < QueueLength; ++i)
//            Wait[i - 1] = Wait[i];
//        //--QueueLength;
//        Wait[QueueLength - 1] = temp;
//        return 1;
//        //return temp;
//    }
//    else return -1;
//}
//
//bool Queue::isEmpty() { return QueueLength == 0; }
//bool Queue::isFull() { return QueueLength == maxQueueLength; }
//int Queue::getCount() { return QueueLength; }
//void Queue::Clear() { QueueLength = 0; }
//void Queue::Show()
//{
//    for (int i = 0; i < QueueLength; ++i)
//        cout << Wait[i] << " ";
//    cout << endl;
//}

//class QueuePripority
//{
//    int maxQueueLength;
//    int QueueLength;
//    int* Wait;
//    int* Pri;
//public:
//    QueuePripority(int m);
//    ~QueuePripority();
//    void Add(int c, int p);
//    int Extract();
//    void Clear();
//    bool isEmpty();
//    bool isFull();
//    int getCount();
//    void Show();
//};
//
//QueuePripority::QueuePripority(int m) :maxQueueLength{ m }, QueueLength{ 0 }, Wait{ new int[maxQueueLength] }, Pri{new int[maxQueueLength]} {}
//QueuePripority::~QueuePripority() { delete[] Wait; delete[] Pri; }
//void QueuePripority::Add(int c, int p)
//{
//    if (!isFull())
//    {
//        Wait[QueueLength] = c;
//        Pri[QueueLength] = p;
//        ++QueueLength;
//    }
//}
//int QueuePripority::Extract()
//{
//    if (!isEmpty())
//    {
//        int max_pri = Pri[0];
//        int pos_max_pri = 0;
//        for (int i = 0; i < QueueLength; ++i)
//            if (max_pri < Pri[i])
//            {
//                max_pri = Pri[i];
//                pos_max_pri = i;
//            }
//        int temp1 = Wait[pos_max_pri];
//        int temp2 = Pri[pos_max_pri];
//        for (int i = pos_max_pri+1; i < QueueLength; ++i)
//        {
//            Wait[i - 1] = Wait[i];
//            Pri[i - 1] = Pri[i];
//        }
//        --QueueLength;
//        return temp1;
//
//        //int temp = Wait[0];
//        //for (int i = 1; i < QueueLength; ++i)
//        //    Wait[i - 1] = Wait[i];
//        ////--QueueLength;
//        //Wait[QueueLength - 1] = temp;
//        //return 1;
//        ////return temp;
//    }
//    else return -1;
//}
//
//bool QueuePripority::isEmpty() { return QueueLength == 0; }
//bool QueuePripority::isFull() { return QueueLength == maxQueueLength; }
//int QueuePripority::getCount() { return QueueLength; }
//void QueuePripority::Clear() { QueueLength = 0; }
//void QueuePripority::Show()
//{
//    for (int i = 0; i < QueueLength; ++i)
//        cout << Wait[i] << "-" << Pri[i] << endl;
//    cout << endl;
//}

//template <typename T>
//double SrAref(T* a, int n)
//{
//    int s = 0;
//    for (int i = 0; i < n; ++i)
//        s += a[i];
//    return (double)s / n;
//}

//template <typename T>
//void KorniLine(T* a)
//{
//    cout <<"X = " << -(double)a[1] / a[0] << endl;
//}
//
//template<typename T>
//void KorniKvadrat(T* a)
//{
//    double D = a[1] * a[1] - 4 * a[0] * a[2];
//    if (D < 0)
//    {
//        cout << "Нет корней уравнения\n";
//    }
//    else if (D == 0)
//    {
//        cout<<"X0 = " << (-a[1] + sqrt(D)) / (2 * a[0])<< endl;
//    }
//    else
//    {
//        cout<<"X0 = "<< (-a[1] - sqrt(D)) / (2 * a[0])<< endl;
//        cout << "X1 = " << (-a[1] + sqrt(D)) / (2 * a[0])<<endl;
//    }
//
//}

//template <typename T>
//T Max(T par1, T par2)
//{
//    return (par1 > par2) ? par1 : par2;
//}
//
//template <typename T>
//T Min(T par1, T par2)
//{
//    return (par1 < par2) ? par1 : par2;
//}
//
//template <typename T1, typename T2>
//T2 Min(T1 par1, T2 par2)
//{
//    return (par1 < par2) ? par1 : par2;
//}

//template<typename T>
//class Array {
//public:
//    Array(const std::initializer_list<T>& list) :
//        size_(list.size()),
//        capacity{ size_ },
//        arr{ new T[this->size_] }
//    {
//        int i{ 0 };
//        for (auto element : list)
//        {
//            arr[i] = element;
//            ++i;
//        }
//    }
//    Array(int capacity) :
//        size_{ 0 },
//        capacity{ capacity },
//        arr{ new T[this->capacity] }
//    {};
//
//    ~Array() {
//        delete[] arr;
//    }
//
//    int GetSize()const { return this->size_; }
//
//    Array& SetSize(int size)
//    {
//        if (size > this->capacity)
//        {
//            T* temp = new T[size];
//            for (int i{ 0 }; i < this->size_; ++i)
//            {
//                temp[i] = this->arr[i];
//            }
//            delete[] arr;
//            this->arr = temp;
//        }
//        else {
//            T* temp = new T[size];
//            for (int i{ 0 }; i < size; ++i)
//            {
//                temp[i] = this->arr[i];
//            }
//
//            delete[] arr;
//            arr = temp;
//        }
//        this->capacity = size;
//
//        return *this;
//    }
//
//    int  GetUpperBound()const { return this->size_ - 1; }
//    bool IsEmpty()const { return this->size_ == 0; }
//
//    void  FreeExtra()
//    {
//        T* temp = new T[this->size_];
//        for (int i{ 0 }; i < this->size_; ++i)
//        {
//            temp[i] = this->arr[i];
//        }
//        delete[] arr;
//        arr = temp;
//        this->capacity = this->size_;
//    }
//
//    void RemoveAll() {
//        delete[] arr;
//        all = nullptr;
//        this->capacity = 0;
//        this->size_ = 0;
//    }
//
//    T GetAt(int index)const {
//        return this->arr[index];
//    }
//
//    void SetAt(T value, int index)
//    {
//        this->arr[index] = value;
//    }
//
//    T& operator[](int index)
//    {
//        return this->arr[index];
//    }
//
//    Array& Add(int value) {
//        this->arr[this->size_] = value;
//        ++(this->size_);
//        return *this;
//    }
//
//    friend std::ostream& operator<<(std::ostream& out, const Array& array)
//    {
//        for (int i{ 0 }; i < array.size_; ++i)
//        {
//            std::cout << array.arr[i] << " ";
//        }
//
//        return out;
//    }
//private:
//    int size_;
//    int capacity;
//    T* arr;
//};

//template <typename T>
//class Array
//{
//    int size;
//    int capasity;
//    T* arr;
//public:
//    Array(int capasity) : size{ 0 }, capasity{ capasity } arr{ new T[this->capasity] }{}
//    Array(const initialiser_list<T>& list) :size{ list.size() }, capasity{this->size}, arr{ new T[this->capasity] }
//    {
//        int i{ 0 };
//        for (int element : list)
//        {
//            this->arr[i] = element;
//            ++i;
//        }
//    }
//    ~Array()
//    {
//        delete[] arr;
//    }
//    int GetSize{ return size; }
//    friend std::ostream& operator<<(ostream& out, const Array& arr)
//    {
//        for (int i=0; i<size; ++i)
//        {
//            out << arr[i] <<" ";
//        }
//        return out;
//    }
//    Array& SetSize(int size)
//    {
//        if (size > this->capasity)
//        {
//            T* temp = new T[size]{0};
//            for (int i = 0; i < this->size; ++i)
//                temp[i] = this->arr[i];
//            delete arr;
//            arr = temp;
//        }
//        else
//        {
//            T* temp = new T[size];
//            for (int i = 0; i < size; ++i)
//                temp[i] = this->arr[i];
//            delete arr;
//            arr = temp;
//        }
//    }
//    int GetUpperBound()
//    {
//        return size - 1;
//    }
//    bool IsEmpty()
//    {
//        return this->size == 0;
//    }
//    void FreeExtra()
//    {
//        /*for (T* ptr = this->(arr + this->size); ptr < this->(arr + capasity); ++ptr)
//        {
//            delete ptr;
//        }
//        this->capasity = this->size;*/
//        /*for (int i = this->size; i < this->capasity; ++i)
//            delete this->arr[i];
//        this capasity = this->size;*/
//        T temp = new T[this->size];
//        for (int i = 0; i < this->size; ++i)
//            temp[i] = this->arr[i];
//        delete arr;
//        arr = temp;
//    }
//    void RemoveCout()
//    {
//        delete[] arr;
//    }
//    T GetAt(int i)
//    {
//        return this->arr[i];
//    }
//    void SetAt(T value, int ondex)
//    {
//        this->arr[index] = value;
//    }
//    T& operator[](int index)
//    {
//        return  this->arr[index];
//    }
//    Array& Add(int value)
//    {
//        this->arr[this->size] = value;
//        ++(this->size);
//        return *this;
//    }
//};

//class Stek
//{
//    int ukas = 0;
//    int size;
//    char* stek;
//public:
//    Stek(int size):size{size}, stek{new char[this->size]}{}
//    ~Stek() { delete[] stek; }
//    void setStek(char symbole)
//    {
//        if (ukas != size)
//        {
//            this->stek[ukas] = symbole;
//            ++ukas;
//        }
//    }
//    char getStek()
//    {
//        --ukas;
//        return stek[ukas + 1];
//    }
//    void printStek()
//    {
//        for (int i = 0; i < ukas; ++i)
//            cout << stek[i] << " ";
//        cout << endl;
//    }
//    int getUkas() { return ukas; }
//    int getSize() { return size; }
//};

//class Stek
//{
//    enum {EMPTY =-1, FULL =20};
//    char st[FULL + 1];
//    int tmp;
//public:
//    Stek() { tmp = EMPTY; }
//    bool isEmpty() { return tmp == EMPTY; }
//    bool isFULL() { return tmp == FULL; }
//    void deleteStek() { tmp = EMPTY; }
//    int getSize() { return tmp + 1; }
//    void push(char symbol)
//    {
//        if (!isFULL())
//            st[++tmp] = symbol;
//    }
//    char pop()
//    {
//        if (!isEmpty())
//            return st[tmp];
//        return 0;
//    }
//    char out_stek()
//    {
//        if (!isEmpty())
//            return st[tmp--];
//        return 0;
//    }
//};

//class Stek
//{
//    int  EMPTY = -1;
//    int FULL;
//    char* st;
//    int tmp;
//public:
//    Stek(int size) : FULL{ size }, st{new char[this->FULL+1]} { tmp = EMPTY; }
//    bool isEmpty() { return tmp == EMPTY; }
//    bool isFULL() { return tmp == FULL; }
//    void deleteStek() { tmp = EMPTY; }
//    int getSize() { return tmp + 1; }
//    void push(char symbol)
//    {
//        if (!isFULL())
//            st[++tmp] = symbol;
//        else
//        {
//            char* temp = new char[tmp + 1];
//            for (int i = 0; i < getSize(); ++i)
//                temp[i] = st[i];
//            temp[tmp] = symbol;
//            delete st;
//            st = temp;
//            tmp++;
//        }
//    }
//    char pop()
//    {
//        if (!isEmpty())
//            return st[tmp];
//        return 0;
//    }
//    char out_stek()
//    {
//        if (!isEmpty())
//            return st[tmp--];
//        return 0;
//    }
//};

//template <typename T>
//class Queue
//{
//    int maxLen;
//    int Len;
//    T* Q;
//public:
//    Queue(int m) : maxLen{ m }, Len{ 0 }, Q{new T[this->maxLen]}{}
//    ~Queue() { delete[] Q; }
//    bool isEmpty() { return Len == 0; }
//    bool isFull() { return Len == maxLen; }
//    void Enqueue(T a)
//    {
//        if (!isFull())
//            Q[Len++] = a;
//    }
//    T Dequeue()
//    {
//        if (!isEmpty())
//        {
//            T temp = Q[0];
//            for (int i = 1; i < Len; ++i)
//                Q[i - 1] = Q[i];
//            --Len;
//            return temp;
//        }
//    }
//    void Show()
//    {
//        for (int i = 0; i < Len; ++i)
//            cout << Q[i] << " ";
//        cout << endl;
//    }
//};

//template<typename T>
//class PrioryQueue
//{
//    int maxLen;
//    int Len;
//    T* Q;
//    int* Priory;
//public:
//    PrioryQueue(int m):maxLen{m}, Len{0}, Q{new T[this->maxLen]}, Priory{new int[this->maxLen]}{}
//    ~PrioryQueue()
//    {
//        delete[] Q;
//        delete[] Priory;
//    }
//    bool isEmpty() { return Len == 0; }
//    bool isFull() { return Len = maxLen; }
//    void InsertWithPriority(T q, int p)
//    {
//        Q[Len] = q;
//        Priory[Len] = p;
//        Len++;
//    }
//    void PullHighestPriorityElement()
//    {
//        int maxPos = MaxPos();
//        cout << "Q: " << Q[maxPos] << "  P: " << Priory[maxPos] << endl;
//        for (int i = maxPos+1; i < Len; ++i)
//        {
//            Priory[i - 1] = Priory[i];
//            Q[i - 1] = Q[i];
//        }
//        --Len;
//    }
//    T Peek()
//    {
//        int maxPos = MaxPos();
//        return Q[maxPos];
//    }
//    void Show()
//    {
//        for(int i=0; i<Len;++i)
//            cout << "Q: " << Q[i] << "  P: " << Priory[i] << endl;
//    }
//    int MaxPos()
//    {
//        int maxPriory = Priory[0];
//        int maxPos = 0;
//        for (int i = 1; i < Len; ++i)
//            if (Priory[i] > maxPriory)
//            {
//                maxPriory = Priory[i];
//                maxPos = i;
//            }
//        return maxPos;
//    }
//};

////Код Ахмеда - односвязный список
//template<typename T>
//class LinkedList {
//public:
//
//    LinkedList() :head{ nullptr }, size_{ 0 }{};
//    ~LinkedList()
//    {
//        deleteAll();
//        cout << "Сработал деструктор" << endl;
//    }
//
//    void  addToTail(T t)
//    {
//        if (this->head == nullptr)
//        {
//            head = new node{ t, nullptr };
//            ++(this->size_);
//            return;
//        }
//        node* temp = head;
//        while (temp->next != nullptr)
//            temp = temp->next;
//        temp->next = new node{ t, nullptr };
//        ++(this->size_);
//    }
//
//    void  AddToHead(T t)
//    {
//        node* temp = new node{ t, head };
//        head = temp;
//        ++(this->size_);
//    }
//
//    void  deleteFromHead()
//    {
//        if (this->head == nullptr)
//        {
//            cout << "Список пуст\n";
//            return;
//        }
//        if (this->head->next == nullptr)
//        {
//            delete head;
//            this->size_ = 0;
//            head = nullptr;
//            return;
//        }
//        node* temp = head;
//        head = head->next;
//        --(this->size_);
//        delete temp;
//    }
//
//    void  deleteFromTail()
//    {
//        if (this->head->next != nullptr)
//        {
//            node* temp1 = head->next;
//            node* temp2 = head;
//            while (temp1->next != nullptr)
//            {
//                temp2 = temp1;
//                temp1 = temp1->next;
//            }
//            delete temp1;
//            temp2->next = nullptr;
//            --(this->size_);
//            return;
//        }
//        delete head;
//        head = nullptr;
//        this->size_ = 0;
//    }
//
//    void deleteAll()
//    {
//        if (head != nullptr)
//        {
//            node* temp = head->next;
//            while (temp != nullptr)
//            {
//                delete head;
//                head = temp;
//                temp = temp->next;
//            }
//        }
//        delete head;
//        this->head = nullptr;
//        this->size_ = 0;
//    }
//
//    void show()
//    {
//        node* temp = head;
//        while (temp != nullptr)
//        {
//            std::cout << temp->data << " ";
//            temp = temp->next;
//        }
//        std::cout << std::endl;
//    }
//
//    int getSize() { return size_; }
//
//    void InsertElement(int i, T t)
//    {
//        if (this->size_ < i)
//        {
//            addToTail(t);
//            return;
//        }
//        node* temp = head;
//        int count{ 1 };
//        while (count < i - 1)
//        {
//            temp = temp->next;
//            ++count;
//        }
//        node* newNode = new node{ t, temp->next };
//        temp->next = newNode;
//        ++(this->size_);
//    }
//
//    void DeletePosition(int i)
//    {
//        assert(i >= 1 and i <= this->size_ and "Элемент вне диапазона\n");
//        if (i == 1)
//        {
//            this->deleteFromHead();
//            return;
//        }
//        if (i == size_)
//        {
//            this->deleteFromTail();
//            return;
//        }
//        node* temp = head;
//        int count{ 1 };
//        while (count < i - 1)
//        {
//            temp = temp->next;
//            ++count;
//        }
//        node* newNode = temp->next;
//        temp->next = newNode->next;
//        delete newNode;
//        --(this->size_);
//    }
//
//    int searcheElement(T t)
//    {
//        node* temp = head;
//        for (int i = 1; temp!=nullptr; ++i)
//        {
//            if (temp->data == t)
//                return i;
//            temp = temp->next;
//        }
//        return -1;
//        //node* temp = head;
//        //int i = 1;
//        //while (temp != nullptr)
//        //{
//        //    if (temp->data == t)
//        //        return i;
//        //    temp = temp->next;
//        //    ++i;
//        //}
//        //return NULL;
//    }
//
//    int replacementElement(T oldElement, T newElement)
//    {
//
//        int position = searcheElement(oldElement);
//        int count{ 0 };
//        node* temp = head;
//        if (position != -1)
//        {
//            while (temp != nullptr)
//            {
//                if (temp->data == oldElement)
//                {
//                    temp->data = newElement;
//                    ++count;
//                }
//                temp = temp->next;
//            }
//            return count;
//        }
//        return -1;
//    }
//    void reverse()
//    {
//        node* prev = nullptr;
//        node* nextElem{ this->head->next };
//        bool flag = true;
//        while (nextElem != nullptr)
//        {
//            prev = head;
//            head = nextElem;
//            nextElem = nextElem->next;
//            head->next = prev;
//            if (flag) 
//            {
//                flag = false;
//                prev->next = nullptr;
//            }
//        }
//    }
//
//private:
//    struct node
//    {
//        T data;
//        node* next;
//    };
//    node* head;
//    int size_;
//};

//struct Bus
//{
//    int id;
//    int countPlase;
//    int numberRout;
//};
//
//struct Human
//{
//    string category;
//    int numberRout;
//};
//
//void BusStop(list<Human>& human, queue<Bus>& bus)
//{
//    int count{ 0 };
//    Sleep(1000);
//    for (auto it : human)
//        cout << "Появился " << human.begin();
//    ++count;
//    if (!count % 5)
//    {
//        
//    }
//    //Human hum = human.front();
//}

//Моя хрень
//class Graf
//{
//    int* p;
//    int* x;
//    struct element
//    {
//        int* left;
//        int* reft;
//        int key;
//    };
//
//public:
//    Graf() : p{ nullptr }, x{nullptr}{}
//    void Add(int k)
//    {
//        if (this->p == nullptr)
//        {
//            p = new element{ nullptr, nullptr, k };
//            return;
//        }
//    }
//
//};

//struct Elem
//{
//    int OwnerPoints;    //Очки хозяина
//    int OppPoints;      //Очки соперника
//    char Match[10];     //Счёт
//    char Name[20];      //Команда
//    char Opponent[20];  //Соперник
//
//    Elem* left, * right, * parent;
//};
//
//class Tree
//{
//    Elem* root;
//public:
//    Tree();
//    ~Tree();
//    void Print(Elem* Node);                 //печать от указанного узла
//    Elem* Search(Elem* Node, char* key);    //поиск от указанного узла  
//    Elem* Min(Elem* Node);                  //мин от указанного узла
//    Elem* Max(Elem* Node);                  //макс от указанного узла
//    Elem* Next(Elem* Node);                 //следующий для указанного узла
//    Elem* Previous(Elem* Node);             //предыдущий для указанного узла
//    void Insert(Elem* z);                   //вставка узла
//    void Del(Elem* z = 0);                  //удаление элемента или всего дерева если z=0
//    Elem* GetRoot();                        //получит корень
//
//
//};
//
//Tree::Tree() { root = nullptr; }
//Tree::~Tree() { Del(); }//вызывает метод Del при  z=0 (параметр по умолчанию) для удаления всего дерева
//void Tree::Print(Elem* Node)
//{
//    if (Node != 0)
//    {
//        Print(Node->left);
//        cout << Node->Name << Node->Match << Node->Opponent << endl;
//        Print(Node->right);
//    }
//}
//
//Elem* Tree::Search(Elem* Node, char* key) //Elem* Node указатель на структуру //(на начало дерева и его вершины)
//{
//    while (Node != 0 && strcmp(key, Node->Name) != 0) 
//        if (strcmp(key, Node->Name) < 0)
//            Node = Node->left;
//        else
//            Node = Node->right;
//    return Node;
//}
//
//Elem* Tree::Min(Elem* Node)
//{
//    if (Node != 0)
//        while (Node->left != 0)
//            Node = Node->left;
//    return Node;
//}
//
//Elem* Tree::Max(Elem* Node)
//{
//    if (Node != 0)
//        while (Node->right != 0)
//            Node = Node->right;
//    return Node;
//}
//
//Elem* Tree::Next(Elem* Node)
//{
//    //рисовать рисунок декрева с цифами и см по коду
//    Elem* y = 0;
//    if (Node != 0)
//    {
//        if (Node->right != 0)       //если у переданного узла есть правый потомок
//            return Min(Node->right);//то возвращаем минимальный элемент (по значению) из правого потомка (см рисунок с деревом и цифрами)
//        y = Node->parent;
//        while(y != 0 && Node == y->right)
//        {
//            Node = y;
//            y = y->parent;
//        }
//    }
//    return y;
//}
//
//Elem* Tree::Previous(Elem* Node)
//{
//    Elem* y = 0;
//    if (Node != 0)
//    {
//        if (Node->left != 0)
//            return Max(Node->left);
//        y = Node->parent;
//        if (y != 0 && Node == y->left)
//        {
//            Node = y;
//            y = y->parent;
//        }
//    }
//    return y;
//}
//
//void Tree::Del(Elem* z = 0)
//{
//    if (z != 0)
//    {
//        Elem* Node, * y;
//        if (z->left == 0 || z->right == 0)
//            y = z;
//        else
//            y = Next(z);
//
//        if (y->left != 0)
//            Node = y->left;
//        else
//            Node = y->right;
//
//        if (Node != 0)
//            Node->parent = y->parent;
//
//        if (y->parent == 0)
//            root = Node;
//        else if (y == y->parent->left)
//            y->parent->left = Node;
//        else
//            y->parent->right = Node;
//        if (y != z)
//        {
//            strcpy(z->Name, y->Name);
//            strcpy(z->Opponent, y->Opponent);
//            strcpy(z->Match, y->Match);
//            z->OppPoints = y->OppPoints;
//            z->OwnerPoints = y->OwnerPoints;
//        }
//        delete y;
//    }
//    else
//        while (root != 0)
//            Del(root);
//}
//
//void Tree::Insert(Elem* z)
//{
//    //изначально у переданного узла нет потомков
//    z->left = nullptr;
//    z->right = nullptr;
//
//    Elem* y = nullptr;  //родитель переданного узла
//    Elem* Node = root;  //указатель на вершины дерева (начиная с корня)
//
//    while (Node != 0)   //до тех пор, пока вершина не равна 0 (nullptr)
//    {
//        y = Node;       //родителем назначаем текущую вершину
//        if (strcmp(z->Name, Node->Name) < 0)    //если значение в переданном узле меньше чем в текущем узле
//            Node = Node->left;  //то переназаначаем на указатель
//        else
//            Node = Node->right; //иначе переназначаем на указатель на право
//    }
//    z->parent = y;  //назаначаем родителем пепеданного значения у
//
//    if (y == 0)     //если родитель равен 0
//        root = y;   //то переданное значение равно корню
//    else if (strcmp(z->Name, y->Name) < 0)  //если значение в переданном узле меньше чем в родительском
//        y->left = z;       //то левый родительский указатель равен переданному значению
//    else
//        y->right = z;      //иначе правый родительский указатель равен переданному значению
//}
//
//Elem* Tree::GetRoot() { return root; }

struct Client;

template<typename T>
class QueuePriority
{
public:
    QueuePriority(int m);
    QueuePriority() : QueuePriority{ 0 } {};

    ~QueuePriority() {
        delete[] this->Wait;
        delete[] this->Pri;
    }

    void Add(T t, int i);

    T Extract();

    void Clear();

    bool IsEmpty();

    bool IsFull();

    int GetCount();

    void Show();


private:
    T* Wait;
    int* Pri;
    int     MaxQueueLength;
    int     QueueLength;
};





template<typename T>
QueuePriority<T>::QueuePriority(int m)
{
    this->MaxQueueLength = m;

    this->Wait = new T[this->MaxQueueLength];
    this->Pri = new int[this->MaxQueueLength];

    this->QueueLength = 0;
}

template<typename T>
void QueuePriority<T>::Show() {
    std::cout << "\n-----------------------------------\n";

    for (int i = 0; i < this->QueueLength; i++)
    {
        std::cout << this->Wait[i] << " - " << this->Pri[i] << "\n\n";
    }
    std::cout << "\n-----------------------------------\n";
}

template<typename T>
void QueuePriority<T>::Clear()
{
    this->QueueLength = 0;
}

template<typename T>
bool QueuePriority<T>::IsEmpty()
{
    return this->QueueLength == 0;
}

template<typename T>
bool QueuePriority<T>::IsFull()
{
    return this->QueueLength == this->MaxQueueLength;
}

template<typename T>
int QueuePriority<T>::GetCount()
{
    return this->QueueLength;
}

template<typename T>
void QueuePriority<T>::Add(T t, int i)
{
    if (!IsFull()) {
        this->Wait[QueueLength] = t;
        this->Pri[QueueLength] = i;
        ++(this->QueueLength);
    }


}

template<typename T>
T QueuePriority<T>::Extract()
{
    if (!IsEmpty())
    {
        int max_pri = Pri[0];

        int pos_max_pri = 0;

        for (int i = 1; i < this->QueueLength; i++)
            if (max_pri < Pri[i]) {
                max_pri = Pri[i];
                pos_max_pri = i;
            }

        T temp1 = Wait[pos_max_pri];
        int temp2 = Pri[pos_max_pri];

        for (int i = pos_max_pri; i < this->QueueLength - 1; i++) {
            Wait[i] = Wait[i + 1];
            Pri[i] = Pri[i + 1];
        }

        this->QueueLength--;

        return temp1;
    }

    Client client{ "--", -1 };
    return client;
};


struct Client {
    std::string name;
    int priority;
    std::time_t now = time(0);
    char* date = ctime(&now);

    friend std::ostream& operator<<(std::ostream& out, Client client)
    {
        
        //cout.setf(ios::left);
        
        out << client.name;
        cout.width(30);
        cout.setf(ios::right);
        out <<"\t" << client.date << std::endl;
        return out;
    }
};


class Printer {
public:

    Printer(Client client) : client_{ client }
    {}
    Printer() = default;

    void addToQueue(Client client)
    {
        this->queue_.Add(client, client.priority);
    }

    void print() {
        Client client = queue_.Extract();
        if (client.name != "--" && client.priority != -1)
        {
            std::cout << client;
            return;
        }
        std::cout << client;

    }

private:
    Client client_;
    QueuePriority<Client> queue_{ 10 };
};

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");

    /*B s;
    cout << s.getInt();*/

    /*int arr[]{ 1, 2 };
    MyClass s(10, 8);
    cout << s.getA()<<" "<<s.getB();*/

    /*Lift lift;
    lift.get_turn_on();
    cout << "Лифт находится на этаже "<<lift.get_floor()<<endl;
    lift.call(12);
    lift.get_turn_on();
    lift.get_work();
    lift.move(5);
    cout << "Лифт находится на этаже " << lift.get_floor()<<endl;
    lift.stop();
    lift.get_turn_on();
    lift.get_work();*/

    /*Student st("Иванов", "4.04.2003", "89201803351", "Тверь", "Россия", "ТвГТУ", "Тверь", "РФ", "Б.ПИН.РИС.21.06");
    cout << st.get_name() << " " << st.get_telefon() << " " << st.get_schule() << " " << st.get_gruppa() << endl;*/

    //Tochka t;
    //Tochka t1(1, 67.9);
    //Tochka t2(1, 2, 3.3);
    //t.set_X(2.5);
    //t.set_Y(89);
    //t.set_Z(5.7);
    //t1.set_X(23);
    //cout << "X: " << t.get_X() << endl << "Y: " << t.get_Y() << endl << "Z: " << t.get_Z() << endl;
    //cout << "X: " << t1.get_X() << endl << "Y: " << t1.get_Y() << endl;
    //cout << "X: " << t2.get_X() << endl << "Y: " << t2.get_Y() << endl << "Z: " << t2.get_Z() << endl;
    //t.inputdate();

    /*Student stud("Petrov\n", "01.01.1991", "88888", "bst");
    cout<<stud.get_name();*/

    //Group group;
    //group.reading_name_group();
    //char** array_name_group = group.get_name_group();
    //cout << array_name_group[0] << " " << array_name_group[1];
    //cout << endl;

    //group.reading_list_lessons();
    //char** array_list_lessons = group.get_list_lessons();
    //cout << array_list_lessons[0] << " " << array_list_lessons[1] << " " << array_list_lessons[2];
    //cout << endl;

    //group.reading_list_students();
    //char** array_list_student = group.get_list_student();
    //for (int i(0); i < 4; ++i)
    //{
    //    cout<<array_list_student[i]<<endl;
    //}
    ////cout << array_list_student[0] << " " << array_list_student[1] << " " << array_list_student[2] << " " << endl;

    //*student.reading_();
    //char** array_tabel_noten = group.get_tabel_noten();
    //for (int i = 0; i < 5; ++i)
    //{
    //    for (int j = 0; j < 6; ++j)
    //    {
    //        cout<<
    //    }
    //}*/

    //Student stud;
    //Group group;
    //stud.reading_rating();
    //group.reading_list_students();

    //int** array_rating = stud.get_rating();
    //for (int i = 0; i < 4; ++i)
    //{
    //    for (int j = 0; j < 5; ++j)
    //    {
    //        cout << array_rating[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    ////stud.data_student("Belov_S");

    //Tochka t;
    //t.file_scanf();
    //cout << t.get_X() << " " << t.get_Y() << " " << t.get_Z();
    //t.file_printf();

    /*Flat f(1);
    Rooms* r = new Rooms("main", 7, 2, 6, 0);
    Roll roll("roll1", 10, 100);
    int count = roll.amountRoll(f, r);
    cout << count;*/

    //Point p(20);
    //cout << p.setX(100).getX();
    //Point pp(p);
    //cout <<pp.getX() << " " << pp.getY() << " " << pp.getZ();

    /*Array arr;
    arr.randomize();
    Array arr2(arr);
    arr.print();
    arr2.print();*/

    //Fraction a(4, 6);
    //Fraction b(2, 4);
    ////a.add(b).print();
    ////a.sub(b).print();
    ////a.mul(b).print();
    ////a.div(b).print();
    //a.add(b).redaktion().print();

    /*cout << Square::square_regtangle()<<endl;
    Square rec;
    rec.setLength(10);
    rec.setWidth(20);
    cout << Square::square_regtangle()<<endl;
    Square rec1;
    rec1.setLength(10);
    rec1.setWidth(20);
    cout << Square::square_regtangle() << endl;
    cout << Square::getCount();*/

    //char* name = new char[15]{"Peter"};
    //char* surname = new char[15]{ "Peterov" };
    //char* fathername = new char[15]{ "Petovich" };
    //Human man(3744, name, surname, fathername, { 2, 3, 2005 });
    //man.print();
    //Human man1(man);
    //man1.print();
    //Human man3;
    //man3.print();
    //Human man2;
    //man2.setName("Vasya").setFathername("Ivanivich").setSurname("Ivanov");
    //man2.print();
    //cout << Human::getCountH();
    //delete[] name;
    //delete[] surname;
    //delete[] fathername;
    
    //const char* s1 = "Hello";
    //const char* s2 = "Hello world love";
    //const char* s = "Hello World";
    //MyString str(s);
    //str.print();
    //MyString str2(str);
    //str2.print();
    //str2.setMystring(s2).print();

    /*Array a(10);
    a.randomize().print();
    a.resize(5).randomize().print();
    a.sort().print();
    cout << a.max_element() << endl << a.min_element() << endl;
    Array a2(a);
    a2.print();*/

    /*A a(1, 2);
    a.setX(10);*/

    //MySet set(5);
    //set.push_back(23);
    //set.push_back(6);
    //set.push_back(33);
    //set.push_back(90);
    //set.push_back(89);

    //MySet set1;
    //set1.push_back(23);
    //set1.push_back(6);
    //set1.push_back(33);
    //set1.push_back(90);
    //set1.push_back(89);
    //bool b = (set == set1);
    //cout << "size set: " << set.getSize() << ", opasity " << set.getOpacity() << endl; 
    //cout << "size set1: " << set1.getSize() << ", opasity " << set1.getOpacity() << endl;
    //cout << b;
    //cout << set1;
    //*res.print();
    //cout << "size res: " << res.getSize() << ", opasity " << res.getOpacity() << endl;*/
    ////set.del(3);
    ////set.print();
    //*set.del();
    //cout << "size: " << set.getSize() << endl;
    //cout << "op: " << set.getOpacity() << endl;
    //set.print();*/

    /*const char* str = "Tolstoy";
    Book array[2]
    {
        { "Tolstoy", "War and Peace", "AST", 2000, 3500 },
        {"Dostoyevsky", "Crime and punishment", "AST", 1999, 900}
    };
    for(int i = 0; i < 2; ++i)
    {
        if(array[i].get_autor()=="Tolstoy")
            array[i].print();
    }
    int i= indexS(array, str);
    if (i != -1)
        cout << array[i].getName();*/

    //int i = 10;
    //int&& pRval = 10;//r-value ссылка
    //int& pLval = i;//l-value ссылка

    //Data d1(1, 2, 2001);
    //Data d2 = d1 + 20;
    //d2.print();
    
    /*MyString s1("sdqcg");
    MyString s2("rgfas34");
    MyString s3 = s1 && s2;
    s3.print();*/

    //Circle circle1(20);
    //Circle circle2(10);
    //bool b = (circle1 > circle2);
    //cout << b;
    //cout << circle1.getRad()<< endl;
    //circle1 -= 12;
    //cout << circle1.getRad();

    //Airplane a1(100);
    //Airplane a2(200);
    //bool b = a1 == a2;
    //cout << b;
    //++a1;
    //cout << a1.getPas();

    /*Array a();
    a.randomize();
    a.print();
    a(20);
    a.print();*/

    /*var val = 10;
    cout << typeid(10).name;*/

    /*Complex x(1, 2);
    Complex y(3, 4);
    cout << "x: " << x;
    cout << "y: " << y;
    Complex z = x - y;
    cout << "z: " << z;
    z = x;
    cout << "z: " << z;
    bool b = (z != x);
    cout << b << endl;*/

    /*Time t1(12, 50, 47);
    Time t2(11, 45, 5);
    cout << t1;
    cout << t2;
    bool b = (t1 > t2);
    cout << b << endl;*/

    /*string str = "Hello,        World           !";
    CompressText(str);
    cout << str;*/

    /*string prog = "string str; CompressText(str); cout << str;";
    cout << prog << endl;
    DeleteComment(prog);
    cout << prog << endl;*/

    /*string str = "abracadabra";
    string substr = "ab";
    Substring(str, substr);
    cout << str;*/

    /*Steck st;
    st.push('a');
    st.push('b');
    st.push('c');
    cout << st.getCount() << endl;
    while (!st.isEmpty())
        cout << st.pop() << " ";
    cout << endl << st.getCount() << endl;*/

    //Queue QU(25);
    //for (int i = 0; i < 25; ++i)
    //    QU.Add((i + 1) * (i + 1));
    //QU.Show();
    //for (int i = 0; i < 25; ++i)
    //    cout << QU.Extract() << " ";
    //QU.Clear();
    //while(!QU.isEmpty())
    //    cout << QU.Extract() << " ";
    //cout << endl << QU.getCount();

    //QueuePripority QUP(25);
    //for (int i = 0; i < 25; ++i)
    //{
    //    QUP.Add((i + 1) * (i + 1), i * 2 - (i + 1));
    //}
    //QUP.Show();
    //while (!QUP.isEmpty())
    //    cout << QUP.Extract() << " ";
    //QUP.getCount();

    //int a[] = { 1, 2, 3, 4 };
    //cout << SrAref(a, 4);

    //int a[3] = { 1, -2, 1 };
    //KorniKvadrat(a);
    //int b[2] = { 2, -4 };
    //KorniLine(b);

    //int n = 10;
    //double m = 9.5;
    //cout<<Min(m, n)<<endl;

    /*Array<int> ar{ 1,2,3,4,5 };
    std::cout << ar << std::endl;
    ar.SetSize(10);
    ar.Add(30).Add(100).Add(200);
    std::cout << ar << std::endl;
    std::cout << ar.GetAt(ar.GetUpperBound()) << std::endl;
    ar.FreeExtra();*/

    //Stek st(5);
    //st.setStek('a');
    //st.setStek('b');
    //st.setStek('c');
    //cout << st.getSize() << endl;
    //cout << st.getUkas() << endl;
    //for (int i = 0; i < 3; ++i)
    //{
    //    cout << st.getStek() <<" ";
    //}
    //cout << endl;

    //Stek st(3);                                     
    //st.push('a');
    //st.push('b');
    //st.push('c');
    //cout << st.pop() << " ";
    //cout << endl << st.getSize() << endl;
    //while (!st.isEmpty())
    //    cout << st.out_stek() << " ";
    //cout << endl << st.getSize() << endl;

    //Queue<int> a(5);
    //a.Enqueue(1);
    //a.Enqueue(2);
    //a.Enqueue(3);
    //a.Enqueue(4);
    //a.Enqueue(5);
    //a.Show();
    //while (!a.isEmpty())
    //    cout << a.Dequeue() << " ";

    //PrioryQueue<int> Q(5);
    //Q.InsertWithPriority(1, 1);
    //Q.InsertWithPriority(2, 1);
    //Q.InsertWithPriority(3, 2);
    //Q.InsertWithPriority(4, 9);
    //Q.InsertWithPriority(7, 1);
    //cout << Q.Peek() << endl;
    //Q.Show();
    //cout << endl << "Извлечение элементов очереди:" << endl;
    //while (!Q.isEmpty())
    //    Q.PullHighestPriorityElement();

    //LinkedList<int> list;
    //list.AddToTail(23);
    //list.AddToTail(15);
    //list.AddToTail(1);
    //list.Show();
    //list.AddToHead(122);
    //list.Show();
    //list.DeleteFromHead();
    //list.Show();

    //LinkedList<int> list;
    //list.InsertElement(10, 60);
    //list.AddToHead(133);
    //list.addToTail(33);
    //list.addToTail(23);
    //list.addToTail(15);
    //list.addToTail(33);
    //list.show();
    //list.reverse();
    //cout << list.replacementElement(33, 334)<< endl;
    //list.show();
    //cout << "size  " << list.getSize() << endl;
    //list.InsertElement(10, 60);
    //list.show();
    //cout << "size  " << list.getSize() << endl;
    //list.DeletePosition(list.getSize()-1);
    //list.DeletePosition(28);
    //list.show();
    //cout << "size  " << list.getSize() << endl;
    //list.deleteFromTail();
    //list.deleteAll();
    //cout << "size  " << list.getSize() << endl;
    //list.AddToHead(133);
    //list.show();
    //cout << "size  " << list.getSize() << endl;
    //list.deleteFromHead();
    //cout << "size  " << list.getSize() << endl;
    //list.show();
    //cout << "133: " << list.searcheElement(133) << endl;

    //int sum;
    //cout << "Введите купюру!\n";
    //cin >> sum;
    //cout << "Вы ввели " << sum << " рублей\n";
    //int x, y, z;
    //char c;
    //do
    //{
    //    cout << "Дёрните рычаг\n";
    //    cin >> c;
    //    x = rand() % 9 + 1;
    //    y = rand() % 9 + 1;
    //    z = rand() % 9 + 1;
    //    cout << x << y << z << "\t" << sum << endl;
    //    if (x == 7 && y == 7 && z == 7)
    //    {
    //        cout << "Вы выиграли 1 млн!\n";
    //        cout << "Хотите продолжить?\n";
    //        char s;
    //        cin >> s;
    //        if (s == 'y')
    //            continue;
    //        else
    //            exit(1);
    //    }
    //    else if (x == y && y == z)
    //    {
    //        sum += 100;
    //    }
    //    else
    //    {
    //        sum -= 10;
    //    }
    //} while (sum > 0);

    //list<Human> human;
    //queue<Bus> bus;
    //for (int i = 0; i < 10; ++i)
    //{
    //    cout << "Данные человека\n";
    //    cout << "Категория:  ";
    //    string str;  cin >> str;
    //    cout << "Номер автобуса:  ";
    //    int num; cin >> num;
    //    human.push_back({ str, num });
    //    cout << "Данные автобуса\n";
    //    cout << "ID:  ";
    //    int idBus; cin >> idBus;
    //    cout << "Количество мест:  ";
    //    int count; cin >> count;
    //    cout << "Номер автобуса:  ";
    //    int number; cin >> number;
    //    bus.push({ idBus, count, number });
    //}

    //Elem* el1 = new Elem{ 1, 2, "abc", "def", "ruo" };
    //Elem* el2 = new Elem{ 3, 4, "app", "ppf", "rpp" };
    //Tree tree;
    //tree.Insert(el1);
    //tree.Insert(el2);
    //tree.Print(tree.GetRoot());

    Client client1{ "Vasya", 25 };
    Client client2{ "Petya", 35 };
    Client client3{ "Svetlana", 25 };
    Client client4{ "Anna", 35 };

    Printer printer;
    printer.addToQueue(client1);
    printer.addToQueue(client2);
    printer.addToQueue(client3);
    printer.addToQueue(client4);

    printer.print();
    printer.print();
    printer.print();
    printer.print();

    

    return 0;
}
