#include "HeaderVector.h"; 
#include <stdlib.h> // rand(), srand()
#include <time.h>

bool Vector::f2(vector<int> lst) // ������ ���������?
{
    return lst.empty();
};

bool Vector::f3(vector<int> lst, int _value) // �������� ������������ ��������
{
    vector<int>::iterator it;

    for (it = lst.begin(); it != lst.end(); ++it) {
        if (*it == _value) {
            return false;
        }
    }
    return true;
};

void Vector::f4(int _value) // ���������� � ������
{
    if (f3(lst, _value))
        lst.insert(lst.begin(), _value);
};

void Vector::f5(int size, int min, int max) // �������� ��������� (�� �������)
{
    while (this->f6(lst) < size)
    {
        int rnd = min + rand() % (max - min + 1);
        this->f4(rnd);
    }
};

int Vector::f6(vector<int> lst) // �������� ���������
{
    return lst.size();
};

string Vector::f7(vector<int> lst, string c) // ����� ���������
{
    string res;
    if (f2(lst))
    {
        return " ";
    }

    vector<int>::iterator it;

    for (it = lst.begin(); it != lst.end(); ++it)
        res += to_string(*it) + c;
    res.pop_back();

    return res;
};

bool Vector::f9(vector<int> lstA, vector<int> lstB) // ������������ A-B
{
    if (f2(lstA) || f2(lstB))
        return false;
    if (f6(lstA) > f6(lstB))
        return false;

    vector<int>::iterator it;

    for (it = lstA.begin(); it != lstA.end(); ++it)
    {
        if (f3(lstB, *it))
            return false;
    }
    return true;
};

bool Vector::f10(vector<int> lstA, vector<int> lstB) // ��������� ���� �������� �-�
{
    if (f2(lstA) || f2(lstB))
        return false;
    if (f6(lstA) == f6(lstB) && f9(lstA, lstB))
        return true;
    return false;
};

Vector Vector::f11(vector<int> lstA, vector<int> lstB) // ����������� ���� ��������
{
    vector<int>::iterator it;
    Vector result;
    for (it = lstA.begin(); it != lstA.end(); ++it)
        result.f4(*it);
    for (it = lstB.begin(); it != lstB.end(); ++it)
        result.f4(*it);
    return result;
};

Vector Vector::f12(vector<int> lstA, vector<int> lstB) // ����������� ���� ��������
{
    Vector result;
    vector<int>::iterator it;
    if (f2(lstA) || f2(lstB))
        return result;
    for (it = lstA.begin(); it != lstA.end(); ++it)
    {
        if (!f3(lstB, *it))
            result.f4(*it);
    }
    return result;
};

Vector Vector::f13(vector<int> lstA, vector<int> lstB) // �������� ��������
{
    Vector result;
    vector<int>::iterator it;

    for (it = lstA.begin(); it != lstA.end(); ++it)
    {
        if (f3(lstB, *it))
            result.f4(*it);
    }
    return result;
};

Vector Vector::f14(vector<int> lstA, vector<int> lstB) // ������������ ��������
{
    return f13(f11(lstA, lstB).lst, f12(lstA, lstB).lst);
};