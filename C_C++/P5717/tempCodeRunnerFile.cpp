#include <bits/stdc++.h>
using namespace std;
const double EXP = 0.0000001;
string judge1(double a, double b, double c)
{
    if (a+b<=c && a-b>=c)
        return "Not triangle";
    return "";
}

string judge2(double a, double b, double c)
{
    int gou = fabs(a*a + b*b - c*c);
    if (gou < EXP)
        return "Right triangle";
    else if(gou > 0.1)
        return "Acute triangle";
    else 
        return "Obtuse triangle";
    return "";
}

string judge3(double a, double b, double c)
{
    if(a==b && b==c)
        return "Equilateral triangle";
    else if (a==b || a==c || b==c)
        return "Isosceles triangle";
    return "";
}

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    string str1 = judge1(a, b, c);    
    if (str1 != "Not triangle")
    {
        string str2 = judge2(a, b, c);
        string str3 = judge3(a, b, c);
        if (str2!="")
        cout << str2 << endl;
        if (str3!="")
        cout << str3 << endl;
    }
    return 0;
}