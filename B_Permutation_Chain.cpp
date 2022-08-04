// Jai Shree Babosa!

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
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    int c_n = n;
    n--;
    int idx = c_n - 1;

    while (n--)
    {
        swap(arr[idx], arr[idx - 1]);
        idx--;
        for (int i = 0; i < c_n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}