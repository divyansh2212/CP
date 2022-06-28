// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        sort(arr.begin(), arr.end());

        bool flag = true;
        vector<ll> to_check, nums;
        for (ll i = 0; i < n; i++)
        {
            if (mp.find(i + 1) != mp.end() && mp[i + 1] > 0)
            {
                mp[i + 1]--;
                continue;
            }
            to_check.push_back(i + 1);
        }

        for (auto &it : mp)
            while (it.second--)
                nums.push_back(it.first);

        for (ll i = 0; i < to_check.size(); i++)
        {
            if (nums[i] > 2 * to_check[i])
                continue;
            else
                flag = false;
        }

        if (flag)
            cout << nums.size() << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}