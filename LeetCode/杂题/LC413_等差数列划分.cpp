/*
��Ŀ������LeetCode 413

���һ������ ����������Ԫ�� ������������������Ԫ��֮����ͬ����Ƹ�����Ϊ�Ȳ����С�
���磬[1,3,5,7,9]��[7,7,7,7] �� [3,-1,-5,-9] ���ǵȲ����С�
����һ���������� nums ���������� nums ������Ϊ�Ȳ������ ������ ������
������ �������е�һ���������С�

���룺nums = [1,2,3,4]
�����3
���ͣ�nums ���������ӵȲ����飺[1, 2, 3]��[2, 3, 4] �� [1,2,3,4] ����
*/
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if (nums.size() < 3)return 0;
        int res = 0;
        int add = 0;
        for (int i = 0; i < nums.size() - 2; i++) {
            if (nums[i + 1] - nums[i] == nums[i + 2] - nums[i + 1])
                res += ++add;
            else
                add = 0;
        }
        return res;
    }
};