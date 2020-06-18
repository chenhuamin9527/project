#include <iostream>
using namespace std;

int a[10] = {0};
void count(int n,int num[])
{
    for (int i = 0;i < n;i++)
    {
        while(num[i]!=0)
        {
            a[num[i] % 10]++;
            num[i] /= 10;
        }
    }
}
int main()
{
    int n,num[50] = {0};
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        cin >> num[i];
    }
    count(n, num);
    for (int i = 0;i < 10;i++)
    {
        if (a[i])
        {
            while(a[i]--)
            {
                cout << i;
            }
            cout << " ";
        }
    }
    return 0;
}