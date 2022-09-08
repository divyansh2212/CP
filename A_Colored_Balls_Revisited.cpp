// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int mx = -1, idx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > mx)
            mx = arr[i], idx = i + 1;
    }
    cout << idx << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}