// 3、建立一个名为Lab8_3.cpp的程序，用于计算出圆和圆柱体的表面积和体积，要求如下：
// a、定义一个Point类，包含数据成员x,y（坐标点）
// b、以Point为基类，派生出一个circle类（圆类），增加数据成员r（半径）
// c、以Circle类为基类，派生出一个Cylinder（圆柱体）类，再增加数据成员h(高)。设计类中数据成员的访问属性。
// d、 在main函数中，建立一个圆柱对象，计算其表面积和体积。

#include <bits/stdc++.h>
using namespace std;
const double PI = 3.14;

class Point
{
public:
    Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    Point()
    {}

    void setX(double x)
    {
        this->x = x;
    }

    double getX()
    {
        return x;
    }

    double getY()
    {
        return y;
    }

    void setY(double y)
    {
        this->y = y;
    }

    void show()
    {
        cout << "(" << x << ", " << y <<")" << endl;
    }

private:
    double x, y;
};

class Circle : public Point
{
public:
    Circle()
    {}

    Circle(double radius, double x, double y) : Point(x, y)
    {
        this->radius = radius;
    }

    double getRadius()
    {
        return radius;
    }

    void show()
    {
        cout << "the center Point is ";
        cout << "(" << getX() << ", " << getY() << ")" << endl;
        cout << "the radius is " << radius << endl;
    }

private:
    Point p;
    double radius;
};

class Cylinder : public Circle
{
public:
    Cylinder(double radius, double h, double x, double y) : Circle(radius, x, y)
    {
        this->h = h;
    }

    double surface_area()
    {
        return 2 * PI * getRadius() * getRadius() + 2 * PI * getRadius() * h; 
    }

    double volume()
    {
        return PI * getRadius() * getRadius() * h;
    }

    void show()
    {
        cout << "the height is " << h << endl;
        cout << "the center Point is ";
        cout << "(" << getX() << ", " << getY() << ")" << endl;
        cout << "the radius is " << getRadius() << endl;
    }

private:
    double h;
    Circle c;
};

int main()
{
    Cylinder c(3, 4, 2, 2);
    cout << c.surface_area() << endl;
    cout << c.volume() << endl;
    return 0;
}