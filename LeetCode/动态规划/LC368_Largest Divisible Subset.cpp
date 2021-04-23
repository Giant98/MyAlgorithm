/*
��Ŀ������LeetCode 368

����һ���� ���ظ� ��������ɵļ��� nums �������ҳ��������������������Ӽ� answer ���Ӽ���ÿһԪ�ض� (answer[i], answer[j]) ��Ӧ�����㣺
answer[i] % answer[j] == 0 ����
answer[j] % answer[i] == 0
������ڶ����Ч���Ӽ������������κ�һ�����ɡ�

���룺nums = [1,2,3]
�����[1,2]
���ͣ�[1,3] Ҳ�ᱻ��Ϊ��ȷ�𰸡�
*/
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int len = nums.size();
        if (len < 2)
            return nums;
        sort(nums.begin(), nums.end());

        // �� 1 ������̬�滮�ҳ�����Ӽ��ĸ���������Ӽ��е��������
        vector<int> dp(len, 1);
        int maxSize = 1;
        int maxVal = nums[0];
        for (int i = 1; i < len; i++) {
            for (int j = 0; j < i; j++) {
                // ��Ŀ��˵��û���ظ�Ԫ�ء�����Ҫ
                if (nums[i] % nums[j] == 0) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }

            if (dp[i] > maxSize) {
                maxSize = dp[i];
                maxVal = nums[i];
            }
        }
        // �� 2 �������ƻ������Ӽ�
        vector<int> res;

        for (int i = len - 1; i >= 0 && maxSize > 0; i--) {
            if (dp[i] == maxSize && maxVal % nums[i] == 0) {
                res.push_back(nums[i]);
                maxVal = nums[i];
                maxSize--;
            }
        }
        return res;
    }
};