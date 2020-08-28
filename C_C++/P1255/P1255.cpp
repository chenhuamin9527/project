#include <iostream>
using namespace std;
int fib[5001][5001];
int len = 1;
void hp(int n)
{
    for (int i = 1; i <= len; i++)
    {
        fib[n][i] = fib[n-1][i] + fib[n-2][i];
    }
    for(int i = 1; i <= len; i++)             //进位 
        if(fib[n][i]>=10)
        {
            fib[n][i+1]+=fib[n][i]/10;
            fib[n][i]=fib[n][i]%10;
            if(fib[n][len+1])len++;
        }
}
int main()
{
    int n;
    cin >> n;
    fib[1][1] = 1;
    fib[2][1] = 2;
    for(int i = 3; i <= n; i++)
        hp(i);
    for (int i = len; i >= 1; i--)
        cout << fib[n][i];
    return 0;
}