// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int maxProduct(vector<string> &words)
    {
        int n = words.size();
        vector<int> masks(n);

        int ans = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < words[i].length(); j++)
                masks[i] = (masks[i] | (1 << (words[i][j] - 'a')));

        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if ((masks[i] & masks[j]) == 0)
                    ans = max(ans, int(words[i].length() * words[j].length()));

        return ans;
    }
};