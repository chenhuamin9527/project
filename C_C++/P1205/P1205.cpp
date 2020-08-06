#include <iostream>
using namespace std;
int num[100000];
int main()
{
    int m, n;
    int imin = 10000000;
    int t = 0;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        cin >> num[i];
    for (int i = 0; i < n; i++)
    {
        t += num[i];
    }
    for (int i = n; i < m; i++)
    {
        if(t < imin)
            imin = t;
        t -= num[i-n];
        t += num[i];
    }
    cout << imin;
    return 0;
}

