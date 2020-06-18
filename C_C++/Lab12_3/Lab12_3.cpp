// 3、建立一个名为Lab12_3的项目，借助P376例9-10的队列类模板，实现以下要求:
// a、建立一个学生类Students，具有学号、姓名、性别等数据成员，具有显示学生信息的show()函数
// b、往循环队列中存入至少5个学生的信息
// c、从队列中取出每个学生的信息，并显示。

#include "Queue.h"
#include <iostream>

using namespace std;

class Students
{
public:
    Students(){}
    Students(int id, string name, string sex):id(id), name(name), sex(sex) { }
    void show()
    {
        cout << "学生学号：" << id << " " << "学生姓名：" << name << " " << "性别：" << sex << endl;
    }
    int getId(){return id;}
    string getName(){return name;}
    string getsex(){return sex;}

private:
    int id;
    string name;
    string sex;

};
int main()
{        
    Queue<Students> q;
    Students a1(1, "a", "M");
    q.insert(a1);
    Students a2(2, "b", "M");
    q.insert(a2);
    Students a3(3, "c", "F");
    q.insert(a3);
    Students a4(4, "d", "F");
    q.insert(a4);
    Students a5(5, "e", "M");
    q.insert(a5);
    q.remove().show();
    q.remove().show();
    q.remove().show();
    q.remove().show();
    q.remove().show();
    return 0;
}

