/*
题目描述：LeetCode 852

符合下列属性的数组 arr 称为 山脉数组 ：
arr.length >= 3
存在 i（0 < i < arr.length - 1）使得：
arr[0] < arr[1] < ... arr[i-1] < arr[i]
arr[i] > arr[i+1] > ... > arr[arr.length - 1]
给你由整数组成的山脉数组 arr ，返回任何满足 arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1] 的下标 i 。

输入：arr = [0,2,1,0]
输出：1
*/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0;
        int right = arr.size();
        int mid;
        while (true) {
            mid = left + (right - left) / 2;
            if (arr[mid - 1]<arr[mid] && arr[mid]>arr[mid + 1])
                break;
            else if (arr[mid - 1] > arr[mid])
                right = mid;
            else
                left = mid + 1;
        }
        return mid;
    }
};