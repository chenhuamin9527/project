#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
#define N 100005
char array[N];

int main()
{
    while ((scanf("%s",array))!=EOF)
    {
        int i;
        int next[N];
        long head = 0;
        for (i=0;i<strlen(array)-1;i++)
        {
            next[i]=i+1;
        }
        next[i]=-1;
        for (i=0;i<strlen(array);i++)
        {
            int flag=0;
            if (array[i]=='[')          //头插法
            {
                flag = 1;
            }
            if (flag)
            {
                next[next[i]] = head;
                head = next[i];
            }
            if (array[i]==']' && array[i+1]!=']')
            {
                flag = 0;
            }
        }
        for (i=head;i!=-1;i=next[i])
        {
            printf("%c",array[i]);
        }
        printf("\n");
        memset(array,0,N);
    }
    return 0;
}