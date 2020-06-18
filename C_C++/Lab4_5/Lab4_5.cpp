// 建立一个复数类 Complex，具体内容不限，但必须实现以下功能:
// a. 含两个私有数据成员:实部real, 虚部img，都是float类型
// b.分别用函数实现复数的构造、数据修改、显示复数、复数之间的复制、比较两个复数是否相等、复数的加减等功能。
#include <bits/stdc++.h>
using namespace std;
class Complex
{
public:
    Complex(float n_real, float n_img);
    void set_real(float n_real);
    void set_img(float n_img);
    void show_complex();
    Complex(const Complex &c);
    static bool compare(const Complex &c1, const Complex &c2);
    static string add(const Complex &c1, const Complex &c2);
    static string subtract(const Complex &c1, const Complex &c2); 
    
private:
    float real;
    float img;
};
Complex::Complex(float n_real, float n_img)
{
    real = n_real;
    img = n_img;
}

Complex::Complex(const Complex &c)
{
    real = c.real;
    img = c.img;
}

void Complex::set_img(float n_img)
{
    img = n_img;
}

void Complex::set_real(float n_real)
{
    real = n_real;
}

void Complex::show_complex()
{
    cout << real << "+" << img << "i" << endl;
}

bool Complex::compare(const Complex &c1, const Complex &c2)
{
    if(c1.img == c2.img && c1.real == c2.real)
        return true;
    else
        return false;
}
string Complex::add(const Complex &c1, const Complex &c2)
{
    float n_real = c1.real - c2.real;
    float n_img = c1.img - c2.img;
    string str;
    stringstream ss1;
    stringstream ss2;    
    ss1 << n_real;
    ss2 << n_img;
    str = ss1.str() + "+" + ss2.str() + "i";
    return str;
}
string Complex::subtract(const Complex &c1, const Complex &c2)
{
    float n_real = c1.real + c2.real;
    float n_img = c1.img + c2.img;
    string str;
    stringstream ss1;
    stringstream ss2;    
    ss1 << n_real;
    ss2 << n_img;
    str = ss1.str() + "+" + ss2.str() + "i";
    return str;    
}

int main()
{
    Complex c1(2,3);
    Complex c2(5,2);
    c1.show_complex();
    cout << Complex::add(c1,c2) << endl;
    cout << Complex::subtract(c1,c2) << endl;
    if(Complex::compare(c1,c2))
    {
        cout << "1" << endl;
    }
    else
        cout << "0" << endl;
}