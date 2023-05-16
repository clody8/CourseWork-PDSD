#pragma once

#include <iostream>
#include <string>
#include <queue>
#include <iterator>

using namespace std;

class Queue // класс Множества
{
public:
	queue<int> lst; // контейнер queue

	Queue()
	{
		queue<int> lst;
	};

	bool f2(queue<int> lst); // пустое множество?

	bool f3(queue<int> lst, int _value); // проверка принадлежности (уникальности)

	void f4(int _value); // добавление элемента в начало

	void f5(int size, int min, int max); // заполнение множества случайными числами

	int f6(queue<int> lst); // мощность множества

	string f7(queue<int> lst, string c); // вывод элементов множества

	bool f9(queue<int> lstA, queue<int> lstB); // подмножество A-B

	bool f10(queue<int> lstA, queue<int> lstB); // равенство двух множеств А-В

	Queue f11(queue<int> lstA, queue<int> lstB); // объединение двух множеств

	Queue f12(queue<int> lstA, queue<int> lstB); // пересечение двух множеств

	Queue f13(queue<int> lstA, queue<int> lstB); // разность множеств

	Queue f14(queue<int> lstA, queue<int> lstB); // симметричная разность
};