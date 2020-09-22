#include <iostream>           //��������������⺯����ͷ�ļ�
using namespace std;

/////////////////////////////////////
////  ����3.  ���Ӷ������͵�֧�� ////

class B
{
public:
	B(int i=0):data(i) {}
      operator int()
      {
            return (int)data;
      }
private:
	int data;
};


const int MaxSize=10;    //10ֻ��ʾ���Ե����ݣ����Ը���ʵ��������嶨��
template <class datatype>
class SeqList
{
public:
   SeqList( ){length=0;}       //�޲ι��캯��������һ���ձ�
   SeqList(datatype a[ ], int n);       //�вι��캯��
   void Insert(int i, datatype x);   //�����Ա��е�i��λ�ò���ֵΪx��Ԫ��
   datatype Delete(int i);        //ɾ�����Ա�ĵ�i��Ԫ��
   void PrintList( );      //�������Ա���������������Ԫ��
   int Locate(datatype x);
private:
   datatype data[MaxSize];      //�������Ԫ�ص�����
   int length;            //���Ա�ĳ���
};

template <class datatype>
int SeqList<datatype>::Locate(datatype x)
{
      for (int i = 0; i < length-1; i++)
      {
            if(data[i] == x)
                  return i;
      }
      return -1;
}

template <class datatype>
SeqList<datatype>::SeqList(datatype a[ ], int n)
{
      if (n>MaxSize) throw "�����Ƿ�";
      for (int i=0; i<n; i++)  
        data[i]=a[i];
      length=n;
}

template <class datatype>
void SeqList<datatype>::Insert(int i, datatype x)
{ 
      if (length>=MaxSize) throw "����";
      if (i<1 || i>length+1) throw "λ�÷Ƿ�";
      for (int j=length; j>=i; j--)
        data[j]=data[j-1];   //ע���j��Ԫ�ش��������±�Ϊj-1��
      data[i-1]=x;
      length++;
}

template <class datatype>
datatype SeqList<datatype>::Delete(int i)
{ 
      if (length==0) throw "����";
      if (i<1 || i>length) throw "λ�÷Ƿ�";
      datatype x=data[i-1];
      for (int j=i; j<length; j++)
        data[j-1]=data[j];   //ע��˴�j�Ѿ���Ԫ�����ڵ������±�
      length--;
      return x;
}

template <class datatype>
void SeqList<datatype>::PrintList( )
{
	for (int i=0; i<length; i++)
		cout<<data[i]<<"  ";
	cout<<endl;
}


int main()
{
      int r[5]={1, 2, 3, 4, 5};
      SeqList<int> L(r, 5);
      cout<<"ִ�в������ǰ����Ϊ��"<<endl;
      L.PrintList( );              //�������Ԫ��
      L.Insert(2,3);
      cout<<"ִ�в������������Ϊ��"<<endl;
      L.PrintList( );              //�������Ԫ��

/////////////////////////////////////
//// ����2.  ���Ӱ�ֵ���ҵĹ���  ////
      cout<<"ֵΪ3��Ԫ��λ��Ϊ:";
      cout<<L.Locate(3)<<endl;    //����Ԫ��3���������ڵ�������λ��

/////////////////////////////////////
//// ����3.  ���Ӷ������͵�֧��  ////
//    cout<<"֧�������͵�����Ԫ��:";
      B b[3]={B(10),B(20),B(30)};
      SeqList<B> list(b,3);
      list.PrintList();
      return 0;
}
