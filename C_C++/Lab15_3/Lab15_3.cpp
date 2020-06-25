//建立一个程序，建立一个自己的异常类，用于对两个100以内两个浮点数相除的异常处理。要求将异常分成除零溢出、数值越界两种。
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class MyException
{
public:
    MyException(const string &message):message(message) {}
    ~MyException() {}
    const string &getMessage() const { return message;}
private:
    string message;
};

void divide(float a, float b) throw (overflow_error)
{
    if(b==0)
    {
        throw range_error("a is divided by zero!");
    }
    if(a/b < 0)
    {
        throw overflow_error("result is too large!");
    }
}

int main()
{   
    try
    {
        divide(3.0,2.2);
        //divide(2,0);
        divide(10000, 1e-128);
    }
    catch(exception& e)
    {
        cout << e.what() << '\n';
    }
    
    return 0;
}