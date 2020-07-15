#include <bits/stdc++.h>
using namespace std;
int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool isLeapYear(int year)
{
    if (year%400==0)
        return true;
    else if (year%4==0 && year%100!=0)
        return true;
    else
        return false;
}
int main()
{
    int year = 0, month = 0;
    cin >> year >> month;
    if (month == 2 && isLeapYear(year))
        cout << 29;
    else
        cout << months[month];
    return 0;
}