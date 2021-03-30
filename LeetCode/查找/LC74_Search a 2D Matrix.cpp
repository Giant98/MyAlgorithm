/*
题目描述：LeetCode 74

编写一个高效的算法来判断 m x n 矩阵中，是否存在一个目标值。该矩阵具有如下特性：

每行中的整数从左到右按升序排列。
每行的第一个整数大于前一行的最后一个整数。

输入：matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
输出：true
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