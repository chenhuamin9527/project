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
	~LinkList(){};
	void PrintList();
	void Insert(int i, int x);
public:
	 Node *first;
};

LinkList::LinkList()
{
	first=new Node;
	first->next=first;
}

LinkList::LinkList(int a[], int n)
{
	first=new Node;
	first->next=first;  
	for(int i=0;i<n;i++)
	{
		Node *s=new Node;
		s->data=a[i];
		s->next=first->next;
		first->next=s;
	}
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
   p=first; j=0;    //����ָ��p��ʼ��
   while (p->next!=first && j<i-1)  
   {
     p=p->next;   //����ָ��p����
     j++;
   }
   if (p->next==first) throw "λ��"; 
   else {   
	  Node *s;
      s=new Node; 
	  s->data=x;  //���ڴ�����һ�����s����������Ϊx
      s->next=p->next;       //�����s���뵽���p֮��
      p->next=s;
   }
}

void merge(Node *first1, Node *first2)
{
	Node *p1 = first1;
	Node *p2 = first2;
	while(p1->next!=first1)
	{
		p1 = p1->next;
	}
	p1->next = first2->next;
	while(p2->next!=first2)
	{
		p2 = p2->next;
	}
	p2->next = first1;
}

int main()
{
	int a[]={1,2,3};
    LinkList testA(a,3);
	cout<<"ѭ������testAΪ��"<<endl;
	testA.PrintList();
	int b[]={4,5,6};
    LinkList testB(b,3);
	cout<<"ѭ������testBΪ��"<<endl;
	testB.PrintList();
	cout<<"�ϲ�ѭ������testA��testB��testAΪ��"<<endl;
	merge(testA.first,testB.first);
	testA.PrintList();

	getchar();
	return 0;
}