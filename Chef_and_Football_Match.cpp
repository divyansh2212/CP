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

    ll lastScoreA = 0, lastScoreB = 0;

    for (int i = 0; i < n; i++)
    {
        int type, a, b;
        cin >> type >> a >> b;

        if (a == b || type == 1)
        {
            lastScoreA = a, lastScoreB = b;
            cout << "YES\n";
        }

        else if (a < lastScoreA || b < lastScoreA)
        {
            if (a < lastScoreA)
                lastScoreA = b, lastScoreB = a;
            else if (b < lastScoreA)
                lastScoreA = a, lastScoreB = b;
            cout << "YES\n";
        }

        else if (a < lastScoreB || b < lastScoreB)
        {
            if (a < lastScoreB)
                lastScoreB = b, lastScoreA = a;
            else if (b < lastScoreB)
                lastScoreB = a, lastScoreA = b;
            cout << "YES\n";
        }
        else
            cout << "NO\n";
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