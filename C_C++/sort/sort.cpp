#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int nu[250] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        nu[i] = num;        
    }
    sort(nu, nu+n);
    for (int i = 0; i < n; i++)
    {
        cout << nu[i] <<" ";
    }
    return 0;
}