#include <iostream>
using namespace std;

struct BiNode   //�������Ľ��ṹ
{
	char data;
	BiNode *lchild, *rchild;
};

class BiTree
{
public:
	BiTree( ){root = Creat();}			//���캯��������һ�ö�����
	~BiTree( ){Release(root);}			//�����������ͷŸ����Ĵ洢�ռ�
	void PreOrder( ){PreOrder(root);}		//ǰ�����������
	void InOrder( ){InOrder(root);}			//�������������
	void PostOrder( ){PostOrder(root);}		//�������������
	void LeverOrder( );				//�������������
	int Count(){Count(root);};
private:
	BiNode *root;                      //ָ�������ͷָ��
	BiNode *Creat();				//���캯������
	void Release(BiNode *bt);				//������������
	void PreOrder(BiNode *bt);              //ǰ�������������
	void InOrder(BiNode *bt);               //���������������
	void PostOrder(BiNode *bt);             //���������������
	int Count(BiNode *bt);
};


BiNode * BiTree::Creat()
{
	BiNode * bt;
	cout<<"������һ�ö������Ľ�����ݣ������ڵ㣬����������������˳��"<<endl;
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
	BiTree T; //����һ����
	cout<<"------ǰ�����------ "<<endl;
	T.PreOrder( );
	cout<<endl;
	cout<<"------�������------ "<<endl;
	T.InOrder( );
	cout<<endl;
	cout<<"------�������------ "<<endl;
	T.PostOrder( );
	cout<<endl;
	cout<<"------�������------ "<<endl;
	T.LeverOrder();
	int count = T.Count();
	cout << "Ҷ�ӽڵ����Ϊ��" << count << endl;
	cout<<endl;
	return 0;
}

