#include "HeaderClassList.h"; 
#include <stdlib.h> // rand(), srand()
#include <time.h>

bool ClassList::f2(ClassUnit* headptr) // пустое множество?
{
    return headptr == nullptr;
};

bool ClassList::f3(ClassUnit* headptr, int _value) // проверка принадлежности элемента множеству (уникальность)
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

ClassUnit* ClassList::f4(ClassUnit*& headptr, int _value) // добавление в начало
{
    if (!f3(headptr, _value)) // если неуникальный элемент
    {
        return headptr;
    }

    ClassUnit* unit1 = new ClassUnit(_value);
    unit1->next = headptr;
    headptr = unit1;

    return headptr;
};

ClassUnit* ClassList::f5(int size, int min, int max) // создание множества (не пустого)
{
    if (min >= max)
    {
        return nullptr;
    }

    for (int i = 0; i < size; )
    {
        int rnd = min + rand() % (max - min + 1);
        ClassUnit* temp = this->first;
        temp = this->first;
        f4(this->first, rnd);
        if (temp != this->first)
            i++;
    }
    return this->first;
};

int ClassList::f6(ClassUnit* headptr) // мощность множества
{
    int i = 0;
    if (f2(headptr)) return 0;

    ClassUnit* p = headptr;
    while (p)
    {
        p = p->next;
        i++;
    }
    return i;
};

string ClassList::f7(ClassUnit* headptr, string c) // вывод элементов
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

bool ClassList::f9(ClassUnit* heada, ClassUnit* headb) // подмножество A-B
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

bool ClassList::f10(ClassUnit* heada, ClassUnit* headb) // равенство двух множеств А-В
{
    if (f2(heada) || f2(headb))
        return false;
    if (f6(heada) == f6(headb) && f9(heada, headb))
        return true;
    return false;
};

ClassList* ClassList::f11(ClassUnit* heada, ClassUnit* headb) // объединение двух множеств
{
    auto list = new ClassList{};
    while (heada)
    {
        f4(list->first, heada->value);
        heada = heada->next;
    }
    while (headb)
    {
        f4(list->first, headb->value);
        headb = headb->next;
    }
    return list;
};

ClassList* ClassList::f12(ClassUnit* heada, ClassUnit* headb) // пересечение двух множеств
{
    auto list = new ClassList{};
    if (f2(heada) || f2(headb))
        return list;
    while (heada)
    {
        if (!f3(headb, heada->value))
            f4(list->first, heada->value);
        heada = heada->next;
    }
    return list;
};

ClassList* ClassList::f13(ClassUnit* heada, ClassUnit* headb) // разность множеств
{
    auto list = new ClassList{};
    while (heada)
    {
        if (f3(headb, heada->value))
            f4(list->first, heada->value);
        heada = heada->next;
    }
    return list;
};

ClassList* ClassList::f14(ClassUnit* heada, ClassUnit* headb) // симметричная разность
{
    auto unionList = f11(heada, headb);
    auto intersectionList = f12(heada, headb);
    ClassList* list = f13(unionList->first, intersectionList->first);
    return list;
};