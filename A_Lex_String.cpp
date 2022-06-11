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
        int n, m, k;
        cin >> n >> m >> k;

        string a, b;
        cin >> a;
        cin >> b;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0, j = 0, curri = 0, currj = 0;
        string ans = "";

        while (i < n && j < m)
        {
            if (a[i] <= b[j])
            {
                if (curri < k)
                {
                    ans.push_back(a[i]);
                    curri++, i++;
                    currj = 0;
                }
                else
                {
                    ans.push_back(b[j]);
                    currj++, j++;
                    curri = 0;
                }
            }
            else
            {
                if (currj < k)
                {
                    ans.push_back(b[j]);
                    currj++, j++;
                    curri = 0;
                }
                else
                {
                    ans.push_back(a[i]);
                    curri++, i++;
                    currj = 0;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}