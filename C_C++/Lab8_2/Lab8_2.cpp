// 2、建立一个名为Lab8_2.cpp的程序，参照P276图7-8，建立一个具有三层的类继承结构的程序，并实现以下功能:

// a、增加各个类的构造、析构函数，其中通过输出语句显示其执行状态

// b、使用类型兼容规则7.3相关知识，在类体之外建立一个名为funTest（ ）的函数，形参为基类的对象

// c、在main中建立各个类的对象，分别尝试作为funTest的实参

#include <bits/stdc++.h>
using namespace std;
class Base0
{
public:
    Base0()
    {
        cout << "Base0 constructor. " << endl;
    }

    ~Base0()
    {
        cout << "Base0 destrutive function. " << endl;
    }
};

class Base1 : virtual public Base0
{
public:
    Base1()
    {
        cout << "Base1 constructor. " << endl;
    }

    ~Base1()
    {
        cout << "Base1 destrutive function. " << endl;
    }
};

class Base2 : virtual public Base0
{
public:
    Base2()
    {
        cout << "Base2 constructor. " << endl;
    }

    ~Base2()
    {
        cout << "Base2 destrutive function. " << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    Derived()
    {
        cout << "Derived constructor. " << endl;
    }

    ~Derived()
    {
        cout << "Derived destrutive function. " << endl;
    }
};

void funTest(Base0 b1)
{
    cout << "funTest is called" << endl;
}

int main()
{
    Base0 b0;
    Base1 b1;
    Base2 b2;
    Derived d1;
    funTest(b0);
    funTest(b1);
    funTest(b2);
    funTest(d1);
    return 0;
}