#include "HeaderNode.h"; 
#include <stdlib.h> // rand(), srand()
#include <time.h>

Unit* f1() // �������� ������� ���������
{
    Node l1;
    return l1.first;
}

bool f2(Unit* headptr) // ������ ���������?
{
    return headptr == nullptr;
}

bool f3(Unit* headptr, int _value) // �������� �������������� �������� ��������� (������������)
{
    if (f2(headptr))
    {
        return true;
    }

    while (headptr)
    {

        if (headptr->value == _value)
        {
            return false;
        }
        headptr = headptr->next;
    }
    return true;
};

Unit* f4(Unit*& headptr, int _value) // ���������� � ������
{
    if (!f3(headptr, _value)) // ���� ������������ �������
    {
        return headptr;
    }

    Unit* unit1 = new Unit(_value);
    unit1->next = headptr;
    headptr = unit1;

    return headptr;
};

Unit* f5(int size, int min, int max) // �������� ��������� (�� �������)
{
    if (min >= max)
    {
        return nullptr;
    }

    Unit* headptr = nullptr;
    while (f6(headptr) < size)
    {
        int rnd = min + rand() % (max - min + 1);
        f4(headptr, rnd);
    }
    return headptr;
};

int f6(Unit* headptr) // �������� ���������
{
    int i = 0;
    if (f2(headptr)) return 0;

    Unit* p = headptr;
    while (p)
    {
        p = p->next;
        i++;
    }
    return i;
};

string f7(Unit* headptr, string c) // ����� ���������
{
    string res;
    if (f2(headptr))
    {
        return " ";
    }

    while (headptr)
    {
        int x = headptr->value;

        res += to_string(x) + c;
        headptr = headptr->next;
    }
    res.pop_back();
    return res;
};

Unit* f8(Unit*& headptr) // �������� ���������
{
    if (f2(headptr))
    {
        return headptr;
    }

    Unit* p = headptr;
    while (p) // p != nullptr
    {
        headptr = nullptr;
        p = p->next;
    }
    return headptr;
};

bool f9(Unit* heada, Unit* headb) // ������������ A-B
{
    if (f2(heada) || f2(headb))
        return false;
    if (f6(heada) > f6(headb))
        return false;
    while (heada)
    {
        if (f3(headb, heada->value))
            return false;
        heada = heada->next;
    }
    return true;
};

bool f10(Unit* heada, Unit* headb) // ��������� ���� �������� �-�
{
    if (f2(heada) || f2(headb))
        return false;
    if (f6(heada) == f6(headb) && f9(heada, headb))
        return true;
    return false;
};

Unit* f11(Unit* heada, Unit* headb) // ����������� ���� ��������
{
    if (f2(heada)) return headb;
    if (f2(headb)) return heada;
    Node list;
    while (heada)
    {
        f4(list.first, heada->value);
        heada = heada->next;
    }
    while (headb)
    {
        f4(list.first, headb->value);
        headb = headb->next;
    }
    return list.first;
};

Unit* f12(Unit* heada, Unit* headb) // ����������� ���� ��������
{
    Node list;
    if (f2(heada) || f2(headb))
        return list.first;
    while (heada)
    {
        if (!f3(headb, heada->value))
            f4(list.first, heada->value);
        heada = heada->next;
    }
    return list.first;
};

Unit* f13(Unit* heada, Unit* headb) // �������� ��������
{
    Node list;
    while (heada)
    {
        if (f3(headb, heada->value))
            f4(list.first, heada->value);
        heada = heada->next;
    }
    return list.first;
};

Unit* f14(Unit* heada, Unit* headb) // ������������ ��������
{
    Node list;
    list.first = f13(f11(heada, headb), f12(headb, heada));
    return list.first;
};