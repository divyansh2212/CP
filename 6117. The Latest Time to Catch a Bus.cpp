// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int latestTimeCatchTheBus(vector<int> &buses, vector<int> &passengers, int capacity)
    {
        sort(buses.begin(), buses.end());
        sort(passengers.begin(), passengers.end());

        int ans = min(passengers[0] - 1, buses[buses.size() - 1]), i = 0, idx = 0;

        for (i = 0; i < buses.size() && idx < passengers.size(); i++)
        {
            int cap = capacity;
            while (idx < passengers.size() && passengers[idx] <= buses[i] && cap > 0)
            {
                if (idx > 0 && passengers[idx] - passengers[idx - 1] > 1)
                    ans = passengers[idx] - 1;
                cap--, idx++;
            }
            if (cap && idx > 0 && passengers[idx - 1] != buses[i])
                ans = buses[i];
        }
        if (i != buses.size())
            ans = buses[buses.size() - 1];

        return ans;
    }
};