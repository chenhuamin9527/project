#include <iostream>
using namespace std;
int trans(int x)
{
    int ans = 0, b = 1;
    while(x != 0)
    {
        ans += (x % 2) * b;
        b *= 10;
        x /= 2;
    }
    return ans;
}
int main()
{
    int x;
    cin >> x;
    cout << trans(x) << endl;
    return 0;
}
