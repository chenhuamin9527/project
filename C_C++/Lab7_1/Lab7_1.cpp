#include <bits/stdc++.h>
using namespace std;
inline void test(const char *title, bool value)
{
    cout << title << " returns " << (value?"true" : "false") << endl;
}

int main()
{
    string s1 = "DEF";
    cout << "s1 is " << s1 << endl;

    string s2;
    cout << "Please enter s2: ";
    cin >> s2;
    cout << "length of s2: " << s2.length() << endl;

    //赋值运算符
    cout << "please enter s1 again" << endl;
    string t;
    cin >> t;
    s1 = t;

    if(s1==s2)
        cout << "s1 == s2" << endl;
    else
        cout << "s1 != s2" << endl;

    cout << "enter s1's index" << endl;
    int num;
    cin >> num;
    if(num < s2.length())
        cout << s2[num] <<endl;
    else
        cout << "error" << endl;

    //比较运算符的测试
    test("s1<=\"ABC\"", s1<="ABC");
    test("\"DEF\"<=s1", "DEF"<=s1);

    //连接运算符的测试
    s2+=s1;
    cout << "s2 = s2 + s1: "<<s2 << endl;
    cout << "length of s2: " << s2.length() << endl;
    cout << "s1.maxsize = " << s1.max_size() << endl;
    string subs1 = s1.substr(1, 2);
    cout << subs1 << endl;
    s1.insert(0, "C");
    cout << s1 << endl;
    s1.clear();
    cout << s1 << endl;
    return 0;
}