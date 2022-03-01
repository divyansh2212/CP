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
        vector<char> polarities(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

        }
        int cntS = 0, cntN = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> polarities[i];
            if (polarities[i] == 'N')
                cntN = 1;
            else
                cntS = 1;
        }

        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        if (sorted == arr)
            cout << 0 << endl;
        else if (polarities[0] != polarities[n - 1])
            cout << 1 << endl;
        else if (cntS == 0 || cntN == 0)
            cout << -1 << endl;
        else
        {
            int cnts = 0;

        }
    }
    return 0;
}