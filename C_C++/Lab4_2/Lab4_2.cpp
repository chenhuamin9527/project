//���һ��Exam�࣬���а���һ����̬���ݳ�Աcount�����ڼ�¼���ڵ�Exam����ĸ�����һ����Ա����ID���ڼ�¼��ǰ�ı�š�
//���ù��졢������������count++��--������ʾ��IDΪ?�Ķ��󴴽��������٣���Ŀǰ����?�����󡱡�
//����һ������test�����ڽ���Exam��Ķ���A1��A2��
//��main�е���test������Ȼ����Exam��Ķ���A3��A4��
//ͨ�����ϳ���۲�4���Ķ����������ٵĹ���
#include <bits/stdc++.h>
using namespace std;
class Exam
{
public:
    Exam(long nid)
    {
        id = nid;
        count++;
        cout << "IDΪ" << id << "�Ķ��󴴽���" << "Ŀǰ����" << count <<"������" << endl;
    }
    ~Exam()
    {
        count--;
        cout << "IDΪ" << id << "�Ķ������٣�" << "Ŀǰ����" << count <<"������" << endl;
    }
private:
    static int count;
    long id;
};

int Exam::count = 0;
void test()
{
    Exam A1(001),A2(002);
}

int main()
{
    test();
    Exam A3(003),A4(004);
    return 0;
}