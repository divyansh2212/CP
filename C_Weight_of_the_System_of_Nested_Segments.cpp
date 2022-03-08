#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<pair<pair<int, int>, int>> pairs(m);

        for (int i = 0; i < m; i++)
        {
            int x, w;
            cin >> x >> w;
            pairs[i] = make_pair(make_pair(w, x), i + 1);
        }

        int firstans = 0;
        sort(pairs.begin(), pairs.end());

        vector<pair<int, int>> indices;
        for (int i = 0; i < 2 * n; i++)
        {
            firstans += pairs[i].first.first;
            indices.push_back({pairs[i].first.second, pairs[i].second});
        }

        sort(indices.begin(), indices.end());
        cout << firstans << endl;
        for (int i = 0; i < n; i++)
            cout << indices[i].second << " " << indices[2 * n - 1 - i].second << endl;
        cout << endl;
    }
    return 0;
}