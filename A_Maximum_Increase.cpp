// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> prefix(n, 1);

    int ans = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
            prefix[i] = prefix[i - 1] + 1;
        ans = max(ans, prefix[i]);
    }

    cout << ans;

    return 0;
}