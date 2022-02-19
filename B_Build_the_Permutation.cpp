#include <bits/stdc++.h>
using namespace std;
#define ll long long

void print(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if (abs(a - b) > 1 || a + b > n - 2)
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> arr(n + 1);
        for (int i = 1; i < n + 1; i++)
            arr[i] = i;

        if (a == 0 && b)
        {
            swap(arr[1], arr[2]);
            print(arr);
            continue;
        }

        int k = min(a, b);
        a -= k, b -= k;

        int i = 2;
        int idx = 0;
        while (k--)
        {
            swap(arr[i], arr[i + 1]);
            idx = i + 1;
            i += 2;
        }

        if (a)
            swap(arr[n], arr[n - 1]);
        else if (b)
            reverse(arr.begin() + 1, arr.begin() + idx + 2);

        print(arr);
    }
    return 0;
}