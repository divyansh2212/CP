// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int maxArea(int h, int w, vector<int> &horizontalCuts, vector<int> &verticalCuts)
    {
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);

        int initial = 0, mx = -1;
        for (int i = 0; i < horizontalCuts.size(); i++)
        {
            mx = max(mx, horizontalCuts[i] - initial);
            initial = horizontalCuts[i];
        }

        int mxw = -1;
        initial = 0;
        for (int i = 0; i < verticalCuts.size(); i++)
        {
            mxw = max(mxw, verticalCuts[i] - initial);
            initial = verticalCuts[i];
        }

        return (mx * 1LL * mxw) % 1000000007;
    }
};