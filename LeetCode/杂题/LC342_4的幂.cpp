/*
题目描述：LeetCode 342

给定一个整数，写一个函数来判断它是否是 4 的幂次方。如果是，返回 true ；否则，返回 false 。
整数 n 是 4 的幂次方需满足：存在整数 x 使得 n == 4x

输入：n = 16
输出：true
*/
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 0)return false;
        if (n == 1)return true;
        if ((n & 1) == 1)return false;
        while (n % 4 == 0) {
            n = n / 4;
        }
        if (n == 1)
            return true;
        else
            return false;
    }
};