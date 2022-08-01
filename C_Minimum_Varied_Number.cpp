// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int s;
    cin >> s;

    vector<int> arr;

    int start = 9;
    while (s)
    {
        if (start > s)
        {
            arr.push_back(s);
            s = 0;
            break;
        }
        s -= start;
        arr.push_back(start);
        start--;
    }

    for (int i = arr.size() - 1; i >= 0; i--)
        cout << arr[i];
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