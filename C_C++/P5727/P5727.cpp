#include <iostream>
#include <algorithm>
using namespace std;
int num[10000] = {0};
int main()
{
    int n;
    int index = 0;
    cin >> n;
    num[0] = n;
    while(num[index] != 1)
    {
        if(num[index]%2 == 0)
            num[index+1] = num[index]/2;
        else
            num[index+1] = num[index]*3+1;
        index++;
    }
    for (int i = index; i > 0; i--)
    {
        cout << num[i] << " ";
    }
    cout << num[0];
    return 0;
}