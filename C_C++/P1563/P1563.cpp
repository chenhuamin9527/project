#include <iostream>
using namespace std;
string name[100000];
int dir[100000];
int mov[100000];
int main()
{
    int n, m;
    int temp_index = 0;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
    {
        cin >> dir[i];
        cin >> name[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "name[" << i << "] = " << name[i] << endl;
    // }
    string ans = name[0];
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> mov[i] >> temp;
        if(mov[i] == 0 && dir[temp_index] == 0)
        {
            temp_index = (temp_index+n-temp)%n;
            ans = name[temp_index];
        }
        else if(mov[i] == 0 && dir[temp_index] == 1)
        {
            temp_index = (temp_index+temp)%n;
            ans = name[temp_index];
        }
        else if(mov[i] == 1 && dir[temp_index] == 0)    
        {
            temp_index = (temp_index+temp)%n;
            ans = name[temp_index];
        }
        else if(mov[i] == 1 && dir[temp_index] == 1)
        {
            temp_index = (temp_index+n-temp)%n;
            ans = name[temp_index];
        }
    }
    cout << ans;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// struct node 
// {
//     int head;
//     string name;
// }a[100005];
// int n,m,x,y;
// int main()
// {
//     cin>>n>>m;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i].head>>a[i].name;
//     }
//     int now=0;
//     for(int i=1;i<=m;i++)
//     {
//         cin>>x>>y;
//         if(a[now].head==0&&x==0)now=(now+n-y)%n;
//         else if(a[now].head==0&&x==1)now=(now+y)%n;
//         else if(a[now].head==1&&x==0)now=(now+y)%n;
//         else if(a[now].head==1&&x==1)now=(now+n-y)%n;
//     }
//     cout<<a[now].name<<endl;
//     return 0;
// }