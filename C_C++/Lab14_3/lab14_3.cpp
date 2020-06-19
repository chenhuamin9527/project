#include <bits/stdc++.h>
#include "Queue.h"
using namespace std;
class Complex
{
public:
    Complex() {}
    Complex(double real, double image)
    {
        this->real = real;
        this->image = image;
    }
    void display() const
    {
        cout << "(" << real << ", " << image << "i)";
    }
    
private:
    double real, image;
};
int main()
{
    Queue <Complex> q;
    q.insert(Complex(1,2));
    q.insert(Complex(3,4));
    q.insert(Complex(2,5));
    
    for(int i = 0; i <= q.getLength()+1; i++)
    {
        q.getFront().display();
        q.remove();
        cout << endl;
    }
    return 0;
}