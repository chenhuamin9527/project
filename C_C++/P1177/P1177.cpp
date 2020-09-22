#include <iostream>
#include <vector>
using namespace std;
vector <long> v1;
void QuickSort(long left, long right, vector <long>& arr)
{
    int i = left, j = right, temp, base;
    base = arr[left];
    if(left >= right)
        return;
    while(i <= j)
    {
        while(arr[j] > base && i < j) j--;
        while(arr[i] < base && i < j) i++;
        if(i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    arr[left] = arr[i];
    arr[i] = base;
    QuickSort(left, i-1, arr);
    QuickSort(i, right, arr);

} 
int main()
{
    long n;
    cin >> n;
    for (long i = 0; i < n; i++)
    {
        long temp;
        cin >> temp;
        v1.push_back(temp);
    }
    QuickSort(0, n-1, v1);
    for (long i = 0; i < n; i++)
    {
        cout << v1[i];
        if(i < n-1) cout << " ";
        else cout << endl;
    }
    return 0;
}