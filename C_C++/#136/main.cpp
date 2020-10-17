#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
    }
};
int main()
{
    vector<int> nums;
    int n;
    cin >> n;
    vector<int>::iterator itr = nums.begin();
    for (; itr!=nums.end(); itr++)
    {
        if(*itr==0)
        nums.erase(itr);
        
    }
    Solution s;
    
    

}