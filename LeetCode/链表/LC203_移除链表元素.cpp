/*
��Ŀ������LeetCode 203

����һ�������ͷ�ڵ� head ��һ������ val ������ɾ���������������� Node.val == val �Ľڵ㣬������ �µ�ͷ�ڵ� ��

���룺head = [1,2,6,3,4,5,6], val = 6
�����[1,2,3,4,5]
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