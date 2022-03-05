#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, a, b, c;
        cin >> x >> a >> b >> c;

        vector<int> arr;
        arr.push_back(a),
            arr.push_back(b),
            arr.push_back(c);
        sort(arr.begin(), arr.end());

        ll price = 0;
        price += arr[0];
        price += arr[1];
        x -= 2;
        while (x--)
            price += arr[0];
        cout << price << endl;
    }
    return 0;
}