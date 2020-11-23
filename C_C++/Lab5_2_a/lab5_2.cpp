#include <iostream>
using namespace std;

#define max(a,b)    (((a) > (b)) ? (a) : (b))

const int Max = 20;  // �ٶ��������20�����
struct TNode
{
	char data;	// �ٶ�����Ԫ������Ϊchar��
	TNode *firstchild, *rightsib;
};

class Tree
{
public:
	Tree( );
	~Tree( ){Release(root);}          //�����������ͷŸ����Ĵ洢�ռ�
	void PreOrder( ){PreOrder(root);}
	void PostOrder( ){PostOrder(root);}
	int Depth(){return Depth(root);};
private:
	TNode *root;
	void PreOrder(TNode *bt);
	void PostOrder(TNode *bt);
	void Release(TNode *bt);  // ���������ĵ���
	int Depth(TNode *bt);
};

Tree::Tree( )
{
	TNode *Q[Max] = {NULL}; // TNode�͵�����ָ��
	char ch1 = '#', ch2 = '#';
	int front = -1, rear = -1;
	TNode *p = NULL, *q = NULL;
	
	cout<<"���������㣺";
	cin>>ch1;
	p = new TNode; p->data = ch1; 
	p->firstchild = p->rightsib = NULL;
	root = p;								// ���������
	Q[++rear] = p;							// ��������
    
	cout<<"��������ԣ��Կո�ָ���";
	fflush(stdin);						        // ��ռ��̻�����
    ch1 = getchar(); getchar(); ch2 = getchar();// �м�getcharע�͵��м�Ŀո�ch1�Ǹ���㣬ch2�Ǻ��ӽ��
	while (ch1 != '#' || ch2 != '#')			// �������������������ԣ�# #��
	{
		p = new TNode; p->data = ch2; 
		p->firstchild = p->rightsib = NULL;
		Q[++rear] = p;			// ���
		while (front != rear)   // �����зǿ�
		{
			q = Q[front + 1];	// ȡ��ͷԪ�أ��洢Ϊq
			if (q->data != ch1)	// ����ͷԪ�ز�������Եĵ�һ���ַ�
				front++;		// ����
			else 
			{
				if (q->firstchild == NULL)
					q->firstchild = p;	// ���ý��p�ǽ��q�ĵ�һ������
				else
				{
					q = q->firstchild;
					while (q->rightsib != NULL) // ���ҽ��q�������ֵ�
						q = q->rightsib;
					q->rightsib = p;			// ���ý��pΪ���q�����ֵ�
				}
				break;
			}
		}
		cout<<"��������ԣ��Կո�ָ���";
		fflush(stdin);
        ch1 = getchar(); getchar(); ch2 = getchar();
	}
}

void Tree::Release(TNode *bt)
{
	if (bt == NULL)  return;     //�ݹ���õĽ�������
	else
	{
		Release(bt->firstchild);  //����ݹ��ͷ�bt�ĵ�һ������  
		Release(bt->rightsib);    //����ݹ��ͷ�bt�����ֵ�����  
		delete bt;                //�ͷŸ����
	}
}

void Tree::PreOrder(TNode *bt)
{
	if(bt == nullptr) return;
	else
	{
		cout << bt->data;
		PreOrder(bt->firstchild);
		PreOrder(bt->rightsib);
	}
}

void Tree::PostOrder(TNode *bt)
{
	if(bt == nullptr) return;
	else
	{
		PostOrder(bt->firstchild);
		cout << bt->data;
		PostOrder(bt->rightsib);
	}
}

int Tree::Depth(TNode *bt)
{
	static int d = 1;
	static int ldepth = 0,rdepth = 0;
	if(bt==nullptr) return 0;
	else
	{
		ldepth=Depth(bt->firstchild);
		d = max(ldepth,rdepth)+1;
		rdepth=Depth(bt->rightsib);

	}
	return d;
}

// A AB AC BD BE BF CG CH EI ##
int main( )
{
	Tree t1;
	cout<<"ǰ������Ľ���ǣ�";
	t1.PreOrder();
	cout<<endl;
	cout<<"��������Ľ���ǣ�";
	t1.PostOrder();
	cout<<endl;
	cout<<"��������ǣ�"<<t1.Depth()<<endl;
	return 0;
}