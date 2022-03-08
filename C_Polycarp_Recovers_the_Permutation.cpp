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

        if (arr[0] != n && arr[n - 1] != n)
            cout << -1 << endl;
        else
        {
            for (int i = n - 1; i >= 0; i--)
                cout << arr[i] << " ";

            cout << endl;
        }
    }
    return 0;
}