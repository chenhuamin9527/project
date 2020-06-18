// 建立一个矩形类Rect，该类具有p1、p2两个Point类的数据成员，分别表示矩形的左上角和右下角坐标。
// Point类具有构造函数和复制构造函数、析构函数，里面有相应的初始化语句，以及类似“某某构造/析构函数被调用”的输出语句。
// Rect类具有构造函数和复制构造函数、析构函数，里面有相应的初始化语句，以及类似“某某构造/析构函数被调用”的输出语句。
// Rect类还具有面积函数Area（），周长函数Round（）。
// 在main()中建立3个Rect类的对象r1、r2、r3，观察其构造、析构过程。
#include <bits/stdc++.h>
using namespace std;
class Point
{
public:
    Point(float xx, float yy);
    double get_x()
    {
        return x;
    }
    double get_y()
    {
        return y;
    }
    ~Point()
    {
        cout << "Point's destruction function is invoked!" << endl;
    }
private:
    float x;
    float y;
};

Point::Point(float xx , float yy)
{
    cout << "Point's construct function is invoked!" << endl;
    x = xx;
    y = yy;
}

class Rect
{
public:
    Rect(Point xp1, Point xp2);
    Rect(Rect &r);
    ~Rect()
    {
        cout << "Rect's destruction function is invoked!" << endl;
    }
    float get_area()
    {
        return area;
    }
    float get_round()
    {
        return round;
    }
private:
    Point p1;
    Point p2;
    float area;
    float round;
};

Rect::Rect(Point xp1, Point xp2) : p1(xp1) , p2(xp2)
{
    float x1 = xp1.get_x();
    float y1 = xp1.get_y();
    float x2 = xp2.get_x();
    float y2 = xp2.get_y();
    p1 = xp1;
    p2 = xp2;
    cout << "Rect's construct function is invoked!" << endl;
    area = fabs(x1 - x2) * fabs(y1 - y2);
    round = 2 * (fabs(x1 - x2) + fabs(y1 - y2));
}




int main()
{
    Point r1_p1(2,2),r1_p2(4,0);
    Point r2_p1(6,2),r2_p2(8,0);
    Point r3_p1(3,4),r3_p2(4,1);
    Rect r1(r1_p1,r1_p2), r2(r2_p1,r2_p2), r3(r3_p1,r3_p2);
    cout << "r1's area is " << r1.get_area() << endl;
    cout << "r2's round is " << r2.get_round() << endl;
    r3.~Rect();
    return 0;
}