/*
题目描述：LeetCode 80

给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使每个元素 最多出现两次 ，返回删除后数组的新长度。
不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。

输入：nums = [1,1,1,2,2,3]
输出：5, nums = [1,1,2,2,3]
解释：函数应返回新长度 length = 5, 并且原数组的前五个元素被修改为 1, 1, 2, 2, 3 。 不需要考虑数组中超出新长度后面的元素。

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