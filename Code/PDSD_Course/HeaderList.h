#pragma once

#include <iostream>
#include <string>
#include <list>
#include <iterator>

using namespace std;

class List // ����� ������
{
public:
	list<int> lst; // ��������� list

	List()
	{
		list<int> lst;
	};

	bool f2(list<int> lst); // ������ ���������?

	bool f3(list<int> lst, int _value); // �������� �������������� (������������)

	void f4(int _value); // ���������� �������� � ������

	void f5(int size, int min, int max); // ���������� ��������� ���������� �������

	int f6(list<int> lst); // �������� ���������

	string f7(list<int> lst, string c); // ����� ��������� ���������

	bool f9(list<int> lstA, list<int> lstB); // ������������ A-B

	bool f10(list<int> lstA, list<int> lstB); // ��������� ���� �������� �-�

	List f11(list<int> lstA, list<int> lstB); // ����������� ���� ��������

	List f12(list<int> lstA, list<int> lstB); // ����������� ���� ��������

	List f13(list<int> lstA, list<int> lstB); // �������� ��������

	List f14(list<int> lstA, list<int> lstB); // ������������ ��������
};