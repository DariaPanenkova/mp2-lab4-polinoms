// ����� ������� - ������������� ����������� ������ �������
// ������������ �������� ������, ������� ������, �������� ������,  
// ����� ������, �������� ���������(������� ������������� �������), 
// ��������� ���������


#ifndef _POLINOM__H_
#define _POLINOM__H_

#include "monom.h"
#include "list.h"

//Monom - ������
// ����� ������ Node = Monom + next

// ������ �������. Node* head; Node* tail// ��������: �������, ��������, ����� ....

class Polinom
{
public:

	List<Monom>* polinom;

	Polinom();
	
	void AddMonom(Monom m);

    Polinom operator+ (const Polinom& p);

};
#endif