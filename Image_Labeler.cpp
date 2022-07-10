// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int cases = 0;
    int t;
    cin >> t;
    while (t--)
    {
        cases++;
        int n, m;
        cin >> n >> m;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> c_arr = arr;

        sort(arr.begin(), arr.end());

        float ans = 0.0;

        int c_m = m - 1;

        vector<int> hsh(1e5 + 1, 0);
        while (c_m--)
        {
            ans += arr.back();
            hsh[arr.back()]++;
            arr.pop_back();
        }

        vector<int> a;
        for (int i = 0; i < c_arr.size(); i++)
        {
            if (hsh[c_arr[i]] > 0)
                hsh[c_arr[i]]--;
            else
                a.push_back(c_arr[i]);
        }

        n = a.size();
        if (a.size() % 2)
            ans += a[n / 2];
        else
            ans += (a[n / 2] + a[(n / 2) - 1]) / 2.0;

        cout << "Case #" << cases << ": ";
        cout << fixed << setprecision(1) << ans << endl;
    }
    return 0;
}