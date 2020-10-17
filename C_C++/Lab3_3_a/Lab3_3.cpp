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
    void del(int i);
    bool IsEmpty();
public:
	 Node *first;
     int length = 0;
};

LinkList::LinkList()
{
	first=new Node;
	first->next=first;
}

bool LinkList::IsEmpty()
{
    return first->next == first;
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
    length = n;
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
      length++;
   }
}

void LinkList::del(int i)
{
    Node* p = first->next;
    int j = 1;
    i = i%length;
    while(j < i-1)
    {
        p = p->next;
    }
    cout << p->next->data << " ";
    Node* temp = p->next;
    p->next = p->next->next;
    delete temp;
    length--;
}

int id[100000];
int main()
{
    int n;
    int num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> id[i];
    }
    LinkList List1(id, n);
    List1.PrintList();
    cin >> num;
    while (!List1.IsEmpty())
    {
        List1.del(num);
    }
    return 0;
}