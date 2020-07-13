#include <bits/stdc++.h>
using namespace std;
int main()
{
    double p = 0;
    double a, b, c;
    cin >> a >> b >> c;
    p = 1.0/2 * (a + b + c);
    double s = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << fixed << setprecision(1) << s;
    return 0;
}