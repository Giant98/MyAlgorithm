/*
题目描述：LeetCode 203

给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。

输入：head = [1,2,6,3,4,5,6], val = 6
输出：[1,2,3,4,5]
*/
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode** cur = &head;

        while (*cur)
        {
            if ((*cur)->val == val)
            {
                *cur = (*cur)->next;
            }
            else
            {
                cur = &(*cur)->next;
            }
        }

        return head;
    }
};