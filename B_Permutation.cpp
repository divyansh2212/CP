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

        vector<int> hsh(n + 1, true);
        vector<int> ans;

        ll i = 1;
        while (i <= n)
        {
            if (hsh[i])
            {
                ans.push_back(i);
                hsh[i] = false;
                ll j = 2 * i;
                while (j <= n && hsh[j])
                {
                    ans.push_back(j);
                    hsh[j] = false;
                    j *= 2;
                }
            }
            i++;
        }

        cout << 2 << endl;
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}