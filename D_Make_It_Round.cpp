// <-------------------- Jai Shree Babosa -------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n, m;
    cin >> n >> m;

    int fives = 0, twos = 0, copyn = n;

    while (copyn % 2 == 0)
        copyn /= 2, twos++;
    while (copyn % 5 == 0)
        copyn /= 5, fives++;

    if (fives > twos)
    {
        int diff = fives - twos;
        while (m % 5 == 0 && diff > 0)
        {
            m /= 5, diff--;
            n *= 5;
        }
    }
    else if (fives < twos)
    {
        int diff = twos - fives;
        while (m % 2 == 0 && diff > 0)
        {
            m /= 2, diff--;
            n *= 2;
        }
    }

    string num = to_string(m);
    int sz = num.length() - 1;
    n *= pow(10, sz);

    // n *= (num[0] - '0');
    cout << n << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}