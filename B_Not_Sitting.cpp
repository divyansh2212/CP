#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        multiset<int> s;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                int ans1 = abs(i - 1) + abs(j - 1);
                int ans2 = abs(i - 1) + abs(j - m);
                int ans3 = abs(i - n) + abs(j - 1);
                int ans4 = abs(i - n) + abs(j - m);
                int ans = max(max(ans1, ans2), max(ans3, ans4));
                s.insert(ans);
            }
        }
        for (auto e : s)
            cout << e << " ";
        cout << endl;
    }
    return 0;
}