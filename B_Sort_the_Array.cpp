#include <bits/stdc++.h>
using namespace std;

bool helper(vector<int> arr, vector<int> sorted, int i, int j)
{
    reverse(arr.begin() + i, arr.begin() + j + 1);

    return arr == sorted;
}

int main()
{
    int n;
    cin >> n;

    vector<int> sorted_arr(n);
    for (int i = 0; i < n; i++)
        cin >> sorted_arr[i];

    vector<int> original_arr = sorted_arr;
    sort(sorted_arr.begin(), sorted_arr.end());

    int idx1 = 0, idx2 = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (helper(original_arr, sorted_arr, i, j))
            {
                idx1 = i + 1, idx2 = j + 1;
                flag = true;
                break;
            }
        }
        if (flag)
            break;
    }
    if (flag)
    {
        cout << "yes\n";
        cout << idx1 << " " << idx2 << endl;
    }
    else
        cout << "no";
    return 0;
}