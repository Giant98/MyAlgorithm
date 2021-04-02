/*
题目描述：LeetCode 面试题17.21

给定一个直方图(也称柱状图)，假设有人从上面源源不断地倒水，最后直方图能存多少水量?直方图的宽度为 1。
上面是由数组 [0,1,0,2,1,0,1,3,2,1,2,1] 表示的直方图，在这种情况下，可以接 6 个单位的水（蓝色部分表示水）。 感谢 Marcos 贡献此图。

输入: [0,1,0,2,1,0,1,3,2,1,2,1]
输出: 6
*/
class Solution {
public:
    int trap(vector<int>& height) {
        int Sum = accumulate(height.begin(), height.end(), 0); // 得到柱子的体积
        int volume = 0; // 总体积和高度初始化
        int high = 1;
        int size = height.size();
        int left = 0; // 双指针初始化
        int right = size - 1;
        while (left <= right) {
            while (left <= right && height[left] < high) {
                left++;
            }
            while (left <= right && height[right] < high) {
                right--;
            }
            volume += right - left + 1; // 每一层的容量都加起来
            high++; // 高度加一
        }
        return volume - Sum; // 总体积减去柱子体积，即雨水总量
    }
};