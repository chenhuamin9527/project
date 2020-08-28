#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int i,a[10001][4],n,x,y,f=-1;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];    //求出地毯范围
        a[i][2]+=a[i][0];
        a[i][3]+=a[i][1];
    }
    cin>>x>>y;
    for(i=n;i>=1;i--)       //逆序倒退，符合条件的直接输出
    {
        if(a[i][0]<=x&&a[i][1]<=y&&a[i][2]>=x&&a[i][3]>=y)  //判断点是否在地毯内
        {
            cout<<i;
            f=1;
            break;
        }
    }
    if(f==-1)
    {
        cout<<f;
    }
    return 0;
}