#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n;
    string str;
    cin >> n;
    cin >> str;
    for (int i=0;i<str.length();i++)
    {
        int t = n%24;
        if (str[i]+t>='a' && str[i]+t<='z')
            str[i] += t;
        else
            str[i] += t-24;
    }
    cout << str << endl;
    return 0;
}