// 2�� ʹ�õڰ��µ��麯������̬�󶨵�֪ʶ��ʵ������Ҫ��:

// a������һ��������Animal������һ���麯��shout��������ʾ���֡������С���

// b��������Animal�Ķ��������Dog��Cat��Sheep�����ǵ�shout���������ֱ���ʾ���֡�С��������������Сè������������С�������㡱

// c����main�зֱ���4����Ķ���,�洢��һ��Animal�����ָ������Arr֮��

// d��ʹ��forѭ������������ÿ�������shout����������

// ����ʾ:c��d�������ɲ���P315�°�ҳ�Ĵ��롣��
#include <bits/stdc++.h>
using namespace std;
class Animals
{
public:
    virtual void shout()
    {
        cout << "������" << endl;
    }
private:
};

class Dog : public Animals
{
public:
    void shout()
    {
        cout << "С��������" << endl;
    }
};

class Cat : public Animals
{
public:
    void shout()
    {
        cout << "Сè������" << endl;
    }
};

class Sheep : public Animals
{
public:
    void shout()
    {
        cout << "С��������" << endl;
    }
};

int main()
{
    Animals a;
    Dog d;
    Cat c;
    Sheep s;
    Animals * ani[] = {&a, &d, &c, &s};
    for (int i = 0; i < 4; i++)
    {
        ani[i]->shout();
    }
    return 0;
}