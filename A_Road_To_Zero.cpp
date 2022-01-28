#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long ans1 = 0, ans2 = 0;
        long long a, b, x, y;
        cin >> x >> y;
        cin >> a >> b;

        ans1 += abs(x - y) * a;
        long long xy = min(x, y);
        ans1 += min(2 * xy * a, xy * b);

        ans2 += abs(x - y) * a;
        xy = max(x, y);
        ans2 += min(2 * xy * a, xy * b);

        cout << min(ans1, ans2) << endl;
    }

    return 0;
}