#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
//52*(7x+21k) = n 关键表达式
//化简得：364x+1092k = n
int main()
{
    int n;
    int x, k;
    cin >> n;
    for (k = 1; k <= 100; k++)
    {
        for (x = 1; x <= 100; x++)
        {
            if(364*x+1092*k == n)
            {
                cout << x << endl;
                cout << k << endl;
                return 0;
            }
        }
    }
    return 0;
}