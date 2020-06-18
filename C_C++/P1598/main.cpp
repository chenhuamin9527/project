#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>
#include <cctype>
#include <cstdio>
using namespace std;
int main()
{
    int maxn = 0;
    int k = 0;
    int num[26] = {0};
    for (int i=0;i<4;i++)
    {
        string t;
        getline(cin,t);
        for (int j=0;j<t.length();j++)
        {
            if (isalpha(t[j]))
            {
                num[t[j]-'A']++;
            }
        }
    }

    for (k=0;k<26;k++)      //找出字母出现次数最多
    {
        maxn = max(maxn,num[k]);
    }
    int time[maxn+1] = {0};
    for (int i=0;i<26;i++)
    {
        int t = num[i];
        while (t)
        {
            time[t]++;
            t--;            
        }
    }
    for (int i = maxn;i>0;i--)
    {
        for (int j = 0;j < 26;j++)
        {
            int flag = 1;
            if (num[j]>=i)
            {
                time[i]--;
                if (time[i]==0)
                {
                    printf("*");
                    printf("\n");
                }
                else
                {
                    printf("* ");
                    flag = 0;
                }
            }
            if (time[i]!=0 && flag == 1)
            {
                printf("  ");
            }
        }
    }
    printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
    return 0;
}