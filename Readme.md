# 欢迎来到阿岩同学Coding库

------

记录Coding过程，并对题目进行归类总结：

<img src="paper.png" alt="paper" style="zoom:25%;" />



------

## LeetCode

| 题号        | 标题                                                         | 难度   | 算法           | 备注                       |
| ----------- | :----------------------------------------------------------- | ------ | :------------- | -------------------------- |
| 115         | [不同子序列](https://leetcode-cn.com/problems/distinct-subsequences/) | Hard   | 二维动态规划   | 容易超时                   |
| 92          | [反转链表Ⅱ](https://leetcode-cn.com/problems/reverse-linked-list-ii/) | Medium | 脑筋急转弯     | 每次移一位到ptr->next      |
| 1603        | [设计停车系统](https://leetcode-cn.com/problems/design-parking-system/) | Easy   | 奶奶都会做的题 | 无                         |
| 150         | [逆波兰表达式求值](https://leetcode-cn.com/problems/evaluate-reverse-polish-notation/) | Medium | 栈             | 无                         |
| 73          | [矩阵置零](https://leetcode-cn.com/problems/set-matrix-zeroes/) | Medium | 脑筋急转弯     | 如何达到O(1)空间复杂度     |
| 191         | [位1的个数](https://leetcode-cn.com/problems/number-of-1-bits/) | Easy   | 位运算         | 无                         |
| 341         | [嵌套列表迭代器](https://leetcode-cn.com/problems/flatten-nested-list-iterator/) | Medium | 模拟迭代器     | 简单：直接dfs全找出来      |
|          |                                                              |        |                | 复杂：利用栈模拟迭代器遍历 |
| 456         | [132模式](https://leetcode-cn.com/problems/132-pattern/)     | Medium | 单调栈         | 可以再用二分法降低复杂度   |
| 82          | [删除排序链表中的重复元素 II](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list-ii/) | Medium | 链表           | 注意头尾重复的特殊情况     |
| 83          | [删除排序链表中的重复元素](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list/) | Easy   | 链表           | C语言注意垃圾回收          |
| 61          | [旋转链表](https://leetcode-cn.com/problems/rotate-list/)    | Medium | 链表           | 先变成闭环再断开           |
| 190         | [颠倒二进制位](https://leetcode-cn.com/problems/reverse-bits/) | Easy   | 位运算         | 分治法，位运算需要多复习   |
| 74          | [搜索二维矩阵](https://leetcode-cn.com/problems/search-a-2d-matrix/) | Medium | 查找           | 二分查找，官方题解非常优秀 |
| 90          | [子集 II](https://leetcode-cn.com/problems/subsets-ii/)      | Medium | 排序           | 返回数组子集，子集不能重复 |
| 1006        | [笨阶乘](https://leetcode-cn.com/problems/clumsy-factorial/) | Medium | 栈或数学推导   | 无                         |
| 面试题17.21 | [直方图的水量](https://leetcode-cn.com/problems/volume-of-histogram-lcci/) | Hard   | 单调栈或双指针 | 考虑特殊情况  |
| 1143        | [最长公共子序列](https://leetcode-cn.com/problems/longest-common-subsequence/) | Medium   | 动态规划 | 经典面试题    |
| 80 | [删除有序数组中的重复项 II](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii/) | Medium | 指针 | 无 |
| 81 | [搜索旋转排序数组 II](https://leetcode-cn.com/problems/search-in-rotated-sorted-array-ii/) | Medium | 查找 | 二分查找 |
| 153 | [寻找旋转排序数组中的最小值](https://leetcode-cn.com/problems/find-minimum-in-rotated-sorted-array/) | Medium | 查找 | 特别注意边界情况 |
| 154 | [寻找旋转排序数组中的最小值 II](https://leetcode-cn.com/problems/find-minimum-in-rotated-sorted-array-ii/) | Hard | 查找 | 与153类似，注意重复情况 |
| 263 | [丑数](https://leetcode-cn.com/problems/ugly-number/) | Easy | 递归 | 无 |
| 264 | [丑数 II](https://leetcode-cn.com/problems/ugly-number-ii/) | Medium | 三指针 | priority_queue数据结构⭐ |
| 179 | [最大数](https://leetcode-cn.com/problems/largest-number/) | Medium | 排序 | string可根据字典序排序⭐ |
| 783 | [783. 二叉搜索树节点最小距离](https://leetcode-cn.com/problems/minimum-distance-between-bst-nodes/) | Easy | 中序遍历 | 标记根节点的值 |
| 208 | [实现 Trie (前缀树)](https://leetcode-cn.com/problems/implement-trie-prefix-tree/) | Medium | 前缀树 | LeetCode手把手教你学前缀树（字典树） |
| 213 | [打家劫舍 II](https://leetcode-cn.com/problems/house-robber-ii/) | Medium | 动态规划 | 根据首尾两种情况分别讨论 |
| 87 | [87. 扰乱字符串](https://leetcode-cn.com/problems/scramble-string/) | Hard | 动态规划 | 需要用Memory存储中间值来减少开销 |
| 26 | [删除有序数组中的重复项](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/) | Easy | 脑筋急转弯 | 无 |
| 27 | [移除元素](https://leetcode-cn.com/problems/remove-element/) | Easy | 双指针 | 官方题解的优化不错 |
| 28 | [实现 strStr()](https://leetcode-cn.com/problems/implement-strstr/) | Easy | 暴力or KMP | 无 |
| 91 | [解码方法](https://leetcode-cn.com/problems/decode-ways/) | Medium | 动态规划 | 注意边界，00,01情况 |
| 363 | [矩形区域不超过 K 的最大数值和](https://leetcode-cn.com/problems/max-sum-of-rectangle-no-larger-than-k/) | Hard | 枚举优化 | 学习题解中矩阵的划分 |
| 368 | [最大整除子集](https://leetcode-cn.com/problems/largest-divisible-subset/) | Medium | 动态规划 | 经典⭐ |
| 377 | [组合总和 Ⅳ](https://leetcode-cn.com/problems/combination-sum-iv/) | Medium | 动态规划 | 经典⭐ |
| 897 | [递增顺序搜索树](https://leetcode-cn.com/problems/increasing-order-search-tree/) | Easy | 二叉搜索树 | 无 |

