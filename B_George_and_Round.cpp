// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> reqdprob(n), givenprob(m);
    vector<int> hshreqd(1e6 + 10, 0), hshgiven(1e6 + 10, 0);
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> reqdprob[i];
        mx = max(mx, reqdprob[i]);
        hshreqd[reqdprob[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> givenprob[i];
        mx = max(mx, givenprob[i]);
        hshgiven[givenprob[i]]++;
    }

    int ans = 0;
    for (int i = 0; i < mx + 1; i++)
    {
        int x = min(hshreqd[i], hshgiven[i]);
        hshreqd[i] -= x;
        hshgiven[i] -= x;
        ans += hshreqd[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (hshreqd[reqdprob[i]])
        {
            for (int j = 0; j < m; j++)
            {
                if (hshgiven[givenprob[j]] && givenprob[j] > reqdprob[i])
                {
                    hshgiven[givenprob[j]]--, hshreqd[reqdprob[i]]--, ans--;
                    if (hshreqd[reqdprob[i]] == 0)
                        break;
                }
            }
        }
    }

    cout << ans;

    return 0;
}