#include <stdio.h>
struct student 
{
    long id;
    char name[50];
    char sex;
    int score;
};
int main()
{
    struct student stu[145];
    for (int i=0;i<145;i++)
    {
        scanf("%ld %s %c %d",&stu[i].id,stu[i].name,&stu[i].sex,&stu[i].score);
    }
    FILE *fp;
    fp = fopen("student.dat","rb+");
    for (int i=0;i<145;i++)
    {
        fwrite(&stu[i],sizeof(struct student),1,fp);
    }
    fclose(fp);
    fp = fopen("student.dat","rb+");
    for (int i=0;i<145;i++)
    {
        fread(&stu[i],sizeof(struct student),1,fp);
    }
    for (int i=0;i<145;i++)
    {
        for (int j=0;j<144-i;j++)
        {
            if (stu[j].score>stu[j+1].score)
            {
                struct student t = stu[j];
                stu[j] = stu[j+1];
                stu[j+1] = t;
            }
        }
    }
    printf("\n");
    for (int i=0;i<145;i++)
    {
        printf("%ld %s %c %d\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].score);
    }
    return 0;
}