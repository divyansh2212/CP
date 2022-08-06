// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    long long taskSchedulerII(vector<int> &tasks, int space)
    {
        ll days = 0;
        map<int, ll> mp;

        for (int i = 0; i < tasks.size(); i++)
        {
            if (mp.find(tasks[i]) == mp.end())
                mp[tasks[i]] = days;
            else
            {
                if (days - mp[tasks[i]] < space + 1)
                    days += space + 1 - (days - mp[tasks[i]]);
                mp[tasks[i]] = days;
            }
            days++;
        }

        return days;
    }
};