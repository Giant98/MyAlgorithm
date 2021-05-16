/*
��Ŀ������LeetCode 421

����һ���������� nums ������ nums[i] XOR nums[j] ����������������� 0 �� i �� j < n ��
���ף�������� O(n) ��ʱ�������������

���룺nums = [3,10,5,25,2,8]
�����28
���ͣ������������ 5 XOR 25 = 28.
*/
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long maxValue = 0;
        for (int i = n - 1; i >= 1; i--) {
            for (int j = i - 1; j >= 0; j--) {
                if ((long long)(nums[i]) + nums[j] < maxValue) {
                    break;
                }
                maxValue = max(maxValue, (long long)(nums[i] ^ nums[j]));
            }
        }
        return maxValue;

    }
};

