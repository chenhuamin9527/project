#include <iostream>
#include <algorithm>
using namespace std;
int num[10] = {0};
void count(int a)
{
    while(a)
    {
        num[a%10]++;
        a/=10;
    }
}
int main()
{
    int m,n;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        count(i);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << num[i];
        if(i != 9)
            cout << " ";
    }
    return 0;
}