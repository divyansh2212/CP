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

        vector<int> arr(n + 1);

        int idx1 = -1, idxn = -1;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                idx1 = i;
            if (arr[i] == n)
                idxn = i;
        }

        int ans = n - idxn + idx1 - 1;

        if (idx1 > idxn)
            ans--;

        cout << ans << endl;
    }
    return 0;
}