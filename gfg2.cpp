// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<long long> findPairs(int N)
    {
        //write your code here
        for (long long i = 0; i < N; i++)
        {
            
        }
        
    }
};

// { Driver Code Starts.

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        Solution obj;
        vector<long long> ans = obj.findPairs(N);
        long long A = ans[0];
        long long B = ans[1];

        long long g = __gcd(A, B);
        long long l = (A / g) * B;

        cout << ((l - g == N) && A > 1 && B > 1) << "\n";
    }
}
// } Driver Code Ends