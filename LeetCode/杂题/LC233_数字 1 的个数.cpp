/*
题目描述：LeetCode 233

给定一个整数 n，计算所有小于等于 n 的非负整数中数字 1 出现的个数。

输入：n = 13
输出：6
 */
class Solution {
public:
    int countDigitOne(int n) {
        long cnt = 0, i = 1, num = n;
        while (num) {
            if (num % 10 == 0) cnt += (num / 10) * i; //个
            if (num % 10 == 1) cnt += (num / 10) * i + (n % i) + 1; //十
            if (num % 10 > 1) cnt += ceil(num / 10.0) * i;
            num /= 10;
            i *= 10;
        }
        return cnt;
    }
};
