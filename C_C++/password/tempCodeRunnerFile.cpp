#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int num;
    string a1,a2;
    string dig_a,dig_b;
    long long dig1=0,dig2=0;
    cin >> num;
    cin >> a1 >> a2;
    for (unsigned int i=0;i<a1.length();i++)
    {
        int t = a1[i]-'A'+1;
        if(t>=10)
            dig1 *=100;
        else
            dig1 *= 10;
        dig1 += t;
    }
    for (unsigned int i=0;i<a2.length();i++)
    {
        int t = a2[i]-'A'+1;
        if(t>=10)
            dig2 *=100;
        else
            dig2 *= 10;
        dig2 += t;
    }
    if (dig1 % num == dig2 % num)
        cout << "Attack!" << endl;
    else
    {
        cout << "STAY" << endl;
    }
    return 0;
}
