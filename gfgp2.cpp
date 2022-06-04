#include <bits/stdc++.h>
using namespace std;

// Jai Shree Babosa!

class Solution
{
public:
    int compressArray(vector<int> &a, int n, int x)
    {
        sort(a.begin(), a.end());
        // reverse(a.begin(), a.end());
        int sz = n;

        for (int j = 0; j < n - 1; j++)
        {
            int lo = j + 1, hi = n - 1, mid;
            int ans = -1;

            while (lo <= hi)
            {
                mid = lo + ((hi - lo) / 2);

                if (a[mid] == a[j])
                    lo = mid + 1;
                else if (a[mid] <= a[j] + x)
                {
                    ans = mid;
                    break;
                }
                else
                    hi = mid - 1;
            }

            if (ans != -1)
                sz--;
        }

        return sz;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int x;
        cin >> x;

        Solution obj;
        int ans = obj.compressArray(a, n, x);

        cout << ans << endl;
    }
}