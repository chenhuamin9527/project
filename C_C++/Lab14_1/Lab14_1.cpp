#include <bits/stdc++.h>
using namespace std;
template<class T, class InputIterator, class OutputIterator>
void mySort(InputIterator first, InputIterator last, OutputIterator result)
{
    //ͨ�����������p���������ݴ�����������s��
    vector<T>s;
    for (;first!=last;++first)
        s.push_back(*first);
    sort(s.begin(), s.end());   //��s��������sort�����Ĳ���������������ʵ�����
    copy(s.begin(), s.end(), result);   //��s����ͨ�����������result���
}
int main()
{
    //��s�����������������
    double a[5] = {1.2, 2.4, 0.8, 3.3, 3.2};
    mySort<double>(a, a+5, ostream_iterator<double>(cout," "));
    cout << endl;
    vector<int> v = {1, 3, 5, 2, 4};
    cout << "v������Ϊ��" << v.capacity() << endl;
    cout << "v�����ߴ�Ϊ��" << v.max_size() << endl;
    //�ӱ�׼����������ɸ��������������Ľ�����
    mySort<int>(istream_iterator<int>(cin), istream_iterator<int>(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}