#include "Array.h"
#include <iostream>
using namespace std;
int main()
{
    int n;
    double sum = 0;
    cout << "����ѧ������" << endl;
    cin >> n;
    Array<double> grade(n);
    for(int i = 0; i < n; i++)
    {
        double temp;
        cout << "�������" << i+1 << "��ѧ���ڿγ�A�еĿ��Գɼ�" << endl;
        cin >> temp;
        grade[i] = temp;
        sum += temp;
    }
    double aver = sum / n;
    cout << "ƽ���ɼ�Ϊ" << aver << "��" << endl;
    return 0;
}