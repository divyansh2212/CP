// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int partitionString(string s)
    {

        map<char, int> mp;
        int ans = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (mp.find(s[i]) != mp.end())
            {
                ans++;
                mp.clear();
                mp[s[i]]++;
            }
            else
                mp[s[i]]++;
        }

        return ans;
    }
};