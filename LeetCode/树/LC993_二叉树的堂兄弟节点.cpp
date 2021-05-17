/*
题目描述：LeetCode 993

在二叉树中，根节点位于深度 0 处，每个深度为 k 的节点的子节点位于深度 k+1 处。
如果二叉树的两个节点深度相同，但 父节点不同 ，则它们是一对堂兄弟节点。
我们给出了具有唯一值的二叉树的根节点 root ，以及树中两个不同节点的值 x 和 y 。
只有与值 x 和 y 对应的节点是堂兄弟节点时，才返回 true 。否则，返回 false。

输入：root = [1,2,3,4], x = 4, y = 3
输出：false
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
            // 每次只遍历当前层
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

            // 只要找到一个遍历提前结束
            if (foundX || foundY)
            {
                break;
            }
        }

        return foundX && foundY && (parentX != parentY);
    }
};