#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> ans;
        int maxele = INT_MAX;
        for (int a = 1; a <= 50; a++)
        {
            for (int d = 1; d <= 50; d++)
            {
                vector<int> ans1;
                bool flagx = false, flagy = false;
                for (int i = 0; i < n; i++)
                {
                    int ele = a + i * d;
                    ans1.push_back(ele);
                    if (ele == x)
                        flagx = true;
                    if (ele == y)
                        flagy = true;
                }
                if (flagx && flagy)
                {
                    if (ans1[n - 1] < maxele)
                    {
                        maxele = ans1[n - 1];
                        ans = ans1;
                    }
                }
                ans1.clear();
            }
        }

        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}