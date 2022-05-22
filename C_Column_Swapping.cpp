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
        int small = INT_MAX, big = INT_MIN, total_cnt = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];

            vector<int> c_arr_i = arr[i];
            sort(c_arr_i.begin(), c_arr_i.end());
            int cnt = 0;
            for (int j = 0; j < arr[i].size(); j++)
            {
                if (arr[i][j] != c_arr_i[j])
                {
                    cnt++;
                    small = min(small, j);
                    big = max(big, j);
                }
            }
            total_cnt = max(total_cnt, cnt);
            if (cnt)
                flag = false;
        }

        if (m == 1 || flag)
        {
            cout << 1 << " " << 1 << endl;
            continue;
        }

        flag = true;

        for (int i = 0; i < arr.size(); i++)
        {
            swap(arr[i][small], arr[i][big]);
            if (!is_sorted(arr[i].begin(), arr[i].end()))
                flag = false;
        }

        if (flag == false || total_cnt > 2)
            cout << -1 << endl;
        else
            cout << small + 1 << " " << big + 1 << endl;
    }
    return 0;
}