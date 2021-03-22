/*
题目描述：LeetCode 191

编写一个函数，输入是一个无符号整数（以二进制串的形式），返回其二进制表达式中数字位数为 '1' 的个数（也被称为汉明重量）。

输入：00000000000000000000000000001011
输出：3
解释：输入的二进制串 00000000000000000000000000001011 中，共有三位为 '1'。

*/
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right) return head;
        auto ans = new ListNode(-1, head), ptr = ans;
        for (int i = 0; i < left - 1; ++i)
            ptr = ptr->next;
        auto p1 = ptr->next;
        for (int i = 0; i < right - left; ++i)
        {
            auto temp = p1->next;
            p1->next = temp->next;
            temp->next = ptr->next;
            ptr->next = temp;
        }
        return ans->next;
    }
};