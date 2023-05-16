#pragma once

#include <iostream>
#include <string>

using namespace std;

struct ClassUnit // ���������� ����
{
	int value;
	ClassUnit* next; // ��������� �� ��������� �������

	// ����������� ����
	ClassUnit(int _value) : value(_value), next(nullptr) {}
};

class ClassList // ���������� ������������ ������
{
public:
	ClassUnit* first;
	ClassList() : first(nullptr) {}; // ����������� ������

	~ClassList() // ���������� ������
	{
		while (first != nullptr)
		{
			ClassUnit* temp = first;
			first = first->next;
			delete temp;
		}
	}

	bool f2(ClassUnit* headptr); // ������ ���������?

	bool f3(ClassUnit* headptr, int _value); // �������� �������������� (������������)

	ClassUnit* f4(ClassUnit*& headptr, int _value); // ���������� �������� � ������

	ClassUnit* f5(int size, int min, int max); // ���������� ��������� ���������� �������

	int f6(ClassUnit* headptr); // �������� ���������

	string f7(ClassUnit* headptr, string c); // ����� ��������� ���������

	bool f9(ClassUnit* heada, ClassUnit* headb); // ������������ A-B

	bool f10(ClassUnit* heada, ClassUnit* headb); // ��������� ���� �������� �-�

	ClassList* f11(ClassUnit* heada, ClassUnit* headb); // ����������� ���� ��������

	ClassList* f12(ClassUnit* heada, ClassUnit* headb); // ����������� ���� ��������

	ClassList* f13(ClassUnit* heada, ClassUnit* headb); // �������� ��������

	ClassList* f14(ClassUnit* heada, ClassUnit* headb); // ������������ ��������
};