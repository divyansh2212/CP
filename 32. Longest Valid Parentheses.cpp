// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int longestValidParentheses(string s)
    {
        int ans = 0, left = 0, right = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                left++;
            else
                right++;

            if (left == right)
                ans = max(ans, 2 * left);
            else if (right >= left)
                left = right = 0;
        }

        left = right = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '(')
                left++;
            else
                right++;

            if (left == right)
                ans = max(ans, 2 * left);
            else if (left >= right)
                left = right = 0;
        }

        return ans;
    }
};