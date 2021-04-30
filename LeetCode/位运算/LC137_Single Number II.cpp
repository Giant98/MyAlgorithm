/*
题目描述：LeetCode 137

给你一个整数数组 nums ，除某个元素仅出现 一次 外，其余每个元素都恰出现 三次 。请你找出并返回那个只出现了一次的元素。

输入：nums = [2,2,3,2]
输出：3
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        for (auto [num, occ] : freq) {
            if (occ == 1)
                return num;
        }
        return 0;
    }
};
