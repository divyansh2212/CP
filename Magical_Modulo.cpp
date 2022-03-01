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
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }
        }
    return 0;
}