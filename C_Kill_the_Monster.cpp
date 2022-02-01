#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc;
        cin >> hm >> dm;
        cin >> k >> w >> a;

        bool ans = false;
        for (int i = 0; i < k + 1; i++)
        {
            long long hc_copy = hc, dc_copy = dc, hm_copy = hm;
            long long hupgd = i, wupgd = k - i;
            hc_copy += hupgd * a, dc_copy += wupgd * w;

            long long t_to_kill_m = hm_copy / dc_copy;
            if (hm_copy % dc_copy)
                t_to_kill_m++;

            long long t_to_kill_c = hc_copy / dm;
            if (hc_copy % dm)
                t_to_kill_c++;

            if (t_to_kill_m <= t_to_kill_c)
                ans = true;
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}