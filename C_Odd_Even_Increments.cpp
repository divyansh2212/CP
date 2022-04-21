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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] = arr[i] % 2;
        }

        bool flag = true;
        for (int i = 2; i < n; i += 2)
        {
            if (arr[i] != arr[i - 2])
                flag = false;
        }

        for (int i = 3; i < n; i += 2)
        {
            if (arr[i] != arr[i - 2])
                flag = false;
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}