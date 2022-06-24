// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int furthestBuilding(vector<int> &heights, int bricks, int ladders)
    {
        int n = heights.size();

        priority_queue<int> pq;

        for (int i = 0; i < n - 1; i++)
        {
            if (heights[i] >= heights[i + 1])
                continue;

            int diff = heights[i + 1] - heights[i];
            bricks -= diff;
            pq.push(diff);

            if (bricks < 0)
            {
                if (ladders)
                {
                    ladders--;
                    bricks += pq.top();
                    pq.pop();
                }
                else
                    return i;
            }
        }

        return n - 1;
    }
};