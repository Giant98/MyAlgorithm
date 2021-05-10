/*
题目描述：LeetCode 872

请考虑一棵二叉树上所有的叶子，这些叶子的值按从左到右的顺序排列形成一个 叶值序列 。
举个例子，如上图所示，给定一棵叶值序列为 (6, 7, 4, 9, 8) 的树。
如果有两棵二叉树的叶值序列是相同，那么我们就认为它们是 叶相似 的。
如果给定的两个根结点分别为 root1 和 root2 的树是叶相似的，则返回 true；否则返回 false 。

输入：root1 = [3,5,1,6,2,9,8,null,null,7,4], root2 = [3,5,1,6,7,4,2,null,null,null,null,null,null,9,8]
输出：true

来源：力扣（LeetCode）
*/
class Solution {
public:
    void dfs(TreeNode* node, vector<int>& seq) {
        if (!node->left && !node->right) {
            seq.push_back(node->val);
        }
        else {
            if (node->left) {
                dfs(node->left, seq);
            }
            if (node->right) {
                dfs(node->right, seq);
            }
        }
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> seq1;
        if (root1) {
            dfs(root1, seq1);
        }

        vector<int> seq2;
        if (root2) {
            dfs(root2, seq2);
        }

        return seq1 == seq2;
    }
};