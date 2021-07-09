/*
题目描述：LeetCode 17.10

数组中占比超过一半的元素称之为主要元素。给你一个 整数 数组，找出其中的主要元素。若没有，返回 -1 。请设计时间复杂度为 O(N) 、空间复杂度为 O(1) 的解决方案。

输入：[1,2,5,9,5,9,5,5,5]
输出：5
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int flag = 0;
        int flagnum = -1;
        for (int num : nums) {
            if (flag == 0) {
                flagnum = num;
                flag = 1;
            }
            else {
                if (flagnum == num)
                    flag++;
                else
                    flag--;
            }
        }
        if (!flag)
            return -1;
        else {
            int sum = 0;
            for (int num : nums) {
                if (num == flagnum)
                    sum++;
            }
            if (sum > nums.size() / 2)
                return flagnum;
            else
                return -1;
        }
    }
};