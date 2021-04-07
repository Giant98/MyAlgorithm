/*
��Ŀ������LeetCode 81

��֪����һ�����ǽ������е��������� nums �������е�ֵ���ػ�����ͬ��
�ڴ��ݸ�����֮ǰ��nums ��Ԥ��δ֪��ĳ���±� k��0 <= k < nums.length���Ͻ����� ��ת ��ʹ�����Ϊ [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]���±� �� 0 ��ʼ �����������磬 [0,1,2,4,4,4,5,6,6,7] ���±� 5 ������ת����ܱ�Ϊ [4,5,6,6,7,0,1,2,4,4] ��
���� ��ת�� ������ nums ��һ������ target �������дһ���������жϸ�����Ŀ��ֵ�Ƿ�����������С���� nums �д������Ŀ��ֵ target ���򷵻� true �����򷵻� false ��

���룺nums = [2,5,6,0,0,1,2], target = 0
�����true
*/
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            //�����ظ�����
            while (l < r && nums[l] == nums[l + 1]) ++l;
            while (l < r && nums[r] == nums[r - 1]) --r;
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) return true;
            //��벿������
            if (nums[mid] >= nums[l]) {
                if (target < nums[mid] && target >= nums[l]) r = mid - 1;//target��������
                else l = mid + 1;
            }
            else {//�Ұ벿������
                if (target > nums[mid] && target <= nums[r]) l = mid + 1;//target�����Ұ��
                else r = mid - 1;
            }
        }
        return false;
    }
};