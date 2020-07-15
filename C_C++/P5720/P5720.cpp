#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long n;
    cin >> n;
    int i = 1;
    while (n > 1)
    {
        n /= 2;
        i++;
    }
    cout << i;
    return 0;
}