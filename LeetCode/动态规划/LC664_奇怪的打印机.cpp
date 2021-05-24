/*
��Ŀ������LeetCode 664

��̨��ֵĴ�ӡ����������������Ҫ��

��ӡ��ÿ��ֻ�ܴ�ӡ�� ͬһ���ַ� ��ɵ����С�
ÿ�ο�����������ʼ�ͽ���λ�ô�ӡ���ַ������һḲ�ǵ�ԭ�����е��ַ���
����һ���ַ��� s ����������Ǽ��������ӡ����ӡ����Ҫ�����ٴ�ӡ������

���룺s = "aaabbb"
�����2
���ͣ����ȴ�ӡ "aaa" Ȼ���ӡ "bbb"��
*/
class Solution {
public:
    int strangePrinter(string s) {
        int strSize = s.size();
        vector<vector<int>>dp(strSize, vector<int>(strSize, INT_MAX));
        for (int i = 0; i < strSize; i++) {
            dp[i][i] = 1;
        }
        for (int i = strSize - 2; i >= 0; i--) {
            for (int j = i + 1; j < strSize; j++) {
                dp[i][j] = 1 + dp[i + 1][j];
                for (int k = i + 1; k < j; k++) {
                    if (s[i] == s[k]) {
                        dp[i][j] = min(dp[i][j], dp[i + 1][k] + dp[k + 1][j]);
                    }
                }
                if (s[i] == s[j]) {
                    dp[i][j] = min(dp[i][j], dp[i + 1][j]);
                }
            }
        }
        return dp[0][strSize - 1];
    }
};
