// 3������һ����ΪLab12_3����Ŀ������P376��9-10�Ķ�����ģ�壬ʵ������Ҫ��:
// a������һ��ѧ����Students������ѧ�š��������Ա�����ݳ�Ա��������ʾѧ����Ϣ��show()����
// b����ѭ�������д�������5��ѧ������Ϣ
// c���Ӷ�����ȡ��ÿ��ѧ������Ϣ������ʾ��

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
        cout << "ѧ��ѧ�ţ�" << id << " " << "ѧ��������" << name << " " << "�Ա�" << sex << endl;
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

