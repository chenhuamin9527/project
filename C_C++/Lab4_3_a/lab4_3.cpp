#include <iostream>       //引用输入输出流
using namespace std;

template <class DataType>
struct Node
{
    DataType data;
    Node<DataType> *next;  //此处<T>也可以省略
};

template <class DataType>
class LinkQueue
{
public:
    LinkQueue( );          //构造函数，初始化一个空的链队列
    ~LinkQueue( );      //析构函数，释放链队列中各结点的存储空间
    void EnQueue(DataType x);  //将元素x入队
    DataType DeQueue( );       //将队头元素出队
    DataType GetQueue( );     //取链队列的队头元素
private:
    Node<DataType> *rear;  //队头和队尾指针，分别指向头结点和终端结点
};

template <class DataType>
LinkQueue<DataType>::LinkQueue( )
{
	rear=NULL;
}

template <class DataType>
LinkQueue<DataType>::~LinkQueue( )
{
	Node <DataType> *s;
	while(rear!=NULL)
	{
		s=rear->next;
        delete rear;
	    rear=s;
	}
}

template <class DataType> 
void LinkQueue<DataType>::EnQueue(DataType x)
{
	if(rear == NULL)
	{
	 	rear = new Node<DataType>;
		rear->data = x;
		rear->next = rear;
	}	
	else
	{
		Node<DataType> *p = new Node<DataType>;
		p->data = x;
		p->next = rear->next;
		rear->next = p;
		rear = p;	
	}
	
}

template <class DataType>
DataType LinkQueue<DataType>::DeQueue()
{
	DataType temp = rear->next->data;
	rear->next = rear->next->next;
	return temp;
}

template <class DataType> 
DataType LinkQueue<DataType>::GetQueue()
{
    if (rear!=NULL) 
		return rear->next->data;
	return NULL;
}


int main()
{
    LinkQueue<int> Q;         //创建模版类的实例 
	cout<<"元素10和15执行入队操作:"<<endl;
	try
	{
		Q.EnQueue(10);             //入队操作
        Q.EnQueue(15);
	}
	catch (char* wrong)
	{
		cout<<wrong<<endl;;
	}
	cout<<"查看队头元素:"<<endl;
	cout<<Q.GetQueue( )<<endl;     //读队头元素
	cout<<"执行出队操作:"<<endl;  //出队操作
	try
	{
	    Q.DeQueue( );              
	}
	catch (char* wrong)
	{
		cout<<wrong<<endl;
	}
	cout<<"查看队头元素:"<<endl;
	cout<<Q.GetQueue( )<<endl;

	getchar();
	return 0;
}
