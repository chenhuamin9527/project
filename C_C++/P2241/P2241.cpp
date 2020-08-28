#include <iostream>
using namespace std;
int main()
{
    int m, n;
    long long rec = 0, sqr = 0;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {                                           //例边长为m和n的棋盘，那长为2宽为1的矩形有(m-1)*n个，如此类推
            if(i == j)  sqr += (m-i) * (n-j);       //如果边长相等为正方形
            else rec += (m-i) * (n-j);
        }
    }
    cout << sqr << " " << rec << endl;
    return 0;
}