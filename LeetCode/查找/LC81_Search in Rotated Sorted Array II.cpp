/*
题目描述：LeetCode 81

已知存在一个按非降序排列的整数数组 nums ，数组中的值不必互不相同。
在传递给函数之前，nums 在预先未知的某个下标 k（0 <= k < nums.length）上进行了 旋转 ，使数组变为 [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]（下标 从 0 开始 计数）。例如， [0,1,2,4,4,4,5,6,6,7] 在下标 5 处经旋转后可能变为 [4,5,6,6,7,0,1,2,4,4] 。
给你 旋转后 的数组 nums 和一个整数 target ，请你编写一个函数来判断给定的目标值是否存在于数组中。如果 nums 中存在这个目标值 target ，则返回 true ，否则返回 false 。

输入：nums = [2,5,6,0,0,1,2], target = 0
输出：true
*/
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            //处理重复数字
            while (l < r && nums[l] == nums[l + 1]) ++l;
            while (l < r && nums[r] == nums[r - 1]) --r;
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) return true;
            //左半部分有序
            if (nums[mid] >= nums[l]) {
                if (target < nums[mid] && target >= nums[l]) r = mid - 1;//target落在左半边
                else l = mid + 1;
            }
            else {//右半部分有序
                if (target > nums[mid] && target <= nums[r]) l = mid + 1;//target落在右半边
                else r = mid - 1;
            }
        }
        return false;
    }
};