#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string n;
    bool flag = false;
    cin >> n;
    if (n[0] == '-')
    {
        cout << '-';
        n.erase(0,1);
    }
    for (int i = n.length()-1; i >= 0; i--)
    {
        if (!flag && (n[i] == '0'))
            continue;
        if (n[i]!='0')
            flag = true;
        cout << n[i];
    }
    return 0;
}