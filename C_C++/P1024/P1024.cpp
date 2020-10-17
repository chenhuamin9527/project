#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
double a, b, c, d; 
double left = -100, right = 100;
double mi = 0.00001;
int s = 0;
double cal(double x)
{
    return a * x * x * x+ b * x * x + c * x + d;
}

int main()
{
    cin >> a >> b >> c >> d;
    double l ,r, m;
    double x1, x2;
    for (int i = -100; i < 100; i++)
    {
        l = i;
        r = i + 1;
        x1 = cal(l);
        x2 = cal(r);
        if(!x1)
        {
            printf("%.2lf ",l);
            s++;
        }
        if(x1*x2<0)
        {
            while(r-l>=mi)                     //二分控制精度。
            {
                m=(l+r)/2;  //middle
                if(cal(m)*cal(r)<=0) 
                   l=m; 
                else 
                   r=m;   //计算中点处函数值缩小区间。
            }
            printf("%.2lf ",r); 
            //输出右端点。
            s++;
        }
        if (s==3) 
            break;             
            //找到三个就退出大概会省一点时间
    }
    return 0;
}