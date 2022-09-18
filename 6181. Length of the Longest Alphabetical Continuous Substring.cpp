// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    // int getEndingIndex(string str, int n, int i)
    // {
    //     i++;
    //     while (i < n)
    //     {
    //         char curr = str[i], prev = str[i - 1];

    //         if (curr - prev == 1)
    //             i++;
    //         else
    //             break;
    //     }

    //     return i - 1;
    // }

public:
    int longestContinuousSubstring(string s)
    {
        int len = 0, n = s.length(), i = 1;

        while (i < n)
        {
            int j = i + 1;
            while (j < n)
            {
                char curr = s[j], prev = s[j - 1];

                if (curr - prev == 1)
                    j++;
                else
                    break;
            }
            int end = j - 1;

            len = max(end - i + 1, len);
            i = end + 1;
        }

        bool flag = true;
        for (int i = 1; i < n && flag; i++)
            if (s[i] - s[i - 1] != 1)
                flag = false;

        if (flag)
            len = n;

        return len;
    }
};