// ����� ������� - ������������� ����������� ������ �������
// ������������ �������� ������, ������� ������, �������� ������,  
// ����� ������, �������� ���������(������� ������������� �������), 
// ��������� ���������


#ifndef _POLINOM__H_
#define _POLINOM__H_

#include "monom.h"

//Monom - ������
// ����� ������ Node = Monom + next

// ������ �������. Node* head; Node* tail// ��������: �������, ��������, ����� ....

class Polinom
{
public:

	Monom *Data;
	Polinom *Next;
	Polinom *Head;

	Polinom();


};
#endif