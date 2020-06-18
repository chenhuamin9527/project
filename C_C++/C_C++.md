---
- 从标准输入读取 string并将读入的串存储在 s 中。
- string 类型的输入操作符：
  - 读取并忽略开头所有的空白字符（如空格，换行符，制表符）。 
  - 读取字符直至再次遇到空白字符，读取终止。 

## 迭代器简介(iterator)
- 标准库为每一种标准容器（包括 vector）定义了一种迭代器类型。迭代器类型提供了比下标操作更通用化的方法：所有的标准库容器都定义了相应的迭代器类型，而只有少数的容器支持下标操作。因为迭代器对所有的容器都适用，现代 C++ 程序更倾向于使用迭代器而不是下标操作访问容器元素，即使对支持下标操作的 vector 类型也是这样。
---

- 与 size_t 类型一样， ptrdiff_t 也是一种与机器相关的类型，在 cstddef 头文件中定义。size_t 是 unsigned 类型，而 ptrdiff_t 则是 signed 整型。
- 这两种类型的差别体现了它们各自的用途：size_t 类型用于指明数组长度， 它必须是一个正数；ptrdiff_t 类型则应保证足以存放同一数组中两个指针之间 的差距，它有可能是负数。
---
顺序容器 |   |    
---     | ---
vector  | 支持快速随机访问
list    | 支持快速插入/删除
deque   | 双端队列
顺序容器适配器| 
stack   | 后进先出（LIFO）堆栈
queue   | 先进先出（FIFO）队列
priority_queue| 有优先级管理的队列
----

size_type   |无符号整型，足以存储此容器类型的最大可能容器长度
-----       |  ------
iterator    |此容器类型的迭代器类型
const_iterator      |元素的只读迭代器类型
reverse_iterator    | 按逆序寻址元素的迭代器
const_reverse_iterator  |元素的只读（不能写）逆序迭代器
difference_type     |足够存储两个迭代器差值的有符号整型，可为负数
value_type reference|元素类型
const_reference     |元素的左值类型，是 value_type& 的同义词 元素的常量左值类型，等效于 const value_type&
----

表3.3 3..   |cctype中的函数
-----       | ----
isalnum（c）|如果是字母或数字，则为true。
isalpha（c）|如果c是字母，则为true
iscntrl（c）|如果c是控制字符，则为true
isdigit（c）|如果c是数字则为true
isgraph（c）|如果不是空格，但可打印，则为true
islower（c）|如果是小写字母，则为true
isprint（c）|如果是可打印的字行则为true
ispunct（c）|如果c是标点符号，则为true
isspace（c）|如果是空白字符，则为true
isupper（c）|如果c是大写字母，则true
isxdigit(c) |如果是e十六进制数，则为true
tolower（c）|如果c大写字母，返回其小写字母形式，否则直接返回c toupper（c）|如果c是小写字母，则返回其大写字母形式，否则直接返回c
---

- 四舍五入

```c++

floor (a+0.5)
```

- 类是对象的抽象，对象是例的实例
- 利用时间做种子的伪随机函数
- rand()和srand()要一起使用，其中srand()用来初始化随机数种子,rand()用来产生随机数。
- 因为默认情况下随机数种子为1，而相同的随机数种子产生的随机数是一样的,失去了随机性的意义，所以为使每次得到的随机数不一样，用函数srand()初始化随机数种子。srand()的参数，用time函数值（即当前时间），因为两次调用rand()函数的时间通常是不同的，这样就可以保证随机性了。

```c++
#include <iostream>
using namespace std;
#include   <stdlib.h>
#include   <time.h>
#define MIN 0    //随机数产生的范围
#define MAX 99

int main()
{
  int i;
  srand((unsigned)time(NULL));
  cout<<"Ten random numbers from "<<MIN<<
        " to "<<MAX<<" :/n"<<endl;
  for(i=0; i<10; i++)          //产生随机数
  {
    cout<<MIN + rand() % (MAX + MIN - 1)<<"/t";
  }
  cout<<endl;
  return 0;
}
```

- 如果整数部分不确定，或者要求末尾保留0的时候，那我们就无法准确保留适当的小数位数，因此我们需要另一个函数：

setiosflags():

```c++
cout<<setiosflags(ios::fixed)<<setprecision(4)<<pi<<endl;
```

- \>>> 3.1416

- setprecision()函数。顾名思义：就是设定精度。用来控制输出的数的位数（从左到右的），自动四舍五入。且不保留小数后的0。
- C++构造函数
  - 构造函数的作用就是在对象被创建时利用特定的值构造对象，将对象初始化为一个特定的状态。
  - 构造函数在对象被创建时候将被自动调用。
  - 构造函数与类同名

```c++
class Clock
{
  public:
  Clock() {}  // 编译系统生成的隐含的默认构造函数
  ...
};
```

- 复制构造函数
  - 复制构造函数是一种特殊的构造函数，具有一般构造函数的所有特性，其形参是本类的对象的引用。其作用是使用一个已经存在的对象(由复制构造函数的参数指定)，去初始化同类的一个对象。
  - 这个隐含的复制构造函数的功能是，把初始值对象的每个数据成员的值都复制到新建立的对象中。

```c++
class 类名
{
public:
  类名(形参表); //构造函数
  类名(类名 & 对象名) //复制构造函数
  ...
};

类名::类名(类名 & 对象名);  //复制构造函数的实现
{
  函数体
}
```

- 有序联想二分查找
- 如果希望从键盘输入字符串"123 ABC"，那么整个字符串都会被赋给s2。这实际表示输入字符串时只以换行符作为分隔符。

```c++
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s2;
  getline(cin, s2);         //默认以换行符为分隔符
  getline(cin, s2, ',');    //以','为分隔符
  return 0;
}
```
