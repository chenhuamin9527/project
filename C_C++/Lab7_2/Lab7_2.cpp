// a、建立椭圆Oval类，具有长半径Lr、短半径Sr等数据成员，具有面积函数Area（）
// 和周长函数Round（），以及适当的构造函数、析构函数。
// b、建立圆Circle类，继承自Oval类，具有适当的构造函数、析构函数。
// c、建立一个圆的对象，调用继承的Area（）、Round（函数）计算其面积和周长。
// d、通过构造函数、析构函数中的输出语句，观察并分析派生类对象的构造和析构全过程。
#include <bits/stdc++.h>
using namespace std;

const float PI = 3.14;
class Oval
{
public:
    Oval();
    Oval(float Lr, float Sr);
    void set_r(float Lr, float Sr);
    float Area();
    ~Oval();
private:
    float Lr, Sr;
};

Oval::Oval()
{
    cout << "调用椭圆的构造函数" << endl;
}

Oval::Oval(float nLr, float nSr)
{
    Lr = nLr;
    Sr = nSr;
    cout << "调用椭圆的构造函数" << endl;
}

Oval::~Oval()
{
    cout << "调用椭圆的析构函数" << endl;
}

float Oval::Area()
{
    return PI * Lr * Sr;
}


void Oval::set_r(float n_lr, float n_sr)
{
    Lr = n_lr;
    Sr = n_sr;
}

class Circle : public Oval
{
public:
    void set_r(float r);
    Circle();
    Circle(float r);
    ~Circle();
private:
    float radius;
};

void Circle::set_r(float r)
{
    radius = r;
}

Circle::Circle()
{
    cout << "调用圆的构造函数" << endl;
}

Circle::Circle(float r) : Oval(r, r)
{
    radius = r;
    cout << "调用圆的构造函数" << endl;
}

Circle::~Circle()
{
    cout << "调用圆的析构函数" << endl;
}

int main()
{
    Oval o1(4,5);
    Circle c1(5);
    cout << o1.Area() << endl;
    cout << c1.Area() << endl;
    return 0;
}