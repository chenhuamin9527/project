#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int a[21][21][21] = {0};
int main()
{
    int w, x, h;
    int n;
    int i, j, k;
    int ans = 0;
    cin >> w >> x >> h;
    cin >> n;
    while(n--)
	{
		int x1,y1,z1,x2,y2,z2;
		cin>>x1>>y1>>z1>>x2>>y2>>z2;
		for(int i = x1;i <= x2;i++)
			for(int j = y1;j <= y2;j++)
				for(int k = z1;k <= z2;k++) 
                    a[i][j][k] = 1;//该范围的方块标记为1，表示已被切除 
	}
    for(i = 1;i <= w;i++)
		for(j = 1;j <= x;j++)
			for(k = 1;k <= h;k++)
				if(a[i][j][k] == 0) 
                    ans++;//判断该方块是否还在 
    cout << ans;
    return 0;
}
