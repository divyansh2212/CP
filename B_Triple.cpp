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

        unordered_map<int, int> hsh;
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            hsh[x]++;
            if (hsh[x] == 3)
                ans = x;
        }

        cout << ans << endl;
    }
    return 0;
}