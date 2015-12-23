#include "polinom.h"

Polinom::Polinom()
{
	polinom = new List<Monom>;
}

void Polinom::AddMonom(Monom m)
{
	polinom->AddSortElem(m);
}


Polinom Polinom:: operator+ (const Polinom& p)
{
	Polinom res;


	return res;

}
