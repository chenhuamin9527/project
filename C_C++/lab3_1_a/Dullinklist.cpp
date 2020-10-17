// ���Ϊ˫����洢�ṹ

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
   p=first; j=0;    //����ָ��p��ʼ��
   while (p!=NULL && j<i-1)
   {
     p=p->next;   //����ָ��p����
     j++;
   }
   if (p==NULL) throw "λ��";
   else { 
	  Node *s;
      s=new Node; 
	  s->data=x;  //���ڴ�����һ�����s����������Ϊx
      s->next=p->next;       //�����s���뵽���p֮��
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