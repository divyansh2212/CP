// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool f(vector<int> &matchsticks, int idx, int &target, int k, vector<bool> &visited, int curr)
    {
        if (k == 0)
            return true;
        if (curr == target)
            return f(matchsticks, 0, target, k - 1, visited, 0);

        bool flag = false;
        for (int i = idx; i < matchsticks.size(); i++)
        {
            if (visited[i] || curr + matchsticks[i] > target)
                continue;
            visited[i] = true;
            flag |= f(matchsticks, i + 1, target, k, visited, curr + matchsticks[i]);
            visited[i] = false;
        }
        return flag;
    }

    bool makesquare(vector<int> &matchsticks)
    {
        if (matchsticks.size() < 4)
            return false;
        int n = matchsticks.size();
        int sum = accumulate(matchsticks.begin(), matchsticks.end(), 0);
        if (sum % 4)
            return false;

        int target = sum / 4;
        vector<bool> visited(n, false);
        return f(matchsticks, 0, target, 4, visited, 0);
    }
};