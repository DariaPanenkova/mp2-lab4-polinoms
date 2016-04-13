// ����� ������� - ������������� ����������� ������ �������
// ������������ �������� ������, ������� ������, �������� ������,  
// ����� ������, �������� ���������(������� ������������� �������), 
// ��������� ���������


#ifndef _POLINOM__H_
#define _POLINOM__H_

#include "monom.h"
#include "list.h"
#include <iostream>
//Monom - ������
// ����� ������ Node = Monom + next

// ������ �������. Node* head; Node* tail// ��������: �������, ��������, ����� ....

class Polinom
{
public:

	List<Monom>* polinom;

	Polinom();
	Polinom(const Polinom &pol);
	void AddMonom(Monom m);
	void DeleteMonom(Node<Monom> *m);
	Monom& operator[](int pos);
	Polinom operator = (const Polinom& p);
    friend Polinom operator+ (const Polinom& l,const Polinom& p);
	friend Polinom operator*( const Polinom& l,const Monom& r);
	friend Polinom operator*(const Polinom& l,const Polinom& r);
	friend Polinom  operator- (const Polinom& l,const Polinom& p);
	void Reconstr();
	void print();

};
#endif