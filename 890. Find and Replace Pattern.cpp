// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    vector<string> findAndReplacePattern(vector<string> &words, string pattern)
    {
        vector<string> ans;

        for (int i = 0; i < words.size(); i++)
        {
            vector<int> hsh(26, 0);
            map<char, char> mp;
            bool flag = true;
            for (int j = 0; j < words[i].length(); j++)
            {
                if (mp.find(words[i][j]) == mp.end() && hsh[pattern[j] - 'a'] == 0)
                    mp[words[i][j]] = pattern[j], hsh[pattern[j] - 'a'] = 1;
                else if (mp.find(words[i][j]) != mp.end() && mp[words[i][j]] != pattern[j])
                    flag = false;
                else if (mp.find(words[i][j]) == mp.end() && hsh[pattern[j] - 'a'])
                    flag = false;
            }
            if (flag)
                ans.push_back(words[i]);
        }

        return ans;
    }
};