/*
��Ŀ������LeetCode 474

����һ���������ַ������� strs ���������� m �� n ��
�����ҳ������� strs ������Ӽ��Ĵ�С�����Ӽ��� ��� �� m �� 0 �� n �� 1 ��
��� x ������Ԫ��Ҳ�� y ��Ԫ�أ����� x �Ǽ��� y �� �Ӽ� ��

���룺strs = ["10", "0001", "111001", "1", "0"], m = 5, n = 3
�����4
���ͣ������ 5 �� 0 �� 3 �� 1 ������Ӽ��� {"10","0001","1","0"} ����˴��� 4 ��
�����������⵫��С���Ӽ����� {"0001","1"} �� {"10","1","0"} ��{"111001"} ���������⣬��Ϊ���� 4 �� 1 ������ n ��ֵ 3 ��
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
*/
class Solution {
public:
    vector<int> getZerosOnes(string& str) {
        vector<int> zerosOnes(2);
        int length = str.length();
        for (int i = 0; i < length; i++) {
            zerosOnes[str[i] - '0']++;
        }
        return zerosOnes;
    }

    int findMaxForm(vector<string>& strs, int m, int n) {
        int length = strs.size();
        vector<vector<vector<int>>> dp(length + 1, vector<vector<int>>(m + 1, vector<int>(n + 1)));
        for (int i = 1; i <= length; i++) {
            vector<int>&& zerosOnes = getZerosOnes(strs[i - 1]);
            int zeros = zerosOnes[0], ones = zerosOnes[1];
            for (int j = 0; j <= m; j++) {
                for (int k = 0; k <= n; k++) {
                    dp[i][j][k] = dp[i - 1][j][k];
                    if (j >= zeros && k >= ones) {
                        dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j - zeros][k - ones] + 1);
                    }
                }
            }
        }
        return dp[length][m][n];
    }
};
