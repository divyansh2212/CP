#include <bits/stdc++.h>
using namespace std;
const int N = 1e9 + 10;

int main()
{
    int t;
    cin >> t;
    map<int, int> m;
    for (int i = 1; i < N; i++)
    {
        if ((i & (i + 1)) == 0)
            m[i] = i + 1, m[i + 1] = i;
        else
        {
            int bits = log2(i);
            int pow1 = 1 << bits;
            int pow2 = 1 << (bits + 1);
            int diff = i - pow1;
            m[i] = pow2 - 1 - diff;
            m[pow2 - 1 - diff] = i;
        }
    }

    while (t--)
    {
        int n;
        cin >> n;
        long long ans = 0;
        for (int i = 1; i <= n; i++)
        {
            
        }
        
        cout << ans << endl;
    }

    return 0;
}