#include <bits/stdc++.h>
using namespace std;
struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int p1 = 0;
        int p2 = 0;
        while(p1+p2 <= m+n)
        {
            if(p1>=m)
            {
                while(p2<n)
                {
                    ans.push_back(nums2[p2]);
                    p2++;
                }
                break;
            }
            if(p2>=n)
            {
                while(p1<m)
                {
                    ans.push_back(nums1[p1]);
                    p1++;
                }
                break;
            }
            if(nums1[p1]<=nums2[p2])
            {
                ans.push_back(nums1[p1]);
                p1++;
            }
            else
            {
                ans.push_back(nums2[p2]);
                p2++;
            }
        }
        for(int i = 0; i < ans.size();i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        for(int i = 0; i < ans.size();i++)
        {
            nums1[i] = ans[i];
        }
    }
};


int main()
{
    Solution solution;
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {2,5,6};
    int m = 3;
    int n = 3;
    solution.merge(v1, m, v2, n);
    
    return 0;
}