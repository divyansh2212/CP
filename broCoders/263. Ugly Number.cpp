class Solution
{
public:
    bool isUgly(int n)
    {

        if (n <= 0)
            return false;

        for (long long i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i != 2 && i != 3 && i != 5)
                    return false;
                while (n % i == 0)
                    n /= i;
            }
        }
        if (n == 2 || n == 3 || n == 5 || n == 1)
            return true;
        return false;
    }
};