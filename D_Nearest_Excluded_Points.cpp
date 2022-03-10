#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    map<pair<int, int>, bool> m;
    vector<pair<int, int>> arr(0);

    while (n--)
    {
        int x, y;
        cin >> x >> y;
        arr.push_back(make_pair(x, y));
        m.insert(make_pair(make_pair(x, y), true));
    }

    for (int i = 0; i < arr.size(); i++)
    {
        int x = arr[i].first, y = arr[i].second;

        for (int j = 1; j <= n; j++)
        {
            if (m.find(make_pair(x, y + j)) == m.end())
            {
                cout << x << " " << y + j << endl;
                break;
            }
            if (m.find(make_pair(x, y - j)) == m.end())
            {
                cout << x << " " << y - j << endl;
                break;
            }
            if (m.find(make_pair(x - j, y)) == m.end())
            {
                cout << x - j << " " << y << endl;
                break;
            }
            if (m.find(make_pair(x + j, y)) == m.end())
            {
                cout << x + j << " " << y << endl;
                break;
            }
        }
    }

    return 0;
}