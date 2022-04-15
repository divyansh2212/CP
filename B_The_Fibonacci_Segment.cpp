// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
        cout << 1 << endl;

    else
    {
        ll ans = 2;

        vector<bool> flag(n, false);
        for (int i = 2; i < n; i++)
            if (arr[i] == arr[i - 1] + arr[i - 2])
                flag[i] = true;

        ll currans = 2;
        for (int i = 2; i < n; i++)
        {
            if (flag[i] == true)
                currans++;
            else
                ans = max(ans, currans), currans = 2;
        }
        ans = max(ans, currans);

        cout << ans;
    }

    return 0;
}