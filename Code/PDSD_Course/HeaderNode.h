#pragma once

#include <iostream>
#include <string>

using namespace std;

struct Unit // ���������� ����
{
	int value;
	Unit* next; // ��������� �� ��������� �������

	// ����������� ����
	Unit(int _value) : value(_value), next(nullptr) {}
};

struct Node // ���������� ������������ ������
{
	Unit* first; // ��������� �� ������ ����

	Node() : first(nullptr) {} // ����������� ������
};

Unit* f1(); // �������� ������� ���������

bool f2(Unit* headptr); // ������ ���������?

bool f3(Unit* headptr, int _value); // �������� ��������������

Unit* f4(Unit*& headptr, int _value); // ���������� �������� � ������

Unit* f5(int size, int min, int max); // �������� ���������

int f6(Unit* headptr); // �������� ���������

string f7(Unit* p, string c); // ����� ��������� ���������

Unit* f8(Unit*& headptr); // �������� ���������

bool f9(Unit* heada, Unit* headb); // ������������ A-B

bool f10(Unit* heada, Unit* headb); // ��������� ���� �������� �-�

Unit* f11(Unit* heada, Unit* headb); // ����������� ���� ��������

Unit* f12(Unit* heada, Unit* headb); // ����������� ���� ��������

Unit* f13(Unit* heada, Unit* headb); // �������� ��������

Unit* f14(Unit* heada, Unit* headb); // ������������ ��������


