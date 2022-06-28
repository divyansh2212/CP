// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll f(vector<ll> &arr, int idx, int transaction, unordered_map<ll, ll> &mp, vector<vector<ll>> &dp, bool &flag)
{
    if (!flag)
        return 0;
    if (transaction == 0)
        return 0;
    if (idx < 0)
        return -1e15;
    if (dp[idx][transaction] != -1)
        return dp[idx][transaction];

    ll take = arr[idx] + f(arr, idx - 1, transaction - 1, mp, dp, flag);
    if (take >= -1e12 && mp.find(take) == mp.end())
        flag = false;
    ll notTake = f(arr, idx - 1, transaction, mp, dp, flag);
    if (notTake >= -1e12 && mp.find(notTake) == mp.end())
        flag = false;

    return dp[idx][transaction] = max(take, notTake);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        unordered_map<ll, ll> mp;
        int positives = 0, negatives = 0, zeroes = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            if (arr[i] > 0)
                positives++;
            else if (arr[i] < 0)
                negatives++;
            else
                zeroes++;
        }

        bool flag = true;
        if (positives > 2 || negatives > 2)
            flag = false;

        else
        {
            vector<ll> n_arr;
            if (zeroes)
                n_arr.push_back(0);
            for (int i = 0; i < n; i++)
                if (arr[i] != 0)
                    n_arr.push_back(arr[i]);

            n = n_arr.size();
            for (int i = 0; i < n - 2; i++)
            {
                for (int j = i + 1; j < n - 1; j++)
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        ll sum = n_arr[i] + n_arr[j] + n_arr[k];
                        if (mp.find(sum) == mp.end())
                            flag = false;
                    }
                    if (!flag)
                        break;
                }
                if (!flag)
                    break;
            }
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}