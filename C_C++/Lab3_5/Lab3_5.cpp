#include <bits/stdc++.h>
using namespace std;
//遇店记为a，遇花记为b
//逢店加一倍，遇花喝一斗。
//这一路上，他一共遇到店5次，遇到花10次，已知最后一次遇到的是花，他正好把酒喝光了。
char f[15];
void fun(int i, int a, int b, int j)
{
    if (a > 5 || b > 9 || j <= 0)        
        return;
    if (a == 5 && b == 9 && j == 1)
    {
        cout << f << endl;
        return;
    }
    f[i] = 'a';
    fun(i+1, a+1, b, j*2);
    f[i] = 'b';
    fun(i+1, a, b+1, j-1);
}
int main()
{
    fun(0, 0, 0, 2);
    return 0;
}