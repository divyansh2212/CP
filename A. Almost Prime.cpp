// DONE
#include <bits/stdc++.h>
using namespace std;
const int N = 3010;
vector<bool> is_prime(N, true);
int hp[N];

bool distinctpfs(int x)
{
    vector<int> ans;
    while (x > 1)
    {
        int pf = hp[x];
        while (x % pf == 0)
        {
            x = x / pf;
        }
        ans.push_back(pf);
    }
    return ans.size() == 2;
}

int main()
{
    for (int i = 2; i < N; i++)
    {
        if (is_prime[i])
        {
            hp[i] = i;
            for (int j = 2 * i; j < N; j = j + i)
            {
                is_prime[j] = false;
                hp[j] = i;
            }
        }
    }

    int n;
    cin >> n;
    int ans = 0;
    for (int i = 2; i <= n; i++)
    {
        if (distinctpfs(i))
            ans++;
    }
    cout << ans;
    return 0;
}