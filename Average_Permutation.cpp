// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    int num = n;
    int i = 0, j = n - 1, flag = 1;

    while (num)
    {
        if (flag)
            arr[i] = num, i++;
        else
            arr[j] = num, j--;
        flag = !flag, num--;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}