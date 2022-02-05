#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;

int main()
{
    vector<bool> is_prime(N, true);
    is_prime[0] = false, is_prime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (is_prime[i])
        {
            for (int j = 2 * i; j < N; j = j + i)
                is_prime[j] = false;
        }
    }

    int n;
    cin >> n;
    while (n--)
    {
        long long x;
        cin >> x;
        // int cnt = 0;

        double sqr = sqrt(x * 1.0);
        if (sqr != ceil(sqr))
        {
            cout << "NO\n";
            continue;
        }
        int num = sqr;
        if (is_prime[num])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}