#include <iostream>
using namespace std;
int count = 0;
int getwei(int n)
{
    int wei = 0;
    while(n)
    {
        n /= 10;
        wei++;
    }
    return wei;
}
int main()
{
    int l = 0, r = 0;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        int temp = i;
        for (int j = 0; j < getwei(i); j++)
        {
            if(temp%10 == l)
                count++;
            temp/=10;
        }
    }
    cout << count << endl;
    return 0;
}