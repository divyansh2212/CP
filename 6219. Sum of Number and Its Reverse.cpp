// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    int mirror(int s, int l)
    {
        // swap the numbers so that s is always smaller than l
        if (l > s)
        {
            int temp = s;
            s = l;
            l = temp;
        }

        int rev = 0;
        while (s > 0)
        {
            rev *= 10;
            rev += s % 10;
            s /= 10;
        }

        return rev == l ? 1 : 0;
    }

public:
    bool sumOfNumberAndReverse(int num)
    {
        for (int i = 0; i <= num; i++)
        {
            int x1 = i;
            int x2 = num - i;

            if (mirror(x1, x2))
                return true;
        }
        return false;
    }
};