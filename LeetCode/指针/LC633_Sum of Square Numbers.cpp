/*
题目描述：LeetCode 633

给定一个非负整数 c ，你要判断是否存在两个整数 a 和 b，使得 a2 + b2 = c 。

输入：c = 5
输出：true
解释：1 * 1 + 2 * 2 = 5
*/
class Solution {
public:
    bool judgeSquareSum(int c) {
        long left = 0;
        long right = (int)sqrt(c);
        while (left <= right) {
            long sum = left * left + right * right;
            if (sum == c) {
                return true;
            }
            else if (sum > c) {
                right--;
            }
            else {
                left++;
            }
        }
        return false;
    }
};
