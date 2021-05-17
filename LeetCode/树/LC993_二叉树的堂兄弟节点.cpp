/*
��Ŀ������LeetCode 993

�ڶ������У����ڵ�λ����� 0 ����ÿ�����Ϊ k �Ľڵ���ӽڵ�λ����� k+1 ����
����������������ڵ������ͬ���� ���ڵ㲻ͬ ����������һ�����ֵܽڵ㡣
���Ǹ����˾���Ψһֵ�Ķ������ĸ��ڵ� root ���Լ�����������ͬ�ڵ��ֵ x �� y ��
ֻ����ֵ x �� y ��Ӧ�Ľڵ������ֵܽڵ�ʱ���ŷ��� true �����򣬷��� false��

���룺root = [1,2,3,4], x = 4, y = 3
�����false
 */
 /**
  * Definition for a binary tree node.
  * struct TreeNode {
  *     int val;
  *     TreeNode *left;
  *     TreeNode *right;
  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  * };
  */

class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        bool foundX = false;
        bool foundY = false;
        TreeNode* parentX = nullptr;
        TreeNode* parentY = nullptr;

        queue<pair<TreeNode*, TreeNode*>> q;
        q.emplace(root, nullptr);
        while (!q.empty())
        {
            // ÿ��ֻ������ǰ��
            for (int i = q.size(); i > 0; --i)
            {
                pair<TreeNode*, TreeNode*>& curr = q.front();
                if (curr.first->val == x)
                {
                    foundX = true;
                    parentX = curr.second;
                }
                else if (curr.first->val == y)
                {
                    foundY = true;
                    parentY = curr.second;
                }
                else
                {
                    if (curr.first->left != nullptr)
                    {
                        q.emplace(curr.first->left, curr.first);
                    }
                    if (curr.first->right != nullptr)
                    {
                        q.emplace(curr.first->right, curr.first);
                    }
                }
                q.pop();
            }

            // ֻҪ�ҵ�һ��������ǰ����
            if (foundX || foundY)
            {
                break;
            }
        }

        return foundX && foundY && (parentX != parentY);
    }
};