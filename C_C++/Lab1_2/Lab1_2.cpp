#include <iostream>
using namespace std;
int main()
{
    int i = 1,j = 1;
    for (i = 1;i < 10;i++)
    {
        for (j = 1;j <= i;j++)
        {
            cout << i << 'x' << j << '=' << i * j << ' ';
        }
        cout << endl;
    }
    return 0;
}