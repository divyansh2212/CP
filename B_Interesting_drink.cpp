#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    int q;
    cin >> q;
    while (q--)
    {
        int coins;
        cin >> coins;

        long long hi = n - 1, lo = 0, mid;
        while (hi - lo > 1)
        {
            mid = (hi + lo) / 2;
            if (coins >= arr[mid])
                lo = mid;
            else if (coins < arr[mid])
                hi = mid - 1;
        }
        if (arr[hi] <= coins)
            cout << hi + 1 << endl;
        else if (arr[lo] <= coins)
            cout << lo + 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}