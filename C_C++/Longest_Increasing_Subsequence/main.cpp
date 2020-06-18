#include <bits\stdc++.h>
using namespace std;
int dp[1000];
int num[1000];
int j = 0;
int main()
{
    for (int i = 0; i < 1000; i++)
    {
        dp[i] = 1;
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            if (num[i] > num[k])
                dp[i] = max(dp[i], dp[k]+1);
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = max(dp[i], res);
    }
    cout << res;
    return 0;
}