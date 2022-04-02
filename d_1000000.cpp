// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    int test = 0;
    while (t--)
    {
        test++;
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > ans)
                ans++;
        }

        cout << "Case #" << test << ": " << ans << endl;
    }
    return 0;
}