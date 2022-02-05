#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<int> boys(n);
    // unordered_map<int, int> boys_pnts;
    unordered_map<int, int> girls_pnts;
    for (int i = 0; i < n; i++)
    {
        cin >> boys[i];
        // boys_pnts[boys[i]]++;
    }
    sort(boys.begin(), boys.end());
    reverse(boys.begin(), boys.end());

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        girls_pnts[x]++;
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (girls_pnts[boys[i] + 1])
        {
            girls_pnts[boys[i] + 1]--;
            ans++;
        }
        else if (girls_pnts[boys[i]])
        {
            girls_pnts[boys[i]]--;
            ans++;
        }
        else if (girls_pnts[boys[i] - 1])
        {
            girls_pnts[boys[i] - 1]--;
            ans++;
        }
    }
    cout << ans;
    return 0;
}