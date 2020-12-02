#include <iostream>
using namespace std;

const int MaxSize=10;            //ͼ����󶥵���
int visited[MaxSize] = {0};

struct ArcNode   //����߱���
{
	int adjvex;  //�ڽӵ���
	ArcNode *next;
};

template <class DataType>
struct VertexNode   //���嶥�����
{
	DataType vertex;
	ArcNode *firstedge;
	DataType in;
};

template <class DataType>
class ALGraph
{
public:
	ALGraph(DataType a[ ], int n, int e);   //���캯��������һ����n������e���ߵ�ͼ
	~ALGraph( );							//�����������ͷ��ڽӱ��и��߱���Ĵ洢�ռ�
	void DFSTraverse(int v);				//������ȱ���ͼ
	void BFSTraverse(int v);				//������ȱ���ͼ
	void CountIn();
	void TopSort();
private:
	VertexNode<DataType> adjlist[MaxSize];  //��Ŷ���������
	int vertexNum, arcNum;					//ͼ�Ķ������ͱ���
};

template <class DataType>
ALGraph<DataType>::ALGraph(DataType a[ ], int n, int e)
{
	ArcNode *s;
	int i, j, k;
	vertexNum = n; arcNum = e;
	for (i = 0; i < vertexNum; i++)			//���붥����Ϣ����ʼ�������
	{ 
		adjlist[i].vertex = a[i];
		adjlist[i].firstedge = NULL;
		adjlist[i].in = 0;  
	}
	for (k = 0; k < arcNum; k++)			//��������ÿһ����
	{ 
		cout<<"������ߵ������������ţ�";
		cin >> i >> j;						//���������������������ı��
		s = new ArcNode; s->adjvex = j;		//����һ���߱���s
		s->next = adjlist[i].firstedge;     //�����s���뵽��i���߱�ı�ͷ
		adjlist[j].in++;
		adjlist[i].firstedge = s;
	}
}

template <class DataType>
ALGraph<DataType>::~ALGraph( )
{
	ArcNode *p;
	for(int i=0; i<vertexNum; i++)
	{
		p=adjlist[i].firstedge;
		while(p!=NULL)                       //ѭ��ɾ��
		{
			adjlist[i].firstedge=p->next;
			delete p;                        //�ͷŽ��ռ�
			p=adjlist[i].firstedge;
		}
	}
}

template <class DataType>
void ALGraph<DataType>::DFSTraverse(int v)
{
	ArcNode *p; int j;
	cout<<adjlist[v].vertex;
	visited[v] = 1;
    p = adjlist[v].firstedge;				//����ָ��pָ�򶥵�v�ı߱�
	while (p != NULL)						//������������v���ڽӵ�j
	{
		j = p->adjvex;
		if (visited[j]==0) DFSTraverse(j);
		p = p->next;           
	}
}

template <class DataType>
void ALGraph<DataType>::BFSTraverse(int v)
{
	int front =-1, rear = -1;				//��ʼ������, ������в���˳��洢�Ҳ��ᷢ�����
	int Q[MaxSize];
    ArcNode *p;
	cout<<adjlist[v].vertex; visited[v] = 1; Q[++rear] = v;   //�����ʶ������
	while (front != rear)					//�����зǿ�ʱ
	{
		v = Q[++front];
		p = adjlist[v].firstedge;			//����ָ��pָ�򶥵�v�ı߱�
		while (p != NULL) 
		{
			int j = p->adjvex;
			if (visited[j] == 0) {
				cout<<adjlist[j].vertex; visited[j]=1;Q[++rear]=j;
			}
			p=p->next;
		}
	}
}

template <class DataType>
void ALGraph<DataType>::TopSort()
{
	int i,j,k,count = 0;
	int S[MaxSize],top = -1;
	ArcNode * p = NULL;
	for(i = 0; i < vertexNum; i++)
	{
		if(adjlist[i].in == 0) S[++top] = i;
	}
	while(top != -1)
	{
		j = S[top--];
		cout << adjlist[j].vertex;
		count++;
		p = adjlist[j].firstedge;
		while(p != NULL)
		{
			k = p->adjvex;
			adjlist[k].in--;
			if(adjlist[k].in == 0) S[++top] = k;
			p = p->next;
		}
	}
	if(count < vertexNum) cout << "�л�·";
}

int main()
{
	char ch[ ]={'A','B','C','D','E','F'};
	int i;
	ALGraph<char> ALG(ch, 6, 9);
	for (i = 0; i < MaxSize; i++)
		visited[i] = 0;
	cout<<"�Ӷ���"<<ch[0]<<"����������ȱ��������ǣ�";
	ALG.DFSTraverse(0);
	cout<<endl;
    for (i = 0; i < MaxSize; i++)
		visited[i] = 0;
	cout<<"�Ӷ���"<<ch[2]<<"���й�����ȱ��������ǣ�";
	ALG.BFSTraverse(2);
	cout<<endl;
	cout<<"�����������ǣ�";
	ALG.TopSort();
	cout<<endl;
	return 0;
} 
