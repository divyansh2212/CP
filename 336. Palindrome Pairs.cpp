// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    vector<vector<int>> palindromePairs(vector<string> &words)
    {
        int n = words.size();
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                if (words[j] != "" && words[i] != "" && words[i][0] != words[j][words[j].length() - 1])
                    continue;

                string concatenated = words[i] + words[j];

                int l = 0, r = concatenated.length() - 1, flag = 1;
                while (l <= r && flag)
                {
                    if (concatenated[l] != concatenated[r])
                        flag = 0;
                    l++, r--;
                }
                if (flag)
                    ans.push_back({i, j});
            }
        }

        return ans;
    }
};