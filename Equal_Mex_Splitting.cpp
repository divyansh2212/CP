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

        int cnt = 0, zeroes = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x > 0)
                cnt++;
            else
                zeroes++;
        }

        int ans = max(cnt, zeroes);

        cout << ans << endl;
    }
    return 0;
}