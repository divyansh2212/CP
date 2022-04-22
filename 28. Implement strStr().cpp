// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.length() == 0)
            return 0;

        if (needle.length() > haystack.length())
            return -1;

        int n = haystack.length(), m = needle.length();

        int i = 0;
        while (i < n)
        {
            string ss = haystack.substr(i, m);
            if (ss == needle)
                return i;
            i++;
        }
        return -1;
    }
};