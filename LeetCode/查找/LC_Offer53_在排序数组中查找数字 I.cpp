/*
题目描述：LeetCode 剑指Offer 53

统计一个数字在排序数组中出现的次数。

输入: nums = [5,7,7,8,8,10], target = 8
输出: 2
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int ans = 0;
        while (left < right) {
            int mid = (left + right) / 2;
            if (target > nums[mid])left = mid + 1;
            if (target <= nums[mid])right = mid;
        }
        while (left < nums.size() && nums[left++] == target)
            ans++;
        return ans;
    }
};