#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;

    map<int, int> hsh;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        hsh[arr[i]] = 1;
    }

    if (hsh[l] == 0)
        arr.push_back(l);

    if (hsh[0] == 0)
        arr.push_back(0);

    sort(arr.begin(), arr.end());
    double diff = INT_MIN, r = INT_MIN;
    int fp, sp;
    for (int i = 1; i < arr.size(); i++)
    {
        fp = arr[i - 1], sp = arr[i];
        diff = sp - fp;

        if (hsh[fp] == 0 || hsh[sp] == 0)
            r = max(r, diff / 1.0);

        else
            r = max(r, diff / 2.0);
    }

    cout << fixed << setprecision(10) << r;
    return 0;
}