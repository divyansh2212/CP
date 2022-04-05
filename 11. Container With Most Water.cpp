// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int i = 0, j = height.size() - 1;

        int area = 0;
        while (i < j)
        {
            int curr = min(height[i], height[j]) * (j - i);
            area = max(area, curr);
            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return area;
    }
};