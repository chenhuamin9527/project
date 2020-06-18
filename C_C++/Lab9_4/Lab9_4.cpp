#include <bits/stdc++.h>
using namespace std;
int dig1[10];
int a = 0, b = 0;
bool check(long long n)
{
    for (int j = 2; j < 10; j++)
    {
        long long dou = n * j;
        int dig2[10] = {0};
        while(dou)
        {
            dig2[dou%10]++;
            dou /= 10;
            b++;
        }
        for (int i = 0 ; i < b; i ++)
        {
            if(dig1[i] != dig2[i] || a !=b)
                return false;        
        }
        return true;
    }
}
int main()
{
    long long num;
    cin >> num;
    long long temp = num;
    while(temp)
    {
        dig1[temp%10]++;
        temp /= 10;
        a++;
    }
    
    if (check(num))
        cout << "YES!" << endl;
    else
        cout << "NO!" << endl;
    return 0;
}