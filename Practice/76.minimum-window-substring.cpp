/*
 * @lc app=leetcode id=76 lang=cpp
 *
 * [76] Minimum Window Substring
 */
// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

// @lc code=start
class Solution
{
public:
    string minWindow(string s, string t)
    {
        if (t.length() > s.length())
            return "";

        vector<int> uppercase(26, 0), lowercase(26, 0);
        vector<int> sHashUpper(26, 0), sHashLower(26, 0), tHashUpper(26, 0), tHashLower(26, 0);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                uppercase[s[i] - 'A']++;
            else
                lowercase[s[i] - 'a']++;
        }

        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] >= 'A' && t[i] <= 'Z')
            {
                uppercase[t[i] - 'A']--;
                if (uppercase[t[i] - 'A'] < 0)
                    return "";
            }
            else
            {
                lowercase[t[i] - 'a']--;
                if (lowercase[t[i] - 'a'] < 0)
                    return "";
            }
        }

        int i = 0, j = 0;
        string ans(1e5 + 10, 'Z');

        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] >= 'A' && t[i] <= 'Z')
                tHashUpper[t[i] - 'A']++;
            else
                tHashLower[t[i] - 'a']++;
        }

        while (j < s.length())
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
                sHashUpper[s[j] - 'A']++;
            else
                sHashLower[s[j] - 'a']++;

            bool flag = true;
            for (int i = 0; i < 26 && flag; i++)
            {
                if (tHashLower[i] > sHashLower[i])
                    flag = false;
                if (tHashUpper[i] > sHashUpper[i])
                    flag = false;
            }

            if (flag)
            {
                if (j - i + 1 < ans.length())
                    ans = s.substr(i, j - i + 1);
                else if (j - i + 1 == ans.length())
                    ans = min(ans, s.substr(i, j - i + 1));

                flag = true;
                while (j - i + 1 >= t.length() && flag)
                {
                    if (s[i] >= 'A' && s[i] <= 'Z')
                    {
                        sHashUpper[s[i] - 'A']--;
                        if (tHashUpper[s[i] - 'A'] <= sHashUpper[s[i] - 'A'])
                        {
                            if (j - i < ans.length())
                                ans = s.substr(i + 1, j - i);
                            else if (j - i == ans.length())
                                ans = min(ans, s.substr(i + 1, j - i));
                        }
                        else
                            flag = false;
                    }
                    else
                    {
                        sHashLower[s[i] - 'a']--;
                        if (tHashLower[s[i] - 'a'] <= sHashLower[s[i] - 'a'])
                        {
                            if (j - i < ans.length())
                                ans = s.substr(i + 1, j - i);
                            else if (j - i == ans.length())
                                ans = min(ans, s.substr(i + 1, j - i));
                        }
                        else
                            flag = false;
                    }
                    i++;
                }
            }

            j++;
        }

        return ans;
    }
};
// @lc code=end
