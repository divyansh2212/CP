#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i].first >> arr[i].second;

    sort(arr.begin(), arr.end());

    int lastExamDate = -1;

    for (int i = 0; i < n; i++)
    {
        if (lastExamDate <= arr[i].second)
            lastExamDate = arr[i].second;
        else
            lastExamDate = arr[i].first;
    }

    cout << lastExamDate;

    return 0;
}