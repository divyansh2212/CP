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

        vector<int> arr(n);
        map<int, int> m;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            m[arr[i]]++;
        }
        if ((2 * sum) % n)
        {
            cout << 0 << endl;
            continue;
        }
        ll mean = (2 * sum) / n;

        ll ans = 0;
        for (auto s1 : arr)
        {
            int to_find = mean - s1;
            ans += m[to_find];
            if (s1 == to_find)
                ans--;
        }
        cout << ans / 2 << endl;
    }
    return 0;
}