#include <bits/stdc++.h>
using namespace std;
// Huffman树在编码中有着广泛的应用。在这里，我们只关心Huffman树的构造过程。
// 　　给出一列数{pi}={p0, p1, …, pn-1}，用这列数构造Huffman树的过程如下：
// 　　1. 找到{pi}中最小的两个数，设为pa和pb，将pa和pb从{pi}中删除掉，然后将它们的和加入到{pi}中。这个过程的费用记为pa + pb。
// 　　2. 重复步骤1，直到{pi}中只剩下一个数。
// 　　在上面的操作过程中，把所有的费用相加，就得到了构造Huffman树的总费用。
int main()
{
    int n, j = 0;
    int ans = 0;
    cin >> n;
    vector <int> p(n);
    vector <int> expense(n-1);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    sort(p.begin(), p.begin()+n);
    
    while(p.size() > 1)
    {
        expense[j] = p[0] + p[1];
        p.erase(p.begin());
        p[0] = expense[j++];
        sort(p.begin(), p.end());
    }
    for (int i = 0; i < n-1; i++)
    {
        ans += expense[i];
    }
    cout << ans << endl;

    return 0;
}