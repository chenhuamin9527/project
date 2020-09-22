#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    for (int i = 1; i <= 9; i++)
    {
        for (int k = 1; k <= 9; k++)
        {
            for (int l = 1; l <= 9; l++)
            {
                cout << i << " x " << k << " x " << l << " = " << i * k *l << endl;
                if (i * k * l % 10 == 0)
                    count++;
            }
        }
    }
    cout << count << endl;
}