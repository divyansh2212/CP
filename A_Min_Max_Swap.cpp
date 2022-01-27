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
        int a[n], b[n];
        int maxa = INT_MIN, maxb = INT_MIN, idxa, idxb;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > maxa)
            {
                maxa = a[i];
                idxa = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] > maxb)
            {
                maxb = b[i];
                idxb = i;
            }
        }
        // bool flag[n] = {true};
        vector<bool> flag(n, true);

        while (1)
        {
            if (a[idxa] > b[idxa] && flag[idxa] == true && maxb >= maxa)
            {
                swap(a[idxa], b[idxa]);
                flag[idxa] = false;

                maxa = INT_MIN;
                for (int i = 0; i < n; i++)
                {
                    if (a[i] > maxa)
                    {
                        maxa = a[i];
                        idxa = i;
                    }
                }
            }
            else if (b[idxb] > a[idxb] && flag[idxb] == true && maxa >= maxb)
            {
                swap(a[idxb], b[idxb]);
                flag[idxb] = false;

                maxb = INT_MIN;
                for (int i = 0; i < n; i++)
                {
                    if (b[i] > maxb)
                    {
                        maxb = b[i];
                        idxb = i;
                    }
                }
            }
            else
                break;
        }
        cout << maxa * 1LL * maxb << endl;
    }

    return 0;
}