#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void MergeSort(vector <int> &v1,int lef,int rig);
void Merge(vector <int> &v1,int lef,int mid,int rig);
int main()
{
    int n,m;
    cin >> n >> m;
    vector <int> v1;
    int lef=0,rig=n-1;
    for (int i=0;i<n;i++)
    {
        int t;
        cin >> t;
        v1.push_back(t);
    }
    MergeSort(v1,lef,rig);
    cout << v1[m-1];
    return 0;
}
void MergeSort(vector <int> &v1,int lef,int rig)
{
    int mid = (lef+rig)/2;
    if(v1.size()<2)
    return;
    if (lef<rig)
    {
        MergeSort(v1,lef,mid);
        MergeSort(v1,mid+1,rig);
        Merge(v1,lef,mid,rig);
    }
}
void Merge(vector <int> &v1,int lef,int mid,int rig)
{
    int *help = new int(rig-lef+1);
    int p1=lef,p2=mid+1,i=0;
    while (p1 <=mid && p2<=rig)
    {
        help[i++] = v1[p1]>v1[p2] ? v1[p2++] : v1[p1++];
    }
    while (p1<=mid)
    help[i++] = v1[p1++];
    while (p2<=rig)
    help[i++] = v1[p2++];
    for (i=0;i<rig-lef+1;i++)
    {
        v1[lef+i]=help[i];
    }
}