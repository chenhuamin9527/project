#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;
string inter(string );
string point(string );
string fraction(string );
string mod(string );
int main()
{
    string num,result;
    char ch = '\0';
    cin >> num;
    for (unsigned int i=0;i<num.length();i++)
    {
        if (!isdigit(num[i]))
            ch = num[i];
    }
    if (ch == '\0')
        result = inter(num);
    if (ch == '.')
        result = point(num);
    if (ch == '/')
        result = fraction(num);
    if (ch == '%')
        result = mod(num);
    cout << result << endl;
    return 0;
}
string inter(string num)
{
    unsigned int n = num.length(); 
    string ans;
    for(unsigned int i=0;i<n;i++)
    {
        ans += num[n-i-1];
    }
    return ans;
}
string point(string num)
{
    int n = num.length();
    string ans;
    int i = 0;
    int posion = 0,j = 0;
    while(num[posion]!= '.')     //寻找小数点位置
    {
        posion++;
    }
    for (i=0;;i++)       //整数部分的反转
    {
        if ((posion-1-i)<0)
            break;
        if (num[posion-i-1]!='0')
        ans += num[posion-i-1];
    }
    ans += '.';
    for (i=1;(n-i)>posion;i++)    //小数部分的反转
    {
        ans += num[n-i];
    }
    int flag = 1;
    for (int k = ans.length()-1;k>=0;k--)  //小数点最后的0的处理
    {
        if (ans[k]!='0')
            flag = 0;
        if (flag && ans[k] == '0')
            ans.erase(k);
    }
    return ans;
}
string fraction(string num)
{
    unsigned int n = num.length();
    string ans;
    int posion = 0,i=0,j=0;
    while(num[posion]!='/')     //寻找分号位置
    {
        posion++;
    }
    for (i=0;num[i]!='/';i++)       //分子部分的反转
    {
        if (num[posion-i-1]!='0')
        ans += num[posion-i-1];
    }
    ans += '/';
    for (i=1;num[n-i]!='/';i++)    //分母部分的反转
    {
        ans += num[n-i];
    }
    int flag = 1;
    for (int k = ans.length()-1;k>=0;k--)
    {
        if (ans[k]!='0')
            flag = 0;
        if (flag && ans[k] == '0')
            ans.erase(k);
    }
    return ans;
}
string mod(string num)
{
    int n = num.length();
    string ans;
    int posion = 0,i=0,j=0;
    while(num[posion]!='%')     //寻找%号位置
    {
        posion++;
    }
    for (i=1;;i++)
    {
        if ((n-i-1)<0)
            break;
        if (num[n-i-1]!='0')
            ans += num[n-i-1];
    }
    ans += '%';
    return ans;
}