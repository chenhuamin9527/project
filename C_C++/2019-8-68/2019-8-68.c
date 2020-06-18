#include <stdio.h>
struct student
{
    long num;
    char name[100];
    int score[3];
    int aver;
    int sum;
};

int main()
{
    struct student a[10];
    for (int i=0;i<10;i++)          //输入学生数据
    {
        scanf("%ld %s",&a[i].num,&a[i].name);
        a[i].sum=0;
        a[i].aver=0;
        for (int j=0;j<3;j++)
        {
            scanf("%d",&a[i].score[j]);
            a[i].sum += a[i].score[j];
        }
        a[i].aver=a[i].sum/3;
    }
    int imax=a[0].sum;
    int index=0;
    for (int i=0;i<10;i++)              //查找最高分
    {
        if (a[i].sum>imax)
        {
            imax=a[i].sum;
            index=i;
        }
    }
    for (int i=0;i<10;i++)
    {
        printf("%d ",a[i].aver);
    }
    printf("\n");
    printf("%ld,%s",a[index].num,a[index].name);
    printf("\n");
    for(int i=0;i<3;i++)
    {
        printf("%d ",a[index].score[i]);
    }
    printf("\n");
    printf("%d",a[index].aver);
    return 0;
}