class Solution
{
public:
    vector<int> findOriginalArray(vector<int> &changed)
    {
        int n = changed.size();
        if (n % 2)
            return {};

        map<int, int> hsh;
        for (auto &r : changed)
            hsh[r]++;

        vector<int> original;
        for (auto &it : hsh)
        {
            while (it.second > 0)
            {
                if (it.second > 0 && hsh[it.first * 2] > 0)
                    it.second--, hsh[it.first * 2]--;
                else
                    return {};
                original.push_back(it.first);
            }
        }
        return original;
    }
};