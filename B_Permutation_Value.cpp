// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    int cnt = 1, i = 0, j = n - 1;
    vector<int> arr(n);
    while (i <= j)
    {
        if (i == j)
        {
            arr[i] = cnt;
            break;
        }
        arr[i] = cnt;
        cnt++;
        arr[j] = cnt;
        cnt++, i++, j--;
    }
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}