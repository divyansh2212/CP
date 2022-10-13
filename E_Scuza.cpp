// // <--------------------Jai Shree Babosa-------------------->

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define inf INT_MAX
// const int mod = 1e9 + 7;

// void solve()
// {
//     int n, q;
//     cin >> n >> q;

//     vector<ll> stairs(n);
//     vector<pair<int, int>> arr;
//     cin >> stairs[0];
//     arr.push_back({stairs[0], 0});
//     for (int i = 1; i < n; i++)
//     {
//         cin >> stairs[i];
//         arr.push_back({stairs[i], i});
//         stairs[i] = stairs[i] + stairs[i - 1];
//     }

//     vector<int> query(q);
//     for (int i = 0; i < q; i++)
//         cin >> query[i];

//     sort(arr.begin(), arr.end());

//     vector<int> new_arr, new_index;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         new_arr.push_back(arr[i].first);
//         new_index.push_back(arr[i].second);
//     }

//     for (int i = 0; i < q; i++)
//     {
//         int idx = upper_bound(new_arr.begin(), new_arr.end(), query[i]) - new_arr.begin();
//         int ind = new_index[idx] - 1;
//         if (ind < 0)
//             cout << 0 << " ";
//         else
//             cout << stairs[ind] << " ";
//     }

//     cout << "\n";
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }

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

    vector<ll> stairs(n);
    for (int i = 0; i < n; i++)
        cin >> stairs[i];

    vector<ll> prefix(n);
    prefix[0] = stairs[0];
    for (int i = 1; i < n; i++)
        prefix[i] = stairs[i] + prefix[i - 1];

    vector<ll> prefixMax(n);
    prefixMax[0] = stairs[0];

    for (int i = 1; i < n; i++)
        prefixMax[i] = max(prefixMax[i - 1], stairs[i]);

    vector<int> query(q);
    for (int i = 0; i < q; i++)
        cin >> query[i];

    for (int i = 0; i < q; i++)
    {
        int idx = upper_bound(prefixMax.begin(), prefixMax.end(), query[i]) - prefixMax.begin();
        idx--;
        if (idx < 0)
            cout << 0 << " ";
        else
            cout << prefix[idx] << " ";
    }
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