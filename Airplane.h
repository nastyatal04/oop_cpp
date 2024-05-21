#pragma once
class Airplane
{
	int countPas;
public:
	Airplane(int countPas):countPas{countPas}{}
	
	friend bool operator==(const Airplane& air1, const Airplane& air2);
	friend bool operator>(const Airplane& air1, const Airplane& air2);
	friend bool operator<(const Airplane& air1, const Airplane& air2);

	int getPas() { return countPas; }

	Airplane& operator++() 
	{
		++(this->countPas); 
		return *this;
	}
	Airplane& operator--()
	{
		--(this->countPas);
		return *this;
	}
};

