// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int maximumGroups(vector<int> &grades)
    {
        int ans = 0;

        int currCount = 1, totalCount = 0, n = grades.size();

        while (1)
        {
            if (totalCount <= n)
                totalCount += currCount;
            else
                break;
            currCount++, ans++;
        }
        return ans - 1;
    }
};