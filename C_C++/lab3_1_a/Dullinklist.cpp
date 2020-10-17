// 请改为双链表存储结构

#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node *prior;
};

class LinkList
{
public:
	LinkList();
	LinkList(int a[], int n);
	~LinkList();
	void Insert(int i, int x);
	void PrintList();
private:
	Node *first;
};

LinkList::LinkList()
{
	first=new Node;
	first->next=NULL;
	first->prior = NULL;
}

LinkList::LinkList(int a[], int n)
{
	first = new Node;
	Node *r = first;
	for (int i = 0; i < n; i++)
	{
		Node *s=new Node;
		s->data=a[i];
		r->next=s;
		s->prior = r;
		s->next = NULL;
		r=s;
	}
	r->next=NULL;
}

LinkList::~LinkList()
{
	while(first!=NULL)
	{
		Node *q=first;
		first=first->next;
		delete q;
	}
}

void LinkList::Insert(int i, int x)
{ 
   Node *p;
   int j;
   p=first; j=0;    //工作指针p初始化
   while (p!=NULL && j<i-1)
   {
     p=p->next;   //工作指针p后移
     j++;
   }
   if (p==NULL) throw "位置";
   else { 
	  Node *s;
      s=new Node; 
	  s->data=x;  //向内存申请一个结点s，其数据域为x
      s->next=p->next;       //将结点s插入到结点p之后
	  s->prior = p;
	  p->next->prior = s;
	  p->next=s;
   }
}

void LinkList::PrintList()
{
	Node *p=new Node;
	p=first->next;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}

int main()
{
	int a[]={1,2,3,4,5};
    LinkList test(a,5);
	test.PrintList();
	test.Insert(2,6);
	test.PrintList();

	getchar();
	return 0;
}