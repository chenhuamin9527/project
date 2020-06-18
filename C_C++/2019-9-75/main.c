#include <stdio.h>
#include <stdlib.h>
struct student
{
    long long id;
    char name[100];
    double score[3];
    double aver;
};
int main()
{
    FILE * fp;
    fp = fopen("sort2.txt","w");
    int i,j;
    struct student stu[6];
    for (i=0;i<6;i++)
    {
        stu[i].aver = 0;
        scanf("%lld %s",&stu[i].id,stu[i].name);
        for (j=0;j<3;j++)
        {
            scanf("%lf",&stu[i].score[j]);   
            stu[i].aver += stu[i].score[j];
        }
        stu[i].aver /= 3;
    }
    for (i=0;i<5;i++)
    {
        stu[i].aver = 0;
        fprintf(fp,"%lld %s ",stu[i].id,stu[i].name);
        for (j=0;j<3;j++)
        {
            fprintf(fp,"%lf ",stu[i].score[j]);   
            stu[i].aver += stu[i].score[j];
        }
        fprintf(fp,"%lf\n",stu[i].aver);
    }
    for (i=0;i<5;i++)
    {
        for (j=0;j<4-i;j++)
        {
            if (stu[j].aver>stu[j+1].aver)
            {
                struct student t = stu[j];
                stu[j] = stu[j+1];
                stu[j+1] = t;
            }
        }
    }
    for (i=0;i<6;i++)
    {
        fprintf(fp,"%lld %s ",stu[i].id,stu[i].name);
        for (j=0;j<3;j++)
        {
            fprintf(fp,"%lf ",stu[i].score[j]);   
            stu[i].aver += stu[i].score[j];
        }
        fprintf(fp,"%lf\n",stu[i].aver);
    }
    fclose(fp);
    return 0;
}