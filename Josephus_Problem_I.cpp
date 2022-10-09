// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
        arr.push_back(i + 1);

    while (arr.size() > 1)
    {
        vector<int> supporter;
        for (int i = 0; i < arr.size(); i++)
        {
            if (i % 2)
                cout << arr[i] << " ";
            else
                supporter.push_back(arr[i]);
        }

        if (arr.size() % 2 == 0)
            arr = supporter;
        else
        {
            int back = supporter.back();
            supporter.pop_back();
            arr.clear();
            arr.push_back(back);
            for (int i = 0; i < supporter.size(); i++)
                arr.push_back(supporter[i]);
        }
    }
    cout << arr[0];
}
int main()
{
    solve();
    return 0;
}