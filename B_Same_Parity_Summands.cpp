#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if(k > n) cout << "NO\n";
        else if (n % 2 && k % 2 == 0)
            cout << "NO\n";
        else if (n % 2 && k % 2)
        {
            bool flag = true;
            vector<int> ans;
            while (k--)
            {
                if (k == 0)
                {
                    ans.push_back(n);
                    if (n % 2 == 0 || n == 0)
                        flag = false;
                    break;
                }
                n--;
                if (n <= 0)
                    flag = false;
                ans.push_back(1);
            }
            if (flag == false)
                cout << "NO\n";
            else
            {
                cout << "YES\n";
                for (int i = 0; i < ans.size(); i++)
                    cout << ans[i] << " ";
                cout << endl;
            }
        }
        else if (n % 2 == 0 && k % 2)
        {
            bool flag = true;
            vector<int> ans;
            while (k--)
            {
                if (k == 0)
                {
                    ans.push_back(n);
                    if (n % 2 || n == 0)
                        flag = false;
                    break;
                }
                n = n - 2;
                if (n <= 0)
                    flag = false;
                ans.push_back(2);
            }
            if (flag == false)
                cout << "NO\n";
            else
            {
                cout << "YES\n";
                for (int i = 0; i < ans.size(); i++)
                    cout << ans[i] << " ";
                cout << endl;
            }
        }
        else if (n % 2 == 0 && k % 2 == 0)
        {
            int k_copy = k;
            bool flag1 = true;
            vector<int> ans1;
            while (k--)
            {
                if (k == 0)
                {
                    ans1.push_back(n);
                    if (n % 2 == 0 || n == 0)
                        flag1 = false;
                    break;
                }
                n--;
                if (n <= 0)
                    flag1 = false;
                ans1.push_back(1);
            }
            if (flag1)
            {
                cout << "YES\n";
                for (int i = 0; i < ans1.size(); i++)
                    cout << ans1[i] << " ";
                cout << endl;
                continue;
            }

            bool flag = true;
            vector<int> ans;
            while (k_copy--)
            {
                if (k_copy == 0)
                {
                    ans.push_back(n);
                    if (n % 2 || n == 0)
                        flag = false;
                    break;
                }
                n = n - 2;
                if (n <= 0)
                    flag = false;
                ans.push_back(2);
            }
            if (flag)
            {
                cout << "YES\n";
                for (int i = 0; i < ans.size(); i++)
                    cout << ans[i] << " ";
                cout << endl;
            }
            else
                cout << "NO\n";
        }
    }
    return 0;
}