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

        if (n == 1)
        {
            cout << arr[0] << endl;
            continue;
        }

        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());

        ll maxm = arr[n - 1];
        ll last = arr[n - 1];
        ll to_sub = arr[n - 1];
        while (!arr.empty())
        {
            arr.pop_back();
            if (arr.size())
            {
                last = arr[arr.size() - 1] - to_sub;
                to_sub += last;
                maxm = max(maxm, last);
            }
        }
        cout << maxm << endl;
    }
    return 0;
}