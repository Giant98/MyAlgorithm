/*
题目描述：LeetCode 1787

给你一个整数数组 nums​​​ 和一个整数 k​​​​​ 。区间 [left, right]（left <= right）的
异或结果 是对下标位于 left 和 right（包括 left 和 right ）之间所有元素进行
XOR 运算的结果：nums[left] XOR nums[left+1] XOR ... XOR nums[right] 。

返回数组中 要更改的最小元素数 ，以使所有长度为 k 的区间异或结果等于零。

输入：nums = [3,4,5,2,1,7,3,4,7], k = 3
输出：3
解释：将数组 [3,4,5,2,1,7,3,4,7] 修改为 [3,4,7,3,4,7,3,4,7]
 */
class Solution {
private:
    // x 的范围为 [0, 2^10)
    static constexpr int MAXX = 1 << 10;
    // 极大值，为了防止整数溢出选择 INT_MAX / 2
    static constexpr int INFTY = INT_MAX / 2;

public:
    int minChanges(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> f(MAXX, INFTY);
        // 边界条件 f(-1,0)=0
        f[0] = 0;

        for (int i = 0; i < k; ++i) {
            // 第 i 个组的哈希映射
            unordered_map<int, int> cnt;
            int size = 0;
            for (int j = i; j < n; j += k) {
                ++cnt[nums[j]];
                ++size;
            }

            // 求出 t2
            int t2min = *min_element(f.begin(), f.end());

            vector<int> g(MAXX, t2min);
            for (int mask = 0; mask < MAXX; ++mask) {
                // t1 则需要枚举 x 才能求出
                for (auto [x, countx] : cnt) {
                    g[mask] = min(g[mask], f[mask ^ x] - countx);
                }
            }

            // 别忘了加上 size
            for_each(g.begin(), g.end(), [&](int& val) {val += size; });
            f = move(g);
        }

        return f[0];
    }
};
