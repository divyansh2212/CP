// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> addToArrayForm(vector<int> &num, int k)
    {
        string s2 = to_string(k);
        int j = s2.length() - 1;
        int carry = 0;

        for (int i = num.size() - 1; i >= 0; i--, j--)
        {
            if (j >= 0)
            {
                int curr = num[i] + carry + s2[j] - '0';
                if (curr <= 9)
                    num[i] = curr, carry = 0;
                else
                    num[i] = curr % 10, carry = curr / 10;
            }
            else
            {
                int curr = num[i] + carry;
                if (curr <= 9)
                    num[i] = curr, carry = 0;
                else
                    num[i] = curr % 10, carry = curr / 10;
            }
        }  

        if (carry)
        {
            reverse(num.begin(), num.end());
            num.push_back(carry);
            reverse(num.begin(), num.end());
        }

        return num;
    }
};