// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool isSubstring(string s1, string s2)
    {
        int M = s1.length();
        int N = s2.length();

        for (int i = 0; i <= N - M; i++)
        {
            int j;

            for (j = 0; j < M; j++)
                if (s2[i + j] != s1[j])
                    break;

            if (j == M)
                return true;
        }

        return false;
    }

    bool check(string s, unordered_map<char, vector<char>> &mp, int idx, string sub)
    {
        if (isSubstring(sub, s))
            return true;

        if (idx == sub.length())
            return false;

        bool flag1 = check(s, mp, idx + 1, sub);

        bool flag2 = false;
        if (mp.find(sub[idx]) != mp.end())
        {
            for (int i = 0; i < mp[sub[idx]].size(); i++)
            {
                sub[idx] = mp[sub[idx]][i];
                flag2 = check(s, mp, idx + 1, sub);
            }
        }

        return (flag1 | flag2);
    }

    bool matchReplacement(string s, string sub, vector<vector<char>> &mappings)
    {
        if (isSubstring(sub, s))
            return true;

        unordered_map<char, vector<char>> mp;
        for (int i = 0; i < mappings.size(); i++)
        {
            if (mp.find(mappings[i][0]) != mp.end())
                mp[mappings[i][0]].push_back(mappings[i][1]);
            else
                mp[mappings[i][0]] = {mappings[i][1]};
        }

        return check(s, mp, 0, sub);
    }
};