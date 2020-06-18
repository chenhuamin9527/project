// a、定义一个基类Person，数据成员包含字符数组name[10]，用于保存姓名。函数成员包括设置姓名的成员函数SetName（char *name），获取姓名的成员函数GetName（），打印信息的成员函数PrintInfo（）。

// b、从Person类派生出Student类，增加整型数据成员number，用于保存学号。新增的函数成员包括设置学号的成员函数SetNum（int number），获取姓名的成员函数GetNum（）,重写基类成员函数PrintInfo，以使其能输出姓名与学号。

// c、测试时，在main中建立两个类的对象，并通过对象调用各个函数。
#include <bits/stdc++.h>
using namespace std;
class Person
{
public:

    Person(string name)
    {
        this->name = name;
    }
    void SetName(string name)
    {
        this->name = name; 
    }
    string GetName()
    {
        return name;
    }

    void PrintInfo()
    {
        cout << name << endl;
    }

private:
    string name;
};

class Student : public Person
{
public:
    Student(int number, string name) : Person(name)
    {
        this->number = number;
        this->name = name;
    }

    void setNum(int number)
    {
        this->number = number;
    }

    int GetNum()
    {
        return number;
    }

    void PrintInfo()
    {
        cout << "the number is " << number << endl; 
        cout << "the name is " << name << endl;
    }

private:
    int number;
    string name;
};
int main()
{
    Person p1("xiaoming");
    p1.PrintInfo();
    p1.SetName("daming");
    p1.PrintInfo();
    Student s1(001, "xiaohong");
    s1.PrintInfo();
    s1.SetName("dahong");
    s1.setNum(002);
    s1.PrintInfo();
    return 0;
}