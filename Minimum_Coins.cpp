// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        int ans = x / 10;
        ans = x % 10;

        cout << ans << endl;
    }
    return 0;
}