// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int i = 0, j = 0;
    ll ans = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            int start = i, ele = a[i];
            while (a[i] == ele && i < n)
                i++;
            int curr = (i - start);

            start = j;
            while (b[j] == ele && j < m)
                j++;

            ans += (curr * 1LL * (j - start));
        }
        else if (a[i] < b[j])
            i++;
        else
            j++;
    }
    cout << ans << endl;
}
int main()
{
    solve();
    return 0;
}