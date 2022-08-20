// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int secondsToRemoveOccurrences(string s)
    {
        int ans = 0, n = s.length();

        while (1)
        {
            bool flag = false;
            int i = 0;
            while (i < n)
            {
                if (s[i] == '0' && i + 1 < n && s[i + 1] == '1')
                {
                    swap(s[i], s[i + 1]);
                    flag = true, i += 2;
                }
                else
                    i++;
            }
            if (flag)
                ans++;
            else
                break;
        }
        return ans;
    }
};