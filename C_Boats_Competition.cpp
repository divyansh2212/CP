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
        vector<int> weights(n);
        for (int i = 0; i < n; i++)
            cin >> weights[i];

        int ans = 0;
        for (int i = 2; i <= 100; i++)
        {
            int curr = 0;
            vector<bool> visited(n, false);
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (weights[j] + weights[k] == i && !visited[j] && !visited[k] && j != k)
                    {
                        visited[j] = true, visited[k] = true;
                        curr++;
                    }
                }
            }
            ans = max(ans, curr);
        }
        cout << ans << endl;
    }
    return 0;
}