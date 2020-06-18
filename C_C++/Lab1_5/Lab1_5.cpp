#include <iostream>
using namespace std;
int judge_0(int n)      //判断三位数是否有0
{
    int a, b ,c;
    a = n % 10;
    b = (n / 10) % 10;
    c = n / 100;
    if (!a || !b || !c)
    {
        return 1;
    }
    return 0;
}
int judge(int n1, int n2, int n3, int n4)   //判断是否有重复数字
{
    int num[10] = {0};
    num[n1%10]++;
    num[n1/10]++;
    num[n2%10]++;
    num[n2/10]++;
    num[n3%10]++;
    num[n3/10]++;
    num[n4%10]++;
    num[(n4/10)%10]++;
    num[n4/100]++;
    for (int i = 1;i < 10;i++)
    {
        if (num[i] >= 2)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    double a1,a2,b1,b2;     //a1 * a2 = b1 * b2,b2为三位数
    int i,j;
    double k;
    for (i = 50;i <= 99;i++)    //假设b1<a2，所以a2从50开始取值
    {
        if (i % 10 == 0 || i % 11 == 0)
            continue;
        for (j = 10;j <= 49;j++)
        {
            if (j % 10 == 0 || j % 11 == 0)
                continue;
            a2 = i;
            b1 = j;
            for (k = 1.5;k <= 9.5;k += 0.5)
            {
                a1 = b1 * k;
                if ((int)a1 % 10 == 0 || (a1-(int)a1) != 0)
                    continue;
                b2 = a2 * k;
                if (judge_0(b2) || (b2-(int)b2) != 0)
                    continue;
                if (a1 > 99 || b2 > 999)
                    continue;
                if (judge(a1,a2,b1,b2))
                    continue;
                cout << a1 << "x" << a2 << '=' << b1 << 'x' << b2 << endl;
            }
        }
    }
    return 0;
}