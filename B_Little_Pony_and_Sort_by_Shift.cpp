#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (is_sorted(arr.begin(), arr.end()))
    {
        cout << 0 << endl;
        return 0;
    }

    if (n == 2)
    {
        cout << 1 << endl;
        return 0;
    }

    int cnt = 0, idx;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            cnt++, idx = i;
    }
    if (cnt > 1)
        cout << -1 << endl;
    else
    {
        if (arr[n - 1] > arr[0])
            cout << -1 << endl;
        else
            cout << n - (idx + 1) << endl;
    }

    return 0;
}