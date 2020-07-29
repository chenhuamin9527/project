#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    int num = 1;
    int num1 = 1;
    int num2 = 1;
    cin >> n;
    if (n==0)
        return 0;
    for (int i = 0; i < n; i++) //输出矩形
    {
        for (int j = 0; j < n; j++)
        {
            cout.fill('0'); //输出格式调整
            cout.width(2);
            cout << num++;
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        int t = 2 * n - 2 * num1;
        num1++;
        while(t--)
            cout << " ";
        for (int j = n-i-1; j < n; j++)
        {
            cout.fill('0'); //输出格式调整
            cout.width(2);
            cout << num2++;
        }
        cout << endl;
    }
    return 0;
}