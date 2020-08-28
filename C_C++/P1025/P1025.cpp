#include <iostream>
using namespace std;
int n, k, cnt;
int f[205][10];
int main()
{
    cin >> n >> k;
    for (int i = 0; i <= n; i++)
    {
        f[i][0] = 1;
        f[i][1] = 1;
    }
    for (int x=2;x<=k;x++) 
    {
        f[1][x]=0;
        f[0][x]=0;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int l = 2; l <= k; l++)
        {
            if(i > l)
            {
                f[i][l] = f[i-1][l-1] + f[i-l][l];  //核心状态转移方程，利用抽屉原理
                                                    //有1的时候就相当于有一个抽屉已经确定了并且那个抽屉里就是1，所以这个时候分法就等于把i-1分在x-1（抽屉苹果都被占了一个）的分法；
                                                    //没1的时候和挡板法（解组合题的一种方法，可以了解一下emmmmmm）的限定情况类似，因为没有一个抽屉是1，所以可以往每个抽屉里的都先放上一个1
                                                    //，总方法数就相当于把剩下的数（i-x）分到x个抽屉里，所以就得到了这样的状态转移方程。
            }
            else
            {
                f[i][l] = f[i-1][l-1];
            }
            
        }
    }
    cout << f[n][k];
    return 0;
}