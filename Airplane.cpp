#include "Airplane.h"

bool operator==(const Airplane& air1, const Airplane& air2)
{
	return air1.countPas == air2.countPas;
}

bool operator>(const Airplane& air1, const Airplane& air2)
{
	return air1.countPas > air2.countPas;
}

bool operator<(const Airplane& air1, const Airplane& air2)
{
	return air1.countPas < air2.countPas;
}