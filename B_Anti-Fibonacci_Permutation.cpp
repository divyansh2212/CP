#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> arrays;
        vector<int> fstArr;
        for (int i = n; i >= 1; i--)
            fstArr.push_back(i);
        arrays.push_back(fstArr);

        for (int i = 0; i < n - 1; i++)
        {
            vector<int> c_arr = fstArr;
            swap(c_arr[i], c_arr[i + 1]);
            arrays.push_back(c_arr);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < arrays[i].size(); j++)
                cout << arrays[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}