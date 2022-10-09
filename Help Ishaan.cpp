// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int NthTerm(int n)
    {
        int ans = 1e6;
        vector<int> is_prime(1e6, true);

        for (int i = 2; i < 1e6; i++)
        {
            if (is_prime[i])
            {
                ans = min(ans, abs(n - i));
                for (int j = 2 * i; j < 1e6; j += i)
                    is_prime[j] = false;
            }
        }

        return ans;
    }
};