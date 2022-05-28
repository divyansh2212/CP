// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool digitCount(string num)
    {
        vector<int> hsh(11, 0);

        for (int i = 0; i < num.length(); i++)
            hsh[num[i] - '0']++;

        for (int i = 0; i < num.length(); i++)
        {
            if (hsh[i] == num[i] - '0')
                continue;
            return false;
        }
        return true;
    }
};