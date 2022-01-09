// DONE

#include <bits/stdc++.h>
using namespace std;
int n, x;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        vector<int> arr(n);

        long long maximal = 0;
        long long total_sum = 0;

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
            total_sum += arr[i];
            maximal += ceil(arr[i] / (x * 1.0));
        }

        long long minimal = ceil(total_sum / (x * 1.0));

        cout << minimal << " " << maximal << endl;
    }

    return 0;
}