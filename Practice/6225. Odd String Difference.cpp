// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    string oddString(vector<string> &words)
    {
        vector<vector<int>> differences;

        for (int i = 0; i < words.size(); i++)
        {
            vector<int> curr;
            for (int j = 1; j < words[i].length(); j++)
                curr.push_back(words[i][j] - words[i][j - 1]);
            differences.push_back(curr);
        }

        for (int i = 1; i < differences.size() - 1; i++)
            if (differences[i] != differences[i - 1] && differences[i] != differences[i + 1])
                return words[i];
        if (differences[0] != differences[1])
            return words[0];
        else
            return words[words.size() - 1];
    }
};