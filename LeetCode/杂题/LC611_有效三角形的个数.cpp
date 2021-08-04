/*
��Ŀ������LeetCode 611

����һ�������Ǹ����������飬���������ͳ�����п�����������������ߵ���Ԫ�������

����: [2,2,3,4]
���: 3
����:
��Ч�������:
2,3,4 (ʹ�õ�һ�� 2)
2,3,4 (ʹ�õڶ��� 2)
2,2,3
*/
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                int index = lower_bound(nums.begin() + j + 1, nums.end(), nums[i] + nums[j]) - nums.begin();
                res += index - j - 1;
            }
        }
        return res;
    }
};
