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
        map<long long, long long> m;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] = arr[i] - i;
            m[arr[i]]++;
        }

        long long ans = 0;
        for (auto ele : m)
            ans += ((ele.second) * (ele.second - 1)) / 2;
        
        cout << ans << endl;
    }

    return 0;
}