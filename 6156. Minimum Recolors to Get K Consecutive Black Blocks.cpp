// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int minimumRecolors(string blocks, int k)
    {
        int i = 0, j = 0, n = blocks.length(), curr = 0, ans = inf;

        while (j < n)
        {
            if (blocks[j] == 'W')
                curr++;
            if (j - i + 1 == k)
            {
                ans = min(ans, curr);
                if (blocks[i] == 'W')
                    curr--;
                i++;
            }
            j++;
        }
        return ans;
    }
};