// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int minPartitions(string n)
    {
        int ans = 0;
        for (int i = 0; i < n.length(); i++)
            ans = max(ans, n[i] - '0');

        return ans;
    }
};