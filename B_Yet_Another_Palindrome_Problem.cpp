#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        bool flag = false;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i != 0)
                if (a[i] == a[i - 1])
                    a[i] = 0;
        }

        vector<int> arr;
        for (int i = 0; i < n; i++)
            if (a[i] != 0)
                arr.push_back(a[i]);

        vector<int> hsh(6000, 0);
        for (int i = 0; i < arr.size(); i++)
        {
            hsh[arr[i]]++;
            if (hsh[arr[i]] > 1)
                flag = true;
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}