#include <stdio.h>
struct student
{
    int num;
    char name[20];
    int score;
};
int main()
{
    int i;
    struct student st,stmax,stmin;                  //用结构体变量结构清楚不易遗漏
    stmax.score=0;
    stmin.score=100;
    printf("\n input data");
    for (i=0;i<10;i++)
    {
        scanf("%d%s%d",&st.num,st.name,&st.score);      //结构体变量成员引用
        if (st.score>stmax.score)
            stmax=st;
        if (st.score<stmin.score)
            stmin=st;
    }
    printf("\n hight:%5d%15s%5d",stmax.num,stmax.name,stmax.score);
    printf("\n low:%5d%15s%5d",stmin.num,stmin.name,stmin.score);
    return 0;
}