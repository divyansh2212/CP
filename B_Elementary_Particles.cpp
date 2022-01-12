#include <bits/stdc++.h>
using namespace std;
const int N = 150555;
vector<int> indices[N];
vector<int> hsh(N, 0);

void reset()
{
    for (int i = 0; i < N; i++)
    {
        indices[i].clear();
        hsh[i] = 0;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // reset();
        int n;
        cin >> n;
        vector<int> arr(n);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            // indices[arr[i]].push_back(i);
            hsh[arr[i]]++;
            if (hsh[arr[i]] >= 2)
                flag = false;
        }
        if (flag)
        {
            cout << -1 << endl;
            continue;
        }
        int ans = 0;

        flag = false;

        int n_copy = n;
        

        cout << ans << endl;
    }

    return 0;
}