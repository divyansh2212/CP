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

    unordered_map<int, bool> hashMap;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        hashMap[x] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        if (hashMap.find(i) == hashMap.end())
        {
            cout << i;
            return;
        }
    }
}
int main()
{
    solve();
    return 0;
}