#include <iostream>
using namespace std;

const int MaxSize=10;            //ͼ����󶥵���
int visited[MaxSize] = {0};
int indegree[MaxSize];
int ID[MaxSize] = {0};

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
};

template <class DataType>
class ALGraph
{
public:
	ALGraph(DataType a[ ], int n, int e);   //���캯��������һ����n������e���ߵ�ͼ
	~ALGraph( );							//�����������ͷ��ڽӱ��и��߱���Ĵ洢�ռ�
	void DFSTraverse(int v);				//������ȱ���ͼ
	void BFSTraverse(int v);				//������ȱ���ͼ
	void CountID();
private:
	VertexNode<DataType> adjlist[MaxSize];  //��Ŷ���������
	int vertexNum, arcNum;					//ͼ�Ķ������ͱ���
};

template<class DataType>
ALGraph<DataType>::ALGraph(DataType a[], int n, int e)
{
	int i, j, k;
	ArcNode * s = nullptr;
	vertexNum = n; arcNum = e;
	for(i = 0; i < vertexNum; i++)
	{
		adjlist[i].vertex = a[i];
		adjlist[i].firstedge = nullptr;
	}
	for (k = 0; k < arcNum; k++)
	{
		cin >> i >> j;
		s = new ArcNode;
		s->adjvex = j;
		s->next = adjlist[i].firstedge;
		adjlist[i].firstedge = s;
		ID[j]++;
	}
}

template<class DataType>
ALGraph<DataType>::~ALGraph()
{
	ArcNode * p = nullptr, * q = nullptr;
	for (int i = 0; i < vertexNum; i++)
	{
		p = q = adjlist->firstedge;
		while(p != nullptr)
		{
			p = p->next;
			delete q;
			q = p;
		}
	}
}

template <class DataType>
void ALGraph<DataType>::DFSTraverse(int v)
{
	int j;
	ArcNode * p = nullptr;
	cout << adjlist[v].vertex;
	visited[v] = 1;
	p = adjlist[v].firstedge;
	while(p != nullptr)
	{
		j = p->adjvex;
		if(visited[j] == 0) DFSTraverse(j);
		p = p->next;
	}
}

template <class DataType>
void ALGraph<DataType>::CountID()
{
    for(int n=0;n<vertexNum;n++)
    {
        cout<<"��"<<n<<"�����������ǣ� "<<ID[n]<<endl;
    }
}

template <class DataType>
void ALGraph<DataType>::BFSTraverse(int v)
{
	int w, j ,Q[MaxSize];
	int front = -1, rear = -1;
	ArcNode * p = nullptr;
	cout << adjlist[v].vertex;
	visited[v] = 1;
	Q[++rear] = v;
	while(front != rear)
	{
		w = Q[++front];
		p = adjlist[w].firstedge;
		while(p != nullptr)
		{
			j = p->adjvex;
			if(visited[j] == 0)
			{
				cout << adjlist[j].vertex;
				visited[j] = 1;
				Q[++rear] = j;
			}
			p = p->next;
		}
	}
}

int main()
{
	char ch[ ]={'A','B','C','D','E'};
	int i;
	ALGraph<char> ALG(ch, 5, 7);
	ALG.BFSTraverse(0);
	cout << endl;
	for (int i = 0; i < MaxSize; i++)
	{
		visited[i] = 0;
	}
	ALG.DFSTraverse(0);
	cout << endl;
	ALG.CountID();
	return 0;
} 
