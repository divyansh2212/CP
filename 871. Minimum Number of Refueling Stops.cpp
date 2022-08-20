// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>> &stations)
    {
        if (startFuel >= target)
            return 0;

        int ans = 0;

        priority_queue<int> pq;

        int j = 0, i = 0;
        for (; i < target;)
        {
            if (startFuel == 0)
            {
                if (pq.empty())
                    return -1;
                startFuel += pq.top();
                ans++;
                pq.pop();
            }

            i += startFuel;
            while (j < stations.size() && i >= stations[j][0])
            {
                pq.push(stations[j][1]);
                j++;
            }
            startFuel = 0;
        }

        return ans;
    }
};