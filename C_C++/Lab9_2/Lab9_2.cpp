#include <iostream>
using namespace std;

class Complex
{
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i){}
    Complex operator+ (const Complex &c2) const;
    Complex operator- (const Complex &c2) const;
    Complex operator++ ()const;
    Complex operator-- ()const;
    void display() const;
private:
    double real;
    double imag;
};

Complex Complex::operator+ (const Complex &c2) const
{
    return Complex(real+c2.real, imag+c2.imag);
}

Complex Complex::operator- (const Complex &c2) const
{
    return Complex(real-c2.real, imag-c2.imag);
}

Complex Complex::operator++ ()const
{
    return Complex(real+1, imag);
}

Complex Complex::operator-- ()const
{
    return Complex(real-1, imag);
}

void Complex::display() const
{
    cout << "(" << real << ", " << imag << ")" << endl;
}

int main()
{
    Complex c1(2,3);
    Complex c2(1,1);
    (c1 - c2).display();
    (++c1).display();
    (--c1).display();
    return 0;
}