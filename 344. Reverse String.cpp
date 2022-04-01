// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        // reverse(s.begin(), s.end());
        vector<char> new_s(s.size());
        for (int i = 0; i < s.size(); i++)
            new_s[i] = s[s.size() - i - 1];
        s = new_s;
    }
};