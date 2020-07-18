
- 设有n个正整数，将他们连接成一排，组成一个最大的多位整数。
- 如 : n = 3时，3个整数13, 312, 343, 连成的最大整数为34331213。
- 如 : n = 4时, 4个整数7, 13, 4, 246连接成的最大整数为7424613。
- 输入描述 :
  - 有多组测试样例，每组测试样例包含两行，第一行为一个整数N（N <= 100），第二行包含N个数(每个数不超过1000，空格分开)。
- 输出描述 :
  - 每组数据输出一个表示最大的整数。

```c++
#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

bool compare(string s1, string s2)
{
        return (s1+s2)>(s2+s1);
}

int main()
{
int N;
cin >> N;
for (int i = 0; i<N; i++)
    {
    string s;
    cin >> s;
    sArray.push_back(s);
}

sort(sArray.begin(), sArray.end(), compare);
for (auto s : sArray)
{

        cout << s;
}

return 0;
}

```
---
# 辗转相除法

```c++
LL gcd(LL a, LL b)
{
    LL t;
    while(b)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}
```

```c++
LL gcd(LL a, LL b)
{
    if(b == 0) return a;
    else return gcd(b, a%b);
}

LL gcd(LL a, LL b)
{
    return b ? gcd(b, a%b) : a;
}
//两种都可以
```
- gcd(a, b)，就是求a和b的最大公约数
- lcm(a, b)，就是求a和b的最小公倍数
- a*b = gcd * lcm
---
- 问题描述
  - Fibonacci数列的递推公式为：Fn=Fn-1+Fn-2，其中F1=F2=1。

- 当n比较大时，Fn也非常大，现在我们想知道，Fn除以10007的余数是多少。

- 输入格式
  - 输入包含一个整数n。
- 输出格式
  - 输出一行，包含一个整数，表示Fn除以10007的余数。

```c++
#include <bits/stdc++.h>
using namespace std;
int n[1000000] = {0};
void ad(int a)
{
    n[1] = 1;
    n[2] = 1;
    for (int i = 3; i <= a; i++)
    {
        n[i] = (n[i-1] + n[i-2]) % 10007;
    }
}
int main()
{
    int num;
    cin >> num;
    ad(num);
    cout << n[num] << endl;
    return 0;
}
```

---
- 全排列问题
```c++
//全排列问题
#include<stdio.h>
#include<string.h>
 
int n;
char  a[15];
char re[15];
int vis[15];
//假设有n个字符要排列，把他们依次放到n个箱子中
//先要检查箱子是否为空，手中还有什么字符，把他们放进并标记。
//放完一次要恢复初始状态，当到n+1个箱子时，一次排列已经结束
void dfs(int step)
{
    int i;
    if(step==n+1)//判断边界
    {
        for(i=1;i<=n;i++)
            printf("%c",re[i]);
        printf("\n");
        return ;
    }
    for(i=1;i<=n;i++)//遍历每一种情况
    {
        if(vis[i]==0)//check满足
        {
            re[step]=a[i];
            vis[i]=1;//标记
            dfs(step+1);//继续搜索
            vis[i]=0;//恢复初始状态
        }
    }
    return ;
}
 
int main(void)
{
    int T;
    scanf("%d",&T);
    getchar();
    while(T--)
    {
        memset(a,0,sizeof(a));
        memset(vis,0,sizeof(vis));//对存数据的数组分别初始化
        scanf("%s",a+1);
        n=strlen(a+1);
        dfs(1);//从第一个箱子开始
    }
    return 0;
}

```

- 快速幂运算
  - 如2^10，可将指数10用二进制表示:1010
  - 2^10 = 1 * 2^8 + 0 * 2^4 + 1 * 2^2 + 0 * 2^0

---

```c++
long pow_(int a, int b)
{
    long x = a;
    long res = 1;
    while(b > 0)
    {
        if(b & 1)   //b与1作与运算
            res*=x;
        b>>=1;  //右移一位
        x = x * x;
    }
    return res;
}
```
---
- 用于获得并存储大量（100000个）不重复的随机字符串，每个字符串长度为20,由字母或数字构成。main函数中输出随机字符串数组中的前100个。

```c++
#include <bits/stdc++.h>
using namespace std;

const int maxn = 1001000;
string str[maxn];
int random[][2] = {{26,65}, {26,97}, {10,48}};

void getRandomString(string * str)
{
    int t;
    srand((unsigned)time(NULL));
    for (int i = 0; i < maxn; i++)
    {
        char crr[21];
        for (int j = 0; j < 20; j++)
        {
            t = rand()%3;
            crr[j] = rand()%random[t][0] + random[t][1];
        }
        crr[20] = '\0';
        str[i] = crr;
    }
}
int main()
{
    getRandomString(str);
    sort(str, str+maxn);

    string s = "ZZZZZZZZZZZZZZZZZZZZ";
    for (int i = 0; i < maxn - 1; i++)
        if(str[i] == str[i+1])
            str[i] = s;
    sort(str, str+maxn);

    if(str[maxn - 1000] == s)
    {
        cout << "数据不足，重新运行";
    }
    else
    {
        for (int i = 0; i < 100; ++i)
        {
            cout << str[i] << endl;
        }
    }
    return 0;
}
```

---
- 幸运数字
  - 数字中之含有3，5，7为因子的数字，59084709587505为第几个幸运数字

```c++
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL MAX = 59084709587505;

int main()
{
    int a[3] = {3, 5, 7};
    LL tou = 1;
    set <LL> s;
    while (true) {
        for (int i = 0; i < 3; i++)
        {
            LL tt = tou * a[i]; //t分别乘以3，5，7
            if (tt <= MAX)
                s.insert(tt);
        }
        tou = *(s.upper_bound(t));//从set中选择比tou大的最小的数
        if (tou >= MAX)break;
    }
    cout << s,size() << endl;
    return 0;
}
```

- 原理：对于任意合数，必定可以有最小质因子乘以最大因子的分解方式。因此，对于每个合数，只要用最大因子筛一遍，枚举时只要枚举最小质因子即可。

```c++
int vis[MAXN];
int prime[MAXN];
void Prime()
{
	int cnt=0;
	for(int i=2;i<=n;i++)
    {
        if(!vis[i]) prime[cnt++]=i;
        for(int j=0;j<cnt&&i*prime[j]<=n;j++)
        {
            vis[i*prime[j]]=i;
            if(i%prime[j]==0) break;
        }
    }
}
```