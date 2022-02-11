#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    map<int, int> m;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
        s.insert(x);
    }

    int cnt = 0;
    for (auto i : s)
    {
        if (k == 0)
        {
            if (i == 1)
                cout << -1;
            else
                cout << 1;
            return 0;
        }
        cnt += m[i];
        if (cnt == k)
        {
            cout << i;
            return 0;
        }
        if (cnt > k)
            break;
    }
    cout << -1;
    return 0;
}