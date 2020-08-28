#include <iostream>
using namespace std;
int num[10];
int main()
{
    int a, b, c;
    int n = 1;
    bool flag = true;
    cin >> a >> b >> c;
    int ans1, ans2, ans3;
    int ans = 0;
    for (int i = 1; i <= 1000/c; i++)
    {
        ans1 = i * a;
        if (ans1 < 122)
            continue;
        ans2 = i * b;
        ans3 = i * c;
        if(ans2 > 999 || ans3 > 999)
            break;
        for (int k = 0; k < 3; k++)     //检测是否有重复数字
        {
            num[ans1%10]++;
            ans1 /= 10;
        }
        for (int k = 0; k < 3; k++)
        {
            num[ans2%10]++;
            ans2 /= 10;
        }
        for (int k = 0; k < 3; k++)
        {
            num[ans3%10]++;
            ans3 /= 10;
        }
        for (int k = 1; k < 10; k++)
            if(num[k] != 1)
            {
                flag = false;
                break;
            }
        for (int k = 0; k < 10; k++) num[k] = 0;        //将数组清0
        if (flag)
        {
            cout << i * a << " " << i * b << " " << i * c << endl;
            ans++;
        }
            flag = true;
    }
    if(!ans) cout << "No!!!" ;
    return 0;
}