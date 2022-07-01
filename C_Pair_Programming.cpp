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
        int k, n, m;
        cin >> k >> n >> m;

        vector<ll> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];

        vector<int> ans;
        int curr_size = k;

        int i = 0, j = 0;
        bool flag = true;

        while (i < n && j < m)
        {
            if (a[i] <= b[j])
            {
                if (a[i] == 0)
                    curr_size++;
                else if (a[i] > curr_size)
                    flag = false;
                ans.push_back(a[i]);
                i++;
            }
            else
            {
                if (b[j] == 0)
                    curr_size++;
                else if (b[j] > curr_size)
                    flag = false;
                ans.push_back(b[j]);
                j++;
            }
        }

        while (i < n)
        {
            if (a[i] == 0)
                curr_size++;
            else if (a[i] > curr_size)
                flag = false;
            ans.push_back(a[i]);
            i++;
        }
        while (j < m)
        {
            if (b[j] == 0)
                curr_size++;
            else if (b[j] > curr_size)
                flag = false;
            ans.push_back(b[j]);
            j++;
        }

        if (flag == false)
            cout << -1 << endl;
        else
        {
            for (i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";
            cout << endl;
        }
    }
    return 0;
}