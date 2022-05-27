// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int numberOfSteps(int num)
    {
        if (num == 0)
            return num;
        int cnt = log2(num);

        for (int i = 0; i < 32; i++)
            if (num & (1 << i))
                cnt += 1;
        return cnt;
    }
};