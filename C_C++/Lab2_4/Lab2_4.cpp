#include <bits/stdc++.h>
//请你设计一个游泳场所，里面至少包含大游泳池、儿童池、外围栅栏、过道等，其中大游泳池是长方形的，儿童池是圆形或椭圆形。
//测试时输入各部分的长宽或半径，以及各部分单价，计算你所设计的游泳场所造价。
using namespace std;
const float PI = 3.141593;
const float FENCE_PRICE = 35;
const float CONCRETE_PRICE = 35;
class Rectangle     //矩形类
{
public:
    Rectangle(float new_a, float new_b);
    float area();
    float circumference();
    void set_side(float new_a, float new_b);
private:
    float a,b;
};

Rectangle::Rectangle(float new_a, float new_b)
{
    a = new_a;
    b = new_b;
}

float Rectangle::area()
{
    return a * b;
}

void Rectangle::set_side(float new_a, float new_b)
{
    a = new_a;
    b = new_b;
}

float Rectangle::circumference()
{
    return (a + b) * 2;
}

class Circle        //圆类
{
public:
    Circle(float r);
    float area();
    float circumference();
private:
    float radius;
};

Circle::Circle(float r)
{
    radius = r;
}

float Circle::area()
{
    return PI * radius * radius;
}

float Circle::circumference()
{
    return 2 * PI * radius;
}

class Oval        //圆类
{
public:
    Oval(float new_a, float new_b);
    float area();
    float circumference();
private:
    float a, b;
};

Oval::Oval(float new_a, float new_b)
{
    a = new_a;
    b = new_b;
}

float Oval::area()
{
    return PI * a * b;
}

float Oval::circumference()
{
    return 2 * PI * b + 4 * (a - b);
}
int main()
{
    int a,b,r;
    cout << "input rectangle's side lenth and the circle's radius" << endl;
    cin >> a >> b >> r;
    Rectangle big(a, b);   //大游泳池
    Circle kid(r);          //儿童池，可以为圆或椭圆
    float out_fence_price = FENCE_PRICE * big.area();
    float total_concrect = CONCRETE_PRICE * (big.area() - kid.area());
    float sum = out_fence_price + total_concrect;
    cout << "the total cost of swimming pool is " << sum << endl;
}