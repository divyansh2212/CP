// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
    bool static compare(vector<int> &a, vector<int> &b)
    {
        return a[1] < b[1];
    }

public:
    int scheduleCourse(vector<vector<int>> &courses)
    {
        sort(courses.begin(), courses.end(), compare);

        int currTime = 0;
        priority_queue<int> pq;
        for (int i = 0; i < courses.size(); i++)
        {
            currTime += courses[i][0];
            pq.push(courses[i][0]);

            if (currTime > courses[i][1])
            {
                currTime -= pq.top();
                pq.pop();
            }
        }
        return pq.size();
    }
};