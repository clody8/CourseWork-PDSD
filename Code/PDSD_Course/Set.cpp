#include "HeaderSet.h"; 
#include <stdlib.h> // rand(), srand()
#include <time.h>

bool Set::f2(set<int> lst) // пустое множество?
{
    return lst.empty();
};

bool Set::f3(set<int> lst, int _value) // проверка уникальности элемента
{
    set<int>::iterator it;

    for (it = lst.begin(); it != lst.end(); ++it) {
        if (*it == _value) {
            return false;
        }
    }
    return true;
};

void Set::f4(int _value) // добавление в начало
{
    lst.emplace(_value);
};

void Set::f5(int size, int min, int max) // создание множества (не пустого)
{
    while (this->f6(lst) < size)
    {
        int rnd = min + rand() % (max - min + 1);
        this->f4(rnd);
    }
};

int Set::f6(set<int> lst) // мощность множества
{
    return lst.size();
};

string Set::f7(set<int> lst, string c) // вывод элементов
{
    string res;
    if (f2(lst))
    {
        return " ";
    }

    set<int>::iterator it;

    for (it = lst.begin(); it != lst.end(); ++it)
        res += to_string(*it) + c;
    res.pop_back();

    return res;
};

bool Set::f9(set<int> lstA, set<int> lstB) // подмножество A-B
{
    if (f2(lstA) || f2(lstB))
        return false;
    if (f6(lstA) > f6(lstB))
        return false;

    set<int>::iterator it;

    for (it = lstA.begin(); it != lstA.end(); ++it)
    {
        if (f3(lstB, *it))
            return false;
    }
    return true;
};

bool Set::f10(set<int> lstA, set<int> lstB) // равенство двух множеств А-В
{
    if (f2(lstA) || f2(lstB))
        return false;
    if (f6(lstA) == f6(lstB) && f9(lstA, lstB))
        return true;
    return false;
};

Set Set::f11(set<int> lstA, set<int> lstB) // объединение двух множеств
{
    set<int>::iterator it;
    Set result;
    for (it = lstA.begin(); it != lstA.end(); ++it)
        result.f4(*it);
    for (it = lstB.begin(); it != lstB.end(); ++it)
        result.f4(*it);
    return result;
};

Set Set::f12(set<int> lstA, set<int> lstB) // пересечение двух множеств
{
    Set result;
    set<int>::iterator it;
    if (f2(lstA) || f2(lstB))
        return result;
    for (it = lstA.begin(); it != lstA.end(); ++it)
    {
        if (!f3(lstB, *it))
            result.f4(*it);
    }
    return result;
};

Set Set::f13(set<int> lstA, set<int> lstB) // разность множеств
{
    Set result;
    set<int>::iterator it;

    for (it = lstA.begin(); it != lstA.end(); ++it)
    {
        if (f3(lstB, *it))
            result.f4(*it);
    }
    return result;
};

Set Set::f14(set<int> lstA, set<int> lstB) // симметричная разность
{
    return f13(f11(lstA, lstB).lst, f12(lstA, lstB).lst);
};