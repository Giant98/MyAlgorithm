/*
��Ŀ������LeetCode 80

����һ���������� nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ���������� ������ɾ����������³��ȡ�
��Ҫʹ�ö��������ռ䣬������� ԭ�� �޸��������� ����ʹ�� O(1) ����ռ����������ɡ�

���룺nums = [1,1,1,2,2,3]
�����5, nums = [1,1,2,2,3]
���ͣ�����Ӧ�����³��� length = 5, ����ԭ�����ǰ���Ԫ�ر��޸�Ϊ 1, 1, 2, 2, 3 �� ����Ҫ���������г����³��Ⱥ����Ԫ�ء�

*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        int flag = 0;
        int flagnum = nums[0];
        for (vector<int>::iterator it = nums.begin(); it != nums.end();) {
            if (*it == flagnum) {
                if (flag >= 2)
                    it = nums.erase(it);
                else
                    ++it;
            }
            else {
                flagnum = *it;
                flag = 0;
                ++it;
            }
            flag++;
        }
        return nums.size();
    }
};