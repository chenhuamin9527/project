#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    int score[10000] = {0};
    int n;
    double sum = 0;
    double aver = 0;
    cin >> n;
    for (int i = 0;i < n; i++)
    {
        cin >> score[i];
        sum += score[i];
    }
    sort(score, score+n);
    sum = sum - score[0] -score[n-1];
    aver = sum / (n-2);
    cout << fixed << setprecision(2) <<aver;
    return 0;
}