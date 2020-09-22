#include <iostream>           //引用输入输出流库函数的头文件
using namespace std;

/////////////////////////////////////
////  功能3.  增加对类类型的支持 ////

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


const int MaxSize=10;    //10只是示例性的数据，可以根据实际问题具体定义
template <class datatype>
class SeqList
{
public:
   SeqList( ){length=0;}       //无参构造函数，创建一个空表
   SeqList(datatype a[ ], int n);       //有参构造函数
   void Insert(int i, datatype x);   //在线性表中第i个位置插入值为x的元素
   datatype Delete(int i);        //删除线性表的第i个元素
   void PrintList( );      //遍历线性表，按序号依次输出各元素
   int Locate(datatype x);
private:
   datatype data[MaxSize];      //存放数据元素的数组
   int length;            //线性表的长度
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
      if (n>MaxSize) throw "参数非法";
      for (int i=0; i<n; i++)  
        data[i]=a[i];
      length=n;
}

template <class datatype>
void SeqList<datatype>::Insert(int i, datatype x)
{ 
      if (length>=MaxSize) throw "上溢";
      if (i<1 || i>length+1) throw "位置非法";
      for (int j=length; j>=i; j--)
        data[j]=data[j-1];   //注意第j个元素存在数组下标为j-1处
      data[i-1]=x;
      length++;
}

template <class datatype>
datatype SeqList<datatype>::Delete(int i)
{ 
      if (length==0) throw "下溢";
      if (i<1 || i>length) throw "位置非法";
      datatype x=data[i-1];
      for (int j=i; j<length; j++)
        data[j-1]=data[j];   //注意此处j已经是元素所在的数组下标
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
      cout<<"执行插入操作前数据为："<<endl;
      L.PrintList( );              //输出所有元素
      L.Insert(2,3);
      cout<<"执行插入操作后数据为："<<endl;
      L.PrintList( );              //输出所有元素

/////////////////////////////////////
//// 功能2.  增加按值查找的功能  ////
      cout<<"值为3的元素位置为:";
      cout<<L.Locate(3)<<endl;    //查找元素3，并返回在单链表中位置

/////////////////////////////////////
//// 功能3.  增加对类类型的支持  ////
//    cout<<"支持类类型的数据元素:";
      B b[3]={B(10),B(20),B(30)};
      SeqList<B> list(b,3);
      list.PrintList();
      return 0;
}
