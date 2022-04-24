// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int countLatticePoints(vector<vector<int>> &circles)
    {
        set<pair<int, int>> s;

        for (int i = 0; i < circles.size(); i++)
        {
            int x = circles[i][0], y = circles[i][1], r = circles[i][2];
            s.insert({x, y});

            int rightmost = x + r, leftmost = x - r, topmost = y + r, downmost = y - r;

            for (int xi = leftmost; xi <= rightmost; xi++)
            {
                for (int yi = downmost; yi <= topmost; yi++)
                {
                    double dist = sqrt(((x - xi) * (x - xi)) + ((y - yi) * (y - yi)));
                    if (dist <= r)
                        s.insert({xi, yi});
                }
            }
        }
        return s.size();
    }
};