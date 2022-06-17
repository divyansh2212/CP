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
        int n;
        cin >> n;

        vector<ll> h(n, -1);
        vector<ll> c_h;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            c_h.push_back(x);
            mp[x]++;
        }

        sort(c_h.begin(), c_h.end());

        ll abs_diff = INT_MAX, num1 = -1, num2 = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (c_h[i + 1] - c_h[i] < abs_diff)
            {
                num1 = c_h[i];
                num2 = c_h[i + 1];
                abs_diff = c_h[i + 1] - c_h[i];
            }
        }

        int curr_idx = 1;
        bool flag = false;
        for (auto &it : mp)
        {
            if (it.second > 1 && h[0] == -1)
                h[0] = it.first, h[n - 1] = it.first, flag = true;

            if (h[0] != -1)
            {
                if (flag)
                    it.second -= 2, flag = false;
                int curr = it.second;
                while (curr--)
                {
                    h[curr_idx] = it.first;
                    curr_idx++;
                }
                it.second = 0;
            }
        }

        if (h[0] == -1)
        {
            h[n - 1] = num2;
            mp[num2]--;
            curr_idx = 1;
            for (auto &it : mp)
            {
                if (h[0] != -1 && it.second)
                {
                    h[curr_idx] = it.first;
                    curr_idx++;
                    it.second--;
                }
                if (it.first == num1)
                {
                    h[0] = num1;
                    it.second--;
                }
            }

            while (curr_idx < n - 1)
            {
                for (auto &it : mp)
                {
                    if (it.second)
                    {
                        h[curr_idx] = it.first;
                        curr_idx++;
                        it.second--;
                    }
                }
            }
        }

        else
        {
            for (int i = 0; i < n; i++)
            {
                if (h[i] == -1)
                {
                    curr_idx = i;
                    break;
                }
            }

            for (auto &it : mp)
            {
                if (it.second)
                {
                    int curr = it.second;
                    while (curr--)
                    {
                        h[curr_idx] = it.first;
                        curr_idx++;
                    }
                    it.second = 0;
                }
            }
        }

        for (int i = 0; i < n; i++)
            cout << h[i] << " ";
        cout << endl;
    }
    return 0;
}