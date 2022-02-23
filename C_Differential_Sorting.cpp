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
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<ll> sorted = arr;
        sort(sorted.begin(), sorted.end());

        if (sorted == arr)
            cout << 0 << endl;

        else if (arr[n - 2] > arr[n - 1] || arr[n - 1] < 0)
            cout << -1 << endl;

        else
        {
            cout << n - 2 << endl;
            for (int i = 0; i < n - 2; i++)
                cout << i + 1 << " " << n - 1 << " " << n << endl;
        }
    }
    return 0;
}