// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
    {
        vector<string> ans;

        int n = words1.size(), m = words2.size();
        vector<int> hshwords2(26, 0);

        for (int i = 0; i < m; i++)
        {
            vector<int> curr(26, 0);
            for (int j = 0; j < words2[i].length(); j++)
                curr[words2[i][j] - 'a']++;
            for (int j = 0; j < 26; j++)
                hshwords2[j] = max(hshwords2[j], curr[j]);
        }

        for (int i = 0; i < n; i++)
        {
            vector<int> hsh(26, 0);
            for (int j = 0; j < words1[i].length(); j++)
                hsh[words1[i][j] - 'a']++;

            bool flag = true;
            for (int j = 0; j < 26; j++)
                if (hshwords2[j] > hsh[j])
                    flag = false;

            if (flag)
                ans.push_back(words1[i]);
        }

        return ans;
    }
};