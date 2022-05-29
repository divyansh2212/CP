// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    string discountPrices(string s, int discount)
    {
        string ans = "";

        int i = 0;
        while (i < s.length())
        {
            if (s[i] != '$')
                ans.push_back(s[i]);
            else
            {
                ans.push_back(s[i]);
                i++;

                string num = "";
                while (i < s.length())
                {
                    if (s[i] == '.')
                        num.push_back(s[i]);
                    else
                    {
                        int n = s[i] - '0';
                        if (n >= 0 && n <= 9)
                            num.push_back(s[i]);
                        else
                        {
                            i--;
                            break;
                        }
                    }
                    i++;
                }

                float newnum = stof(num);
                if (num.length())
                    newnum -= (discount / 100.00) * newnum;

                newnum = ceil(newnum * 100.0) / 100.0;
                num = to_string(newnum);
                ans += num;
            }
            i++;
        }
        return ans;
    }
};