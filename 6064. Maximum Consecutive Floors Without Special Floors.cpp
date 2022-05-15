// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int maxConsecutive(int bottom, int top, vector<int> &special)
    {
        sort(special.begin(), special.end());

        int ans = 0;
        ans = max(ans, abs(special[0] - bottom));
        ans = max(ans, abs(special[special.size() - 1] - top));

        for (int i = 1; i < special.size(); i++)
            ans = max(ans, special[i] - special[i - 1] - 1);
        
        return ans;
    }
};