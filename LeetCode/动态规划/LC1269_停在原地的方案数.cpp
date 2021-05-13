/*
题目描述：LeetCode 1269

有一个长度为 arrLen 的数组，开始有一个指针在索引 0 处。
每一步操作中，你可以将指针向左或向右移动 1 步，或者停在原地（指针不能被移动到数组范围外）。
给你两个整数 steps 和 arrLen ，请你计算并返回：在恰好执行 steps 次操作以后，指针仍然指向索引 0 处的方案数。
由于答案可能会很大，请返回方案数 模 10^9 + 7 后的结果。

输入：steps = 3, arrLen = 2
输出：4
解释：3 步后，总共有 4 种不同的方法可以停在索引 0 处。
向右，向左，不动
不动，向右，向左
向右，不动，向左
不动，不动，不动
 */
class Solution {
public:
    int numWays(int steps, int arrLen) {
        int maxJ = min(steps, arrLen - 1);

        int mod = 1000000007;
        // 创建两个数组来维持最新的和上一个的,这里额外预留一个0，所以maxJ+1
        int lastD[maxJ + 1];
        memset(lastD, 0, sizeof(int) * (maxJ + 1));
        int d[maxJ + 1];
        memset(d, 0, sizeof(int) * (maxJ + 1));

        // 初始化
        lastD[0] = 1;

        for (int i = 1; i <= steps; i++) {
            for (int j = 0; j <= maxJ; j++) {
                d[j] = ((lastD[j] + (j > 0 ? lastD[j - 1] : 0)) % mod + (j < maxJ ? lastD[j + 1] : 0) % mod) % mod;
            }
            memcpy(lastD, d, sizeof(int) * (maxJ + 1));
        }


        return d[0];
    }
};

