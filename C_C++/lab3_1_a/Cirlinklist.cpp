// 请改为循环链表存储结构

#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

class LinkList
{
public:
	LinkList();
	LinkList(int a[], int n);
	~LinkList();
	void PrintList();
	void Insert(int i, int x);
private:
	Node *first;
};

LinkList::LinkList()
{
	first = new Node;
	first->next = NULL;
}

LinkList::LinkList(int a[], int n)
{
	first = new Node;
	first->next = first;
	Node *p = first;
	for(int i=0;i<n;i++)
	{
		Node *s = new Node;
		s->data = a[i];
		s->next = first;
		p->next = s;
		p = p->next;
	}
}

LinkList::~LinkList()
{
	Node *p=first->next;
	while(p!=NULL)
	{
		Node *q=p;
		p=p->next;
		delete q;
	}
	delete first;
}

void LinkList::PrintList()
{
	Node *p;
	p=first->next;
	while(p!=first)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}

void LinkList::Insert(int i, int x)
{ 
   Node *p;
   int j;
   p=first; j=0;    //工作指针p初始化
   while (p->next!=first && j<i-1)  
   {
     p=p->next;   //工作指针p后移
     j++;
   }
   if (p->next==first) throw "位置";  
   else {   
	  Node *s;
      s=new Node; 
	  s->data=x;  //向内存申请一个结点s，其数据域为x
      s->next=p->next;       //将结点s插入到结点p之后
      p->next=s;
   }
}

int main()
{
	int a[]={5, 4 ,3 ,2 ,1};
    LinkList test(a,5);
	test.PrintList();
	try
	{
		test.Insert(2,6);
	}
	catch(char *s)
	{
		cout<<s<<endl;
	}
	test.PrintList();
	getchar();
	return 0;
}