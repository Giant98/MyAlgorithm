/*
题目描述：LeetCode 847

存在一个由 n 个节点组成的无向连通图，图中的节点按从 0 到 n - 1 编号。
给你一个数组 graph 表示这个图。其中，graph[i] 是一个列表，由所有与节点 i 直接相连的节点组成。
返回能够访问所有节点的最短路径的长度。你可以在任一节点开始和停止，也可以多次重访节点，并且可以重用边。

输入：graph = [[1,2,3],[0],[0],[0]]
输出：4
解释：一种可能的路径为 [1,0,2,0,3]
*/
class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();
        queue<tuple<int, int, int>> q;
        vector<vector<int>> seen(n, vector<int>(1 << n));
        for (int i = 0; i < n; ++i) {
            q.emplace(i, 1 << i, 0);
            seen[i][1 << i] = true;
        }

        int ans = 0;
        while (!q.empty()) {
            auto [u, mask, dist] = q.front();
            q.pop();
            if (mask == (1 << n) - 1) {
                ans = dist;
                break;
            }
            // 搜索相邻的节点
            for (int v : graph[u]) {
                // 将 mask 的第 v 位置为 1
                int mask_v = mask | (1 << v);
                if (!seen[v][mask_v]) {
                    q.emplace(v, mask_v, dist + 1);
                    seen[v][mask_v] = true;
                }
            }
        }
        return ans;
    }
};
