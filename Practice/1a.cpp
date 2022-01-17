class Solution
{
public:
    string addBinary(string a, string b)
    {
        if (a.length() == 0)
        {
            return b;
        }
        if (b.length() == 0)
        {
            return a;
        }
        string ans = "";
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;
        while (i >= 0 && j >= 0)
        {
            if (carry == 0)
            {
                if (a[i] == '1' && b[j] == '1')
                {
                    carry = 1;
                    ans += '0';
                }
                else if ((a[i] == '1' && b[j] == '0') || (a[i] == '0' && b[j] == '1'))
                {
                    carry = 0;
                    ans += '1';
                }
                else if (a[i] == '0' && b[j] == '0')
                {
                    carry = 0;
                    ans += '0';
                }
            }
            if (carry == 1)
            {
                if (a[i] == '1' && b[j] == '1')
                {
                    carry = 1;
                    ans += '1';
                }
                else if ((a[i] == '1' && b[j] == '0') || (a[i] == '0' && b[j] == '1'))
                {
                    carry = 1;
                    ans += '0';
                }
                else if (a[i] == '0' && b[j] == '0')
                {
                    carry = 0;
                    ans += '1';
                }
            }
            i--;
            j--;
        }
        while (i >= 0)
        {
            if (carry == 1)
            {
                if (a[i] == '0')
                {
                    ans += '1';
                    carry = 0;
                }
                else
                {
                    carry = 1;
                    ans += '0';
                }
            }
            else if (carry == 0)
            {
                if (a[i] == '0')
                {
                    ans += '0';
                    carry = 0;
                }
                else
                {
                    carry = 0;
                    ans += '1';
                }
            }
            i--;
        }
        while (j >= 0)
        {
            if (carry == 1)
            {
                if (b[j] == '0')
                {
                    ans += '1';
                    carry = 0;
                }
                else
                {
                    carry = 1;
                    ans += '0';
                }
            }
            else if (carry == 0)
            {
                if (b[j] == '0')
                {
                    ans += '0';
                    carry = 0;
                }
                else
                {
                    carry = 0;
                    ans += '1';
                }
            }
            j--;
        }
        if (carry == 1)
        {
            ans += '1';
            carry = 0;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
