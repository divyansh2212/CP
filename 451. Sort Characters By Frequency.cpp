// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> charactersHash;

        for (int i = 0; i < s.length(); i++)
            charactersHash[s[i]]++;

        string ans = "";
        priority_queue<pair<int, char>> pq;

        for (auto &it : charactersHash)
            pq.push({it.second, it.first});

        while (!pq.empty())
        {
            auto top = pq.top();
            pq.pop();
            while (top.first--)
                ans.push_back(char(top.second));
        }

        return ans;
    }
};