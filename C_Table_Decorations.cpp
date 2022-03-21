// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    vector<ll> arr(3);

    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    cout << min((arr[0] + arr[1] + arr[2]) / 3, arr[0] + arr[1]);

    return 0;
}