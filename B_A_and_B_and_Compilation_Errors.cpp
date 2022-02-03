#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> m1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m1[x]++;
    }

    map<int, int> m2;
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        m2[x]++;
    }

    for (auto m : m1)
    {
        int key = m.first;
        int times = m.second;
        if (m2[key] != m.second)
            cout << key << endl;
    }
    m1.clear();

    for (int i = 0; i < n - 2; i++)
    {
        int x;
        cin >> x;
        m1[x]++;
    }
    for (auto m : m2)
    {
        int key = m.first;
        int times = m.second;
        if (m1[key] != m.second)
            cout << key << endl;
    }
    return 0;
}