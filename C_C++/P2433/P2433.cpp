#include<iostream>
#include <bits/stdc++.h>
// 填上你觉得需要的其他头文件
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        // 粘贴问题 1 的主函数代码，除了 return 0
        cout << "I love Luogu!";
    } else if (T == 2) {
        // 粘贴问题 2 的主函数代码，除了 return 0
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        cout << 3 << endl;
        cout << 12 << endl;
        cout << 2 << endl;
    } else if (T == 4) {
        cout << fixed << setprecision(3) << (float)500/3;
    } else if (T == 5) {
        cout << (260+220)/(12+20) << endl;
    } else if (T == 6) {
        cout << sqrt(6*6+9*9) << endl;
    } else if (T == 7) {
        cout << 110 << endl;
        cout << 90 << endl;
        cout << 0 << endl;
    } else if (T == 8) {
        double pi = 3.141593;
        cout << 2 * pi * 5 << endl;
        cout << pi * 5 * 5 << endl;
        cout << 4.0/3 * pi * 5 * 25 << endl;
    } else if (T == 9) {
        cout << 22 << endl;
    } else if (T == 10) {
        cout << 9 << endl;
    } else if (T == 11) {
        cout << 100.0/3;
    } else if (T == 12) {
        cout << 'M' - 'A' + 1 << endl;
        cout << char('A' + 18 - 1) << endl;
    } else if (T == 13) {
        double pi = 3.141593;
        double v = 4.0/3 * pi * (64+1000);
        cout << (int)pow(v, 1.0/3) << endl;
    } else if (T == 14) {
        int a[2];
		int j = 0;
		for (int i = 0; i < 100; i++)
		{
			if ((110 - i) * (10 + i) == 3500)
			{
				a[j++] = 110 - i;
			}
		}
		if (a[0] >= a[1])
			cout << a[1];
		else
			cout << a[0];
    }
    return 0;
}