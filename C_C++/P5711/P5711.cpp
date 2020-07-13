#include <bits/stdc++.h>
using namespace std;
int isLeapYear(int year)
{
    if (year%400==0)
        return 1;
    else if (year%4==0 && year%100!=0)
        return 1;
    else
        return 0;
}
int main()
{
    int year = 0;
    cin >> year;
    cout << isLeapYear(year);
    return 0;
}