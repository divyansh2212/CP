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

        n--;
        
        int bits = log2(n);
        int f = 1 << bits;
    
        for (int i = n; i >= f; i--)
            cout << i << " ";
        cout << 0 << " ";
        for (int i = 1; i < f; i++)
            cout << i << " ";

        cout << endl;
    }
    return 0;
}