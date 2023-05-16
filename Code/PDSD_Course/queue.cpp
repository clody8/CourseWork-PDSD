#include "Headerqueue.h"; 
#include <stdlib.h> // rand(), srand()
#include <time.h>

bool Queue::f2(queue<int> lst) // ������ ���������?
{
    return lst.empty();
};

bool Queue::f3(queue<int> lst, int _value) // �������� ������������ ��������
{
    queue<int> tempQueue = lst;
    while (!tempQueue.empty())
    {
        if (tempQueue.front() == _value)
        {
            return false;
        }
        tempQueue.pop();
    }
    return true;
};

void Queue::f4(int _value) // ���������� � ������
{
    if (f3(lst, _value))
        lst.push(_value);
};

void Queue::f5(int size, int min, int max) // �������� ��������� (�� �������)
{
    while (this->f6(lst) < size)
    {
        int rnd = min + rand() % (max - min + 1);
        this->f4(rnd);
    }
};

int Queue::f6(queue<int> lst) // �������� ���������
{
    return lst.size();
};

string Queue::f7(queue<int> lst, string c) // ����� ���������
{
    string result = "";
    queue<int> temp = lst;
    while (!temp.empty())
    {
        result += to_string(temp.front()) + c;
        temp.pop();
    }
    return result;
};

bool Queue::f9(queue<int> lstA, queue<int> lstB) // ������������ A-B
{
    if (f2(lstA) || f2(lstB))
        return false;
    if (f6(lstA) > f6(lstB))
        return false;

    queue<int> other = lstB;
    queue<int> temp = lstA;
    while (!temp.empty())
    {
        if (f3(lstB, temp.front()))
        {
            return false;
        }
        temp.pop();
    }
    return true;
};

bool Queue::f10(queue<int> lstA, queue<int> lstB) // ��������� ���� �������� �-�
{
    if (lstA.size() != lstB.size())
    {
        return false;
    }

    return f9(lstA, lstB);
};

Queue Queue::f11(queue<int> lstA, queue<int> lstB) // ����������� ���� ��������
{
    Queue result;
    queue<int> other = lstB;
    queue<int> temp = lstA;
    while (!temp.empty()) {
        result.f4(temp.front());
        temp.pop();
    }
    while (!other.empty()) {
        result.f4(other.front());
        other.pop();
    }
    return result;
};

Queue Queue::f12(queue<int> lstA, queue<int> lstB) // ����������� ���� ��������
{
    Queue result;
    queue<int> other = lstB;
    queue<int> temp = lstA;
    while (!temp.empty())
    {
        if (!f3(other, temp.front()))
        {
            result.f4(temp.front());

        }
        temp.pop();
    }
    return result;
};

Queue Queue::f13(queue<int> lstA, queue<int> lstB) // �������� ��������
{
    Queue result;
    queue<int> other = lstB;
    queue<int> temp = lstA;
    while (!temp.empty())
    {
        if (f3(other, temp.front()))
        {
            result.f4(temp.front());

        }
        temp.pop();
    }
    return result;
};

Queue Queue::f14(queue<int> lstA, queue<int> lstB) // ������������ ��������
{
    return f13(f11(lstA, lstB).lst, f12(lstA, lstB).lst);
};