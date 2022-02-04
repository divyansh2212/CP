#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18 + 10;

pair<long long, long long> calcMinMax(long long n)
{
    pair<long, long> a;
    long long mn = INF, mx = -1;
    while (n)
    {
        long long rem = n % 10;
        mn = min(mn, rem);
        mx = max(mx, rem);
        if (mn == 0 || mx == 0)
            break;
        n /= 10;
    }
    a.first = mn, a.second = mx;
    return a;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        k--;
        while (k--)
        {
            pair<long long, long long> a = calcMinMax(n);
            if (a.first == 0 || a.second == 0)
                break;
            n = n + (a.first * a.second);
        }
        cout << n << endl;
    }

    return 0;
}