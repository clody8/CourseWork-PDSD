#pragma once

#include <iostream>
#include <string>
#include <queue>
#include <iterator>

using namespace std;

class Queue // ����� ���������
{
public:
	queue<int> lst; // ��������� queue

	Queue()
	{
		queue<int> lst;
	};

	bool f2(queue<int> lst); // ������ ���������?

	bool f3(queue<int> lst, int _value); // �������� �������������� (������������)

	void f4(int _value); // ���������� �������� � ������

	void f5(int size, int min, int max); // ���������� ��������� ���������� �������

	int f6(queue<int> lst); // �������� ���������

	string f7(queue<int> lst, string c); // ����� ��������� ���������

	bool f9(queue<int> lstA, queue<int> lstB); // ������������ A-B

	bool f10(queue<int> lstA, queue<int> lstB); // ��������� ���� �������� �-�

	Queue f11(queue<int> lstA, queue<int> lstB); // ����������� ���� ��������

	Queue f12(queue<int> lstA, queue<int> lstB); // ����������� ���� ��������

	Queue f13(queue<int> lstA, queue<int> lstB); // �������� ��������

	Queue f14(queue<int> lstA, queue<int> lstB); // ������������ ��������
};