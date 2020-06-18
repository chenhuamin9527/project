#include <iostream>
#include <algorithm>
#include <set>

using namespace std;
int arr[100000][2]={0};
int main()
{
    int n,m;
    cin >> n >> m;
    arr[0][0]=n;
    arr[0][1]=m;
    for (int i=1;i<m+1;i++)   //储存数据
    {
        cin >> n >> m;
        arr[i][0]=n;
        arr[i][1]=m;
    }

    for (int i=0;i<m+1;i++)
    {
        if ()
    }
    return 0;
}