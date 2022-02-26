#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> points(3);
        for (int i = 0; i < 3; i++)
            cin >> points[i].first >> points[i].second;

        ll y1 = points[1].second, y0 = points[0].second, y2 = points[2].second, x1 = points[1].first, x0 = points[0].first, x2 = points[2].first;

        ll ans = 0;
        if (y0 == y1 && y1 != 0)
            ans = max(ans, abs(x0 - x1));
        if (y1 == y2 && y1 != 0)
            ans = max(ans, abs(x2 - x1));
        if (y0 == y2 && y0 != 0)
            ans = max(ans, abs(x0 - x2));

        cout << fixed << (double)ans  << setprecision(5) << endl;
    }
    return 0;
}