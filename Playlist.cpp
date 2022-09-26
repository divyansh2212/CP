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

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = 1, i = 0, j = 0;
    set<int> st;

    while (j < n)
    {
        st.insert(arr[j]);

        if (j - i + 1 == st.size())
            ans = max(ans, j - i + 1);
        else
        {
            while (i < j)
            {
                if (arr[i] == arr[j])
                {
                    i++;
                    break;
                }
                st.erase(arr[i]);
                i++;
            }
        }
        j++;
    }
    cout << ans;
}
int main()
{
    solve();
    return 0;
}