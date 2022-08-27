// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;
class Solution
{
public:
    int maxSumSubmatrix(vector<vector<int>> &matrix, int k)
    {
        int ans = INT_MIN, n = matrix.size(), m = matrix[0].size();

        for (int col = 0; col < m; col++)
        {
            vector<int> sums(n);
            for (int j = col; j < m; j++)
            {
                for (int i = 0; i < n; i++)
                    sums[i] += matrix[i][j];

                set<int> st = {0};

                int curr_sum = 0;
                for (auto &sum : sums)
                {
                    curr_sum += sum;
                    auto it = st.lower_bound(curr_sum - k);
                    if (it != end(st))
                        ans = max(ans, curr_sum - *it);
                    st.insert(curr_sum);
                }
            }
        }

        return ans;
    }
};