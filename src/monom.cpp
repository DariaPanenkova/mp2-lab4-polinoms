#include "monom.h"

Monom::Monom(double c, int d)
{
	Coef=c;
	Deg=d;
}

Monom::	Monom(const Monom &mon)
{
	Coef=mon.Coef;
	Deg=mon.Deg;
}

Monom& Monom:: operator=(const Monom &mon)
{
	if(this == &mon)
		return *this;
	Coef=mon.Coef;
	Deg=mon.Deg;
	return *this;
} 

bool Monom::operator==(const Monom &mon)
{
	if(this == &mon)
		return true;
	else
		if((Coef==mon.Coef)&&(Deg==mon.Deg))
			return true;
		else
			return false;
}

bool Monom::operator!=(const Monom &mon)
{
	return !(*this==mon);
}