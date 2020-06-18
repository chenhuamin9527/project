#include <bits/stdc++.h>
using namespace std;
//最大数。输入K个正整数，将它们拼接在一起，找出其中最大的那个拼接数。例如输入:3 31 3 331，输出:333131是所有拼接方案中最大的。程序命名为Lab2_6.cpp。
bool compare(string s1, string s2)
	{
		  return (s1+s2)>(s2+s1);
	}
 
int main() 
{
	int N;
	cin >> N;
    vector<string> sArray;
	for (int i = 0; i < N; i++)
     {
		string s;
		cin >> s;
		sArray.push_back(s);
	}
 
	sort(sArray.begin(), sArray.end(), compare);
    vector<string>::iterator it;
    for (it = sArray.begin(); it != sArray.end(); it++)
    {
        cout << *it;
    }

	return 0;
}
