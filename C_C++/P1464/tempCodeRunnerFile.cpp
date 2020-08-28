#include <iostream>
#include <cstdio>
using namespace std;

long long fun[25][25][25];
long long w(long long a,long long b,long long c)
{
    if(a<=0||b<=0||c<=0) return 1;
    else if(fun[a][b][c]!=0) return fun[a][b][c];   //关键， 记忆化搜索，将表中已经求过的值返回
    else if(a>20||b>20||c>20) fun[a][b][c]=w(20,20,20);
    else if(a<b&&b<c) fun[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
    else fun[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
    return fun[a][b][c];
}
int main()
{
    long long a, b, c;
    while(cin >> a >> b >> c)
    {
        if (a == -1 && b == -1 && c == -1)
            break;
        if(a>20) a=21;
        if(b>20) b=21;
        if(c>20) c=21;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << endl;
    }
    return 0;
}