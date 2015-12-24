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

	Monom& operator[](int pos);
    Polinom operator+ (const Polinom& p);
	Polinom  operator- (const Polinom& p);


};
#endif