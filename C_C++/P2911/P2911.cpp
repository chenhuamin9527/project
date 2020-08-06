#include <iostream>
#include <algorithm>
using namespace std;
int num[10000];
int main()
{
    int s1, s2, s3;
    int imax = 0;
    int max_index = 0;
    cin >> s1 >> s2 >> s3;
    for (int i = 1; i <= s1; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            for (int k = 1; k <= s3; k++)
            {
                num[i+j+k]++;
                if(imax < num[i+j+k])
                {
                    imax = num[i+j+k];
                    max_index = i + j + k;
                }
            }
        }
    }
    cout << max_index;
    return 0;
}