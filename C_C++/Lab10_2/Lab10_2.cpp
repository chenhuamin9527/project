// 2、 使用第八章的虚函数、动态绑定等知识，实现以下要求:

// a、建立一个动物类Animal，具有一个虚函数shout（），显示文字“动物会叫”。

// b、建立出Animal的多个派生类Dog、Cat、Sheep，他们的shout（）函数分别显示文字“小狗汪汪汪”，“小猫喵喵喵”，“小羊咩咩咩”

// c、在main中分别建立4个类的对象,存储到一个Animal类对象指针数组Arr之中

// d、使用for循环遍历并调用每个对象的shout（）函数。

// （提示:c、d步骤代码可参照P315下半页的代码。）
#include <bits/stdc++.h>
using namespace std;
class Animals
{
public:
    virtual void shout()
    {
        cout << "动物会叫" << endl;
    }
private:
};

class Dog : public Animals
{
public:
    void shout()
    {
        cout << "小狗汪汪汪" << endl;
    }
};

class Cat : public Animals
{
public:
    void shout()
    {
        cout << "小猫喵喵喵" << endl;
    }
};

class Sheep : public Animals
{
public:
    void shout()
    {
        cout << "小羊咩咩咩" << endl;
    }
};

int main()
{
    Animals a;
    Dog d;
    Cat c;
    Sheep s;
    Animals * ani[] = {&a, &d, &c, &s};
    for (int i = 0; i < 4; i++)
    {
        ani[i]->shout();
    }
    return 0;
}