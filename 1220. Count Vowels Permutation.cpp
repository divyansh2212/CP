#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

class Solution
{ // a -- 1, e -- 2, i -- 3, o -- 4, u -- 5
public:
    int countVowelPermutation(int n)
    {
        vector<int> prev(6, 0);

        for (int i = 0; i < 6; i++)
            prev[i] = 1;

        for (int idx = 1; idx <= n; idx++)
        {
            vector<int> curr(6, 0);
            for (int last = 5; last >= 0; last--)
            {
                ll ans = 0;
                if (last == 0)
                    ans += 0LL + prev[1] + prev[2] + prev[4] + prev[5] + prev[3];
                else if (last == 1)
                    ans += 0LL + prev[2];
                else if (last == 2)
                    ans += 0LL + prev[1] + prev[3];
                else if (last == 3)
                    ans += 0LL + prev[1] + prev[2] + prev[4] + prev[5];
                else if (last == 4)
                    ans += 0LL + prev[3] + prev[5];
                else
                    ans += 0LL + prev[1];

                curr[last] = ans % mod;
            }
            prev = curr;
        }

        return prev[0];
    }
};