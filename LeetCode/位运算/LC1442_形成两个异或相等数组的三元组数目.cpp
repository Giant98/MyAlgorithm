/*
��Ŀ������LeetCode 1442

����һ���������� arr ��
����Ҫ��������ȡ�����±� i��j �� k ������ (0 <= i < j <= k < arr.length) ��
a �� b �������£�
a = arr[i] ^ arr[i + 1] ^ ... ^ arr[j - 1]
b = arr[j] ^ arr[j + 1] ^ ... ^ arr[k]
ע�⣺^ ��ʾ ��λ��� ������
�뷵���ܹ��� a == b ��������Ԫ�� (i, j , k) ����Ŀ��

���룺arr = [2,3,1,6,7]
�����4
���ͣ������������Ԫ��ֱ��� (0,1,2), (0,2,2), (2,3,4) �Լ� (2,4,4)
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