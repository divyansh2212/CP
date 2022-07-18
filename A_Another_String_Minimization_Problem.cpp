// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
const int M = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    string ans(m + 1, 'B');

    for (int i = 0; i < n; i++)
    {
        int idx1 = arr[i], idx2 = m + 1 - arr[i];
        if (ans[idx1] == 'B' && ans[idx2] == 'B')
        {
            if (idx1 <= idx2)
                ans[idx1] = 'A';
            else
                ans[idx2] = 'A';
        }
        else if (ans[idx1] == 'B')
            ans[idx1] = 'A';
        else
            ans[idx2] = 'A';
    }
    for (int i = 1; i < m + 1; i++)
        cout << ans[i];
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}