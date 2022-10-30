// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    long long makeIntegerBeautiful(long long n, int target)
    {
        long long digitSum = 0, duplicate = n;

        while (duplicate > 0)
        {
            digitSum += (duplicate % 10);
            duplicate /= 10;
        }

        if (digitSum <= target)
            return 0;

        string s = to_string(n);
        reverse(s.begin(), s.end());

        int i = 0;

        while (i < s.length() && digitSum > target)
        {
            if (s[i] == '0')
            {
                i++;
                continue;
            }
            digitSum -= (s[i] - '0');
            s[i] = '0';
            while (1)
            {
                if (i + 1 < s.length() && s[i + 1] <= '8')
                {
                    s[i + 1] = char(s[i + 1] + 1), digitSum++;
                    break;
                }
                else if (i + 1 == s.length())
                {
                    s.push_back('1');
                    digitSum++;
                    break;
                }
                else
                {
                    digitSum -= (s[i + 1] - '0');
                    s[i + 1] = '0';
                    i++;
                }
            }
        }

        reverse(s.begin(), s.end());

        ll ans = stoll(s);
        return ans - n;
    }
};