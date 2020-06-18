#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int num[10]={0};
void cnt(int );
int main()
{
    int a,b,c;
    for (a=111;a<333;a++)
    {
        int flag=0;
        memset(num,0,sizeof(num));
        b=a*2;
        c=a*3;
        if (b>1000 || c>1000)
        continue;
        cnt(a);
        cnt(b);
        cnt(c);
        for (int i=1;i<10;i++)
        {
            if (num[i]!=1)
            {
                flag=0;
                break;
            }
            else
                flag=1;
        }
        if (flag)
        //cout << "test" << endl;
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}
void cnt(int dig)
{
    while (dig>0)
    {
        num[dig%10]++;
        dig/=10;
    }
}