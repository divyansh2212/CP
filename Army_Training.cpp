// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// ll f(vector<ll> &arr, int idx)
// {
//     if(idx == arr.size())
//     return 0;

//     ll attack = arr[idx] + f(arr, idx + 1);
//     ll defense = 1000 - arr[idx] + f(arr, idx + 1);

// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        ll attack = 0, defense = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        if (n % 2 == 0)
        {
            for (int i = 0; i < (n / 2); i++)
                defense += 1000 - arr[i];
            for (int i = n / 2; i < n; i++)
                attack += arr[i];
        }
        else
        {
            for (int i = 0; i < (n / 2); i++)
                defense += 1000 - arr[i];
            for (int i = (n / 2) + 1; i < n; i++)
                attack += arr[i];
            if (arr[n / 2] > 500)
                attack += arr[n / 2];
            else
                defense += 1000 - arr[n / 2];
        }
        cout << attack * defense << endl;
    }
    return 0;
}