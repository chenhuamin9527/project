#include <bits/stdc++.h>
using namespace std;
const double EXP = 0.0001;  //������������
bool judge(double n)
{
	if (n <= EXP - 1 && n >= -1 - EXP)
		return true;
	return false;
}

double price[1000] = {0};
double amount[1000] = {0};
double fare[1000] = {0};
int main()
{
    cout << "���뵥�ۺ�����" << endl;
    cout << "���գ� ������ ������ ��ʽ����" << endl;
    double n = 0;
    double sum = 0;
    int i = 0;
    while (!judge(n))
    {
        cin >> price[i] >> amount[i];  //������ʱ����-1
        if(judge(price[i]))
            break;
        fare[i] += price[i] * amount[i];
        sum += fare[i];
        i++;
    }
    for (int j = 0; j < i; j++)
        cout << price[j] << " x " << amount[j] << " = " << fare[j] << endl;
    cout << "���� = " << sum << endl;
    return 0;
}