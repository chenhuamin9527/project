#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>
using namespace std;
char ga[10];
int main()
{
    for (int i = 0;i < 10;i++)
    {
        int number;
        srand((unsigned) time(NULL));   //用时间做种，每次产生随机数不一样
        number = rand() % 101;          //产生0-100的随机数
        if (number >= 50)
            ga[i] = 'b';
        ga[i] = 's';
    }
    int mon = 1000;
    char ch ;
    for (int i = 0;i < 10;i++)
    {
        cin >> ch;
        if (ga[i] == ch)
            mon += 80;
        else
            mon -= 100;
    }
    cout << "you still have" << " " << mon <<" " << "coins";
    return 0;
}