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

        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        s.insert(6);
        s.insert(13);
        s.insert(20);
        s.insert(27);
        s.insert(7);
        s.insert(14);
        s.insert(21);
        s.insert(28);
        cout << s.size() << endl;
    }
    return 0;
}