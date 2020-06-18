// 3、建立一个简单的字符对换加密程序，实现其加密及解密过程。
// 要求如下:
// a、使用N行2列的二维数组存储一个字符对换表
// b、读取键盘输入的一段明文
// c、调用自己的加密函数进行加密，输出密文
// d、调用自己的解密函数对密文进行解密，输出结果应和明文一致。
#include <bits/stdc++.h>
using namespace std;
char password[2][26];   //简化为只转换小写字母
string decrypt(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if(str[i] == password[1][j])
                str[i] = password[0][j];
        }
    }
    for (int i = 0; i < str.size(); i++)
        cout << str[i];
    cout << endl;
    return str;
}
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
    cout << "input string " << endl;
    cin >> s;    
    string s1 = encrypt(s);
    string s2 = decrypt(s1);
    return 0;
}