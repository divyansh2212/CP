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
        ll sum = 0;
        bool flag = true;
        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (sum < 0)
                flag = false;
            if (sum == 0 && i != n - 1 && idx == -1)
                idx = i;
        }

        if (sum != 0)
            flag = false;
        if (idx != -1)
        {
            sum = 0;
            for (int i = idx + 1; i < n; i++)
            {
                sum += arr[i];
                if (sum != 0)
                    flag = false;
            }
        }

        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}