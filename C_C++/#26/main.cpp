#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        if(nums.size()==0) return 0;
        for (int j = 1; j < nums.size(); j++)
        {
            if(nums[j] != nums[i])
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};
int main()
{
    vector<int> nums;
    Solution s;
    s.removeDuplicates(nums);
}