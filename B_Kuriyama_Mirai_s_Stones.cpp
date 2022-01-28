#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    long long prefix_sum[n + 1] = {0};
    for (int i = 1; i <= n; i++)
        prefix_sum[i] = prefix_sum[i - 1] + v[i - 1];

    vector<int> v_sorted = v;
    sort(v_sorted.begin(), v_sorted.end());
    long long prefix_sorted[n + 1] = {0};
    for (int i = 1; i <= n; i++)
        prefix_sorted[i] = prefix_sorted[i - 1] + v_sorted[i - 1];

    int m;
    cin >> m;
    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
            cout << prefix_sum[r] - prefix_sum[l - 1] << endl;
        else
            cout << prefix_sorted[r] - prefix_sorted[l - 1] << endl;
    }

    return 0;
}