// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    int oddCnt = 0, evenCnt = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] % 2)
            oddCnt++;
        else
            evenCnt++;
    }

    while (q--)
    {
        ll type, x;
        cin >> type >> x;

        if (type == 0)
        {
            sum += (evenCnt * x);
            if (x % 2)
            {
                oddCnt += evenCnt;
                evenCnt = 0;
            }
        }
        else
        {
            sum += (oddCnt * x);
            if (x % 2)
            {
                evenCnt += oddCnt;
                oddCnt = 0;
            }
        }
        cout << sum << "\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}