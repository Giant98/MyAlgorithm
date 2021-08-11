/*
题目描述：LeetCode 446

给你一个整数数组 nums ，返回 nums 中所有 等差子序列 的数目。
如果一个序列中 至少有三个元素 ，并且任意两个相邻元素之差相同，则称该序列为等差序列。
例如，[1, 3, 5, 7, 9]、[7, 7, 7, 7] 和 [3, -1, -5, -9] 都是等差序列。
再例如，[1, 1, 2, 5, 7] 不是等差序列。
数组中的子序列是从数组中删除一些元素（也可能不删除）得到的一个序列。
例如，[2,5,10] 是 [1,2,1,2,4,1,5,10] 的一个子序列。
题目数据保证答案是一个 32-bit 整数。

输入：nums = [2,4,6,8,10]
输出：7
解释：所有的等差子序列为：
[2,4,6]
[4,6,8]
[6,8,10]
[2,4,6,8]
[4,6,8,10]
[2,4,6,8,10]
[2,6,10]
*/
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size(), res = 0;
        vector<unordered_map<long long, int>> map(n); // 以nums[i]结尾且公差为diff的等差子序列的数量
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                auto diff = (long long)nums[i] - nums[j];
                int count = 0;
                if (map[j].count(diff))
                    count = map[j][diff];
                res += count;
                map[i][diff] += ++count;
            }
        }
        return res;
    }
};