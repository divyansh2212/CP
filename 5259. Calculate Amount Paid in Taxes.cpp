// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    double calculateTax(vector<vector<int>> &brackets, int income)
    {
        double ans = 0.00000;

        for (int i = 0; i < brackets.size() && income > 0; i++)
        {
            int amt;
            if (i == 0)
                amt = min(brackets[i][0], income);
            else
                amt = min(brackets[i][0] - brackets[i - 1][0], income);
            ans += amt * (brackets[i][1] / 100.00) * 1.0;
            income -= amt;
        }

        return ans;
    }
};