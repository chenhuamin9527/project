#include <stdio.h>
#include <stdlib.h>
#define N 10
struct Node
{
    int num;
    char name[8];
    char sex;
    int age;
    double grade;
    struct Node * next;
};


struct Node * create(struct Node *head)
{
    struct Node * newnode;
    for (int i=0;i<10;i++)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d %s %c %d %lf",&newnode->num,newnode->name,&newnode->sex,&newnode->age,&newnode->grade);
        newnode->next = head;
        head = newnode;
    }
}
int main()
{
    struct Node *head = NULL,*p=NULL;
    head = create(head);
    if (head == NULL)
    {
        printf("fail to create the Node");
    }
    p = head;
    while(p->next)
    {
        printf("%d %s %c %d %.1lf\n",p->num,p->name,p->sex,p->age,p->grade);
        p=p->next;
    }
    return 0;
}