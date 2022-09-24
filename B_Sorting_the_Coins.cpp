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
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<bool> visited(n + 1, 0);

    int last = n;

    cout << 1 << " ";
    for (int i = 0; i < n; i++)
    {
        visited[arr[i]] = 1;
        while (last >= 1 && visited[last] == 1)
            last--;
        cout << i + 1 - (n - last) + 1 << " ";
    }
}
int main()
{
    solve();
    return 0;
}