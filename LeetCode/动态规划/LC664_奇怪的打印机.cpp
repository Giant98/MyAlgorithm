/*
题目描述：LeetCode 664

有台奇怪的打印机有以下两个特殊要求：

打印机每次只能打印由 同一个字符 组成的序列。
每次可以在任意起始和结束位置打印新字符，并且会覆盖掉原来已有的字符。
给你一个字符串 s ，你的任务是计算这个打印机打印它需要的最少打印次数。

输入：s = "aaabbb"
输出：2
解释：首先打印 "aaa" 然后打印 "bbb"。
*/
class Solution {
public:
    int strangePrinter(string s) {
        int strSize = s.size();
        vector<vector<int>>dp(strSize, vector<int>(strSize, INT_MAX));
        for (int i = 0; i < strSize; i++) {
            dp[i][i] = 1;
        }
        for (int i = strSize - 2; i >= 0; i--) {
            for (int j = i + 1; j < strSize; j++) {
                dp[i][j] = 1 + dp[i + 1][j];
                for (int k = i + 1; k < j; k++) {
                    if (s[i] == s[k]) {
                        dp[i][j] = min(dp[i][j], dp[i + 1][k] + dp[k + 1][j]);
                    }
                }
                if (s[i] == s[j]) {
                    dp[i][j] = min(dp[i][j], dp[i + 1][j]);
                }
            }
        }
        return dp[0][strSize - 1];
    }
};
