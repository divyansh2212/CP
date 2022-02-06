#include <bits/stdc++.h>
using namespace std;

bool helper(vector<int> &arr, long long idx, long long curr, long long y)
{
    if (idx == arr.size())
        return curr == y;

    return helper(arr, idx + 1, curr + arr[idx], y) || helper(arr, idx + 1, curr ^ arr[idx], y);
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;

        vector<int> arr(n);
        for (long long i = 0; i < n; i++)
            cin >> arr[i];

        bool alice = helper(arr, 0, x, y);

        if (alice)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }

    return 0;
}