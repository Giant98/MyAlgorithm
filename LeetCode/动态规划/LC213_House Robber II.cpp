/*
题目描述：LeetCode 213

你是一个专业的小偷，计划偷窃沿街的房屋，每间房内都藏有一定的现金。这个地方所有的房屋都 围成一圈 ，这意味着第一个房屋和最后一个房屋是紧挨着的。同时，相邻的房屋装有相互连通的防盗系统，如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警 。
给定一个代表每个房屋存放金额的非负整数数组，计算你 在不触动警报装置的情况下 ，能够偷窃到的最高金额。

输入：nums = [2,3,2]
输出：3
解释：你不能先偷窃 1 号房屋（金额 = 2），然后偷窃 3 号房屋（金额 = 2）, 因为他们是相邻的。
 */
class Solution {
public:
    int rob(vector<int>& nums) { // 动态规划
        if (nums.size() == 0) return 0; // 特别判断
        if (nums.size() == 1) return nums[0];
        // 分类讨论，两种情况
        int result1 = robRange(nums, 0, nums.size() - 2); // 1.留头去尾
        int result2 = robRange(nums, 1, nums.size() - 1); // 2.留尾去头
        return max(result1, result2); // 分析两种情况，给出最大值即可
    }
    // 下面的代码和LC198打家劫舍的逻辑相同
    int robRange(vector<int>& nums, int start, int end) {
        if (start == end)return nums[start];
        int first = nums[start];
        int second = max(nums[start], nums[start + 1]);
        for (int i = start + 2; i <= end; i++) {
            int temp = second;
            second = max(first + nums[i], second);
            first = temp;
        }
        return second;
    }
};