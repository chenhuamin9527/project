#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int haystack_l = haystack.length();
        int needle_l = needle.length();
        if(needle_l == 0) return 0;
        int p1 = 0;
        int p2 = 0;
        while(p1 < haystack_l - needle_l +1)
        {
            while(p1 < haystack_l - needle_l +1 && haystack[p1] != needle[p2]) p1++;
            int currlen = 0;
            while(p1 < haystack_l && p2 < needle_l && haystack[p1] == needle[p2])
            {
                p1++;
                p2++;
                currlen++;
            }
            if(currlen == needle_l) return p1 - currlen;
            p1 = p1 - currlen + 1;
            p2 = 0;
        }
        return -1;
    }
};
int main()
{
    Solution solution;
    cout << solution.strStr("mississippi","issip");
    return 0;
}