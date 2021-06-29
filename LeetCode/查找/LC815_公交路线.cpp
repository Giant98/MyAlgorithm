/*
��Ŀ������LeetCode 815

����һ������ routes ����ʾһϵ�й�����·������ÿ�� routes[i] ��ʾһ��������·���� i ������������������ѭ����ʻ��
���磬·�� routes[0] = [1, 5, 7] ��ʾ�� 0 ����������һֱ������ 1 -> 5 -> 7 -> 1 -> 5 -> 7 -> 1 -> ... �����ĳ�վ·����ʻ��
���ڴ� source ��վ��������ʼʱ���ڹ������ϣ���Ҫǰ�� target ��վ�� �ڼ���ɳ�����������
��� ���ٳ����Ĺ��������� ����������ܵ����յ㳵վ������ -1 ��

���룺routes = [[1,2,7],[3,6,7]], source = 1, target = 6
�����2
���ͣ����Ų������ȳ�����һ�����������ﳵվ 7 , Ȼ�󻻳˵ڶ�������������վ 6 ��
*/
class Solution {
private:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int count = 0, pre = 0;
        for (auto& x : nums) {
            pre += x;
            if (mp.find(pre - k) != mp.end()) {
                count += mp[pre - k];
            }
            mp[pre]++;
        }
        return count;
    }

public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int ans = 0;
        int m = matrix.size(), n = matrix[0].size();
        for (int i = 0; i < m; ++i) { // ö���ϱ߽�
            vector<int> sum(n);
            for (int j = i; j < m; ++j) { // ö���±߽�
                for (int c = 0; c < n; ++c) {
                    sum[c] += matrix[j][c]; // ����ÿ�е�Ԫ�غ�
                }
                ans += subarraySum(sum, target);
            }
        }
        return ans;
    }
};

