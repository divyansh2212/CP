// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int minele = inf;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        minele = min(minele, arr[i]);
    }

    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == minele)
            continue;
        if (arr[i] % minele == 0)
            curr++;
        else
        {
            curr = inf;
            break;
        }
    }

    cout << min(curr, n) << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}