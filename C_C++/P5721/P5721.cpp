#include <iostream>
using namespace std;
void out(int num)
{
    if (num < 10)
        cout << "0" << num;
    else
        cout << num;
}
int main()
{
    int n;
    int d = 1;
    cin >> n;
    while (n)
    {
        for (int i = 0; i < n; i++)
        {
            out(d);
            d++;
        }
        cout << endl;
        n--;
    }
    return 0;
}