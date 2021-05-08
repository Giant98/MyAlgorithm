class Solution {
public:
    vector<int> jobs;
    int n, k;
    int ans = INT_MAX;
    int minimumTimeRequired(vector<int>& _jobs, int _k) {
        jobs = _jobs;
        n = _jobs.size();
        k = _k;
        vector<int>sum(k);
        dfs(0, 0, sum, 0);
        return ans;
    }

    void dfs(int u, int used, vector<int>& sum, int max) {
        if (max >= ans)return;
        if (u == n) {
            ans = max;
            return;
        }
        if (used < k) {
            sum[used] = jobs[u];
            dfs(u + 1, used + 1, sum, std::max(sum[used], max));
            sum[used] = 0;
        }
        for (int i = 0; i < used; i++) {
            sum[i] += jobs[u];
            dfs(u + 1, used, sum, std::max(sum[used], max));
            sum[i] -= jobs[u];
        }
    }
};