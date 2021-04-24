/*
��Ŀ������LeetCode 377

����һ���� ��ͬ ������ɵ����� nums ����һ��Ŀ������ target ������� nums ���ҳ��������ܺ�Ϊ target ��Ԫ����ϵĸ�����
��Ŀ���ݱ�֤�𰸷��� 32 λ������Χ��

���룺nums = [1,2,3], target = 4
�����7
���ͣ�
���п��ܵ����Ϊ��
(1, 1, 1, 1)
(1, 1, 2)
(1, 2, 1)
(1, 3)
(2, 1, 1)
(2, 2)
(3, 1)
��ע�⣬˳��ͬ�����б�������ͬ����ϡ�
*/
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target + 1);
        dp[0] = 1;
        for (int i = 1; i <= target; i++) {
            for (int& num : nums) {
                if (i >= num && dp[i - num] < INT_MAX - dp[i]) {
                    dp[i] += dp[i - num];
                }
            }
        }
        return dp[target];
    }
};
