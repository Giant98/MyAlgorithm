/*
��Ŀ������LeetCode 518

������ͬ����Ӳ�Һ�һ���ܽ�д��������������Դճ��ܽ���Ӳ�������������ÿһ������Ӳ�������޸���

����: amount = 5, coins = [1, 2, 5]
���: 4
����: �����ַ�ʽ���Դճ��ܽ��:
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1
*/
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int>dp(amount + 1);
        dp[0] = 1;
        for (int coin : coins) {
            for (int i = 0; i + coin <= amount; i++) {
                dp[i + coin] += dp[i];
            }
        }
        return dp[amount];
    }
};