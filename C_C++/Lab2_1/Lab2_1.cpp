#include <bits/stdc++.h>
using namespace std;
//鸡翁一，值钱五；鸡母一，值钱三；鸡雏三，值钱一；百钱买百鸡，问翁、母、雏各几只?
const int a = 5;//鸡翁一，值钱五
const int b = 3;//鸡母一，值钱三
const int c = 1;//鸡雏三，值钱一
int main()
{
    int n1 = 0, n2 = 0, n3 = 0;
    for (n3 = 0;n3 <= 100;n3++)
    {
        for (n2 = 0;n2 <= 33;n2++)
        {
            for (n1 = 0;n1 <= 20;n1++)
            {
                int sum = n1 * a + n2 * b + n3 * c;
                int num = n1 + n2 + n3 * 3;
                if (sum == 100 && num == 100)
                    cout << "鸡翁有"<< n1 << "只 " << "鸡母有" << n2 << "只 " << "鸡雏有" << n3 * 3 << "只 " << endl;
            }
        }
    }
    return 0;
}