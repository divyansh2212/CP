// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<string> removeAnagrams(vector<string> &words)
    {
        vector<string> ans;

        vector<bool> ultimateHash(words.size(), true);

        vector<int> prevhsh(26, 0);
        for (int i = 0; i < words[0].length(); i++)
            prevhsh[words[0][i] - 'a']++;

        for (int i = 1; i < words.size(); i++)
        {
            vector<int> currhsh(26, 0);
            for (int j = 0; j < words[i].length(); j++)
                currhsh[words[i][j] - 'a']++;

            if (currhsh == prevhsh)
                ultimateHash[i] = false;

            prevhsh = currhsh;
        }

        for (int i = 0; i < words.size(); i++)
            if (ultimateHash[i])
                ans.push_back(words[i]);
        return ans;
    }
};