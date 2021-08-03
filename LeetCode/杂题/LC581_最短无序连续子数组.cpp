/*
��Ŀ������LeetCode 581

����һ���������� nums ������Ҫ�ҳ�һ�� ���������� �����������������������������ô�������鶼���Ϊ��������
�����ҳ���������� ��� �����飬��������ĳ��ȡ�

���룺nums = [2,6,4,8,10,9,15]
�����5
���ͣ���ֻ��Ҫ�� [6, 4, 8, 10, 9] ��������������ô���������Ϊ��������
*/
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int length = nums.size();
        if (length <= 1)return 0;
        int max = nums[0];
        int min = nums[length - 1];
        int high = 0;
        int low = length - 1;
        for (int i = 0; i < nums.size(); i++) {
            max = max > nums[i] ? max : nums[i];
            min = min < nums[length - 1 - i] ? min : nums[length - 1 - i];
            if (nums[i] < max) high = i;
            if (nums[length - 1 - i] > min) low = length - 1 - i;
        }
        return high > low ? high - low + 1 : 0;
    }
};