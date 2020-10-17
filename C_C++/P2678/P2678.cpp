#include <iostream>
using namespace std;
int a[100000];
int main()
{
    int l,n,m,lef,rig,mid,now,i,a[50005],count,ans;
    cin >> l >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    lef = 0, rig = l;
    while(lef <= rig)
    {
        mid = (lef+rig)/2;
        now = 0;
        count = 0;
        for (int i = 1; i <= n; i++)
        {
            if(a[i]-a[now]<mid)
            {
                count++;
            }
            else
            {
                now = i;
            }
        }
        if(count <= m)
        {
            ans = mid;
            lef = mid+1;
        }
        else
        {
            rig = mid - 1;
        }
    }
    cout << ans;
    return 0;
}
