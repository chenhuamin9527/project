// 1、参考P220、221例6-16、6-17，实现动态对象数组的创建和使用。
// 要求如下:
// a、建立一个圆类Circle，具有以下三个数据成员:坐标x、y，半径r。
// b、具有适当的构造、析构函数，以及显示圆数据的函数show（）。
// c、在main中建立对象数组，存储多个圆的数据，然后进行测试。
// 输出格式如下:
// 圆(1,1)  半径=5
// 圆(7,12) 半径=10
#include<bits/stdc++.h>
using namespace std;

class Circle
{
public:
    void show();
    Circle()
    {
        cout << "Create a circle." << endl;
    }

    Circle(float r,float x, float y) : r(r), x(x), y(y)
    {
        cout << "Create a circle." << endl;
    }

    ~Circle()
    {
        cout << "Destructor called." << endl;
    }
    float getR();
    float getX();
    float getY();
    void setCircle(float r, float x, float y);
private:
    float r;
    float x, y;
};

void Circle::setCircle(float rr, float xx, float yy)
{
    r = rr;
    x = xx;
    y = yy;
}
float Circle::getR()
{
    return r;
}

float Circle::getX()
{
    return x;
}

float Circle::getY()
{
    return y;
}
void Circle::show()
{
    cout << "Circle(" << x << "," << y << ")"<< endl;
    cout << "radius = " << r << endl;
}
int main()
{
    Circle * ctr = new Circle[2];
    ctr[0].setCircle(5, 1, 1);
    ctr[1].setCircle(10, 7, 12);
    ctr[0].show();
    ctr[1].show();
    delete ctr;
    return 0;
}