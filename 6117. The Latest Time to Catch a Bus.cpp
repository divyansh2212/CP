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

        // for (int i = buses.size() - 1; i >= 0; i--)
        // {
        //     int prev;
        //     if (i > 0)
        //         prev = buses[i - 1];
        //     else
        //         prev = 0;
        //     vector<int> curr;
        //     for (int p = passengers.size() - 1; p >= 0; p--)
        //     {
        //         if (passengers[p] < buses[i] && passengers[p] >= prev)
        //             curr.push_back(passengers[p]);
        //         else
        //             break;
        //     }

        //     int currcapacity = 0;
        //     for (int j = curr.size() - 1; j >= 0; j--)
        //     {
        //         currcapacity++;
        //         if (currcapacity == capacity - 1)
        //         {
        //             if (j + 1 < curr.size() && curr[j + 1] == curr[j] - 1)
        //                 break;
        //             else if (curr[j] - 1 < prev)
        //                 break;
        //             return curr[j] - 1;
        //         }
        //     }
        // }
        // return 1;

        int lo = 1, hi = buses[buses.size() - 1], mid;

        int time = 1;
        while (lo<=hi)
        {
            mid = lo + ((hi - lo)/2);
            if(check)
        }
        

    }
};