#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int a[10000] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    cout << a[n-1] - a[0] << endl;
    return 0;
}