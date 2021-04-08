/*
题目描述：LeetCode 153

已知一个长度为 n 的数组，预先按照升序排列，经由 1 到 n 次 旋转 后，得到输入数组。例如，原数组 nums = [0,1,2,4,5,6,7] 在变化后可能得到：
若旋转 4 次，则可以得到 [4,5,6,7,0,1,2]
若旋转 7 次，则可以得到 [0,1,2,4,5,6,7]
注意，数组 [a[0], a[1], a[2], ..., a[n-1]] 旋转一次 的结果为数组 [a[n-1], a[0], a[1], a[2], ..., a[n-2]] 。
给你一个元素值 互不相同 的数组 nums ，它原来是一个升序排列的数组，并按上述情形进行了多次旋转。请你找出并返回数组中的 最小元素 。


输入：nums = [3,4,5,1,2]
输出：1
解释：原数组为 [1,2,3,4,5] ，旋转 3 次得到输入数组。

非常好的解答：https://leetcode-cn.com/problems/find-minimum-in-rotated-sorted-array/solution/er-fen-cha-zhao-wei-shi-yao-zuo-you-bu-dui-cheng-z/
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