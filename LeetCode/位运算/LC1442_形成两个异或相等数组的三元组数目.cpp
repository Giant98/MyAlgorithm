/*
题目描述：LeetCode 1442

给你一个整数数组 arr 。
现需要从数组中取三个下标 i、j 和 k ，其中 (0 <= i < j <= k < arr.length) 。
a 和 b 定义如下：
a = arr[i] ^ arr[i + 1] ^ ... ^ arr[j - 1]
b = arr[j] ^ arr[j + 1] ^ ... ^ arr[k]
注意：^ 表示 按位异或 操作。
请返回能够令 a == b 成立的三元组 (i, j , k) 的数目。

输入：arr = [2,3,1,6,7]
输出：4
解释：满足题意的三元组分别是 (0,1,2), (0,2,2), (2,3,4) 以及 (2,4,4)
*/
class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int size = arr.size();
        if (size < 2)
            return 0;
        vector<vector<int>>dp(size);
        for (int i = 0; i < size; i++) {
            dp[i].resize(size);
        }
        for (int i = 0; i < size; i++) {
            dp[i][i] = arr[i];
            for (int j = i + 1; j < size; j++) {
                dp[i][j] = dp[i][j - 1] ^ arr[j];
            }
        }
        int ans = 0;
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                for (int k = j; k < size; k++) {
                    if (dp[i][j - 1] == dp[j][k]) {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};