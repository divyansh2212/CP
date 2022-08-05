// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        vector<int> ans;

        vector<int> hsh(26, 0);
        for (int i = 0; i < s.length(); i++)
            hsh[s[i] - 'a'] = i;

        int last = -1, highest = hsh[s[0] - 'a'];

        int i = 0;
        while (i < s.length())
        {
            while (i < highest)
            {
                highest = max(highest, hsh[s[i] - 'a']);
                i++;
            }

            ans.push_back(i - last);
            last = i;
            i++;
            if (i < s.length())
                highest = hsh[s[i] - 'a'];
        }

        return ans;
    }
};