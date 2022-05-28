// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    string largestWordCount(vector<string> &messages, vector<string> &senders)
    {
        map<string, int> m;
        for (int i = 0; i < senders.size(); i++)
            m[senders[i]] = 0;

        for (int i = 0; i < messages.size(); i++)
        {
            int cnt = 0;
            if (messages[i].size())
                ++cnt;
            for (int j = 0; j < messages[i].size(); j++)
                if (messages[i][j] == ' ')
                    cnt++;

            m[senders[i]] += cnt;
        }

        string ans = "";
        int curr = INT_MIN;
        for (auto &it : m)
        {
            if (it.second > curr)
            {
                ans = it.first;
                curr = it.second;
            }
            else if (it.second == curr)
                if (it.first > ans)
                    ans = it.first;
        }

        return ans;
    }
};