#pragma once
#include <iostream>
#include <math.h>
class Data
{
	int day;
	int month;
	int year;
public:
	Data(int day, int month, int year):day{day}, month{month}, year{year}{}
	Data():Data(1,1,2000){}


	void operator+(int day)
	{
		int year = day / 365;
		this->year += year;
		int month = day / 30;
		day = day % 30;
		this->day += day;
		this->month += month;
		if (this->day > 30)
		{
			++(this->month);
			this->month %= 12;
			this->day %= 30;
		}
	}

	//friend Data operator-(const Data& dt1, const Data& dt2);
	//int operator-(const Data& data)
	//{
	//	int ob_day1=0, ob_day2 = 0;
	//	int n, count02=0;
	//	int result; //= data.day - this->day;
	//	if (data.year != this->year)
	//		for (int i = this->year; i <= data.year; ++i)
	//		{
	//			if (i % 4 == 0)
	//			{
	//				++count02;
	//				result += 366;
	//			}
	//			else
	//				result += 365;
	//		}
	//	if(data.month!=this->month)
	//		for (int i = this->month+1; i < data.month; ++i)
	//		{
	//			if (i == 2)
	//				result += 28;
	//			else if (i == 3 || i == 4 || i == 6 || i == 9 || i == 11)
	//				result+= 31;
	//			else
	//				result += 30;
	//		}
	//	result += count02;
	//	return result;
	//}

	/*Data operator+(int count_day)
	{
		year += count_day/365;
		if (month == 2)
			month += (count_day % 365) / 28;
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			month += (count_day % 365) / 31;
		else
			month += (count_day % 365) / 30;
		day += (count_day % 365) % 30;
		return Data(day, month, year);
	}*/

	void print()
	{
		std::cout << day << '.' << month << '.' << year << '\n';
	}
};

//Data operator-(const Data& dt1, const Data& dt2)
//{
//	int in_all_day_dt1 = dt1.day + dt1.month * 30 + dt1.year * 365;
//	int in_all_day_dt2 = dt2.day + dt2.month * 30 + dt2.year * 365;
//	int result_day = abs(in_all_day_dt1 - in_all_day_dt2) % 30;
//	int result_month = abs(in_all_day_dt1 - in_all_day_dt2 - result_day);
//	int newDay = (dt1.day > dt2.day) ? (dt1.day - dt2.day) : (dt2.day-dt1.day);
//	return Data{ newDay, result_month, dt1.year };
//}