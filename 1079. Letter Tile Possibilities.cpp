// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    void helper(string &tiles, int idx, int &ans)
    {
        ans++;
        for (int i = idx; i < tiles.length(); i++)
        {
            swap(tiles[i], tiles[idx]);
            helper(tiles, idx + 1, ans);
        }
    }

public:
    int numTilePossibilities(string tiles)
    {
        int ans = 0;
        set<string> res;
        helper(tiles, 0, ans);
        return ans - 1;
    }
};