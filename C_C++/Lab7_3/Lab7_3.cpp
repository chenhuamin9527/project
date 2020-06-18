// a������һ��ͼ����Shape���Լ��������������ࣺ������Rectangle��Բ��Circle�����߶������������getArea( )���ܳ�����getRound( )
// b������һ����������Square�����Ǿ�����Rectangle��������
// c�����к�������һ��show( )��������ʾ����һ�仰�������ǣ�����Ķ���
// �����main�н���������Ķ��󣬲����Ե����亯����
#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    Shape()
    {
        cout << "Shape��Ĺ��캯��" << endl;
    }
    void show()
    {
        cout << "����Shape��Ķ���" << endl;
    }
    ~Shape()
    {
        cout << "Shape�����������" << endl;
    }
private:
};

class Rectangle : public Shape
{
public:
    Rectangle(float a, float b)
    {
        this->a = a;
        this->b = b;
        cout << "Rectangle��Ĺ��캯��" << endl;
    }
    ~Rectangle()
    {
        cout << "Rectangle�����������" << endl;
    }
    float getArea()
    {
        return a * b;
    }
    float getRound()
    {
        return 2 * (a + b);
    }
    void show()
    {
        cout << "����Rectangle��Ķ���" << endl;
    }
private:
    float a,b;
};

class Square : public Shape
{
public:
    Square(float a)
    {
        this->a = a;
        cout << "Square��Ĺ��캯��" << endl;
    }
    ~Square()
    {
        cout << "Square�����������" << endl;
    }

    float getArea()
    {
        return a * a;
    }

    float getRound()
    {
        return 4 * a;
    }
    void show()
    {
        cout << "����Square��Ķ���" << endl;
    }
private:
    float a;
};

int main()
{
    Shape s1;
    Rectangle r1(2,3);
    Square s2(3);
    s1.show();
    s2.show();
    r1.show();
    cout << s2.getArea() << endl;
    cout << s2.getRound() << endl;
    cout << r1.getArea() << endl;
    cout << r1.getRound() << endl;
    return 0;
}