#include<bits/stdc++.h>
using namespace std;
int a[3];
bool judge(int num)
{
    if(num % a[0] == 0)
        return false;
    if(num % a[1] == 0)
        return false;
    if(num % a[2] == 0)
        return false;
    return true;
}
int main()
{
    set<int> s;
    int n;
    int ans = 0;
    cin >> n;
    cin >> a[0] >> a[1] >> a[2];
    for (int i = 1; i <= n; i++)
    {
        if (judge(i))
            ans++;
    }
    cout << ans;
    return 0;
}
