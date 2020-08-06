#include <iostream>
#include <iomanip>
using namespace std;
int jiang[7] = {0};
int piao[7] = {0};
int mingci[7] = {0};
int fun()
{
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if(piao[i] == jiang[j])
            {
                count++;
                continue;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    int count = 7;
    int ming = 0;
    cin >> n;
    for (int i = 0; i < 7; i++)
    {
        cin >> jiang[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> piao[0] >> piao[1] >> piao[2] >> piao[3] >> piao[4] >> piao[5] >> piao[6]; 
        if((fun()-1)>=0)
            mingci[fun()-1]++;
    }
    for (int i = 6; i >= 0; i--)
    {
        cout << mingci[i];
        if(i!=0) cout<< " ";
    }
    return 0;
}