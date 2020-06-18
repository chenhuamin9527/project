#include <bits/stdc++.h>
using namespace std;
long long gs(long long n)
{
    long long ans = 0;
    if (n >= 1)
        ans = ((1 + n) * n) / 2;
    return ans;
}
int main()
{
    long long n;
    cin >> n;
    cout << gs(n) << endl;
    return 0;
}