/*
题目描述：LeetCode 263

给你一个整数 n ，请你判断 n 是否为 丑数 。如果是，返回 true ；否则，返回 false 。
丑数 就是只包含质因数 2、3 和/或 5 的正整数。

输入：n = 6
输出：true
解释：6 = 2 × 3
*/
class Solution {
public:
    bool isUgly(int n) {
        if (n < 1) return false;
        while (n % 5 == 0) {
            n /= 5;
        }
        while (n % 3 == 0) {
            n /= 3;
        }
        while (n % 2 == 0) {
            n >>= 1;
        }
        return n == 1;
    }
};