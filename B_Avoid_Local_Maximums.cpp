#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        vector<bool> mxms(n, false);
        vector<bool> mnms(n, false);

        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
                mxms[i] = true;
            if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
                mnms[i] = true;
        }

        ll i = 1;
        ll steps = 0;

        while (i < n - 2)
        {
            if (mxms[i] && mxms[i + 2] && mnms[i + 1])
            {
                arr[i + 1] = max(arr[i], arr[i + 2]);
                mxms[i] = false, mxms[i + 2] = false, mnms[i + 1] = false;
                steps++;
                i += 2;
            }
            else
                i++;
        }

        for (int i = 1; i < n - 1; i++)
            if (mxms[i])
                arr[i - 1] = arr[i], mxms[i] = false, steps++;

        cout << steps << endl;
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}