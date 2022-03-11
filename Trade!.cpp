#include <bits/stdc++.h>
using namespace std;
#define ll long long

int find(long n)
{
    if (n & (n - 1) == 0)
        return log2(n);

    ll initial = 1;
    int ans1 = 1;
    if (n % 2)
    {
        n--;
        for (int i = 1; i < 100; i++)
        {
            ans1++;
            initial++;

            if (initial * 2 == n)
                break;
        }
        ans1++;
        n++;
    }
    else
    {
        ans1 = 0;
        initial = 1;
        for (int i = 1; i < 100; i++)
        {
            ans1++;
            initial++;
            if (initial * 2 == n)
                break;
        }
        ans1++;
    }

    int ans2 = 0;
    initial = 1;
    for (int i = 0; i < 45; i++)
    {
        initial *= 2;
        if (initial > n)
        {
            initial /= 2;
            break;
        }
        ans2++;
    }
    ans2 += (n - initial);
    return min(ans1, ans2);
}