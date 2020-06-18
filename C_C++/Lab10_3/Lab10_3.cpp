// 完成课本P344习题8-8
#include <bits/stdc++.h>
using namespace std;
class BaseClass
{
public:
    virtual void fn1()
    {
        cout << "BaseClass's fn1 function" << endl;
    }
    void fn2()
    {
        cout << "BaseClass's fn2 function" << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    void fn1()
    {
        cout << "DeriverClass's fn1 function" << endl;
    }
    void fn2()
    {
        cout << "DerivedClass's fn2 function" << endl;
    }
};
int main()
{
    DerivedClass d1;
    BaseClass * p1 = &d1;
    DerivedClass * p2 = &d1;
    p1->fn1();
    p1->fn2();
    p2->fn1();
    p2->fn2();
    return 0;
}