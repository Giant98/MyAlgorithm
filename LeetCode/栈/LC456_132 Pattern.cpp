/*
题目描述：LeetCode 456

给定一个整数序列：a1, a2, ..., an，一个132模式的子序列 ai, aj, ak 被定义为：当 i < j < k 时，ai < ak < aj。设计一个算法，当给定有 n 个数字的序列时，验证这个序列中是否含有132模式的子序列。
注意：n 的值小于15000。

输入: [1, 2, 3, 4]
输出: False

解释: 序列中不存在132模式的子序列。
*/
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int two = INT_MIN;
        stack<int>s;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] < two)return true;
            while (!s.empty() && nums[s.top()] < nums[i]) {
                two = nums[s.top()];
                s.pop();
            }
            s.push(i);
        }
        return false;
    }
};