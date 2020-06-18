#include <stdio.h>
#include <stdlib.h>
struct student
{
    int num;
    char name[8];
    char sex;
    int age;
    double grade;
};
#define N 10
int main()
{
    int i,j;
    struct student stu[N];
    struct student *p[N];
    for (i=0;i<N;i++)
    {
        p[i]=&stu[i];
    }
    for (i=0;i<N;i++)      
    {
        scanf("%d %s %c %d %lf",&stu[i].num,stu[i].name,&stu[i].sex,&stu[i].age,&stu[i].grade);
    }
    for (i=0;i<N;i++)      
    {
        printf("学号   姓名   性别  年龄   成绩\n");
        printf("%d %s %c %d %.1lf\n",p[i]->num,p[i]->name,p[i]->sex,p[i]->age,p[i]->grade);
    }
    for (i=0;i<N;i++)
    {
        for (j=0;j<N-1-i;j++)
        {
            if (p[j]->grade>p[j+1]->grade)
            {
                struct student *t = p[j];
                p[j] = p[j+1];
                p[j+1] = t; 
            }
        }
    }
    for (i=0;i<N;i++)       
    {
        printf("学号   姓名   性别  年龄   成绩\n");
        printf("%d %s %c %d %.1lf\n",p[i]->num,p[i]->name,p[i]->sex,p[i]->age,p[i]->grade);
    }
    return 0;
}