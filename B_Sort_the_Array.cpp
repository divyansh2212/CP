#include <bits/stdc++.h>
using namespace std;

bool isEqual(vector<int> &arr1, vector<int> &arr2)
{
    bool flag = true;
    for (int i = 0; i < arr1.size(); i++)
        if (arr1[i] != arr2[i])
            flag = false;
    return flag;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> reversedarr = arr;
    vector<int> sortedarr = arr;
    reverse(reversedarr.begin(), reversedarr.end());
    sort(sortedarr.begin(), sortedarr.end());

    if (isEqual(sortedarr, reversedarr))
    {
        cout << "yes\n";
        cout << "1 " << sortedarr.size();
        return 0;
    }
    if (isEqual(sortedarr, arr))
    {
        cout << "yes\n";
        cout << "1 1";
        return 0;
    }

    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < n - 1; i++) 
    {
        if (arr[i] > arr[i + 1])
        {
            if (idx1 == -1)
                idx1 = i;
            idx2 = i + 1;
        }
    }
    reverse(arr.begin() + idx1, arr.begin() + idx2 + 1);
    if (isEqual(arr, sortedarr))
    {
        cout << "yes\n";
        cout << idx1 + 1 << " " << idx2 + 1;
        return 0;
    }
    cout << "no";
    return 0;
}