// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    char repeatedCharacter(string s)
    {
        vector<int> hsh(26, 0);
        for (int i = 0; i < s.length(); i++)
        {
            hsh[s[i] - 'a']++;
            if (hsh[s[i] - 'a'] == 2)
                return s[i];
        }
        return 'a';
    }
};