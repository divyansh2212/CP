// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    string robotWithString(string s)
    {
        map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
            mp[s[i]]++;

        string sorted = s;
        sort(sorted.begin(), sorted.end());

        string t = "", ans = "";

        int idx = 0, i = 0;
        while (i < s.length())
        {
            if (idx < s.length() && mp[sorted[idx]] == 0)
                idx++;

            else if (t.length() && idx < s.length() && t.back() <= sorted[idx])
            {
                char cc = t.back();
                t.pop_back();
                ans.push_back(cc);
            }

            else if (i < s.length() && s[i] == sorted[idx])
            {
                ans.push_back(s[i]);
                mp[s[i]]--;
                idx++, i++;
            }

            else
            {
                t.push_back(s[i]);
                mp[s[i]]--;
                i++;
            }
        }

        while (t.length())
        {
            char cc = t.back();
            t.pop_back();
            ans.push_back(cc);
        }

        return ans;
    }
};