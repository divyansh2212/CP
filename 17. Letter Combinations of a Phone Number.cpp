// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;

        unordered_map<char, vector<char>> m;
        m['2'] = {'a', 'b', 'c'};
        m['3'] = {'d', 'e', 'f'};
        m['4'] = {'g', 'h', 'i'};
        m['5'] = {'j', 'k', 'l'};
        m['6'] = {'m', 'n', 'o'};
        m['7'] = {'p', 'q', 'r', 's'};
        m['8'] = {'t', 'u', 'v'};
        m['9'] = {'w', 'x', 'y', 'z'};

        for (int i = 0; i < digits.length(); i++)
        {
            for (int j = 0; j < m[digits[i]].size(); j++)
            {
                
            }
        }
    }
};