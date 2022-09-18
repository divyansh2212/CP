// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    vector<int> sumPrefixScores(vector<string> &words)
    {
        int n = words.size();
        vector<int> ans(n, 0);

        for (int i = 0; i < n; i++)
        {
            string curr = "";
            for (int j = 0; j < words[i].length(); j++)
            {
                curr += words[i][j];
                int sz = curr.length();
                for (int k = 0; k < n; k++)
                    if (words[k].length() >= sz && curr == words[k].substr(0, sz))
                        ans[i]++;
            }
        }

        return ans;
    }
};