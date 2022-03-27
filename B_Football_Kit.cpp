// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<int> home(n), away(n);
    for (int i = 0; i < n; i++)
        cin >> home[i] >> away[i];

    vector<int> ans1(n, n - 1), ans2(n, n - 1);

    vector<int> hsh(1e5 + 10, 0);
    for (int i = 0; i < n; i++)
        hsh[home[i]]++;

    for (int i = 0; i < n; i++)
    {
        if (hsh[away[i]])
        {
            ans2[i] -= hsh[away[i]];
            ans1[i] += hsh[away[i]];
        }
    }

    for (int i = 0; i < n; i++)
        cout << ans1[i] << " " << ans2[i] << endl;

    return 0;
}