// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            if (i == j)
                ans.push_back(x);
        }
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}