// <-------------------- Jai Shree Babosa -------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> vals;
    vector<vector<int>> valsa;
    vector<vector<int>> valsb;

    string a(n, '0');
    string b(n, '0');
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        vals.push_back({a, 0, i});
        vals.push_back({b, 1, i});
        valsa.push_back({a, i});
        valsb.push_back({b, i});
    }

    sort(valsa.begin(), valsa.end());
    sort(valsb.begin(), valsb.end());
    for (int i = 0; i < n / 2; i++)
    {
        a[valsa[i][1]] = '1';
        b[valsb[i][1]] = '1';
    }

    sort(vals.begin(), vals.end());
    for (int i = 0; i < n; i++)
    {
        if (vals[i][1] == 0)
            a[vals[i][2]] = '1';
        else
            b[vals[i][2]] = '1';
    }
    cout << a << "\n";
    cout << b << "\n";
}
int main()
{
    solve();
    return 0;
}