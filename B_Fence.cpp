#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int prefix[n + 1] = {0};
    for (int i = 1; i < n + 1; i++)
        prefix[i] = arr[i - 1] + prefix[i - 1];

    int idx;
    int sum = INT_MAX;

    for (int i = 0; i < n + 1; i++)
    {
        if (i + k > n)
            break;
        if (prefix[i + k] - prefix[i] < sum)
        {
            sum = prefix[i + k] - prefix[i];
            idx = i + 1;
        }
    }
    cout << idx;

    return 0;
}