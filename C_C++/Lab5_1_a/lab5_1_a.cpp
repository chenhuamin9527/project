#include <iostream>
using namespace std;

struct BiNode   //二叉树的结点结构
{
	char data;
	BiNode *lchild, *rchild;
};

class BiTree
{
public:
	BiTree( ){root = Creat();}			//构造函数，建立一棵二叉树
	~BiTree( ){Release(root);}			//析构函数，释放各结点的存储空间
	void PreOrder( ){PreOrder(root);}		//前序遍历二叉树
	void InOrder( ){InOrder(root);}			//中序遍历二叉树
	void PostOrder( ){PostOrder(root);}		//后序遍历二叉树
	void LeverOrder( );				//层序遍历二叉树
	int Count(){Count(root);};
private:
	BiNode *root;                      //指向根结点的头指针
	BiNode *Creat();				//构造函数调用
	void Release(BiNode *bt);				//析构函数调用
	void PreOrder(BiNode *bt);              //前序遍历函数调用
	void InOrder(BiNode *bt);               //中序遍历函数调用
	void PostOrder(BiNode *bt);             //后序遍历函数调用
	int Count(BiNode *bt);
};


BiNode * BiTree::Creat()
{
	BiNode * bt;
	cout<<"请输入一棵二叉树的结点数据（按根节点，左子树，右子树的顺序）"<<endl;
	char ch;
	cin >> ch;
	if(ch == '#') bt = NULL;
	else
	{
		bt = new BiNode;
		bt->data = ch;
		bt->lchild = Creat();
		bt->rchild = Creat();
	}
	return bt;
}

void BiTree::Release(BiNode* bt)
{
	if(bt == NULL) return;
	else
	{
		Release(bt->lchild);
		Release(bt->rchild);
		delete bt;
	}
}

void BiTree::PreOrder(BiNode *bt)
{
	if(bt == NULL) return;
	else
	{
		cout << bt->data << "\t";
		PreOrder(bt->lchild);
		PreOrder(bt->rchild);
	}
}

void BiTree::InOrder(BiNode *bt)
{
	if(bt == NULL) return;
	else
	{
		InOrder(bt->lchild);
		cout << bt->data << "\t";
		InOrder(bt->rchild);
	}
	
}

void BiTree::PostOrder(BiNode *bt)
{
	if(bt == NULL) return;
	else
	{
		PostOrder(bt->lchild);
		PostOrder(bt->rchild);
		cout << bt->data << "\t";
	}
	
}

void BiTree::LeverOrder()
{
	BiNode * Q[100], * q = NULL;
	int front = -1;
	int rear = -1;
	if(root == NULL) return;
	Q[++rear] = root;
	while(front != rear)
	{
		q = Q[++front];
		cout << q->data << "\t";
		if(q->lchild != NULL) Q[++rear] = q->lchild;
		if(q->rchild != NULL) Q[++rear] = q->rchild;
	}
}

int BiTree::Count(BiNode *bt)
{
	static int count=0;
	if(bt==NULL)
		return 0;
	else{
		if(bt->lchild==NULL&&bt->rchild==NULL)
		{
			count++;
		}
		Count(bt->lchild);
		Count(bt->rchild);
	}
	return count;
}

//ABD#G###CE##F##
int main()
{	
	BiTree T; //创建一棵树
	cout<<"------前序遍历------ "<<endl;
	T.PreOrder( );
	cout<<endl;
	cout<<"------中序遍历------ "<<endl;
	T.InOrder( );
	cout<<endl;
	cout<<"------后序遍历------ "<<endl;
	T.PostOrder( );
	cout<<endl;
	cout<<"------层序遍历------ "<<endl;
	T.LeverOrder();
	int count = T.Count();
	cout << "叶子节点个数为：" << count << endl;
	cout<<endl;
	return 0;
}

