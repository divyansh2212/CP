    // Jai Shree Babosa!

    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define inf INT_MAX
    const int mod = 1e9 + 7;

    bool isPossible(ll mid, vector<ll> &positions, int c)
    {
        ll last = -1;
        for (int i = 0; i < positions.size(); i++)
            if (positions[i] - last >= mid || last == -1)
                c--, last = positions[i];

        return (c <= 0);
    }

    void solve()
    {
        int n, c;
        cin >> n >> c;

        vector<ll> positions(n);
        for (int i = 0; i < n; i++)
            cin >> positions[i];

        sort(positions.begin(), positions.end());

        ll lo = 0, hi = positions[n - 1] - positions[0], mid, ans;

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (isPossible(mid, positions, c))
                lo = mid + 1, ans = mid;
            else
                hi = mid - 1;
        }
        cout << ans << endl;
    }
    int main()
    {
        int t;
        cin >> t;
        while (t--)
            solve();
        return 0;
    }