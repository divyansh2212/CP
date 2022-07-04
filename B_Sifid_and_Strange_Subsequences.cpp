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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        if (arr[0] > 0)
        {
            cout << 1 << endl;
            continue;
        }

        int ans = 0, i;
        for (i = 0; i < n; i++)
        {
            if (arr[i] <= 0)
                ans++;
            else
                break;
        }

        int x = -1;
        if (i < n)
            x = arr[i];

        if (x != -1)
        {
            ans++;
            for (int j = 1; j < i; j++)
            {
                if (abs(arr[j] - arr[j - 1]) < x)
                {
                    ans--;
                    break;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}