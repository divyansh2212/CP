// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

int main()
{
    constexpr int N = 1250 * 1250 + 1;
    vector<int> q(N);
    for (int i = 1; i < N; ++i)
        for (int j = i; j < N; j += i)
            q[j]++;

    for (int i = 1; i < N; ++i)
        q[i] += q[i - 1];
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        ll ans = 0;
        for (int i = 1; i < n; ++i)
        {
            int j = n - i;
            ans += q[i * j - 1];
        }
        cout << ans << '\n';
    }
    return 0;
}