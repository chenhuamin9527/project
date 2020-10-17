#include <iostream>
using namespace std;
int a[1010];
int main()
{
    int n;
    int count = 0;
    int x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if(!a[x]) count++;
        a[x]++;
    }
    cout << count << endl;
    for (int i = 0; i < 1001; i++)
    {
        if(a[i])
            cout << i << " ";
    }
    return 0;
}