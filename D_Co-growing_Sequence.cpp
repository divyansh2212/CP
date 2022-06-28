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

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<ll> ans(n);
        ans[0] = arr[0];

        for (int i = 1; i < n; i++)
            ans[i] = (ans[i - 1] | arr[i]);

        for (int i = 0; i < n; i++)
            cout << (arr[i] ^ ans[i]) << " ";

        cout << endl;
    }
    return 0;
}