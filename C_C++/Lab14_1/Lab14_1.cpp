#include <bits/stdc++.h>
using namespace std;
template<class T, class InputIterator, class OutputIterator>
void mySort(InputIterator first, InputIterator last, OutputIterator result)
{
    //通过输入迭代器p将输入数据存入向量容器s中
    vector<T>s;
    for (;first!=last;++first)
        s.push_back(*first);
    sort(s.begin(), s.end());   //对s进行排序，sort函数的参数必须是随机访问迭代器
    copy(s.begin(), s.end(), result);   //将s序列通过输出迭代器result输出
}
int main()
{
    //将s数组的内容排序后输出
    double a[5] = {1.2, 2.4, 0.8, 3.3, 3.2};
    mySort<double>(a, a+5, ostream_iterator<double>(cout," "));
    cout << endl;
    vector<int> v = {1, 3, 5, 2, 4};
    cout << "v的容量为：" << v.capacity() << endl;
    cout << "v的最大尺寸为：" << v.max_size() << endl;
    //从标准输入读入若干个整数，将排序后的结果输出
    mySort<int>(istream_iterator<int>(cin), istream_iterator<int>(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}