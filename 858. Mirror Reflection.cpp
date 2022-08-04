// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int mirrorReflection(int p, int q)
    {

        while ((p % 2 == 0) && (q % 2 == 0))
            p /= 2, q /= 2;

        if ((p % 2) == 0 && (q % 2) != 0)
            return 2;

        if ((p % 2) != 0 && (q % 2) != 0)
            return 1;

        return 0;
    }
};