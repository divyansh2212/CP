// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> countRectangles(vector<vector<int>> &rectangles, vector<vector<int>> &points)
    {
        vector<int> ans(points.size(), 0);

        sort(rectangles.begin(), rectangles.end());
        reverse(rectangles.begin(), rectangles.end());

        for (int i = 0; i < points.size(); i++)
        {
            int x = points[i][0], y = points[i][1];

            int lo = 0, hi = rectangles.size() - 1, mid;

            while (lo <= hi)
            {
                mid = lo + (hi - lo) / 2;
                if (rectangles[mid][0] >= x && rectangles[mid][1] >= y)
                    lo = mid + 1;
                else
                    hi = mid - 1;
            }
            if (lo < rectangles.size())
            {
                if (rectangles[lo][0] >= x && rectangles[lo][1] >= y)
                    ans[i] = lo + 1;
                else
                    ans[i] = lo;
            }
            else if (hi < rectangles.size())
            {
                if (rectangles[hi][0] >= x && rectangles[hi][1] >= y)
                    ans[i] = hi + 1;
                else
                    ans[i] = hi;
            }
        }
        return ans;
    }
};