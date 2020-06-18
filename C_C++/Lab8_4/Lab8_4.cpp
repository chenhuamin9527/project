#include <bits/stdc++.h>
using namespace std;

vector <int> v1;
int dp[1000] = {0};
int j = 0;
void fun(int n)
{
    
    if(n == 1)
    {
        return;
    }
    for (int i = n/2; i >= 1; i--)
    {
        fun(i);
    }
}
int main()
{
    int n;
    cin >> n;
    v1.push_back(n);
    j++;
    for (int i = 0; i < n; i++)
    {

    }
    return 0;
}