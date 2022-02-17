#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> data(n);

        for (int i = 0; i < n; i++)
            cin >> data[i].first;
        for (int i = 0; i < n; i++)
            cin >> data[i].second;

        sort(data.begin(), data.end());

        int curr = k;
        for (int i = 0; i < data.size(); i++)
        {
            if (curr >= data[i].first)
                curr += data[i].second;
            else
                break;
        }
        cout << curr << endl;
    }
    return 0;
}