// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool isPossible(vector &target)
    {
        long long sum = 0;
        for (auto i : target)
            sum += i;
        priority_queue pq(target.begin(), target.end());

        while (pq.top() != 1)
        {
            sum -= pq.top();
            if (sum == 0 || sum >= pq.top())
                return false;
            long old = pq.top() % sum;
            if (sum != 1 && old == 0)
                return false;
            pq.pop();
            pq.push(old);
            sum += (old);
        }
        return true;
    }
};