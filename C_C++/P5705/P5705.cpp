#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    cin >> num;
    string res = num;
    for (int i = 0, j = num.length()-1; i < num.length(), j >= 0; i++, j--)
    {
        res[i] = num[j];
    }
    cout << res;
    return 0;
}