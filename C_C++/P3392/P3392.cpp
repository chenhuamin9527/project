#include<iostream>
#include<algorithm>
using namespace std;
int n,m,ans=0x7fffffff,w[51],b[51],r[51];
string s;
int check(char c)
{
    int tot=0;
    for(int i=0;i<m;++i)
        if(s[i]!=c)++tot;   //计算涂色所需改变的块数
    return tot;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;++i)
    {
        cin>>s;
        w[i]=w[i-1]+check('W'); //枚举每一行涂成不同颜色所需的块数
        b[i]=b[i-1]+check('B');
        r[i]=r[i-1]+check('R');
    }
    for(int i=1;i<n-1;++i)  //到n-2行，因为最后一行一定为红色
        for(int j=i+1;j<n;++j)  //从第2行开始，因为第一行一定为白色
            ans=min(ans,w[i]+b[j]-b[i]+r[n]-r[j]);  //国旗颜色为白色、蓝色、红色。所以从第一行到第i行代价为w[i],
    cout<<ans;                                      //第i+1行到j行为b[j]-b[i]，第j行到第n行为r[n]-r[j]
    return 0;
}