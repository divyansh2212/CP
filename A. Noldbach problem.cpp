// DONE
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
const int M = 1e6 + 10;
vector<bool> is_prime(N, true);
vector<bool> prime_sum(M, false);

int main()
{
    is_prime[0] = false;
    is_prime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (is_prime[i])
        {
            for (int j = 2 * i; j < N; j = j + i)
                is_prime[j] = false;
        }
    }

    int prev = 2;
    for (int i = 3; i < N; i = i + 2)
    {
        if (is_prime[i])
        {
            int no = prev + i;
            prime_sum[no] = true;
            prev = i;
        }
    }

    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = 2; i <= n; i++)
    {
        int no = i - 1;
        if (prime_sum[no] == true && is_prime[i] == true)
            ans++;
    }
    if (ans >= k)
        cout << "YES\n";

    else
        cout << "NO\n";

    return 0;
}