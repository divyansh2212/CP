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

        bool is0 = false, is1 = false;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x)
                is1 = true;
            else
                is0 = true;
        }

        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());

        if (sorted == arr)
            cout << "Yes\n";
        else if (is0 && is1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}