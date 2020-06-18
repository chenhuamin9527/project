#include <bits/stdc++.h>
using namespace std;
bool is_prime(int x)
{
    for (int i = 2; i <= floor(sqrt(x) + 0.5) ; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

void fun(long num)
{
    for (int i = 2; i <= (num - 2) ; i++)
    {
        if (is_prime(i) && is_prime(num-i))
        {
            cout << i << " + " << num-i << endl;
            break;
        }
    }
}
int main()
{
    long n;
    cin >> n;
    if(n % 2 != 0)
    {
        cout << "error input" << endl;
        return 0;
    }
    fun(n);
    return 0;
}