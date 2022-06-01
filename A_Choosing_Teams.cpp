// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int ans = 0;

    for (int i = 0; i < n; i += 3)
    {
        bool flag = true;
        if (i + 2 >= n)
            continue;
        for (int j = i; j < i + 3 && j < n; j++)
        {
            int no_p = 5 - arr[j];
            if (no_p < k)
                flag = false;
        }
        if (flag)
            ans++;
    }

    cout << ans;

    return 0;
}