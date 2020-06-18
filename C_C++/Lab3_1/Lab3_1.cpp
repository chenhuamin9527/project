#include<bits/stdc++.h>
using namespace std;
// a.定义一个类，Point, 具有x, y轴坐标两个私有数据成员(float 类型)；
// b.定义以下三种构造函数:
// Point();//此时初始化x,y为0
// Point(float xx,float yy);
// Point(Point &p); //复制构造函数
// c.编写用于设置x,y值的公有函数setPoint(float xx,float yy)；显示坐标点函数showPoint（）；
// d.编写具有计算与另一个类对象p1之间距离的公有函数:float calculate_distance(Point p1);
// 在主函数中，提示输入p1, p2两点的x,y坐标，显示两个点的坐标信息，并计算两点的距离；
class Point
{
private:
    float x;
    float y;
public:
    Point(float xx, float yy);
    Point(Point &p);
    void setPoint(float xx, float yy);
    void showPoint();
    float calculate_distance(Point p1);
};

Point::Point(Point &p)
{
    x = p.x;
    y = p.y;
}
Point::Point(float xx, float yy)
{
    x = xx;
    y = yy;
}

void Point::setPoint(float xx, float yy)
{
    x = xx;
    y = yy;
}

void Point::showPoint()
{
    cout << "(" << x << ", " << y << ")" << endl;
}

float Point::calculate_distance(Point p1)
{
    return sqrt((x - p1.x) * (x - p1.x) + (y - p1.y) * (y - p1.y));
}

int main()
{
    Point p1(1, 2);
    Point p2(1, 4);
    cout << p1.calculate_distance(p2) << endl;
    p1.showPoint();
    p2.showPoint();
    return 0;
}