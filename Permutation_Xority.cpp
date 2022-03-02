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

        vector<int> arr;
        if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }
        else if (n % 2)
        {
            for (int i = n; i >= 1; i--)
                arr.push_back(i);
        }
        else
        {
            arr.push_back(1);
            arr.push_back(n);
            for (int i = 2; i < n; i++)
                arr.push_back(i);
        }

        for (int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";

        cout << endl;
    }
    return 0;
}