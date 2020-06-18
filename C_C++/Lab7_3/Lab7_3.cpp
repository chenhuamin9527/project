// a、定义一个图形类Shape，以及它的两个派生类：矩形类Rectangle和圆类Circle，两者都具有面积函数getArea( )和周长函数getRound( )
// b、定义一个正方形类Square，它是矩形类Rectangle的派生类
// c、所有函数都有一个show( )函数，显示这样一句话：“这是？？类的对象”
// 最后，在main中建立各个类的对象，并尝试调用其函数。
#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    Shape()
    {
        cout << "Shape类的构造函数" << endl;
    }
    void show()
    {
        cout << "这是Shape类的对象" << endl;
    }
    ~Shape()
    {
        cout << "Shape类的析构函数" << endl;
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
        cout << "Rectangle类的构造函数" << endl;
    }
    ~Rectangle()
    {
        cout << "Rectangle类的析构函数" << endl;
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
        cout << "这是Rectangle类的对象" << endl;
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
        cout << "Square类的构造函数" << endl;
    }
    ~Square()
    {
        cout << "Square类的析构函数" << endl;
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
        cout << "这是Square类的对象" << endl;
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