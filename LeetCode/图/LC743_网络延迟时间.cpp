/*
题目描述：LeetCode 743

有 n 个网络节点，标记为 1 到 n。
给你一个列表 times，表示信号经过 有向 边的传递时间。 times[i] = (ui, vi, wi)，其中 ui 是源节点，vi 是目标节点， wi 是一个信号从源节点传递到目标节点的时间。
现在，从某个节点 K 发出一个信号。需要多久才能使所有节点都收到信号？如果不能使所有节点收到信号，返回 -1 。

输入：times = [[2,1,1],[2,3,1],[3,4,1]], n = 4, k = 2
输出：2
*/
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        vector<vector<long>> graph(N + 1, vector<long>(N + 1, INT_MAX));
        for (int i = 1; i <= N; i++)    graph[i][i] = 0;
        for (auto e : times)    graph[e[0]][e[1]] = e[2];
        vector<bool> visited(N + 1, false);    visited[K] = true;

        for (int i = 1; i < N; i++) {//进行一次表示，从K到j，经过一个点能不能缩短路径。一共进行N-1就可以。
            int min_id = 0, min_dis = INT_MAX;//每次在unused的点中找到K最近的那个
            for (int j = 1; j <= N; j++) {
                if (visited[j] == false && graph[K][j] < min_dis) {
                    min_dis = graph[K][j];
                    min_id = j;
                }
            }
            visited[min_id] = true;//把这个点标记为“使用过了”
            for (int j = 1; j <= N; j++) {//relax
                if (graph[K][min_id] + graph[min_id][j] < graph[K][j]) {
                    graph[K][j] = graph[K][min_id] + graph[min_id][j];
                }
            }
        }
        int ans = 0;
        for (int i = 1; i <= N; i++) {
            if (graph[K][i] == INT_MAX) return -1;
            ans = max(ans, (int)graph[K][i]);
        }
        return ans;
    }
};