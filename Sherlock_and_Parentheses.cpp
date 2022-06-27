#include <bits/stdc++.h>
using namespace std;

int getMaximumBalancedSubstrings(int L, int R)
{
    int maximumBalancedSubstrings = min(L, R);

    maximumBalancedSubstrings += (maximumBalancedSubstrings * 1LL * (maximumBalancedSubstrings - 1)) / 2;

    return maximumBalancedSubstrings;
}

int main()
{
    int T;
    // Get number of test cases
    cin >> T;
    for (int tc = 1; tc <= T; tc++)
    {
        int L, R;
        cin >> L >> R;
        cout << "Case #" << tc << ": " << getMaximumBalancedSubstrings(L, R)
             << endl;
    }
    return 0;
}
