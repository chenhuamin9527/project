#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string n;
    cin >> n;
    if (n[0] == '-')
    {
        cout << '-';
        for (int i = 1; i < n.length();i++)
            n[i-1] = n[i];
        n.erase(n.length()-1);
    }
    for (int i = n.length()-1; i >= 0; i--)
    {
        if (n[i] != '0' || n[i] != '-')
            cout << n[i];
    }
    return 0;
}