#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int n, k;
    int a[10000] = {0}, b[10000] = {0};
    int i_a = 0, i_b = 0; //A类数的index和B类数的index
    double ave_a = 0, ave_b = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
            a[i_a++] = i;
        else
            b[i_b++] = i;
    }
    for (int i = 0; i < i_a; i++)
        ave_a += a[i];
    ave_a /= i_a;
    for (int i = 0; i < i_b; i++)
        ave_b += b[i];
    ave_b /= i_b;
    cout << fixed << setprecision(1) << ave_a << " ";
    cout << fixed << setprecision(1) << ave_b;
    return 0;
}