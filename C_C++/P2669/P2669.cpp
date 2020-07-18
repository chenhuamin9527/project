#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int k = 0, s = 0;
    int d = 1;
    cin >> k;
    while (k)
    {
        int t = d;
        while(t--)
        {
            s += d;
            k--;
            if(!k)
                break;
        }
        d++;
    }
    cout << s;
    return 0;
}