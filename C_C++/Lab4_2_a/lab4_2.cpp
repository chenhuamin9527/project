#include <iostream>     
using namespace std;

template <class DataType>
struct Node
{
    DataType data;
    Node<DataType> *next;  
};

template <class DataType>
class LinkQueue
{
public:
    LinkQueue( );          //���캯������ʼ��һ���յ�������
    ~LinkQueue( );      //�����������ͷ��������и����Ĵ洢�ռ�
    void EnQueue(DataType x);  //��Ԫ��x���
    DataType DeQueue( );       //����ͷԪ�س���
    DataType GetQueue( );     //ȡ�����еĶ�ͷԪ��
    int Empty( );     //�ж��������Ƿ�Ϊ��
private:
    Node<DataType> *front, *rear;  //��ͷ�Ͷ�βָ�룬�ֱ�ָ��ͷ�����ն˽��
};

template <class DataType>
LinkQueue<DataType>::LinkQueue( )
{
	Node<DataType>* p = new Node<DataType>;
	front = p;
	rear = p;
}

template <class DataType>
LinkQueue<DataType>::~LinkQueue( )
{
	
}

template <class DataType> 
void LinkQueue<DataType>::EnQueue(DataType x)
{
	Node<DataType>* p = new Node<DataType>;
	p->data = x;
	p->next = NULL;
	rear->next = p;
	rear = p;
}

template <class DataType>
DataType LinkQueue<DataType>::DeQueue()
{ 
	Node<DataType>* p = front->next;
	DataType temp = p->data;
	front->next = p->next;
	return temp;
}

template <class DataType> 
DataType LinkQueue<DataType>::GetQueue()
{
	Node<DataType>* p = front->next;
	return p->data;
}

template <class DataType> 
int LinkQueue<DataType>::Empty( )
{
	return rear == front;
}

int main()
{
    LinkQueue<int> Q;         //����ģ�����ʵ�� 
    if (Q.Empty())
	    cout<<"����Ϊ��"<<endl;
	else
		cout<<"���зǿ�"<<endl;
	cout<<"Ԫ��10��15ִ����Ӳ���:"<<endl;
	try
	{
		Q.EnQueue(10);             //��Ӳ���
        Q.EnQueue(15);
	}
	catch (char* wrong)
	{
		cout<<wrong<<endl;;
	}
	cout<<"�鿴��ͷԪ��:"<<endl;
	cout<<Q.GetQueue( )<<endl;     //����ͷԪ��
	cout<<"ִ�г��Ӳ���:"<<endl;  //���Ӳ���
	try
	{
	    Q.DeQueue( );              
	}
	catch (char* wrong)
	{
		cout<<wrong<<endl;
	}
	cout<<"�鿴��ͷԪ��:"<<endl;
	cout<<Q.GetQueue( )<<endl;
	return 0;
}
