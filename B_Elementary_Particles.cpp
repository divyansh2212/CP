#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        map<int, int> m;
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (m.count(arr[i]))
                ans = max(ans, n - i + m[arr[i]]);
            m[arr[i]] = i;
        }
        cout << ans << endl;
    }

    return 0;
}