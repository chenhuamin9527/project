#include <bits/stdc++.h>
using namespace std;
const double EXP = 0.0000001;
int main()
{
    int m, n, s;
    cin >> m >> n >> s;
    if (n==0)
    {
        cout << 0;
    }
    else
    {
        if (s/n > m)
            cout << 0;
        else 
        {
            double min = fabs((float)s/n - s/n);
            if (min <= EXP)
                cout << m - (s/n) << endl;
            else
                cout << m - (int)((float)s/n) -1 << endl;
        }
    }
    return 0;
}