// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int minDeletions(string s)
    {
        int ans = 0;
        vector<int> charCnt(26, 0);
        vector<int> hsh(1e5, 0);
        for (int i = 0; i < s.length(); i++)
            charCnt[s[i] - 'a']++;

        for (int i = 0; i < 26; i++)
        {
            int x = charCnt[i];
            while (x > 0 && hsh[x] != 0)
                x--, ans++;
            if (x > 0)
                hsh[x]++;
        }

        return ans;
    }
};