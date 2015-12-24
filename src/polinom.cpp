#include "polinom.h"

Polinom::Polinom()
{
	polinom = new List<Monom>;
}

void Polinom::AddMonom(Monom m)
{
	polinom->AddSortElem(m);
}

Monom& Polinom::operator[](int pos)
{
	if (pos < 0 || pos > polinom->GetSize() )
	{
		throw("Некорректная позиция");
	}
	Node<Monom>* current = polinom->GetHead();
	for (int i = 0; i < pos; i++)
	{
		current = current->GetNext();
	}
	return current->GetData();
	
}
Polinom Polinom:: operator+ (const Polinom& p)
{
	Polinom res;
	Node<Monom>* currl= polinom->GetHead();
	Node<Monom>* currp= p.polinom->GetHead();

	if ( polinom->GetSize() == 0)
		return res = p;
	if( p.polinom->GetSize() == 0)
		return res = (*this);

	while( currl != NULL || currp !=NULL )
		{
			if (currl->GetData().Deg == currp->GetData().Deg) 
			{
				res.AddMonom(currl->GetData()+currp->GetData())	;
					currl = currl->GetNext();
					currp = currp->GetNext();

			}
			else

				if(currl->GetData() > currp->GetData())
				{
					res.AddMonom(currl->GetData());
					currl = currl->GetNext();
				}
				else
				{
					res.AddMonom(currp->GetData());
					currp = currp->GetNext();
				}
	}
	if (currl != NULL)
	{
		while (currl != NULL) {
			res.AddMonom(currl->GetData());
			currl = currl->GetNext();
		}
	}
	else{
		while (currp != NULL) {
			res.AddMonom(currp->GetData());
			currp = currp->GetNext();
		}
	}

	return res;
}

Polinom Polinom:: operator- (const Polinom& p)
{
	Polinom res;
	Node<Monom>* currl= polinom->GetHead();
	Node<Monom>* currp= p.polinom->GetHead();

	if ( polinom->GetSize() == 0)
		return res = p;
	if( p.polinom->GetSize() == 0)
		return res = (*this);

	while( currl != NULL || currp !=NULL )
		{
			if (currl->GetData().Deg == currp->GetData().Deg) 
			{
				res.AddMonom(currl->GetData()-currp->GetData())	;
					currl = currl->GetNext();
					currp = currp->GetNext();

			}
			else

				if(currl->GetData() > currp->GetData())
				{
					res.AddMonom(currl->GetData());
					currl = currl->GetNext();
				}
				else
				{
					res.AddMonom(currp->GetData());
					currp = currp->GetNext();
				}
	}
	if (currl != NULL)
	{
		while (currl != NULL) {
			res.AddMonom(currl->GetData());
			currl = currl->GetNext();
		}
	}
	else{
		while (currp != NULL) {
			res.AddMonom(currp->GetData());
			currp = currp->GetNext();
		}
	}

	return res;

}
