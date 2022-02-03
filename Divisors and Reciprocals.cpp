#include <bits/stdc++.h>
using namespace std;

// #define int long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, a, b;
        cin >> x >> a >> b;

        long long numerator = b * x;
        if (numerator % a)
            cout << -1 << endl;
        else
        {
            long long N = numerator / a;
            vector<long long> sum;
            for (long long i = 1; i * i <= N; i++)
            {
                if (N % i == 0)
                {
                    sum.push_back(i);
                    if (i != N / i)
                        sum.push_back(N / i);
                }
            }
            if (accumulate(sum.begin(), sum.end(), 0) != x)
                cout << -1 << endl;
            else
                cout << N << endl;
        }
    }

    return 0;
}