#include <bits/stdc++.h>
using namespace std;
char password[2][26];   //简化为只转换小写字母

string encrypt(string str)  //加密
{
    for (int i = 0; i < str.size(); i++)
        str[i] = password[1][str[i] - 'a'];
    for (int i = 0; i < str.size(); i++)
        cout << str[i];
    cout << endl;
    return str;
}
int main()
{
    char cha1 = 'a';
    char cha2 = 'd';
    char cha3 = 'a';
    for (int i = 0; i < 26; i++)
        password[0][i] = cha1++;
    for (int i = 0; i < 26; i++)
    {
        if(cha2 <= 'z')
            password[1][i] = cha2++;
        else
            password[1][i] = cha3++;
    }
    string s;
    cin >> s;    
    string s1 = encrypt(s);

    return 0;
}