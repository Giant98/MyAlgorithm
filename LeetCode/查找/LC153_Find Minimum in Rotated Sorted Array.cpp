/*
��Ŀ������LeetCode 153

��֪һ������Ϊ n �����飬Ԥ�Ȱ����������У����� 1 �� n �� ��ת �󣬵õ��������顣���磬ԭ���� nums = [0,1,2,4,5,6,7] �ڱ仯����ܵõ���
����ת 4 �Σ�����Եõ� [4,5,6,7,0,1,2]
����ת 7 �Σ�����Եõ� [0,1,2,4,5,6,7]
ע�⣬���� [a[0], a[1], a[2], ..., a[n-1]] ��תһ�� �Ľ��Ϊ���� [a[n-1], a[0], a[1], a[2], ..., a[n-2]] ��
����һ��Ԫ��ֵ ������ͬ ������ nums ����ԭ����һ���������е����飬�����������ν����˶����ת�������ҳ������������е� ��СԪ�� ��


���룺nums = [3,4,5,1,2]
�����1
���ͣ�ԭ����Ϊ [1,2,3,4,5] ����ת 3 �εõ��������顣

�ǳ��õĽ��https://leetcode-cn.com/problems/find-minimum-in-rotated-sorted-array/solution/er-fen-cha-zhao-wei-shi-yao-zuo-you-bu-dui-cheng-z/
*/
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = (r - l) / 2 + l;
            if (nums[mid] < nums[r]) {
                r = mid;
            }
            else {
                l = mid + 1;
            }
        }
        return nums[l];
    }
};