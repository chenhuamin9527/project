#include <iostream>
#include <algorithm>
#define MAX 100010
using namespace std;
int n,m;
int judge(int mid,int num[])        //判断mid是否为所需要的最大值
{
    int tot=0,cnt=0;
    for (int i=0;i<n;i++)
    {
        if (tot + num[i]<=mid)
        tot+=num[i];
        else
        {
            tot=num[i];
            cnt++;
        }
    }
    return cnt>=m;
}
int main()
{
    int num_max=0;
    int lef=0,rig=0,mid=0;      //二分查找所需变量
    int num[MAX]={0};
    cin >> n >> m;      //输入n,m
    for (int i=0;i<n;i++)
    {
        cin >> num[i];
        rig += num[i];          //分段最大的最大可能为全部和
        if (num[i]>=num_max)
        num_max=num[i];         //分段最大的最小可能为最大数
    }
    lef=num_max;
    mid = (lef+rig)/2;
    while (lef<=rig)    //二分查找过程
    {
    if (judge(mid,num))
        lef=mid+1;
    else 
        rig=mid-1;
    mid = (lef+rig)/2;
    }
    cout << lef;
    return 0;
}