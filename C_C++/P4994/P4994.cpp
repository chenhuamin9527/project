#include <iostream>
using namespace std;
int f[5];
int m;
int main()
{
    cin >> m;
    f[0] = 0;       //f[0]记录当前斐波那契数列的值
    f[1] = 1;       //f[1]记录下一个的值
    f[2] = 1;       //f[2]用作更新用的值（辅助变量）
    for (int i = 1; i; i++)
    {
        f[2] = f[0];        //滚动更新
        f[0] = f[1];
        f[1] = (f[2] + f[1]) % m;
        if(f[0] == 0 && f[1] == 1)
        {
            cout << i;
            break;
        }
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// long long dp1[1000000];
// int m;
// int main()
// {
//     cin >> m;
//     dp1[0] = 0;
//     dp1[1] = 1;
//     for (int i = 2; i < 1000000; i++)
//     {
//         dp1[i] = dp1[i-1] + dp1[i-2];
//         dp1[i] %= m;
//         if(dp1[i-1] == 0 && dp1[i] == 1)
//         {
//             cout << i-1;
//             break;
//         }
//     }
    
//     return 0;
// }