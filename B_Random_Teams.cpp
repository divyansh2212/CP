#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    long long kmax = ((n - m + 1) * 1LL * (n - m)) / 2;

    long long kmin = 0;

    long long ans1 = (m - (n % m)) * ((n / m) * ((n / m) - 1)) / 2;
    long long ans2 = (n % m) * ((n / m) + 1) * ((n / m)) / 2;
    kmin = ans1 + ans2;

    cout << kmin << " " << kmax;
    return 0;
}