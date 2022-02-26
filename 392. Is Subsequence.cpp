#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int prev = -1;
        for (int i = 0; i < s.length(); i++)
        {
            bool flag = true;
            for (int j = prev + 1; j < t.length(); j++)
            {
                if (s[i] == t[j])
                {
                    prev = j;
                    flag = false;
                    break;
                }
            }
            if (flag)
                return false;
        }
        return true;
    }
};