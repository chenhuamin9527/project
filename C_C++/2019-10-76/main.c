#include <stdio.h>
#include <stdlib.h>
struct student
{
    int num;
    char name[20];
    int score;
};
int main()
{
    int i;
    struct student st,stmax,stmin;
    FILE *fp;
    stmax.score = 0;
    stmin.score = 100;
    fp = fopen("file1.dat","r");
    if(!fp)
    return 1;
    while(!feof(fp))
    {
        fscanf(fp,"%d%s%d",&st.num,st.name,&st.score);
        if(st.score>stmax.score)
            stmax = st;
        if(st.score<stmin.score)
            stmin = st;
    }
    fclose(fp);
    printf("hight:%5d%15s%5d",stmax.num,stmax.name,stmax.score);
    printf("\n low:%5d%15s%5d",stmin.num,stmin.name,stmin.score);
    return 0;
}