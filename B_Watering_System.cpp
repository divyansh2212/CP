#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, A, B;
    cin >> n >> A >> B;

    vector<int> holes(n);
    for (int i = 0; i < n; i++)
        cin >> holes[i];

    sort(holes.begin() + 1, holes.end());
    int holesSum = accumulate(holes.begin(), holes.end(), 0);

    int ans = 0;

    while (1)
    {
        if (B <= (holes[0] * A) / holesSum)
            break;
        int last = holes[holes.size() - 1];
        holesSum -= last;
        holes.pop_back();
        ans++;
    }
    cout << ans;
    return 0;
}