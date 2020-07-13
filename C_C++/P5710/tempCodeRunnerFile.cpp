#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int f1, f2, f3, f4;
    bool flag1, flag2;
    cin >> n;
    if (n % 2 == 0)
        flag2 = true;
    if (n > 4 && n <=12)
        flag2 = true;
    if (flag1 && flag2)
        f1 = 1;
    if (flag1 || flag2)
        f2 = 1;
    if ((flag1&&!flag2)||(!flag1&&flag2))
        f3 = 1;
    if (!flag1 && !flag2)
        f4 = 1;
    cout << f1 << " " << f2 << " " << f3 << " " << f4;
    return 0;
}