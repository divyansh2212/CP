#include <bits/stdc++.h>
using namespace std;

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
        
        // vector<int> arr_copy = arr;

        sort(arr.begin(), arr.end());

        bool flag = true;

        long long alice_sc = 0, bob_sc = 0;
        while (!arr.empty())
        {
            int last = arr[arr.size() - 1];
            if (flag)
            {
                if (last % 2 == 0)
                    alice_sc += last;
            }
            else
            {
                if (last % 2)
                    bob_sc += last;
            }
            arr.pop_back();
            flag = !flag;
        }
        if (alice_sc > bob_sc)
            cout << "Alice\n";
        else if (alice_sc < bob_sc)
            cout << "Bob\n";
        else
            cout << "Tie\n";
    }
    return 0;
}