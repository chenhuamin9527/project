// 2、编写一个函数模板，它返回两个值中的较大者，要求能正确处理整数、浮点数、字符串三种不同类型的数据。

// 程序命名为Lab11_2.cpp
#include<bits/stdc++.h>
using namespace std;

template<class T>
T com_max(T a, T b)
{
    return a > b ? a : b;
}
int main()
{
    int a1 = 1, a2 = 2;
    double a3 = 2.04, a4 = 45.09;
    string a5 = "abcd";
    string a6 = "awed";
    cout << com_max(a1, a2) << endl;
    cout << com_max(a3, a4) << endl;
    cout << com_max(a5, a6) << endl;
    return 0;
}