#include <bits/stdc++.h>
using namespace std;
class Dog
{
public:
    double weight;
    int age;
    Dog(int age, double weight)
    {
        this->age = age;
        this->weight = weight;
    }
    Dog() {}
};
int main()
{
    Dog d1(3,4.08);
    Dog d2;
    ofstream os;
    os.open("dog.txt",ios_base::out);
    //二进制输入
    //os.open("dog.txt",ios_base::out | ios_base::binary);
    os << d1.age << " " << d1.weight;
    os.close();
    ifstream is;
    is.open("dog.txt",ios_base::in);
    //二进制读取
    //is.open("dog.txt",ios_base::in | ios_base::binary)
    int n_age;
    double n_weight;
    is >> n_age >> n_weight;
    d2.age = n_age;
    d2.weight = n_weight;
    cout << "d2.age = " << d2.age << endl;
    cout << "d2.weight = " << d2.weight << endl;
    return 0;
}