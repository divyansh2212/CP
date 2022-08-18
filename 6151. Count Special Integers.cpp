// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int factorial(int n)
    {
        if (n == 0)
            return 1;
        return n * factorial(n - 1);
    }

    int countNum(int n)
    {
        if (n > 10)
            return 0;
        return (9 * factorial(9) / factorial(10 - n));
    }

public:
    int countSpecialNumbers(int n)
    {
        if (n < 10)
            return n;
        int ans = 0, c = n;
        if (n >= 9)
            ans += countNum(1), n = 9;
        if (n >= 99)
            ans += countNum(2), n = 99;
        if (n >= 999)
            ans += countNum(3), n = 999;
        if (n >= 9999)
            ans += countNum(4), n = 9999;
        if (n >= 99999)
            ans += countNum(5), n = 99999;
        if (n >= 999999)
            ans += countNum(6), n = 999999;
        if (n >= 9999999)
            ans += countNum(7), n = 9999999;
        if (n >= 99999999)
            ans += countNum(8), n = 99999999;
        if (n >= 999999999)
            ans += countNum(9), n = 999999999;

        for (int i = n; i <= c; i++)
        {
            ans++;
            vector<bool> hsh(10, 0);
            int cpy = i;
            while (cpy)
            {
                int rem = cpy % 10;
                cpy = cpy / 10;
                if (hsh[rem])
                {
                    ans--;
                    break;
                }
                hsh[rem] = true;
            }
        }

        return ans - 1;
    }
};  