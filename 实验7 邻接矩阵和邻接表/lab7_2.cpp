#include <iostream>
using namespace std;

const int MaxSize=10;            //图的最大顶点数
int visited[MaxSize] = {0};
int indegree[MaxSize];
int ID[MaxSize] = {0};

struct ArcNode   //定义边表结点
{
	int adjvex;  //邻接点域
	ArcNode *next;
};

template <class DataType>
struct VertexNode   //定义顶点表结点
{
	DataType vertex;
	ArcNode *firstedge;
};

template <class DataType>
class ALGraph
{
public:
	ALGraph(DataType a[ ], int n, int e);   //构造函数，建立一个有n个顶点e条边的图
	~ALGraph( );							//析构函数，释放邻接表中各边表结点的存储空间
	void DFSTraverse(int v);				//深度优先遍历图
	void BFSTraverse(int v);				//广度优先遍历图
	void CountID();
private:
	VertexNode<DataType> adjlist[MaxSize];  //存放顶点表的数组
	int vertexNum, arcNum;					//图的顶点数和边数
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
        cout<<"第"<<n<<"个顶点的入度是： "<<ID[n]<<endl;
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
