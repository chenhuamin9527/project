#include <iostream>
using namespace std;
int a[1000];
int main()
{
    int n;
    bool fir = true;
    cin >> n;
    if(n == 0)
        cout << 0;
    for (int i = n; i >= 0; i--)
    {
        cin >> a[i];
    }
    for (int i = n; i > 0; i--)
    {
        if(fir == false && a[i] > 0)
        {
            cout << "+";
        }
        if(a[i] == 0)
            continue;
        if(a[i] == 1)
        {
            cout << "x";
            if(i != 1)
                cout << "^" << i;
        }
        if(a[i] == -1)
        {
            cout << "-x";
            if(i != 1)
                cout << "^" << i;
        }
        if(a[i] != 1 && a[i] != -1)
        {
            cout << a[i] << "x";
            if(i != 1)
                cout << "^" << i;
        }
        
        if(fir == true)
        {
            fir = false;
        }
    }
    
    if(a[0]!= 0)
    {
        if(a[0] > 0)
            cout << "+" << a[0];
        else
        {
            cout << a[0];
        }
        
    }
    return 0;
}