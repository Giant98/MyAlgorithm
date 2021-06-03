/*
��Ŀ������LeetCode 525

����һ������������ nums , �ҵ�������ͬ������ 0 �� 1 ������������飬�����ظ�������ĳ��ȡ�

����: nums = [0,1]
���: 2
˵��: [0, 1] �Ǿ�����ͬ����0��1������������顣
*/
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                nums[i] = -1;
        }
        unordered_map<int, int>mp;
        mp[0] = -1;
        int sum = 0;
        int max = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (mp.count(sum)) {
                int prevIndex = mp[sum];
                if (i - prevIndex > max)
                    max = i - prevIndex;
            }
            else {
                mp[sum] = i;
            }
        }
        return max;
    }
};
