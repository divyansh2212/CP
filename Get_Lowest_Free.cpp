#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr(3);
        for (int i = 0; i < 3; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());
        cout << arr[1] + arr[2] << endl;
    }
    return 0;
}