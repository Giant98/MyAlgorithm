/*
题目描述：LeetCode 930

给你一个二元数组 nums ，和一个整数 goal ，请你统计并返回有多少个和为 goal 的 非空 子数组。
子数组 是数组的一段连续部分。

输入：nums = [1,0,1,0,1], goal = 2
输出：4
解释：
如下面黑体所示，有 4 个满足题目要求的子数组：
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
*/
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int>hash;
        hash[0]++;
        int sum = 0, num = 0;
        for (int i : nums) {
            num += i;
            if (hash[num - goal])
                sum += hash[num - goal];
            hash[num]++;
        }
        return sum;
    }
};