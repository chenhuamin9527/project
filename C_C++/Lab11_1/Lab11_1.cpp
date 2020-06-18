// 1、 参考并改进P362例9-2，实现以下要求:

// a、建立结构体Stuent，具有学号、姓名、性别等数据项

// b、建立结构体Book，具有书名、作者、出版社、价格等数据项

// c、建立一个模板类Store，具有适当的成员及方法

// d、在main中建立对象Store类的对象s1，存储的数据为某个学生的信息，然后输出

// e、在main中建立对象Store类的对象b1，存储的数据为某本图书的信息，然后输出

// 程序命名为Lab11_1.cpp
#include <bits/stdc++.h>
using namespace std;
struct Student  //结构体Student
{
    int id;     //学号
    float gpa;  //平均分
};

struct Book
{
    string name;
    string author;
    string publish;
    double price;
};

template<class T>   //类模板：实现对任意类型数据进行存取
class Store
{
private:
    T item; //item用与存放任意类型的数据
    bool haveValue; //haveValue标记item是否已被存入内容
public:
    Store();    //默认形式(无形参)的构造函数
    T &getElem(); //提取数据函数
    void putElem(const T &x);   //存入数据函数
};

//以下实现各成员函数
template<class T>   //默认构造函数的实现
Store<T>::Store():haveValue(false) { }

template<class T>   //提取数据函数的实现
T &Store<T>::getElem()
{
    if(!haveValue)  //如果试图提取未初始化的数据，则终止程序
    {
        cout << "No item present!" << endl;
        exit(1);    //使程序完全退出，返回到操作系统
        //参数可用来表示程序终止的原因，可以被操作系统接收
    }
    return item;    //返回item中存放的数据
}

template<class T>   //存入数据函数的实现
void Store<T>::putElem(const T &x)
{
    haveValue = true;   //将haveValue置为true，表示item中已存入数据
    item = x;           //将x值存入item
}

int main()
{
    Store<int>s1, s2;   //定义两个Store<int>类对象,其中数据成员item为int类型
    s1.putElem(3);      //向对象s1中存入数据(初始化对象s1)
    s2.putElem(-7);     //向对象s2中存入数据(初始化对象s2)
    cout << s1.getElem() << " " << s2.getElem() << endl;    //输出对象s1和s2的数据成员
    Student g = {1000, 23}; //定义Student类型结构体变量的同时赋予初值
    Store<Student>s3;   //定义Store<Student>类对象s3，其中数据成员item为Student类型
    s3.putElem(g);      //向对象s3中存入数据(初始化对象s3)
    cout << "The student id is " << s3.getElem().id << endl;    //输出对象s3的数据成员
    Book a = {"c++", "xiaoming", "qinghuadaxue", 20.08};
    Store<Book> s4;
    s4.putElem(a);
    cout << "the book's name: " << s4.getElem().name << endl;
    cout << "the book's author: " << s4.getElem().author << endl;
    cout << "the book's publish: " << s4.getElem().publish << endl;
    cout << "the book's price: " << s4.getElem().price << endl;
    Store<double>d; //定义Store<double>类对象d，其中数据成员item为double类型
    cout << "Retrieving object d...";
    cout << d.getElem() << endl;    //输出对象d的数据成员
    //由于d未经初始化，在执行函数d.getElement()过程中导致程序终止

    return 0;
}