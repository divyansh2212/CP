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
            cin >> arr[i];

        if (n == 1)
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> temp = arr;
        sort(temp.begin(), temp.end());

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != temp[i])
                continue;
            else if (i + 1 < n)
                swap(temp[i], temp[i + 1]);
            else
                swap(temp[i], temp[i - 1]);
        }

        for (int i = 0; i < n; i++)
            cout << temp[i] << " ";
        cout << endl;
    }
    return 0;
}