// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] >= 0 && digits[i] <= 8)
            {
                digits[i]++;
                return digits;
            }
            else
                digits[i] = 0;
        }
        reverse(digits.begin(), digits.end());
        digits.push_back(1);
        reverse(digits.begin(), digits.end());

        return digits;
    }
};