// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    bool checkDistances(string s, vector<int> &distance)
    {
        unordered_map<char, int> isAvailable;
        for (int i = 0; i < s.length(); i++)
            isAvailable[s[i]]++;

        for (int i = 0; i < 26; i++)
        {
            char c = char('a' + i);
            if (isAvailable.find(c) == isAvailable.end())
                continue;
            for (int j = 0; j < s.length(); j++)
            {
                for (int k = j + 1; k < s.length(); k++)
                {
                    if (s[j] == s[k] && s[j] == c)
                    {
                        int dist = k - j - 1;
                        if (dist != distance[i])
                            return false;
                        else
                            break;
                    }
                }
            }
        }
        return true;
    }
};