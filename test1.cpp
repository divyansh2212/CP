// <-------------------- Jai Shree Babosa -------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve(long key)
{
    bool isNeg = false;
    if (key < 0)
        key = abs(key), isNeg = true;
    vector<int> num;
    int zeroes = 0;
    while (key > 0)
    {
        int rem = key % 10;
        if (rem == 0)
            zeroes++;
        else
            num.push_back(rem);
        key /= 10;
    }

    sort(num.begin(), num.end());
    long ans = 0;
    if (num.size())
        ans = num[0];

    while (zeroes--)
        ans *= 10;

    for (int i = 1; i < num.size(); i++)
    {
        ans *= 10;
        ans += num[i];
    }
    if (isNeg)
        ans *= -1;
    cout << ans;
}
int main()
{
    long x;
    cin >> x;
    solve(x);
    return 0;
}