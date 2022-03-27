// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;

    int ans = min(n, m) + 1;

    cout << ans << endl;

    for (int i = 0; i < ans; i++)
        cout << i << " " << ans - 1 - i << endl;

    return 0;
}