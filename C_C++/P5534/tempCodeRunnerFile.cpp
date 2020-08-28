#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1, a2, n;
    int d, sum;
    cin >> a1 >> a2 >> n;
    d = a2 - a1;
    sum = n * a1 + n * (n -1) * d / 2;
    cout << sum;
    return 0;
}