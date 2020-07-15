#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n[3] = {0};
    int a = 0, b = 0, c = 0;
    char ch[3];
    cin >> n[0] >> n[1] >> n[2];
    sort(n, n+3);
    a = n[0];
    b = n[1];
    c = n[2];
    cin >> ch[0] >> ch[1] >> ch[2];
    cout << n[ch[0]-'A'] << " " << n[ch[1]-'A'] << " " << n[ch[2]-'A'];
    return 0;
}