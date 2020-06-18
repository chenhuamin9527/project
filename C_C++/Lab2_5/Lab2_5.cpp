#include <bits/stdc++.h>
using namespace std;
//输入你的出生年月日，以及当前年月日，计算你出生到现在有多少天了。
int days[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
int judge(int year)
{
    if (year % 400 != 0 && year % 4 == 0)
        return 1;
    return 0;
}
int main()
{
    int y_year, y_month, y_day;
    int n_year, n_month, n_day;
    cout << "input your birthday(year month day)" << endl;
    cin >> y_year >> y_month >>y_day;
    cout << "input today's date (year month day)" << endl;
    cin >> n_year >> n_month >> n_day;
    int sum = days[n_month] + n_day - days[y_month] - y_day;
    for (int i = y_year;i < n_year;i++)
    {
        sum += 365;
        if (judge(i))
            sum ++;
    }
    cout << "you have been born " << sum << " days" << endl;
    return 0;
}