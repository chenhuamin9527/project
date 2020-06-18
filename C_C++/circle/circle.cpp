#include <bits/stdc++.h>
using namespace std;
const double PI=3.14159265358979323;
double area(int r)
{
    return PI * r * r;
}
int main()
{
    int r;
    double ans = 0;
    cin >> r;
    ans = area(r);
    cout<<setiosflags(ios::fixed)<<setprecision(7)<<ans<<endl;
    return 0;
}