// 有一个NxN大小的黑白棋盘，上面每格不是黑色就是白色，有些同色格子连在一起，有些没有。请你找出最大的一片互相连接的同色区域，并计算出大小。
// 例如：用1表示黑子，0表示白子
// 当N=4
// 输入以下内容
// 1 0 1 0 
// 1 1 1 0
// 0 1 0 1
// 0 0 0 1
// 输出结果为6，表示最大连续区域为6
#include <bits/stdc++.h>
using namespace std;
int label = 0;
int lab[20][20] = {0};
int a[20][20] = {0};
int count = 0;

void fun(int n)
{
    memset(lab,-1,sizeof(lab));
    lab[0][0] = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j - 1 >= 0)
            {
                if(a[i][j] == a[i][j-1])
                {
                    if(lab[i][j] == -1)
                    lab[i][j] = lab[i][j-1];
                    else
                    {
                        int t = min(lab[i][j], lab[i][j-1]);
                        lab[i][j] = t;
                        lab[i][j-1] = t;
                    }
                }
                else if (lab[i][j] == -1)
                {
                    label++;
                    lab[i][j] = label;
                }
            }
            if(i - 1 >= 0)
            {
                if(a[i][j] == a[i-1][j])
                {
                    if(lab[i][j] == -1)
                    lab[i][j] = lab[i-1][j];
                    else
                    {
                        int t = min(lab[i][j], lab[i-1][j]);
                        lab[i][j] = t;
                        lab[i-1][j] = t;
                    }
                }
                else if (lab[i][j] == -1)
                {
                    label++;
                    lab[i][j] = label;
                }
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    fun(n);
    int num[50] = {0};
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            num[lab[i][j]]++;
        }
    }
    int imax = 0;
    for (int i = 0; i < 50; i++)
    {
        if(num[i] >= imax)
            imax = num[i];
    }
    cout << imax << endl;
    return 0;
}