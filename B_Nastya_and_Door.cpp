// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0, j = 2, points = 0, currpoints = 0, left = 0;

    while (j < n)
    {
        if (arr[j - 1] > arr[j] && arr[j - 1] > arr[j - 2])
            currpoints++;

        if (j - i + 1 == k)
        {
            if (currpoints > points)
                points = currpoints, left = i;
            else if (currpoints == points && i < left)
                left = i;

            if (arr[i + 1] > arr[i] && arr[i + 2] < arr[i + 1])
                currpoints--;
            i++;
        }
        j++;
    }
    cout << points + 1 << " " << left + 1 << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}