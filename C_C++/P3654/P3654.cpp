#include <iostream>
#include <algorithm>
using namespace std;
char bas[100][100];
int r, c, k;
int ans = 0;
void dfs(int x, int y, int i, int step) //i控制遍历方向，1为向右，0为向下
{
    if(step > k)
    {
        ans++;
        return ;
    }
    if(bas[x][y]=='#'||x<0||y<0||x>=r||y>=c)    //超越边界或越到障碍return
        return ;
    if(i == 1)
        dfs(x+1,y,i,step+1);
    else
        dfs(x,y+1,i,step+1);
}


int main()
{
    cin >> r >> c >> k;
    for(int i = 0; i < r; i++)
    {
        for (int j = 0; j < c;j++)
        {
            cin >> bas[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(bas[i][j]=='.')
                for (int l = 0; l < 2; l++)
                    dfs(i,j,l,1);
        }
    }
    if(k == 1)
        ans/=2;
    cout << ans;
    return 0;
}