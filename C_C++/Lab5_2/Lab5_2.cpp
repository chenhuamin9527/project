#include<bits/stdc++.h>
using namespace std;
int a[1000][1000] = {0};
int main()
{
    int n, m;
    int r, c;
    int i = 0, j = 0;
    a[i][j] = 1;
    int num = 1;
    cin >> n >> m >> r >> c;
    while(n * m != num)
    {
        while(j + 1 < n && !a[i][j+1])//右方向
        {
            a[i][++j] = ++num;
        }
        while(i + 1 < n && !a[i+1][j])
        {
            a[++i][j] = ++num;
        }
        while(j - 1 >=0 && !a[i][j-1])
        {
            a[i][--j] = ++num;
        }
        while(i - 1 >=0 && !a[i-1][j])
        {
            a[--i][j] = ++num;
        }
    }
    for(int k = 0; k < n; k++)
    {
        for (int l = 0; l < n; l++)
        {
            cout << a[k][l] << "  ";
        }
        cout << endl;
    }
    cout << a[r-1][c-1] << endl;
    return 0;
}

