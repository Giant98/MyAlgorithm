/*
题目描述：LeetCode 611

给定一个包含非负整数的数组，你的任务是统计其中可以组成三角形三条边的三元组个数。

输入: [2,2,3,4]
输出: 3
解释:
有效的组合是:
2,3,4 (使用第一个 2)
2,3,4 (使用第二个 2)
2,2,3
*/
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                int index = lower_bound(nums.begin() + j + 1, nums.end(), nums[i] + nums[j]) - nums.begin();
                res += index - j - 1;
            }
        }
        return res;
    }
};
