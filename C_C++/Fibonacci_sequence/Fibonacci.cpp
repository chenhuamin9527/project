#include <bits/stdc++.h>
using namespace std;
int n[1000000] = {0};
void ad(int a)
{
    n[1] = 1;
    n[2] = 1;
    for (int i = 3; i <= a; i++)
    {
        n[i] = (n[i-1] + n[i-2]) % 10007;
    }
}
int main()
{
    int num;
    cin >> num;
    ad(num);
    cout << n[num] << endl;
    return 0;
}