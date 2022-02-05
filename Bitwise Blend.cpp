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

        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        bool flag = true;
        set<int> s1;
        int correctIdxEven1 = -1, correctIdxOdd1 = -1;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] % 2 && i % 2)
                correctIdxOdd1 = i;
            else if (a[i] % 2)
                s1.insert(i);
            if (a[i] % 2 == 0 && i % 2 == 0)
                correctIdxEven1 = i;
            else if (a[i] % 2 == 0)
                s1.insert(i);
        }

        set<int> s2;
        int correctIdxEven2 = -1, correctIdxOdd2 = -1;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] % 2 && i % 2 == 0)
                correctIdxOdd2 = i;
            else if (a[i] % 2)
                s2.insert(i);
            if (a[i] % 2 == 0 && i % 2)
                correctIdxEven2 = i;
            else if (a[i] % 2 == 0)
                s2.insert(i);
        }
        // if(s1.size()==0 || s2.size()==0) cout << 0 << endl;
        if (s1.size() > s2.size() && correctIdxEven2 != -1 && correctIdxOdd2 != -1)
        {
            flag = false;
            cout << s2.size() << endl;
            while (!s2.empty())
            {
                int top = *s2.begin();
                s2.erase(s2.begin());
                if (top % 2)
                    cout << top << " " << correctIdxEven2 << endl;
                else
                    cout << top << " " << correctIdxOdd2 << endl;
            }
        }
        else if (correctIdxEven1 != -1 && correctIdxOdd1 != -1)
        {
            flag = false;
            cout << s1.size() << endl;
            while (!s1.empty())
            {
                int top = *s1.begin();
                s1.erase(s1.begin());
                if (top % 2)
                    cout << top << " " << correctIdxOdd1 << endl;
                else
                    cout << top << " " << correctIdxEven1 << endl;
            }
        }
        if (flag)
            cout << -1 << endl;
    }

    return 0;
}