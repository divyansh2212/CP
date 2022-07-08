// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cnt = 0;
        vector<vector<int>> arr(2, vector<int>(2));
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j])
                    cnt++;
            }
        }

        int ans = 0;
        if (cnt == 4)
            ans = 2;
        else if (cnt)
            ans = 1;

        cout << ans << endl;
    }
    return 0;
}