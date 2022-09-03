// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

int main()
{
    int n, m;
    cin >> n >> m;
    int ansCnt = m;
    vector<bool> ans(1e6 + 1, true);
    vector<bool> numbers(1e6 + 1, false);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        for (ll j = 2; j * j <= x; j++)
        {
            if (x % j == 0)
            {
                numbers[j] = true;
                while (x % j == 0)
                    x /= j;
            }
        }

        if (x > 1)
            numbers[x] = true;
    }

    for (int i = 2; i <= m; i++)
    {
        if (numbers[i] == true)
        {
            for (int j = i; j <= m; j += i)
            {
                if (ans[j] == false)
                    continue;
                ans[j] = false, ansCnt--;
            }
        }
    }
    cout << ansCnt << endl;
    for (int i = 1; i <= m; i++)
        if (ans[i])
            cout << i << endl;

    return 0;
}