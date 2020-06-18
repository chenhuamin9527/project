#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
    int s[10]={0};
    int m[10]={0};
    int p[10]={0};
    string pai;
    while (getline(cin,pai))
    {
        int flag = 0;
        int bai=0,fa=0,zhong=0,dong=0,nan=0,xi=0,bei=0;
        for (int i=0;i<pai.length();i++)
        {
            if (isdigit(pai[i]) && isalpha(pai[i+1]))       //判断是什么牌
            {
                if (pai[i+1] == 's'])
                s[pai[i]]++;
                if (pai[i+1] == 'm'])
                m[pai[i]]++;
                if (pai[i+1] == 'p'])
                p[pai[i]]++;
                while()
            }
            if (isalpha(pai[i])&&isalpha(pai[i+1]))
        }
    }
    
    return 0;
}