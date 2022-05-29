// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int rearrangeCharacters(string s, string target)
    {
        vector<int> targethsh(26, 0);
        for (int i = 0; i < target.length(); i++)
            targethsh[target[i] - 'a']++;

        vector<int> sHsh(26, 0);
        for (int i = 0; i < s.length(); i++)
            sHsh[s[i] - 'a']++;

        int ans = INT_MAX;

        for (int i = 0; i < 26; i++)
            if (targethsh[i])
                ans = min(ans, sHsh[i] / targethsh[i]);

        if (ans == INT_MAX)
            ans = 0;

        return ans;
    }
};