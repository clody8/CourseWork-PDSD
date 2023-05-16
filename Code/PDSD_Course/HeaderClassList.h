#pragma once

#include <iostream>
#include <string>

using namespace std;

struct ClassUnit // реализаци€ узла
{
	int value;
	ClassUnit* next; // указатель на следующий элемент

	// конструктор узла
	ClassUnit(int _value) : value(_value), next(nullptr) {}
};

class ClassList // реализаци€ односв€зного списка
{
public:
	ClassUnit* first;
	ClassList() : first(nullptr) {}; // конструктор класса

	~ClassList() // деструктор класса
	{
		while (first != nullptr)
		{
			ClassUnit* temp = first;
			first = first->next;
			delete temp;
		}
	}

	bool f2(ClassUnit* headptr); // пустое множество?

	bool f3(ClassUnit* headptr, int _value); // проверка принадлежности (уникальности)

	ClassUnit* f4(ClassUnit*& headptr, int _value); // добавление элемента в начало

	ClassUnit* f5(int size, int min, int max); // заполнение множества случайными числами

	int f6(ClassUnit* headptr); // мощность множества

	string f7(ClassUnit* headptr, string c); // вывод элементов множества

	bool f9(ClassUnit* heada, ClassUnit* headb); // подмножество A-B

	bool f10(ClassUnit* heada, ClassUnit* headb); // равенство двух множеств ј-¬

	ClassList* f11(ClassUnit* heada, ClassUnit* headb); // объединение двух множеств

	ClassList* f12(ClassUnit* heada, ClassUnit* headb); // пересечение двух множеств

	ClassList* f13(ClassUnit* heada, ClassUnit* headb); // разность множеств

	ClassList* f14(ClassUnit* heada, ClassUnit* headb); // симметрична€ разность
};