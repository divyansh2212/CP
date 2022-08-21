// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    string largestPalindromic(string num)
    {
        int len = 0;
        vector<int> hsh(10, 0);
        for (int i = 0; i < num.length(); i++)
            hsh[num[i] - '0']++;

        int highest = -1;
        for (int i = 0; i < 10; i++)
        {
            len += (hsh[i] / 2) * 2;
            if (hsh[i] % 2)
                hsh[i]--, highest = i;
        }

        if (highest > -1)
            len++;

        string ans(len, 'x');
        int i = 0, j = len - 1;
        for (int k = 9; k >= 0 && i <= j; k--)
        {
            while (hsh[k] > 0)
            {
                ans[i] = char(k + '0'), ans[j] = char(k + '0');
                i++, j--, hsh[k] -= 2;
            }
        }

        if (ans[len / 2] == 'x')
            ans[len / 2] = char(highest + '0');

        if (ans[0] == '0')
        {
            if (highest > -1)
                return to_string(highest);
            return "0";
        }
        if (ans[0] == 'x')
            return to_string(highest);

        return ans;
    }
};