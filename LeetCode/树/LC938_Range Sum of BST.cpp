/*
��Ŀ������LeetCode 938

���������������ĸ���� root������ֵλ�ڷ�Χ [low, high] ֮������н���ֵ�ĺ͡�

���룺root = [10,5,15,3,7,null,18], low = 7, high = 15
�����32
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
    int ans;
    int low, high;
    void dfs(TreeNode* root) {
        if (root == nullptr) return;
        if (root->val < low)
            dfs(root->right);
        else if (root->val > high)
            dfs(root->left);
        else {
            ans += root->val;
            dfs(root->left);
            dfs(root->right);
        }
    }
    int rangeSumBST(TreeNode* root, int _low, int _high) {
        ans = 0, low = _low, high = _high;
        dfs(root);
        return ans;
    }
};

