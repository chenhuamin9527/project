#include <iostream>
using namespace std;
int main()
{
    int d[3] = {0};
    cin >> d[0] >> d[1] >> d[2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if (d[i]>d[j])
                swap(d[i],d[j]);
        }
    }
    cout << d[0] << " " << d[1] << " " << d[2];
    return 0;
}