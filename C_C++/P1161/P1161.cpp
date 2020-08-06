#include<bits/stdc++.h>
using namespace std;
int a[2000001],n;
int main(){
    double x,y;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		for(double j=1;j<=y;++j){
			if(a[int(j*x)]==0) a[int(j*x)]=1;
			else a[int(j*x)]=0;
		}
	}
	for(int i=1;i<=2000001;i++){
		if(a[i]==1){
			cout<<i;
			break;
		}
	}
	return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false); //cin，cout快读快输，写scanf和printf的就不要加了，会RE
//     int n,t,i,j,ans=0;
//     double a;
//     cin>>n;
//     for(i=1;i<=n;i++)
//     {
//         cin>>a>>t;
//         for(j=1;j<=t;j++)
//             ans^=int(j*a); //重点：位运算，直接异或，这里注意要用int强制把j*a的值转换成整型
//         //一个数异或它本身得到0
//         //因此我们只需要设ans=0 然后把所有的数异或一遍。因为只有一盏灯是开的，
//         //也就是说，其他编号出现的次数都是成对的，异或完都是0，剩下的那一个与0异或得它本身。
//         //因此最后ans就是结果。
//     }
//     cout<<ans<<endl;
//     return 0;
// }