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
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int pos = n - 1;

        while (arr[pos] <= arr[pos - 1] && pos > 0)
            pos--;
        while (arr[pos] >= arr[pos - 1] && pos > 0)
            pos--;

        cout << pos << endl;
    }

    return 0;
}