/*
题目描述：LeetCode 581

给你一个整数数组 nums ，你需要找出一个 连续子数组 ，如果对这个子数组进行升序排序，那么整个数组都会变为升序排序。
请你找出符合题意的 最短 子数组，并输出它的长度。

输入：nums = [2,6,4,8,10,9,15]
输出：5
解释：你只需要对 [6, 4, 8, 10, 9] 进行升序排序，那么整个表都会变为升序排序。
*/
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int length = nums.size();
        if (length <= 1)return 0;
        int max = nums[0];
        int min = nums[length - 1];
        int high = 0;
        int low = length - 1;
        for (int i = 0; i < nums.size(); i++) {
            max = max > nums[i] ? max : nums[i];
            min = min < nums[length - 1 - i] ? min : nums[length - 1 - i];
            if (nums[i] < max) high = i;
            if (nums[length - 1 - i] > min) low = length - 1 - i;
        }
        return high > low ? high - low + 1 : 0;
    }
};