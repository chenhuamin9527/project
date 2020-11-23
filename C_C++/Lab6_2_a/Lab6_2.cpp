#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int num;
        int cur = 1;
        int a = 1;
        int layer = 0;
        int MyMin = 0;
        int MyMax = 0;
        cin >> num;
        while(num > a)
        {
            a*=2;
            layer++;
        }
        cur = a;
        while(cur!=num)
        {
            a = (int)pow(2, layer-1);
            if(cur > num)
            {
                cur -= a;
                layer--;
                continue;
            }
            if(cur < num)
            {
                cur += a;
                layer--;
                continue;
            }   
        }
        MyMax = cur;
        MyMin = cur;
        while(layer)
        {
            int temp = (int)pow(2, layer-1);
            MyMin -= temp;
            MyMax += temp;
            layer--;
        }
        cout << MyMin<< " " << MyMax;
        
    }
    return 0;
}