#include <iostream>
using namespace std;
int a[20][20];
int main()
{
    int n;
    int num = 1;
    int num1 = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i][0] = 1;
        for(int j = 0; j < num; j++)
        {
            a[i+1][j+1] = a[i][j]+a[i][j+1];
        }
        num++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < num1; j++)
        {
            if(a[i][j]!=0)
                cout<< a[i][j];
            if(j!=num1-1)
                cout << " ";
        }
        num1++;
        cout << endl;
    }
    return 0;
}