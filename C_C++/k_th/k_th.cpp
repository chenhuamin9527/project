#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long n,m;
    cin >> n >> m ;
    long num[n]={0};
    for (int i=0;i<n;i++)
    {
        cin >> num[i]; 
    }
    sort(num,num+n);
    cout << num[m-1] << endl;
    return 0;
}