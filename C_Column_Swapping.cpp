// Jai Shree Babosa!
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
 
        vector<vector<int>> arr(n, vector<int>(m));
        bool flag = true;
        unordered_set<int> s;
 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if (j > 0)
                {
                    if (arr[i][j - 1] > arr[i][j])
                    {
                        flag = false;
                        s.insert(j - 1);
                        s.insert(j);
                    }
                }
            }
        }
 
        if (m == 1 || flag)
        {
            cout << 1 << " " << 1 << endl;
            continue;
        }
 
        flag = true;

        int big = INT_MIN, small = INT_MAX;
        for (auto &it : s)
        {
            big = max(big, it);
            small = min(small, it);
        }
 
        for (int i = 0; i < n; i++)
        {
            swap(arr[i][small], arr[i][big]);
            if (!is_sorted(arr[i].begin(), arr[i].end()))
                flag = false;
        }
 
        if (flag == false)
            cout << -1 << endl;
        else
            cout << small + 1 << " " << big + 1 << endl;
    }
    return 0;
}