/*
题目描述：LeetCode 525

给定一个二进制数组 nums , 找到含有相同数量的 0 和 1 的最长连续子数组，并返回该子数组的长度。

输入: nums = [0,1]
输出: 2
说明: [0, 1] 是具有相同数量0和1的最长连续子数组。
*/
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                nums[i] = -1;
        }
        unordered_map<int, int>mp;
        mp[0] = -1;
        int sum = 0;
        int max = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (mp.count(sum)) {
                int prevIndex = mp[sum];
                if (i - prevIndex > max)
                    max = i - prevIndex;
            }
            else {
                mp[sum] = i;
            }
        }
        return max;
    }
};
