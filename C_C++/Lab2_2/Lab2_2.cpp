#include <bits/stdc++.h>
using namespace std;
int f = 1;
int fun(int d)
{
    if (d == 1)
    return 1;
    else
        return 2 * (fun(--d) + 1);
}
int main()
{
    int day = 10;
    cout << fun(day) << endl;
    return 0;
}
