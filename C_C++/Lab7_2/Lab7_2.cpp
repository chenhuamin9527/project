// a��������ԲOval�࣬���г��뾶Lr���̰뾶Sr�����ݳ�Ա�������������Area����
// ���ܳ�����Round�������Լ��ʵ��Ĺ��캯��������������
// b������ԲCircle�࣬�̳���Oval�࣬�����ʵ��Ĺ��캯��������������
// c������һ��Բ�Ķ��󣬵��ü̳е�Area������Round��������������������ܳ���
// d��ͨ�����캯�������������е������䣬�۲첢�������������Ĺ��������ȫ���̡�
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
    cout << "������Բ�Ĺ��캯��" << endl;
}

Oval::Oval(float nLr, float nSr)
{
    Lr = nLr;
    Sr = nSr;
    cout << "������Բ�Ĺ��캯��" << endl;
}

Oval::~Oval()
{
    cout << "������Բ����������" << endl;
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
    cout << "����Բ�Ĺ��캯��" << endl;
}

Circle::Circle(float r) : Oval(r, r)
{
    radius = r;
    cout << "����Բ�Ĺ��캯��" << endl;
}

Circle::~Circle()
{
    cout << "����Բ����������" << endl;
}

int main()
{
    Oval o1(4,5);
    Circle c1(5);
    cout << o1.Area() << endl;
    cout << c1.Area() << endl;
    return 0;
}