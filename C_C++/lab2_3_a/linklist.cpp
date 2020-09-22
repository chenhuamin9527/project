#include <iostream>
using namespace std;

template<class T>
struct Node
{
	T data;
	Node<T> *next;
};

template<class T>
class LinkList
{
public:
	LinkList();
	LinkList(T a[], int n);
	~LinkList();
	void PrintList();
	T Get(int i);
	void Insert(int i, T x); 
	void Delete(int i);
public:
	Node<T> *first;
};

template<class T>
LinkList<T>::LinkList()
{
	first=new Node<T>;
	first->next=NULL;
}

template<class T>
LinkList<T>::LinkList(T a[], int n)
{
	first=new Node<T>;
	Node<T> *r=first;
	for(int i=0;i<n;i++)
	{
		Node<T> *s=new Node<T>;
		s->data=a[i];
		r->next=s;
		r=s;
	}
	r->next=NULL;
}

template<class T>
LinkList<T>::~LinkList()
{
	while(first!=NULL)
	{
		Node<T> *q=first;
		first=first->next;
		delete q;
	}
}

template<class T>
void LinkList<T>::PrintList()
{
	Node<T> *p=new Node<T>;
	p=first->next;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

template<class T>
T LinkList<T>::Get(int i)
{
	Node<T> *p=first->next;
	int count=1;
	while(p!=NULL&&count<i)
	{
		p=p->next;
		count++;
	}
	if(p==NULL) throw "查找位置异常";
	else return p->data;
}

template<class T>
void LinkList<T>::Insert(int i, T x)
{
	Node<T> *p=first;
	int count=0;
	while(p!=NULL&&count<i-1)
	{
		p=p->next;
		count++;
	}
	if(p==NULL) throw "插入位置异常";
	else
	{
		Node<T> *s=new Node<T>;
		s->data=x;
		s->next=p->next;
		p->next=s;
	}
}

template<class T>
void LinkList<T>::Delete(int i)
{ 
  Node<T> *p;
  int j;
  p=first ; j=0;  //工作指针p初始化
  while (p!=NULL && j<i-1)  //查找第i-1个结点
  {
    p=p->next;
    j++;
  }
  if (p==NULL || p->next==NULL) throw "删除位置异常";  //结点p不存在或结点p的后继结点不存在
  else {
    Node<T> *q; 
	T x;
    q=p->next; x=q->data;  //暂存被删结点
    p->next=q->next;  //摘链
    delete q; 
  }
}

template <class T>
Node<T> *Copy(Node<T> *p1)
{
	Node <T> *p2 = new Node<T>;
	Node <T> *head = p2;
	Node <T> *temp = new Node<T>;
	while(p1 != NULL)
	{
		p2->data = p1->data;
		if(p1->next == NULL)
		{
			p2->next = NULL;
			break;
		}
		p2->next = new Node<T>;
		p1 = p1->next;
		p2 = p2->next;
	}
	return head;
}


template <class T>
void Rerverse(Node<T>* pHead)
{
    if (pHead == NULL || pHead->next == NULL)
    {
        return;
    }
    Node<T>* pRev = NULL;
    Node<T>* pCur = pHead;
    while(pCur != NULL)
    {
        Node<T>* pTemp = pCur;   // 步骤1
        pCur = pCur->next;       // 步骤2
        pTemp->next = pRev;      // 步骤3
        pRev = pTemp;
    }
}

int main()
{
	int a[]={1,2,3,4,5};
    LinkList<int> test(a,5);
	cout<<"线性表a的初始状态："<<endl;
	test.PrintList();

	cout<<endl<<"复制线性表a到线性表p,再逆置线性表a。"<<endl;
	Node<int> *p = new Node<int>;
	p = Copy(test.first)->next;
    Rerverse(test.first);

	cout<<"线性表a的状态："<<endl;
	test.PrintList();

	cout<<endl<<"线性表p的状态："<<endl;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}

	getchar();
	return 0;
}