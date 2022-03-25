// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, z, a, b;
        cin >> x >> z >> a >> b;

        vector<int> arr(5, 0);

        arr[x]++, arr[z]++, arr[a]++, arr[b]++;

        int ans = 0;

        if (arr[x] == 1)
            ans++;
        if (arr[z] == 1)
            ans++;
        cout << ans << endl;
    }
    return 0;
}