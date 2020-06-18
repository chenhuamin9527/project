//在两个长度相等的排序数组中找到上中位数
#include <bits/stdc++.h>
using namespace std;
int arr1[20] = {0};
int arr2[20] = {0};
int n;
int find(int arr1[], int l1, int r1, int arr2[], int l2, int r2)
{
    int mid1 = (l1 + r1)/2;
    int mid2 = (l2 + r2)/2;
    if (l1 >= r1)
    {
        return min(arr1[l1], arr2[l2]);
    }
    //元素个数为奇数时， 则offset为0， 为偶数则offset为1
    int offset = ((r1 - l1 + 1) & 1) ^ 1;
    if(arr1[mid1] < arr2[mid2])
        return find(arr1, mid1+offset, r1, arr2, l2, mid2);
    else if (arr1[mid1] > arr2[mid2])
        return find(arr1, l1, mid1, arr2, mid2 + offset, r2);
    else
        return arr1[mid1];
}
int main()
{

    int l = 0, r = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    cout << find(arr1, 0, 3, arr2, 0, 3) << endl;
    return 0;
}
