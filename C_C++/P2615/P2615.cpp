#include <iostream>
#include <algorithm>
using namespace std;
int hf[45][45] = {0};
int main()
{
    int n;
    int a;
    int k = 2;
    int b_k_r, b_k_c;
    cin >> n;
    a = n * n;
    hf[1][n/2+1] = 1;
    b_k_r = 1, b_k_c = n/2+1;
    while (a--)
    {
        if (b_k_r == 1 && b_k_c != n)
        {
            hf[n][b_k_c+1] = k++;
            b_k_r = n;
            b_k_c = b_k_c+1;
            continue;
        }
        if (b_k_c == n && b_k_r != 1)
        {
            hf[b_k_r-1][1] = k++;
            b_k_r = b_k_r-1;
            b_k_c = 1;
            continue;
        }
        if (b_k_r == 1 && b_k_c == n)
        {
            hf[b_k_r+1][b_k_c] = k++;
            b_k_r = b_k_r+1;
            continue;
        }
        if (b_k_r != 1 && b_k_c != n)
        {
            if(hf[b_k_r-1][b_k_c+1]==0)
            {
                hf[b_k_r-1][b_k_c+1] = k++;
                b_k_r = b_k_r-1;
                b_k_c = b_k_c+1;
                continue;
            }
            else
            {
                hf[b_k_r+1][b_k_c] = k++;
                b_k_r = b_k_r+1;
                continue;
            }
            
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << hf[i][j];
            if (j != n)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}