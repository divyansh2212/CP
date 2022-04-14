// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<int> heights(n);
    int minH = INT_MAX, minidx, maxH = INT_MIN, maxidx;
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
        if (minH >= heights[i])
            minH = min(minH, heights[i]), minidx = i;
        if (maxH < heights[i])
            maxH = max(maxH, heights[i]), maxidx = i;
    }

    int ans = 0;
    if (minidx != n - 1 && maxidx != 0)
    {
        ans = n - 1 - minidx + maxidx - 1;
        if (maxidx < minidx)
            ans = maxidx + n - 1 - minidx;
    }

    else if (minidx != n - 1)
        ans = n - 1 - minidx;

    else if (maxidx != 0)
        ans = maxidx;

    cout << ans;
    return 0;
}