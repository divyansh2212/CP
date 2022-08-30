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
    string s;
    cin >> s;

    if (n != 5)
        cout << "NO\n";
    else
    {
        string name = "Timur";
        sort(name.begin(), name.end());
        sort(s.begin(), s.end());

        if (name != s)
            cout << "NO\n";
        else
            cout << "YES\n";
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