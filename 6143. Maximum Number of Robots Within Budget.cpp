// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int maximumRobots(vector<int> &chargeTimes, vector<int> &runningCosts, long long budget)
    {
        ll n = chargeTimes.size(), i = 0, j = 0;
        ll currRunCost = 0, ans = 0, currCost = 0;
        priority_queue<ll> pq;
        priority_queue<ll> to_remove;

        while (j < n)
        {
            while (to_remove.size() && pq.size() && to_remove.top() == pq.top())
            {
                to_remove.pop();
                pq.pop();
            }
            currRunCost += runningCosts[j];
            pq.push(chargeTimes[j]);
            currCost = pq.top() + ((j - i + 1) * currRunCost);
            if (currCost <= budget)
                ans = max(ans, (j - i + 1));
            else
            {
                if (chargeTimes[i] == pq.top())
                    pq.pop();
                else
                    to_remove.push(chargeTimes[i]);
                currRunCost -= runningCosts[i];
                i++;
            }
            j++;
        }

        return (int)ans;
    }
};