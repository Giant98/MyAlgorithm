/*
��Ŀ������LeetCode 82

����һ�����������е�����������������ͷ�ڵ� head ������ɾ�����������д��������ظ�����Ľڵ㣬ֻ����ԭʼ������û���ظ����ֵ����֡�
����ͬ�����������еĽ������

���룺head = [1,2,3,3,4,4,5]
�����[1,2,5]
*/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) {
            return head;
        }

        ListNode* dummy = new ListNode(0, head);

        ListNode* cur = dummy;
        while (cur->next && cur->next->next) {
            if (cur->next->val == cur->next->next->val) {
                int x = cur->next->val;
                while (cur->next && cur->next->val == x) {
                    cur->next = cur->next->next;
                }
            }
            else {
                cur = cur->next;
            }
        }

        return dummy->next;
    }
};