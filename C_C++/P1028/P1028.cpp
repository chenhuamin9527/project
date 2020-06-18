#include <iostream>
#include <algorithm>
using namespace std;
int f[1010];
int main()
{
    f[1] = 1;
    int n;
    cin >> n;
    for (int i = 2;i <= n;i++)
    {
        if(i % 2 == 0)
        {
            f[i]=f[i-1]+f[i/2];
        }
        else
        {
            f[i]=f[i-1];
        }
    }
    cout << f[n] << endl;
}