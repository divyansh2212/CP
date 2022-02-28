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

        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());

        if (sorted == arr)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}