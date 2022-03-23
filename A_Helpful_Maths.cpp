// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;

    vector<char> arr;
    for (int i = 0; i < s.length(); i += 2)
        arr.push_back(s[i]);

    sort(arr.begin(), arr.end());

    s.clear();

    for (int i = 0; i < arr.size(); i++)
    {
        s.push_back(arr[i]);
        s.push_back('+');
    }
    s.pop_back();
    cout << s;

    return 0;
}