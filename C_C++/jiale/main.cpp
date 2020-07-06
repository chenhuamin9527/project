#include <bits/stdc++.h>
using namespace std;
const double EXP = 0.0001;  //浮点数误差控制
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
    cout << "输入单价和数量" << endl;
    cout << "按照： ‘单价 数量’ 格式输入" << endl;
    double n = 0;
    double sum = 0;
    int i = 0;
    while (!judge(n))
    {
        cin >> price[i] >> amount[i];  //当结束时输入-1
        if(judge(price[i]))
            break;
        fare[i] += price[i] * amount[i];
        sum += fare[i];
        i++;
    }
    for (int j = 0; j < i; j++)
        cout << price[j] << " x " << amount[j] << " = " << fare[j] << endl;
    cout << "总数 = " << sum << endl;
    return 0;
}