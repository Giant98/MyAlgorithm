/*
题目描述：LeetCode 1646

给你一个整数 n 。按下述规则生成一个长度为 n + 1 的数组 nums ：

nums[0] = 0
nums[1] = 1
当 2 <= 2 * i <= n 时，nums[2 * i] = nums[i]
当 2 <= 2 * i + 1 <= n 时，nums[2 * i + 1] = nums[i] + nums[i + 1]
返回生成数组 nums 中的 最大 值。

输入：n = 7
输出：3
解释：根据规则：
  nums[0] = 0
  nums[1] = 1
  nums[(1 * 2) = 2] = nums[1] = 1
  nums[(1 * 2) + 1 = 3] = nums[1] + nums[2] = 1 + 1 = 2
  nums[(2 * 2) = 4] = nums[2] = 1
  nums[(2 * 2) + 1 = 5] = nums[2] + nums[3] = 1 + 2 = 3
  nums[(3 * 2) = 6] = nums[3] = 2
  nums[(3 * 2) + 1 = 7] = nums[3] + nums[4] = 2 + 1 = 3
因此，nums = [0,1,1,2,1,3,2,3]，最大值 3
 */
class Solution {
public:
    int getMaximumGenerated(int n) {
        if (n < 2)return n;
        vector<int>num(n + 1);
        num[0] = 0;
        num[1] = 1;
        int max = 1;
        for (int i = 0; i <= n; i++) {
            if (i % 2 == 0)num[i] = num[i / 2];
            else {
                num[i] = num[i / 2] + num[i / 2 + 1];
                max = num[i] > max ? num[i] : max;
            }
        }
        return max;
    }
};