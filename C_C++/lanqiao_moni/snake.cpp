#include <bits/stdc++.h>
using namespace std;
int a[1000][1000] = {0};
int main()
{
    int n, m;
    int r, c;
    int i = 0, j = 0;
    a[i][j] = 1;
    long num = 1;
    cin >> n >> m;
    cin >> r >> c;
    while(n * m != num)
    {
        while(j + 1 < m && !a[i][j+1])//右方向
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
        while(i - 1 >= 0 && !a[i-1][j])
        {
            a[--i][j] = ++num;
        }
    }

    cout << a[r-1][c-1] << endl;
    return 0;
}
