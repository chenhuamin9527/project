#include <stdio.h>
#include <stdlib.h>

struct student
{
    int num;
    char name[20];
    int score;
};
void sort(struct student *,int);
int main()
{
    int i,n=10;
    struct student st[10];
    FILE *fp1,*fp2,*fp;
    fp = fopen("file2.dat","r");
    if(!fp)
    return 1;
    for (i=0;i<10;i++)

    fscanf(fp,"%4d%10s%3d",&st[i].num,st[i].name,&st[i].score);
    fclose(fp);
    sort(st,n);
    fp1=fopen("file3.dat","w");
    for(i=0;i<n;i++)
    
    fprintf(fp1,"%4d%10s%3d",st[i].num,st[i].name,st[i].score);
    fclose(fp1);
    fp2=fopen("file4.dat","wb");
    fwrite(st,sizeof(struct student),n,fp2);
    fclose(fp2); 
    return 0;
}
void sort(struct student *st,int n)
{
    struct student *i,*j,t;
    for (i=st;i<st+n-1;i++)
        for(j=i+1;j<st+n;j++)
            if(i->score<j->score)
            {
                t=*i;
                *i=*j;
                *j=t;
            }
}