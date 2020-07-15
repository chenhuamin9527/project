#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
    int t;
    while (b)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    int num = gcd(a[2], a[0]); //寻找最大公约数，约分
    cout << a[0]/num << "/" << a[2]/num;
    return 0;
}