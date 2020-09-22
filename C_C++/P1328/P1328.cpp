#include <iostream>
using namespace std;
int a[1000], b[1000];
int win[5][5] = {{0, 0, 1, 1, 0},
                 {1, 0, 0, 1, 0},
                 {0, 1, 0, 0, 1},
                 {0, 0, 1, 0 ,1},
                 {1, 1, 0, 0, 0}};
int main()
{
    int score_a = 0;
    int score_b = 0;
    int n, na, nb;
    cin >> n >> na >> nb;
    for (int i = 0; i < na; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < nb; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        int temp_a = a[i%na];
        int temp_b = b[i%nb];
        score_a += win[temp_a][temp_b];
        score_b += win[temp_b][temp_a];
    }
    cout << score_a << " " << score_b;
    return 0;
}