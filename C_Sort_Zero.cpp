// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, idx = -1;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    set<int> x;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > arr[i + 1])
        {
            idx = i;
            break;
        }
    }

    for (int i = 0; i <= idx; i++)
        x.insert(arr[i]);

    for (int i = n - 1; i > idx; i--)
    {
        if (x.find(arr[i]) != x.end())
        {
            idx = i;
            break;
        }
    }

    for (int i = 0; i < idx + 1; i++)
        x.insert(arr[i]);

    cout << x.size() << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}