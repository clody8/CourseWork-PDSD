#include "HeaderList.h"; 
#include <stdlib.h> // rand(), srand()
#include <time.h>

bool List::f2(list<int> lst) // ������ ���������?
{
    return lst.empty();
};

bool List::f3(list<int> lst, int _value) // �������� ������������ ��������
{
    list<int>::iterator it;

    for (it = lst.begin(); it != lst.end(); ++it) {
        if (*it == _value) {
            return false;
        }
    }
    return true;
};

void List::f4(int _value) // ���������� � ������
{
    if (f3(lst, _value))
        lst.push_front(_value);
};

void List::f5(int size, int min, int max) // �������� ��������� (�� �������)
{
    while (this->f6(lst) < size)
    {
        int rnd = min + rand() % (max - min + 1);
        this->f4(rnd);
    }
};

int List::f6(list<int> lst) // �������� ���������
{
    return lst.size();
};

string List::f7(list<int> lst, string c) // ����� ���������
{
    string res;
    if (f2(lst))
    {
        return " ";
    }

    list<int>::iterator it;

    for (it = lst.begin(); it != lst.end(); ++it)
        res += to_string(*it) + c;
    res.pop_back();

    return res;
};

bool List::f9(list<int> lstA, list<int> lstB) // ������������ A-B
{
    if (f2(lstA) || f2(lstB))
        return false;
    if (f6(lstA) > f6(lstB))
        return false;

    list<int>::iterator it;

    for (it = lstA.begin(); it != lstA.end(); ++it)
    {
        if (f3(lstB, *it))
            return false;
    }
    return true;
};

bool List::f10(list<int> lstA, list<int> lstB) // ��������� ���� �������� �-�
{
    if (f2(lstA) || f2(lstB))
        return false;
    if (f6(lstA) == f6(lstB) && f9(lstA, lstB))
        return true;
    return false;
};

List List::f11(list<int> lstA, list<int> lstB) // ����������� ���� ��������
{
    list<int>::iterator it;
    List result;
    for (it = lstA.begin(); it != lstA.end(); ++it)
        result.f4(*it);
    for (it = lstB.begin(); it != lstB.end(); ++it)
        result.f4(*it);
    return result;
};

List List::f12(list<int> lstA, list<int> lstB) // ����������� ���� ��������
{
    List result;
    list<int>::iterator it;
    if (f2(lstA) || f2(lstB))
        return result;
    for (it = lstA.begin(); it != lstA.end(); ++it)
    {
        if (!f3(lstB, *it))
            result.f4(*it);
    }
    return result;
};

List List::f13(list<int> lstA, list<int> lstB) // �������� ��������
{
    List result;
    list<int>::iterator it;

    for (it = lstA.begin(); it != lstA.end(); ++it)
    {
        if (f3(lstB, *it))
            result.f4(*it);
    }
    return result;
};

List List::f14(list<int> lstA, list<int> lstB) // ������������ ��������
{
    return f13(f11(lstA, lstB).lst, f12(lstA, lstB).lst);
};