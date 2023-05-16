#pragma once

#include <iostream>
#include <string>
#include <list>
#include <iterator>

using namespace std;

class List // класс Список
{
public:
	list<int> lst; // контейнер list

	List()
	{
		list<int> lst;
	};

	bool f2(list<int> lst); // пустое множество?

	bool f3(list<int> lst, int _value); // проверка принадлежности (уникальности)

	void f4(int _value); // добавление элемента в начало

	void f5(int size, int min, int max); // заполнение множества случайными числами

	int f6(list<int> lst); // мощность множества

	string f7(list<int> lst, string c); // вывод элементов множества

	bool f9(list<int> lstA, list<int> lstB); // подмножество A-B

	bool f10(list<int> lstA, list<int> lstB); // равенство двух множеств А-В

	List f11(list<int> lstA, list<int> lstB); // объединение двух множеств

	List f12(list<int> lstA, list<int> lstB); // пересечение двух множеств

	List f13(list<int> lstA, list<int> lstB); // разность множеств

	List f14(list<int> lstA, list<int> lstB); // симметричная разность
};