// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int removePalindromeSub(string s)
    {
        int start = 0, end = s.length() - 1;
        int ans = 1;
        while (start <= end)
        {
            if (s[start] != s[end])
                return 2;
            start++, end--;
        }
        return 1;
    }
};