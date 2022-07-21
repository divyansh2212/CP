// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// class Solution
// {
//     // int f(string &s, string &t, int idx1, int idx2, vector<vector<int>> &dp)
//     // {
//     //     if (idx2 == 0)
//     //         return true;
//     //     if (idx1 == 0)
//     //         return false;
//     //     if (dp[idx1][idx2] != -1)
//     //         return dp[idx1][idx2];
//     //     if (s[idx1 - 1] == t[idx2 - 1])
//     //         return dp[idx1][idx2] = f(s, t, idx1 - 1, idx2 - 1, dp);
//     //     else
//     //         return dp[idx1][idx2] = f(s, t, idx1 - 1, idx2, dp);
//     // }

// public:
//     int numMatchingSubseq(string s, vector<string> &words)
//     {
//         int ans = 0, n = s.length(), m;
//         for (int i = 0; i < words.size(); i++)
//         {
//             string t = words[i];
//             m = t.length();
//             vector<int> prev(m + 1, 0);
//             for (int idx1 = 0; idx1 <= n; idx1++)
//                 prev[0] = 1;

//             for (int idx1 = 1; idx1 < n + 1; idx1++)
//             {
//                 vector<int> curr(m + 1, 0);
//                 for (int idx2 = 1; idx2 < m + 1; idx2++)
//                 {
//                     if (s[idx1 - 1] == t[idx2 - 1])
//                         curr[idx2] |= prev[idx2 - 1];
//                     else
//                         curr[idx2] |= prev[idx2];
//                 }
//                 prev = curr;
//                 if (prev[m] == 1)
//                     ans++;
//             }
//         }
//         return ans;
//     }
// };

class Solution
{
public:
    int numMatchingSubseq(string s, vector<string> &words)
    {
        unordered_map<char, vector<int>> mp;
        for (int i = 0; i < s.length(); i++)
            mp[s[i]].push_back(i);

        int ans = 0;

        for (int i = 0; i < words.size(); i++)
        {
            string t = words[i];
            int last = -1, flag = 1;
            for (int j = 0; j < t.length(); j++)
            {
                int currlast = last;
                if (mp.find(t[j]) != mp.end())
                {
                    for (int k = 0; k < mp[t[j]].size(); k++)
                    {
                        if (mp[t[j]][k] > last)
                        {
                            last = mp[t[j]][k];
                            break;
                        }
                    }
                    if (currlast == last)
                    {
                        flag = 0;
                        break;
                    }
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            ans += flag;
        }
        return ans;
    }
};