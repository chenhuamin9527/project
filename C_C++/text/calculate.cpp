#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
const double EXP = 0.0001;  //������������
double price[100];
double n[100];
bool judge(double n)
{
	if (n <= EXP - 1 && n >= -1 - EXP)
		return true;
	return false;
}

int main()
{
    double sum = 0;
    int i = 0;
    while (!judge(n[i]))
    {
        cout << "���뵥�ۺ�����" << endl;
        cin >> price[i] >> n[i];  //������ʱ����-1
        if(judge(price[i]))
            break;
        sum += price[i] * n[i];
        i++;
    }
    freopen("out.txt", "w", stdout); 
    for (int k = 0; k < i;k++)
        cout << price[k] << " x " <<  n[k] << " = "<< price[k] * n[k] << endl;
    cout << "sum = " << sum << endl;
    return 0;
}
