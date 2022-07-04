// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode *head)
    {
        vector<vector<int>> matrix(m, vector<int>(n, -1));

        ListNode *temp = head;

        int firstRow = 0, lastRow = m - 1, firstcol = 0, lastcol = n - 1;

        bool flag = false;
        while (firstRow <= lastRow && firstcol <= lastcol)
        {
            for (int i = firstcol; i < lastcol + 1; i++)
            {
                if (temp != NULL)
                {
                    matrix[firstRow][i] = temp->val;
                    temp = temp->next;
                }
                else
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
            firstRow++;

            for (int i = firstRow; i < lastRow + 1; i++)
            {
                if (temp != NULL)
                {
                    matrix[i][lastcol] = temp->val;
                    temp = temp->next;
                }
                else
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
            lastcol--;

            for (int i = lastcol; i >= firstcol; i--)
            {
                if (temp != NULL)
                {
                    matrix[lastRow][i] = temp->val;
                    temp = temp->next;
                }
                else
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
            lastRow--;

            for (int i = lastRow; i >= firstRow; i--)
            {
                if (temp != NULL)
                {
                    matrix[i][firstcol] = temp->val;
                    temp = temp->next;
                }
                else
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
            firstcol++;
        }

        return matrix;
    }
};