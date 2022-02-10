#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> e(n);
        for (int i = 0; i < n; i++)
            cin >> e[i];
        sort(e.begin(), e.end());

        int curr = 1, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (curr == e[i])
            {
                ans++;
                curr = 1;
            }
            else
                curr++;
        }
        cout << ans << endl;
    }
    return 0;
}