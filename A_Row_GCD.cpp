// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m);
    ll gcds = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i > 0)
            gcds = __gcd(gcds, abs(a[i] - a[i - 1]));
    }
    for (int i = 0; i < m; i++)
        cin >> b[i];
    
    for (int i = 0; i < m; i++)
        cout << __gcd(gcds, a[0] + b[i]) << " ";

    return 0;
}