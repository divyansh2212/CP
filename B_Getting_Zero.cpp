// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 32768;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> operations(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            continue;
        int curr = inf;
        int x = arr[i];
        for (int j = 0; j < 16; j++)
        {
            arr[i] = x;
            arr[i] = arr[i] + j;
            int op = 0;
            while (arr[i] != 0)
            {
                if (arr[i] < mod)
                    curr = min(curr, mod - arr[i] + j);
                op++;
                arr[i] = (2 * arr[i]) % mod;
                if (arr[i] == 0)
                    curr = min(curr, op + j);
                curr = min(curr, op + mod - arr[i] + j);
            }
        }

        operations[i] = curr;
    }
    for (int i = 0; i < n; i++)
        cout << operations[i] << " ";
    cout << endl;
}
int main()
{
    int t = 1;
    while (t--)
        solve();
    return 0;
}