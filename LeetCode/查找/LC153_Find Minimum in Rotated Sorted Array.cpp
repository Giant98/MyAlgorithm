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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0, right = matrix.size();
        if (right == 0 || matrix[0][0] > target)
            return false;
        right = right - 1;
        int index = 0;
        int middle = 0;
        int temp = 0;
        while (left <= right) {
            middle = (left + right) / 2;
            temp = matrix[middle][0];
            if (temp == target)
                return true;
            if (temp < target) {
                if (middle + 1 >= matrix.size() || matrix[middle + 1][0] > target) {
                    index = middle;
                    break;
                }
                else {
                    left = middle + 1;
                    continue;
                }
            }
            if (temp > target) {
                if (matrix[middle - 1][0] < target) {
                    index = middle - 1;
                    break;
                }
                else {
                    right = middle - 1;
                    continue;
                }
            }
        }

        left = 0;
        right = matrix[0].size() - 1;
        while (left <= right) {
            middle = (left + right) / 2;
            temp = matrix[index][middle];
            if (temp == target)
                return true;
            if (temp < target)
                left = middle + 1;
            else
                right = middle - 1;
        }
        return false;
    }
};