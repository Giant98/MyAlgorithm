/*
��Ŀ������LeetCode 26

����һ���������� nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ֻ����һ�� ������ɾ����������³��ȡ�
��Ҫʹ�ö��������ռ䣬������� ԭ�� �޸��������� ����ʹ�� O(1) ����ռ����������ɡ�

���룺nums = [1,1,2]
�����2, nums = [1,2]
���ͣ�����Ӧ�÷����µĳ��� 2 ������ԭ���� nums ��ǰ����Ԫ�ر��޸�Ϊ 1, 2 ������Ҫ���������г����³��Ⱥ����Ԫ�ء�

*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() < 2) return nums.size();
        int j = 0;
        for (int i = 1; i < nums.size(); i++)
            if (nums[j] != nums[i]) nums[++j] = nums[i];
        return ++j;
    }
};