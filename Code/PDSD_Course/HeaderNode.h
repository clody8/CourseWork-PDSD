#pragma once

#include <iostream>
#include <string>

using namespace std;

struct Unit // реализаци€ узла
{
	int value;
	Unit* next; // указатель на следующий элемент

	// конструктор узла
	Unit(int _value) : value(_value), next(nullptr) {}
};

struct Node // реализаци€ односв€зного списка
{
	Unit* first; // указатель на первый узел

	Node() : first(nullptr) {} // конструктор списка
};

Unit* f1(); // создание пустого множества

bool f2(Unit* headptr); // пустое множество?

bool f3(Unit* headptr, int _value); // проверка принадлежности

Unit* f4(Unit*& headptr, int _value); // добавление элемента в начало

Unit* f5(int size, int min, int max); // создание множества

int f6(Unit* headptr); // мощность множества

string f7(Unit* p, string c); // вывод элементов множества

Unit* f8(Unit*& headptr); // удаление множества

bool f9(Unit* heada, Unit* headb); // подмножество A-B

bool f10(Unit* heada, Unit* headb); // равенство двух множеств ј-¬

Unit* f11(Unit* heada, Unit* headb); // объединение двух множеств

Unit* f12(Unit* heada, Unit* headb); // пересечение двух множеств

Unit* f13(Unit* heada, Unit* headb); // разность множеств

Unit* f14(Unit* heada, Unit* headb); // симметрична€ разность


