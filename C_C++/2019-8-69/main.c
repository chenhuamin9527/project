#include <stdio.h>
#include <stdlib.h>
struct stu
{   
    char id[100];
    int score;
};
int n;
int fun();
struct stu s[100];
int main()
{
    int cnt;
    printf("input the number of student\n");
    scanf("%d",&n);   
    for (int i=0;i<n;i++)
    {
        scanf("%s %d",s[i].id,&s[i].score);
    }
    cnt = fun();
    printf("%d",cnt);
    return 0;
}
int fun()
{
    int imin=s[0].score;
    int cnt=0;
    for (int i=0;i<n;i++)
    {
        if (s[i].score<=imin)
        {
            imin = s[i].score;
        }
    }
    for (int i=0;i<n;i++)
    {
        if (s[i].score == imin)
        cnt++;
    }
    return cnt;
}