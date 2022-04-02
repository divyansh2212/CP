// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool validPalindrome(string s)
    {
        bool flag = true;
        int idx1, idx2;
        for (int i = 0; i <= s.length() / 2; i++)
        {
            if (s[i] != s[s.length() - 1 - i])
            {
                flag = false;
                idx1 = i, idx2 = s.length() - 1 - i;
                break;
            }
        }
        if (flag)
            return true;
        string new_s = s.substr(0, idx1) + s.substr(idx1 + 1);
        flag = true;
        for (int i = 0; i <= new_s.length() / 2; i++)
        {
            if (new_s[i] != new_s[new_s.length() - 1 - i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            return true;
        new_s = s.substr(0, idx2) + s.substr(idx2 + 1);
        flag = true;
        for (int i = 0; i <= new_s.length() / 2; i++)
        {
            if (new_s[i] != new_s[new_s.length() - 1 - i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            return true;
        return false;
    }
};