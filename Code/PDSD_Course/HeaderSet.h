#pragma once

#include <iostream>
#include <string>
#include <set>
#include <iterator>

using namespace std;

class Set // класс Множества
{
public:
	set<int> lst; // контейнер set

	Set()
	{
		set<int> lst;
	};

	bool f2(set<int> lst); // пустое множество?

	bool f3(set<int> lst, int _value); // проверка принадлежности (уникальности)

	void f4(int _value); // добавление элемента в начало

	void f5(int size, int min, int max); // заполнение множества случайными числами

	int f6(set<int> lst); // мощность множества

	string f7(set<int> lst, string c); // вывод элементов множества

	bool f9(set<int> lstA, set<int> lstB); // подмножество A-B

	bool f10(set<int> lstA, set<int> lstB); // равенство двух множеств А-В

	Set f11(set<int> lstA, set<int> lstB); // объединение двух множеств

	Set f12(set<int> lstA, set<int> lstB); // пересечение двух множеств

	Set f13(set<int> lstA, set<int> lstB); // разность множеств

	Set f14(set<int> lstA, set<int> lstB); // симметричная разность
};