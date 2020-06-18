#include <bits/stdc++.h>
using namespace std;
//用于获得并存储大量（100000个）不重复的随机字符串，每个字符串长度为20,由字母或数字构成。main函数中输出随机字符串数组中的前100个。
const int maxn = 1001000;
string str[maxn];
int random[][2] = {{26,65}, {26,97}, {10,48}};

void getRandomString(string * str)
{
    int t;
    srand((unsigned)time(NULL));
    for (int i = 0; i < maxn; i++)
    {
        char crr[21];
        for (int j = 0; j < 20; j++)
        {
            t = rand()%3;
            crr[j] = rand()%random[t][0] + random[t][1];
        }
        crr[20] = '\0';
        str[i] = crr;
    }
}
int main()
{
    getRandomString(str);
    sort(str, str+maxn);

    string s = "ZZZZZZZZZZZZZZZZZZZZ";
    for (int i = 0; i < maxn - 1; i++)
        if(str[i] == str[i+1])
            str[i] = s;
    sort(str, str+maxn);

    if(str[maxn - 1000] == s)
    {
        cout << "数据不足，重新运行";
    }
    else
    {
        for (int i = 0; i < 100; ++i)
        {
            cout << str[i] << endl;
        }
    }
    return 0;
}