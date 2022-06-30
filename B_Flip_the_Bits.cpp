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
        int n;
        cin >> n;

        string a, b;
        cin >> a;
        cin >> b;

        if (a == b)
        {
            cout << "YES\n";
            continue;
        }

        int j = 0, ones = 0, zeroes = 0;
        vector<pair<int, int>> pairs;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
                ones++;
            else
                zeroes++;
            if (ones == zeroes)
            {
                pairs.push_back({j, i});
                j = i + 1;
            }
        }

        for (auto &it : pairs)
        {
            int s = it.first, end = it.second;
            if (a[s] == b[s])
                continue;
            for (int i = s; i <= end; i++)
            {
                if (a[i] == '0')
                    a[i] = '1';
                else
                    a[i] = '0';
            }
        }

        bool flag = true;
        for (int i = 0; i < n; i++)
            if (a[i] != b[i])
                flag = false;

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}