// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int minimumRounds(vector<int> &tasks)
    {
        sort(tasks.begin(), tasks.end());
        bool flag = true;
        for (int i = 1; i < tasks.size(); i++)
            if (tasks[i] == tasks[i - 1])
                flag = false;

        if (flag)
            return -1;

        map<int, int> hsh;

        for (int i = 0; i < tasks.size(); i++)
            hsh[tasks[i]]++;

        int ans = 0;
        for (auto &e : hsh)
        {
            if (e.second % 3 == 0)
                ans += e.second / 3;

            else if (e.second == 1)
                return -1;

            else if (e.second == 2)
                ans++;

            else if (e.second == 4 || e.second == 5)
                ans += 2;

            else if (e.second % 3 == 1)
            {
                ans += 2;
                e.second -= 2;
                ans += e.second / 3;
            }

            else if (e.second % 3 == 2)
            {
                ans += 1;
                e.second -= 2;
                ans += e.second / 3;
            }
        }

        return ans;
    }
};