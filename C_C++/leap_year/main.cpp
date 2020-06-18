#include <bits/stdc++.h>
using namespace std;
bool isleap(int year)
{
    bool flag = false;
    if (year % 4 == 0 && year % 100 != 0)
        flag = true;
    if (year % 400 == 0)
        flag = true;
    return flag;
}
int main()
{
    int year;
    cin >> year;
    if (isleap(year))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}