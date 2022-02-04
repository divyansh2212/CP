#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> v;
    int i = 1, cnt = 1;
    while (i < n)
    {
        if (arr[i] == arr[i - 1])
            cnt++;
        else
        {
            v.push_back(cnt);
            cnt = 1;
        }
        i++;
    }
    v.push_back(cnt);
    int ans = 0;
    for (int i = 0; i < v.size() - 1; i++)
        ans = max(ans, min(v[i], v[i + 1]));

    cout << 2 * ans;
    return 0;
}