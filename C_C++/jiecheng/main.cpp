#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    int i,j;
    int num[3000] = {0};
    cin >> n;
    num[0] = 1;
    for (i=2;i<=n;i++)
    {
        int c = 0;
        for (j=0;j<3000;j++)
        {
            int s = num[j] * i + c;
            num[j] = s%10;
            c = s /10; 
        }
    }
    for (j=3000-1;j>=0;j--) if(num[j]) break;
    for (i=j;i>=0;i--) cout << num[i];
    cout << endl;
    return 0;
}