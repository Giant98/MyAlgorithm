/*
题目描述：LeetCode 92
给你单链表的头指针 head 和两个整数 left 和 right ，其中 left <= right 。请你反转从位置 left 到位置 right 的链表节点，返回 反转后的链表 。

输入：head = [1,2,3,4,5], left = 2, right = 4
输出：[1,4,3,2,5]
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