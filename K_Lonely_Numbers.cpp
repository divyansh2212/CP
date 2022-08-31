// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    vector<bool> is_prime(1e6 + 1, true);
    vector<int> prefix(1e6 + 1, 0);
    is_prime[0] = false, is_prime[1] = false;

    for (ll i = 2; i <= 1e6; i++)
    {
        if (is_prime[i])
            for (ll j = 2 * i; j <= 1e6; j += i)
                is_prime[j] = false;
        prefix[i] = prefix[i - 1] + is_prime[i];
    }

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        if (n < 4)
        {
            printf("%d\n", n);
            continue;
        }
        int sqt = sqrt(n);

        printf("%d\n", prefix[n] - prefix[sqt] + 1);
    }
    return 0;
}