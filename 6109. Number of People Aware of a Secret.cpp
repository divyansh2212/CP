// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int peopleAwareOfSecret(int n, int delay, int forget)
    {
        ll ans = 0, to_add = 0;

        for (int i = 1; i < n + 1; i++)
        {
            ans += (1 << to_add);
            to_add++;
        }
        
        
    }
};