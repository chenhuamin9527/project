#include <bits/stdc++.h>
using namespace std;
//����һ��ֵǮ�壻��ĸһ��ֵǮ������������ֵǮһ����Ǯ��ټ������̡�ĸ��������ֻ?
const int a = 5;//����һ��ֵǮ��
const int b = 3;//��ĸһ��ֵǮ��
const int c = 1;//��������ֵǮһ
int main()
{
    int n1 = 0, n2 = 0, n3 = 0;
    for (n3 = 0;n3 <= 100;n3++)
    {
        for (n2 = 0;n2 <= 33;n2++)
        {
            for (n1 = 0;n1 <= 20;n1++)
            {
                int sum = n1 * a + n2 * b + n3 * c;
                int num = n1 + n2 + n3 * 3;
                if (sum == 100 && num == 100)
                    cout << "������"<< n1 << "ֻ " << "��ĸ��" << n2 << "ֻ " << "������" << n3 * 3 << "ֻ " << endl;
            }
        }
    }
    return 0;
}