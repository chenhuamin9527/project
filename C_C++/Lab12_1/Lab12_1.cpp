#include "Array.h"
#include <iostream>
using namespace std;
int main()
{
    int n;
    double sum = 0;
    cout << "输入学生人数" << endl;
    cin >> n;
    Array<double> grade(n);
    for(int i = 0; i < n; i++)
    {
        double temp;
        cout << "请输入第" << i+1 << "个学生在课程A中的考试成绩" << endl;
        cin >> temp;
        grade[i] = temp;
        sum += temp;
    }
    double aver = sum / n;
    cout << "平均成绩为" << aver << "分" << endl;
    return 0;
}