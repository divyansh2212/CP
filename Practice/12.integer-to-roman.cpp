/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */

// @lc code=start
class Solution
{
public:
    string intToRoman(int num)
    {
        string ans = "";
        while (num > 0)
        {
            if (num >= 1000)
            {
                int multi = num / 1000;
                num -= multi * 1000;
                while (multi--)
                    ans.push_back('M');
            }
            else if (num >= 100)
            {
                int multi = num / 100;
                num -= multi * 100;
                if (multi == 9)
                    ans += "CM";
                else if (multi == 8)
                    ans += "DCCC";
                else if (multi == 7)
                    ans += "DCC";
                else if (multi == 6)
                    ans += "DC";
                else if (multi == 5)
                    ans += "D";
                else if (multi == 4)
                    ans += "CD";
                else
                {
                    while (multi--)
                        ans.push_back('C');
                }
            }
            else if (num >= 10)
            {
                int multi = num / 10;
                num -= multi * 10;
                if (multi == 9)
                    ans += "XC";
                else if (multi == 8)
                    ans += "LXXX";
                else if (multi == 7)
                    ans += "LXX";
                else if (multi == 6)
                    ans += "LX";
                else if (multi == 5)
                    ans += "L";
                else if (multi == 4)
                    ans += "XL";
                else
                {
                    while (multi--)
                        ans.push_back('X');
                }
            }
            else
            {
                if (num == 1)
                    ans += "I";
                else if (num == 2)
                    ans += "II";
                else if (num == 3)
                    ans += "III";
                else if (num == 4)
                    ans += "IV";
                else if (num == 5)
                    ans.push_back('V');
                else if (num == 6)
                    ans += "VI";
                else if (num == 7)
                    ans += "VII";
                else if (num == 8)
                    ans += "VIII";
                else if (num == 9)
                    ans += "IX";
                num = 0;
            }
        }
        return ans;
    }
};
// @lc code=end
