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
        int n, m;
        cin >> n >> m;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int sum = accumulate(arr.begin(), arr.end(), 0);

        if (m >= sum)
        {
            cout << 0 << endl;
            continue;
        }

        cout << sum - m << endl;
    }
    return 0;
}