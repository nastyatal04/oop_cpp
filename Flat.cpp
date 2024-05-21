#include "Flat.h"
#include <iostream>

//
//int amountRoll(Flat flat, Rooms room);
//int priseRoll();

int Roll::amountRoll(Flat flat, Rooms* room)
{
	int square = 0;
	int result_prise;
	int S;
	int count_room = flat.getRooms();
	int** array = new int* [count_room];
	for (int i = 0; i < count_room; ++i)
	{
		array[i] = new int[3];
		array[i][0] = room[i].getWidch();
		array[i][1] = room[i].getLength();
		array[i][2] = room[i].getHigth();
	}

	for (int i = 0; i < count_room; ++i)
	{
		square = 2 * array[i][2] * (array[i][0] + array[i][1]);
	}

	if (name_roll == "roll1")
	{
		result_prise = prise*(square / size + 1);
	}
	if (name_roll == "roll2")
	{
		result_prise = prise * (square / size + 1);
	}
	if (name_roll == "roll3")
	{
		result_prise = prise * (square / size + 1);
	}
	for (int i = 0; i < count_room; ++i)
	{
		delete[] array[i];
	}
	delete[] array;
	return result_prise;
}

//int Roll::priseRoll()
//{
//	int result_prise = this->amountRoll();
//}