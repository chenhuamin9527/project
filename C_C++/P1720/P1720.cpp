#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
double f[1000] = {0};
int main()
{
    int n;
    double fn;
    f[0] = 1;
    f[1] = 1;
    cin >> n;
    // fn = (pow((1.0+sqrt(5.0))/2, n) - pow((1.0-sqrt(5.0))/2, n))/sqrt(5.0);
    // cout << fixed << setprecision(2) << fn;
    for (int i = 2; i < n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    cout << fixed << setprecision(2) <<f[n-1];
    return 0;
}