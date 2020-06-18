// 题目描述
// 多尔的家人正在庆祝多尔的生日派对。他们爱多尔，所以他们计划让他的生日蛋糕变得不可思议的！
// 蛋糕是一个由n×n的等边正方形组成的形状，长度为1。每个方块要么是空的，要么是由一个巧克力组成的。他们买了蛋糕，便开始把巧克力放在蛋糕上。“家庭之门”的幸福值等于蛋糕中同一行或同一列中装有巧克力的一对细胞的数量。多尔的家人想知道他们的幸福程度是多少？


// 输入格式：
// 第一行输入一个整数n（1<=n<=100)，表示蛋糕边的长度。然后输入n行数，每行有n个字符。空的细胞用'.'表示，而含有巧克力的细胞用“C”表示。

// 输出格式：
// 输出“家庭之门”幸福感的价值，即同一行或同一列的一对巧克力片的数量。
#include <bits/stdc++.h>
using namespace std;
char cha[105][105]; //记录数据
int vis[105][105];  //标记已探访
int i,j;    //循环的行与列
long long num;  //总数
int n;
bool check(int x, int y)
{
    if(x == i && y <n)
        return true;
    if(y == j && x <n)
        return true;
    return false;
}

void dfs(int x, int y)
{
    if(check(x, y))
    {
        if(!vis[x][y] && cha[x][y] == 'C')
        num++;
        dfs(x, y+1);
        dfs(x+1, y);
    }
}
int main()
{
    cin >> n;
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < n; l++)
        {
            cin >> cha[k][l];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j ++)
        {
            if(cha[i][j] == 'C')
            {
                vis[i][j] = 1;
                dfs(i, j);
                vis[i][j] = 0;
            }
        }
    }
    cout << num;
    return 0;
}