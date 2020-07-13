#include <bits/stdc++.h>
using namespace std;
int main()
{
    double vol;
    int num = 0;
    cin >> vol >> num;
    double res = vol / num;
    cout << setiosflags(ios::fixed) << setprecision(3) << res << endl;
    cout << num * 2 << endl;
    return 0;
}