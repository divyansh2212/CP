// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        int n = s.length();

        if (n == 1)
            return false;

        for (int i = 0; i < s.length() / 2; i++)
        {
            string sub = s.substr(0, i + 1);
            string curr = sub;
            if (s.length() % curr.length())
                continue;
            while (curr.length() <= n)
            {
                if (curr == s)
                    return true;
                curr += sub;
            }
        }
        return false;
    }
};