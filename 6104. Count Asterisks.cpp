// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int countAsterisks(string s)
    {
        int stars = 0;
        vector<int> bars;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '*')
                stars++;
            if (s[i] == '|')
                bars.push_back(i);
        }

        for (int i = 0; i < bars.size(); i += 2)
        {
            if (i + 1 < bars.size())
            {
                for (int j = bars[i]; j < bars[i + 1]; j++)
                {
                    if (s[j] == '*')
                        stars--;
                }
            }
        }

        return stars;
    }
};