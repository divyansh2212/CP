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
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first;
            arr[i].second = i;
        }

        sort(arr.begin(), arr.end());

        int ans = 1;

        for (int i = 0; i < n - 1; i++)
            if (arr[i].second + 1 != arr[i + 1].second)
                ans++;

        if (ans <= k)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}