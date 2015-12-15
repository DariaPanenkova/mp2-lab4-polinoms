// класс Полином - упорядоченный односвязный список Мономов
// поддерживает операции Печать, Вставка монома, Удаление монома,  
// Поиск монома, Сложение полиномов(слияние упорядоченных списков), 
// Умножение полиномов


#ifndef _POLINOM__H_
#define _POLINOM__H_

#include "monom.h"

//Monom - данные
// звено списка Node = Monom + next

// список целиком. Node* head; Node* tail// операции: вставка, удаление, поиск ....

class Polinom
{
public:

	Monom *Data;
	Polinom *Next;
	Polinom *Head;

	Polinom();


};
#endif