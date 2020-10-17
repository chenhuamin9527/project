#include <iostream>         //�������������
using namespace std;

const int StackSize=10;  //10ֻ��ʾ���Ե����ݣ����Ը���ʵ��������嶨��

template <class DataType>       //����ģ����SeqStack
class SeqStack
{
public:
    SeqStack( );            //���캯����ջ�ĳ�ʼ��
	~SeqStack( );            //��������
    void Push(DataType x);          //��Ԫ��x��ջ
    DataType Pop( );                //��ջ��Ԫ�ص���
    DataType GetTop( );	         //ȡջ��Ԫ�أ�����ɾ����
	int Empty( );           //�ж�ջ�Ƿ�Ϊ��
private:
    DataType data[StackSize];      //���ջԪ�ص�����
    int top = -1;                //ջ��ָ�룬ָʾջ��Ԫ���������е��±�
};

template <class DataType>
SeqStack<DataType>::SeqStack( )
{

}

template <class DataType>
SeqStack<DataType>::~SeqStack( )
{

} 

template <class DataType> 
void SeqStack<DataType>::Push(DataType x)
{
	top++;
	data[top] = x;
}

template <class DataType>
DataType SeqStack<DataType>::Pop( )
{
	DataType temp = data[top];
	top--;
	return temp;
}

template <class DataType> 
DataType SeqStack<DataType>::GetTop( )
{
	return data[top];
}

template <class DataType> 
int SeqStack<DataType>::Empty( )
{
	return top == -1;
} 

int main( )
{    
    SeqStack<int> S;      //����ģ�����ʵ��
	if (S.Empty()==1)
		cout<<"ջΪ��"<<endl;
	else
        cout<<"ջ�ǿ�"<<endl;
    cout<<"��15��10ִ����ջ����"<<endl;
	S.Push(15);
	S.Push(10);   
	cout<<"ջ��Ԫ��Ϊ:"<<endl;   //ȡջ��Ԫ��
	cout<<S.GetTop( )<<endl;  
	cout<<"ִ��һ�γ�ջ����"<<endl;
	S.Pop( );          //ִ�г�ջ����
    cout<<"ջ��Ԫ��Ϊ:"<<endl;
    cout<<S.GetTop( )<<endl;
	
	getchar();
	return 0;
}