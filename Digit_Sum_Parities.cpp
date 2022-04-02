// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        string s = to_string(n);
        ll sum = 0;
        for (int i = 0; i < s.length(); i++)
            sum += s[i] - '0';

        ll ans;
        for (ll i = n + 1; i < n + 1000; i++)
        {
            string curr = to_string(i);
            ll currsum = 0;
            for (int j = 0; j < curr.length(); j++)
                currsum += curr[j] - '0';
            if ((sum % 2 == 0 && currsum % 2) || (sum % 2 && currsum % 2 == 0))
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}