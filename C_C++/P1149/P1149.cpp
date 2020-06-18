#include <iostream>
#include <cstdio>
using namespace std;
int n, num[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int count = 0;
int matches(int nu){    //一个用来计算一个数需多少个火柴棒的函数
        int i,k=0;       //K是火柴棒的数量
        for(i = nu;i != 0;i /= 10)
            k+=num[i%10];    //将这个数字每一位的火柴棒的数量都计算出来
        if(nu==0)
            k+=num[0];      //有一种特殊情况：数字为0此时不会执行上述程序，所以加一个
        return k;
}
int main()
{
    cin >> n;
    for (int i = 0;i < 1000;i++)
    {
        for (int j = 0;j < 1000; j++)
        {
            int ans = i + j;
            int tol = matches(i) + matches(j) + matches(ans) + 4;
            if (tol == n)
                count++;
        }
    }
    cout << count << endl;
}