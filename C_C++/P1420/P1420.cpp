#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int count = 1;
    int max_count = 1;
    int a[10000] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if (a[i+1] - a[i] == 1)
            count++;
        else if (a[i+1] - a[i]!=1)
        {
            if (count > max_count)
                max_count = count;
            count = 1;
        }
    }
    if (count > max_count)
        max_count = count;
    cout << max_count << endl;
    return 0;
}