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

        vector<int> ans = arr;

        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == j + 1)
                continue;
            for (int i = j + 1; i < n; i++)
            {
                if (arr[i] == j + 1)
                {
                    reverse(ans.begin() + j, ans.begin() + i + 1);
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";

        cout << endl;
    }
    return 0;
}