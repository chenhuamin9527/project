#include <iostream>       //�������������
using namespace std;

template <class DataType>
struct Node
{
    DataType data;
    Node<DataType> *next;  //�˴�<T>Ҳ����ʡ��
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
private:
    Node<DataType> *rear;  //��ͷ�Ͷ�βָ�룬�ֱ�ָ��ͷ�����ն˽��
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

}

template <class DataType>
DataType LinkQueue<DataType>::DeQueue()
{

}

template <class DataType> 
DataType LinkQueue<DataType>::GetQueue()
{
    if (rear!=NULL) 
		return rear->next->data;
}


void main()
{
    LinkQueue<int> Q;         //����ģ�����ʵ�� 
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

	getchar();
}
