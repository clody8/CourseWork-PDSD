#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Vector // класс Множества
{
public:
	vector<int> lst; // контейнер queue

	Vector()
	{
		vector<int> lst;
	};

	bool f2(vector<int> lst); // пустое множество?

	bool f3(vector<int> lst, int _value); // проверка принадлежности (уникальности)

	void f4(int _value); // добавление элемента в начало

	void f5(int size, int min, int max); // заполнение множества случайными числами

	int f6(vector<int> lst); // мощность множества

	string f7(vector<int> lst, string c); // вывод элементов множества

	bool f9(vector<int> lstA, vector<int> lstB); // подмножество A-B

	bool f10(vector<int> lstA, vector<int> lstB); // равенство двух множеств А-В

	Vector f11(vector<int> lstA, vector<int> lstB); // объединение двух множеств

	Vector f12(vector<int> lstA, vector<int> lstB); // пересечение двух множеств

	Vector f13(vector<int> lstA, vector<int> lstB); // разность множеств

	Vector f14(vector<int> lstA, vector<int> lstB); // симметричная разность
};