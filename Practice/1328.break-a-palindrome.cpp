/*
 * @lc app=leetcode id=1328 lang=cpp
 *
 * [1328] Break a Palindrome
 */

// @lc code=start
// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    string breakPalindrome(string palindrome)
    {
        if (palindrome.length() == 1)
            return "";

        int n = palindrome.length();
        bool flag = false;
        int i = 0;
        while (flag == false && i < n / 2)
        {
            if (palindrome[i] != 'a')
                palindrome[i] = 'a', flag = true;

            i++;
        }
        if (flag)
            return palindrome;
        palindrome[n - 1] = 'b';
        return palindrome;
    }
};
// @lc code=end
