#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Vector // ����� ���������
{
public:
	vector<int> lst; // ��������� queue

	Vector()
	{
		vector<int> lst;
	};

	bool f2(vector<int> lst); // ������ ���������?

	bool f3(vector<int> lst, int _value); // �������� �������������� (������������)

	void f4(int _value); // ���������� �������� � ������

	void f5(int size, int min, int max); // ���������� ��������� ���������� �������

	int f6(vector<int> lst); // �������� ���������

	string f7(vector<int> lst, string c); // ����� ��������� ���������

	bool f9(vector<int> lstA, vector<int> lstB); // ������������ A-B

	bool f10(vector<int> lstA, vector<int> lstB); // ��������� ���� �������� �-�

	Vector f11(vector<int> lstA, vector<int> lstB); // ����������� ���� ��������

	Vector f12(vector<int> lstA, vector<int> lstB); // ����������� ���� ��������

	Vector f13(vector<int> lstA, vector<int> lstB); // �������� ��������

	Vector f14(vector<int> lstA, vector<int> lstB); // ������������ ��������
};