#include <bits/stdc++.h>
using namespace std;
#define ll long long

void func(vector<int> &arr, vector<int> &ans)
{
    if (arr.size() == 0)
        return;
    int mx = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (mx < arr[i])
            mx = arr[i];
    }

    set<int> s;
    int idx = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        s.insert(arr[i]);
        if (s.size() == mx + 1)
        {
            idx = i;
            break;
        }
    }
    ans.push_back(mx + 1);
    vector<int> result(idx + 1);

    for (int i = 0; i < idx + 1; i++)
        result[i] = arr[i];

    func(result, ans);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> ans;
        func(arr, ans);

        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}