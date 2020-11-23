#include <iostream>
using namespace std;
char printNode[100];
int p = 0;
enum flag {Chirld,Thread};
struct ThrNode
{
     char data;
     ThrNode *lchild, *rchild;
     flag ltag, rtag;
};

class InThrBiTree
{
public:
    InThrBiTree( );          //构造函数，建立中序线索链表
    ~InThrBiTree( ) {};      //析构函数，释放各结点的存储空间
	void LeverOrder( );		 //层序遍历二叉树
	void Print();
private:
    ThrNode *root;      //指向线索链表的头指针
    ThrNode *Creat(); 
    void ThrBiTree(ThrNode *bt, ThrNode *pre); //构造函数调用
};


InThrBiTree::InThrBiTree()
{
	cout<<"请输入创建一棵二叉树的结点数据"<<endl; 
	root=Creat();
	ThrNode *pre = new ThrNode;
	ThrBiTree(root,pre);
}

ThrNode *InThrBiTree::Creat()
{
	char ch;
	cin>>ch;
	ThrNode* bt = new ThrNode;       //生成一个结点
    if (ch=='#') return NULL;
    else{ 
		bt->data = ch;
		bt->ltag = Chirld;
		bt->rtag = Chirld;
		bt->lchild = Creat();
		bt->rchild = Creat();
    } 
    return bt;
}   


void InThrBiTree::ThrBiTree(ThrNode *bt, ThrNode *pre)
{
	if (bt == nullptr) return;
	ThrBiTree(bt->lchild,pre);
	if(bt->lchild == nullptr)
	{
		bt->ltag = Thread;
		bt->lchild = pre;
	}
	if(bt->rchild == nullptr) bt->rtag = Thread;
	if(pre->rtag == Thread) pre->rchild = bt;
	pre = bt;
	ThrBiTree(bt->rchild, pre);
}

void InThrBiTree::Print()
{
	for(int i = 0; i < p; i++)
	{
		cout << printNode[i] << "\t";
	}
	cout << endl;
}


void InThrBiTree::LeverOrder( )
{
	ThrNode* Que[100];
	ThrNode* q = nullptr;
	int head = -1;
	int rear = -1;
	if(root == nullptr) return;
	Que[++rear] = root;
	while(head != rear)
	{
		q = Que[++head];
		if(q->ltag == Thread && q->rtag == Thread)
			printNode[p++] = q->data;
		cout << q->data << "\t";
		if(q->ltag != Thread) Que[++rear] = q->lchild;
		if(q->rtag != Thread) Que[++rear] = q->rchild;
	}
}


//AB#D##C##
//ABD#G###CE##F##
int main()
{
	cout<<"------创建一棵中序线索二叉树------ "<<endl;
	InThrBiTree T; 
	cout<<"------层序遍历------ "<<endl;
	T.LeverOrder( );
	cout<<endl;
	cout<<"------输出所有叶子节点------ "<<endl;
    T.Print( );
	cout<<endl;
	return 0;
}
