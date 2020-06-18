#include <bits/stdc++.h>
//sqrt((x_1-x_2)*(x_1-x_2)+(y_1-y_2)*(y_1-y_2))+(h_1-h_2)*(h_1-h_2)。
using namespace std;
int x[1000],y[1000],h[1000];
int main()
{
    int n;
    double f = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i] >> h[i];
    }
    for (int j = 1; j < n; j++)
    {
        f += sqrt((x[0]-x[j]) * (x[0]-x[j]) + (y[0]-y[j]) * (y[0]-y[j]) + (h[0]-h[j]) * (h[0]-h[j]));
    }

    cout<<setiosflags(ios::fixed)<<setprecision(2)<<f<<endl;
    return 0;
}