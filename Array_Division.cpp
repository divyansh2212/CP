#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> curr;
vector<vector<pair<int, int>>> all;

void subSequences(vector<int> &arr, int idx)
{
    if (idx == arr.size())
    {
        all.push_back(curr);
        curr.clear();
        return;
    }

    subSequences(arr, idx + 1);

    curr.push_back({arr[idx], idx});

    subSequences(arr, idx + 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        all.clear();
        curr.clear();

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        subSequences(arr, 0);

        vector<pair<int, int>> fst_arr;
        int size = INT_MAX, sum = 0;

        for (int i = 0; i < all.size(); i++)
        {
            int curr_sum = 0;
            for (int j = 1; j < all[i].size(); j++)
                curr_sum += abs(all[i][j].first - all[i][j - 1].first);
            if (curr_sum >= sum && size > all[i].size())
                sum = curr_sum, size = all[i].size(), fst_arr = all[i];
        }

        for (int i = 0; i < fst_arr.size(); i++)
        {
            cout << fst_arr[i].first << " ";
        }
        cout << endl;

        // vector<bool> visited(n, false);
        // for (int i = 0; i < fst_arr.size(); i++)
        //     visited[fst_arr[i].second] = true;

        // vector<int> scnd_arr;
        // for (int i = 0; i < n; i++)
        // {
        //     if (visited[i])
        //         continue;
        //     scnd_arr.push_back(arr[i]);
        // }
        // for (int i = 1; i < scnd_arr.size(); i++)
        //     sum += abs(scnd_arr[i] - scnd_arr[i - 1]);

        // cout << sum << endl;
    }
    return 0;
}