#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, s, t;
    cin >> n >> s >> t;

    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> p[i];

    int ans = 0, curr = s;
    while (1)
    {
        if (curr == t)
            break;
        curr = p[curr];
        ans++;
        if (ans >= 1e6)
        {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}