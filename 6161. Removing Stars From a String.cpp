// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    string removeStars(string s)
    {
        string ans = "";
        int n = s.length();
        vector<bool> hsh(n, false);

        int stars = 0, i;
        for (i = n - 1; i >= 0; i--)
        {
            if (s[i] == '*')
                stars++, hsh[i] = true;
            else if(stars)
                stars--, hsh[i] = true;
        }

        for (i = 0; i < n; i++)
            if (hsh[i] == false)
                ans.push_back(s[i]);

        return ans;
    }
};