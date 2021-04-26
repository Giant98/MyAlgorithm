﻿/*
题目描述：LeetCode 1011

传送带上的包裹必须在 D 天内从一个港口运送到另一个港口。
传送带上的第 i 个包裹的重量为 weights[i]。每一天，我们都会按给出重量的顺序往传送带上装载包裹。我们装载的重量不会超过船的最大运载重量。
返回能在 D 天内将传送带上的所有包裹送达的船的最低运载能力。

输入：weights = [1,2,3,4,5,6,7,8,9,10], D = 5
输出：15
解释：
船舶最低载重 15 就能够在 5 天内送达所有包裹，如下所示：
第 1 天：1, 2, 3, 4, 5
第 2 天：6, 7
第 3 天：8
第 4 天：9
第 5 天：10
请注意，货物必须按照给定的顺序装运，因此使用载重能力为 14 的船舶并将包装分成 (2, 3, 4, 5), (1, 6, 7), (8), (9), (10) 是不允许的。

*/
class Solution {
public:
    bool check(vector<int>& weights, int D, int limit) {
        int cnt = 1, cur = 0;
        for (auto& weight : weights) {
            if (limit < weight) return false;
            if (cur + weight > limit) {
                cnt++;
                cur = 0;
            }
            cur += weight;
        }
        return cnt <= D;
    }
    int shipWithinDays(vector<int>& weights, int D) {
        int left = 1, right = 500 * 50000;
        int ans = right;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (check(weights, D, mid)) {
                right = mid - 1;
                ans = mid;
            }
            else
                left = mid + 1;
        }
        return ans;
    }
};
