#pragma once

#include <iostream>
#include <string>
#include <set>
#include <iterator>

using namespace std;

class Set // ����� ���������
{
public:
	set<int> lst; // ��������� set

	Set()
	{
		set<int> lst;
	};

	bool f2(set<int> lst); // ������ ���������?

	bool f3(set<int> lst, int _value); // �������� �������������� (������������)

	void f4(int _value); // ���������� �������� � ������

	void f5(int size, int min, int max); // ���������� ��������� ���������� �������

	int f6(set<int> lst); // �������� ���������

	string f7(set<int> lst, string c); // ����� ��������� ���������

	bool f9(set<int> lstA, set<int> lstB); // ������������ A-B

	bool f10(set<int> lstA, set<int> lstB); // ��������� ���� �������� �-�

	Set f11(set<int> lstA, set<int> lstB); // ����������� ���� ��������

	Set f12(set<int> lstA, set<int> lstB); // ����������� ���� ��������

	Set f13(set<int> lstA, set<int> lstB); // �������� ��������

	Set f14(set<int> lstA, set<int> lstB); // ������������ ��������
};