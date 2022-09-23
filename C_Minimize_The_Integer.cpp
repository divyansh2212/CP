// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;

    string even = "", odd = "", ans = "";

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] - '0') % 2)
            odd.push_back(s[i]);
        else
            even.push_back(s[i]);
    }

    int i = 0, j = 0;

    while (i < odd.length() && j < even.length())
    {
        if (odd[i] < even[j])
            ans.push_back(odd[i]), i++;
        else
            ans.push_back(even[j]), j++;
    }

    while (i < odd.length())
        ans.push_back(odd[i]),
            i++;
    while (j < even.length())
        ans.push_back(even[j]), j++;

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