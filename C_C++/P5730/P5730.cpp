#include <iostream>
using namespace std;
char num[10][5][4] = {"XXX", "X.X","X.X", "X.X","XXX",
                    "..X", "..X","..X", "..X","..X",
                    "XXX", "..X","XXX", "X..","XXX",
                    "XXX", "..X","XXX", "..X","XXX",
                    "X.X", "X.X","XXX", "..X","..X",
                    "XXX", "X..","XXX", "..X","XXX",
                    "XXX", "X..","XXX", "X.X","XXX",
                    "XXX", "..X","..X", "..X","..X",
                    "XXX", "X.X","XXX", "X.X","XXX",
                    "XXX", "X.X","XXX", "..X","XXX"
                    };

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < n; k++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << num[str[k]-'0'][i][j];
            }
            if(k != n-1)
                cout << '.';
            else
                cout << endl;
        }
    }
    
    return 0;
}