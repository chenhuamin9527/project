#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        string pub = strs[0];
        for(int i = 0; i < strs.size(); i++)
        {
            for(int j = 0;j < strs[0].size(); j++)
            {
                if(pub[j]!=strs[i][j])
                {
                    pub = pub.substr(0,j);
                    break;
                }
            }   
        }
        return pub;
    }
};
int main()
{
    Solution solution;
    vector<string> strs = {"flower","flow","flight"};
    cout << solution.longestCommonPrefix(strs);
    return 0;
}