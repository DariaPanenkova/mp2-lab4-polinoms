// класс или структура Монома (double коэффициент, целая свернутая степень)

#ifndef _MONOM__H_
#define _MONOM__H_


#include <iostream>

class Monom
{
public:

	double Coef;
	int Deg;

	Monom(double c=0, int d=-1);
	Monom(const Monom &mon);
	
	Monom& operator=(const Monom &mon);
	bool operator ==(const Monom &mon);
	bool operator !=(const Monom &mon);

};
#endif