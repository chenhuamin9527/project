#include <bits/stdc++.h>
using namespace std;
const double EXP = 0.0001;  //������������
bool judge(double n)
{
	if (n <= EXP - 1 && n >= -1 - EXP)
		return true;
	return false;
}

int main()
{
    double n = 0;
    double price = 0;
    double sum = 0;
    while (!judge(n))
    {
        cout << "���뵥�ۺ�����" << endl;
        cin >> price >> n;  //������ʱ����-1
        if(judge(price))
            break;
        sum += price * n;
        cout << price * n << endl;
    }
    cout << "sum = " << sum << endl;
}
