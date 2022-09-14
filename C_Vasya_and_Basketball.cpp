// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

bool check(ll mid, vector<ll> &a, vector<ll> &b, ll &Ascore, ll &Bscore, ll &score)
{
    ll currA = 0, currb = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] <= mid)
            currA += 2;
        else
            currA += 3;
    }

    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] <= mid)
            currb += 2;
        else
            currb += 3;
    }

    if (((currA - currb) >= mid) && (currA - currb) > score)
        Ascore = currA, Bscore = currb;
    else if (((currA - currb) >= mid) && ((currA - currb) == score) && currA > Ascore)
        Ascore = currA;

    return ((currA - currb) >= mid);
}

void solve()
{
    int n, m;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    vector<ll> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int last = a[n - 1] + 1;
    a.push_back(last);

    ll A = n * 2, B = m * 2;
    ll score = A - B;

    for (ll d = 0; d < a.size(); d++)
    {
        ll currA = 0, currB = 0;
        // finding elements smaller than d
        ll idx = upper_bound(a.begin(), a.end(), a[d]) - a.begin();
        currA += (idx * 2);
        currA += ((n - idx) * 3);

        idx = upper_bound(b.begin(), b.end(), a[d]) - b.begin();
        currB += (idx * 2);
        currB += ((m - idx) * 3);

        if (currA - currB > score)
        {
            score = currA - currB;
            A = currA, B = currB;
        }

        else if (currA - currB == score && currA > A)
            A = currA, B = currB;
    }

    cout << A << ":" << B;
}
int main()
{
    solve();
    return 0;
}