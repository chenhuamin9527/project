#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream file;
    file.open("test1.txt",ios_base::out);
    file<< "�ѳɹ�д���ļ�!";
    file.close();
    file.open("test1.txt",ios_base::app);
    file << "�ѳɹ�����ַ�!";
    return 0;
}