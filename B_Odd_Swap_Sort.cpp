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

        vector<int> odd, v1, even, v2;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2)
                odd.push_back(arr[i]), v1.push_back(arr[i]);
            else
                even.push_back(arr[i]), v2.push_back(arr[i]);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        if (v1 == odd && v2 == even)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}