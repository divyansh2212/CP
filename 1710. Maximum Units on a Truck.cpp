// Jai Shree Babosa!
class Solution
{
public:
    bool static compare(vector<int> &a, vector<int> &b)
    {
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {
        sort(boxTypes.begin(), boxTypes.end(), compare);
        int ans = 0;
        for (int i = 0; i < boxTypes.size(); i++)
        {
            int to_add = min(boxTypes[i][0], truckSize);
            truckSize -= to_add;
            ans += (to_add * boxTypes[i][1]);
        }
        return ans;
    }
};