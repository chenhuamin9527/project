#include <bits/stdc++.h>
using namespace std;
int x_b, y_b;
int x_m, y_m;
bool s[50][50];
long long f[50][50];
const int fx[] = {0, -2, -1, 1, 2, 2, 1, -1, -2};
const int fy[] = {0, 1, 2, 2, 1, -1, -2, -2, -1};
int main()
{
    cin >> x_b >> y_b >> x_m >> y_m;
    x_b += 2; y_b += 2; x_m += 2; y_m += 2; //防止溺出
    s[x_m][y_m] = 1;
    f[2][2] = 1;
    for(int i = 1 ; i <= 8; i++)
    {
        if(x_m + fx[i] >= 0 && y_m + fy[i] >= 0)
        {
            s[x_m + fx[i]][y_m + fy[i]] = 1;
        }
    }
    for (int i = 2; i <= x_b; i++)
    {
        for (int j = 2; j <= y_b; j++)
        {
            if(s[i][j]) continue;
            f[i][j] = max(f[i][j], f[i][j-1] + f[i-1][j]);
            // cout << "f[" << i-2 << "]" << "[" << j-2 << "] = "<< f[i][j] << " ";
        }
        // cout << endl;
    }
    cout << f[x_b][y_b];
    return 0;
}