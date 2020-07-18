#include <iostream>
#include <algorithm>
using namespace std;
bool isLeap(int num)
{
    bool flag = true;
    for (int i = 2; i * i <= num; i++)
    {
        if (num%i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
int main()
{
    int n, count = 0, sum = 0;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (isLeap(i))
        {
            sum += i;
            if (sum <= n)
            {
                cout << i << endl;
                count++;
            }
        }
    }
    cout << count;
    return 0;
}