// 小明想知道，长度为 m，每个数都是 1 到 n 之间的正整数的摆动序列一共有多少个。
#include <bits/stdc++.h>
using namespace std;
int a[1000] = {0};
int main()
{
    int m, n;
    int ans = 1;
    cin >> m >> n;
    
    for (int i = 0; i < m; i++)
    {
        if(i % 2 == 0)
            a[i] = 2;
        if(i % 2 == 1)
            a[i] = 1;
    }
    
    int move = 0;
    int flag = 1;
    if (m % 2 == 1)
    {
        while(a[m-1] != n && a[m-2] != n-1)
        {
            if (flag)
            {
                if(a[move] <= n)
                {
                    ans += n - a[move];
                }
                a[move]++;
            }
            else
            {
                if(a[move] <= n - 1)
                {
                    ans += n - a[move];
                }
            }
            if (move + 2 <= m - 1)  //判断是否越界
                move += 2;
            else
            {
                move = 1;
                flag = 0;
            }
        }    
    }
    else
        {
            while(a[m-1] != n-1 && a[m-2] != n)
            {
                    if (!flag)
                {
                    if(a[move] <= n)
                    {
                        ans += n - a[move];
                    }
                    a[move]++;
                }
                else
                {
                    if(a[move] <= n - 1)
                    {
                        ans += n - a[move];
                    }
                }
                if (move + 2 <= m - 1)  //判断是否越界
                    move += 2;
                else
                {
                    move = 1;
                    flag = 1;
                }
            }
        }
        cout << ans << endl;
    for (int i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}