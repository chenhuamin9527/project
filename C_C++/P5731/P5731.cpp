#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int she[10][10];
int main()
{
    int n;
    int i = 0, j = 0;
    int a = 1;
    she[0][0] = 1;
    cin >> n;
    while(a < n * n)
    {
        while(j+1<n && !she[i][j+1]) she[i][++j] = ++a;
        while(i+1<n && !she[i+1][j]) she[++i][j] = ++a;
        while(j-1>=0 && !she[i][j-1]) she[i][--j] = ++a;
        while(i-1>=0 && !she[i-1][j]) she[--i][j] = ++a;
    }
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < n; l++)
        {
            cout << setw(3) << she[k][l];
        }
        cout << endl;
    }
    return 0;
}