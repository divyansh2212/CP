// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
        mp[s[i]]++;

    string ans;
    for (int i = 0; i < k; i++)
    {
        char anchar = char(n / k + 'a');
        for (int j = 0; j < n / k; j++)
        {
            if (mp[char(j + 'a')] > 0)
                mp[char(j + 'a')]--;
            else
            {
                anchar = char(j + 'a');
                break;
            }
        }
        ans.push_back(anchar);
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}