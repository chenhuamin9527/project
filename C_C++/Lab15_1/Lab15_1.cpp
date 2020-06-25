#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream file;
    file.open("test1.txt",ios_base::out);
    file<< "已成功写入文件!";
    file.close();
    file.open("test1.txt",ios_base::app);
    file << "已成功添加字符!";
    return 0;
}