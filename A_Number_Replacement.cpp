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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    string s;
    cin >> s;

    // sort(s.begin(), s.end());
    // sort(arr.begin(), arr.end());

    map<int, char> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(arr[i]) == mp.end())
            mp[arr[i]] = s[i];
        else
        {
            if (mp[arr[i]] != s[i])
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}