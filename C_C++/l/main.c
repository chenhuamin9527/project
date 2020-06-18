#include <stdio.h>
int main()
{
    int i;
    char *s;
    float f1,f2;
    struct std
    {
    int id;
    char *name;
    float sf1;
    float sf2;
    }a;
    i=a.id=1995;
    s=a.name="Windows 95";
    f1=a.sf1=1.18;
    f2=a.sf2=6.0;
    printf("%d is %s\n",i,s);
    printf("%f %f\n",f1,f2); 
    return 0;  	
}