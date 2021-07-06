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
| 1011 | [在 D 天内送达包裹的能力](https://leetcode-cn.com/problems/capacity-to-ship-packages-within-d-days/) | Medium | 二分查找 | 经典⭐ |
| 938 | [二叉搜索树的范围和](https://leetcode-cn.com/problems/range-sum-of-bst/) | Easy | 二叉搜索树 | 无 |
| 633 | [平方数之和](https://leetcode-cn.com/problems/sum-of-square-numbers/) | Medium | 双指针 | 无 |
| 403 | [青蛙过河](https://leetcode-cn.com/problems/frog-jump/) | Hard | 动态规划 | 无 |
| 137 | [只出现一次的数字 II](https://leetcode-cn.com/problems/single-number-ii/) | Medium | 位运算 | for(auto [num,occ] : freq)       map的遍历方式，记录一下 |
| 690 | [员工的重要性](https://leetcode-cn.com/problems/employee-importance/) | Easy | 无 | 无 |
| 7 | [整数反转](https://leetcode-cn.com/problems/reverse-integer/) | Easy | 无 | 无 |
| 1473 | [粉刷房子 III](https://leetcode-cn.com/problems/paint-house-iii/) | Hard | 动态规划 | 无 |
| 740 | [删除并获得点数](https://leetcode-cn.com/problems/delete-and-earn/) | Medium | 动态规划 | 参考213题 |
| 1720 | [解码异或后的数组](https://leetcode-cn.com/problems/decode-xored-array/) | Easy | 异或运算 | first可以换成ans[i-1]减少空间 |
| 1486 | [数组异或操作](https://leetcode-cn.com/problems/xor-operation-in-an-array/) | Easy | 异或规律 | 无 |

| 题号 | 标题                                                         | 难度 | 算法    | 备注 |
| ---- | :----------------------------------------------------------- | ---- | :------ | ---- |
| 1723 | [完成所有工作的最短时间](https://leetcode-cn.com/problems/find-minimum-time-to-finish-all-jobs/) | Hard | DFS优化 | 好题   |
| 872 | [叶子相似的树](https://leetcode-cn.com/problems/leaf-similar-trees/) | Easy | DFS | 无 |
| 1734 | [解码异或后的排列](https://leetcode-cn.com/problems/decode-xored-permutation/) | Medium | 位运算 | 1720题进阶 |
| 1310 | [子数组异或查询](https://leetcode-cn.com/problems/xor-queries-of-a-subarray/) | Medium | 位运算 | 无 |
| 1269 | [停在原地的方案数](https://leetcode-cn.com/problems/number-of-ways-to-stay-in-the-same-place-after-some-steps/) | Hard | 动态规划 | memcpy挺好用 |
| 12 | [整数转罗马数字](https://leetcode-cn.com/problems/integer-to-roman/) | Medium | 模拟 | 无 |
| 421 | [数组中两个数的最大异或值](https://leetcode-cn.com/problems/maximum-xor-of-two-numbers-in-an-array/) | Medium | 位运算 | 无 |
| 993 | [二叉树的堂兄弟节点](https://leetcode-cn.com/problems/cousins-in-binary-tree/) | Easy | 二叉树层次遍历 | 无 |
| 1442 | [形成两个异或相等数组的三元组数目](https://leetcode-cn.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/) | Medium | 位运算 | 可以利用异或的特性转换题目 |
| 1738 | [找出第 K 大的异或坐标值](https://leetcode-cn.com/problems/find-kth-largest-xor-coordinate-value/) | Medium | 动态规划 | 无 |
| 692 | [前K个高频单词](https://leetcode-cn.com/problems/top-k-frequent-words/) | Medium | 哈希表+排序 | 代码写了两种解决方案，一种官方题解比较清晰易懂，一种使用了较多C++11特性 |
| 1035 | [不相交的线](https://leetcode-cn.com/problems/uncrossed-lines/) | Medium | 动态规划 | 无 |
| 810 | [黑板异或游戏](https://leetcode-cn.com/problems/chalkboard-xor-game/) | Hard | 数学推导 | ⭐ |
| 664 | [奇怪的打印机](https://leetcode-cn.com/problems/strange-printer/) | Hard | 动态规划 | 比较难想到的动规 |
| 1787 | [使所有区间的异或结果为零](https://leetcode-cn.com/problems/make-the-xor-of-all-segments-equal-to-zero/) | Hard | 动态规划 | 无 |
| 1190 | [反转每对括号间的子串](https://leetcode-cn.com/problems/reverse-substrings-between-each-pair-of-parentheses/) | Medium | 栈 | ⭐ |
| 461 | [汉明距离](https://leetcode-cn.com/problems/hamming-distance/) | Easy | 位运算 | &.\|.^.~.<<.>>位运算操作符，优先级比!=.==低 |
| 1074 | [元素和为目标值的子矩阵数量](https://leetcode-cn.com/problems/number-of-submatrices-that-sum-to-target/) | Hard | 枚举优化 | 无 |
| 342 | [4的幂](https://leetcode-cn.com/problems/power-of-four/) | East | 位运算 | 可用位运算优化 |
| 1744 | [你能在你最喜欢的那天吃到你最喜欢的糖果吗？](https://leetcode-cn.com/problems/can-you-eat-your-favorite-candy-on-your-favorite-day/) | Medium | 前缀和 | ⭐ |
| 523 | [连续的子数组和](https://leetcode-cn.com/problems/continuous-subarray-sum/) | Medium | 前缀和+哈希表 | 通过哈希表来将O(n^2)遍历降为O(n) |
| 525 | [连续数组](https://leetcode-cn.com/problems/contiguous-array/) | Medium | 前缀和+哈希表 | 和523一样 |
| 160 | [相交链表](https://leetcode-cn.com/problems/intersection-of-two-linked-lists/) | Easy | 链表 | 无 |
| 494 | [目标和](https://leetcode-cn.com/problems/target-sum/) | Medium | 动态规划 | 写动态规划前还是先好好列一下 |
| 1049 | [最后一块石头的重量 II](https://leetcode-cn.com/problems/last-stone-weight-ii/) | Medium | 背包问题，动态规划 | 经典背包问题修改版⭐，注意可用滚动数组形式去掉一个维度 |
| 879 | [盈利计划](https://leetcode-cn.com/problems/profitable-schemes/) | Hard | 背包问题 | 经典背包问题⭐ |
| 518 | [零钱兑换 II](https://leetcode-cn.com/problems/coin-change-2/) | Medium | 动态规划 | 注意硬币选择要有顺序，避免类似1+2,2+1的重复问题 |
| 279 | [完全平方数](https://leetcode-cn.com/problems/perfect-squares/) | Medium | 动态规划 | 无 |
| 852 | [山脉数组的峰顶索引](https://leetcode-cn.com/problems/peak-index-in-a-mountain-array/) | Easy | 二分法 | 无 |
| 877 | [石子游戏](https://leetcode-cn.com/problems/stone-game/) | Medium | 动态规划 | 无 |
| 65 | [有效数字](https://leetcode-cn.com/problems/valid-number/) | Hard | 自动机 | 无 |
| 483 | [最小好进制](https://leetcode-cn.com/problems/smallest-good-base/) | Hard | 数学推导 | 等比数列+二项式定理 |
| 401 | [二进制手表](https://leetcode-cn.com/problems/binary-watch/) | East | 无 | __builtin_popcount(num)可以计算num二进制中1的个数 |
| Offer 38 | [字符串的排列](https://leetcode-cn.com/problems/zi-fu-chuan-de-pai-lie-lcof/) | Medium | 字符串深度搜索 | 经典⭐ |
| Offer 15 | [二进制中1的个数](https://leetcode-cn.com/problems/er-jin-zhi-zhong-1de-ge-shu-lcof/) | Easy | 位运算 | n&(n-1)可以把n的二进制中最低位1变为0 |
| 149 | [直线上最多的点数](https://leetcode-cn.com/problems/max-points-on-a-line/) | Hard | 遍历 | 无 |
| 752 | [打开转盘锁](https://leetcode-cn.com/problems/open-the-lock/) | Medium | BFS | 可以学习代码的C++特性 |
| 815 | [公交路线](https://leetcode-cn.com/problems/bus-routes/) | Hard | BFS | 建图策略很好 |
| 168 | [Excel表列名称](https://leetcode-cn.com/problems/excel-sheet-column-title/) | Easy | 字符串运算 | 无 |
| Offer 37 | [序列化二叉树](https://leetcode-cn.com/problems/xu-lie-hua-er-cha-shu-lcof/) | Hard | 序列化二叉树 | 无 |
| LCP 07 | [传递信息](https://leetcode-cn.com/problems/chuan-di-xin-xi/) | Easy | 动态规划 | 无 |
| 1833 | [雪糕的最大数量](https://leetcode-cn.com/problems/maximum-ice-cream-bars/) | Medium | 无 | 无 |
| 726 | [原子的数量](https://leetcode-cn.com/problems/number-of-atoms/) | Hard | 栈+哈希表 | 无 |
| 1418 | [点菜展示表](https://leetcode-cn.com/problems/display-table-of-food-orders-in-a-restaurant/) | Medium | set, map | 无 |



------

## C++查漏补缺

### 1. C++11使用using定义别名（替代typedef）

普通类型的重定义

```
// 重定义unsigned int
typedef unsigned int uint_t;
using uint_t = unsigned int;
// 重定义std::map
typedef std::map<std::string, int> map_int_t;
using map_int_t = std::map<std::string, int>;
```

模板别名的重定义

```
/* C++98/03 */
template <typename T>
struct func_t
{
    typedef void (*type)(T, T);
};
// 使用 func_t 模板
func_t<int>::type xx_1;
/* C++11 */
template <typename T>
using func_t = void (*)(T, T);
// 使用 func_t 模板
func_t<int> xx_2;
```

### 2. C++ decltype类型推导

既然已经有了 auto 关键字，为什么还需要 **decltype** 关键字呢？因为 auto 并不适用于所有的自动类型推导场景。

auto 和 decltype 关键字都可以自动推导出变量的类型，但它们的用法是有区别的：

auto varname = value;
decltype(exp) varname = value;

其中，varname 表示变量名，value 表示赋给变量的值，exp 表示一个表达式。

auto 根据`=`右边的初始值 value 推导出变量的类型，而 decltype 根据 exp 表达式推导出变量的类型，跟`=`右边的 value 没有关系。

##### decltype 推导规则

- 如果 exp 是一个不被括号`( )`包围的表达式，或者是一个类成员访问表达式，或者是一个单独的变量，那么 decltype(exp) 的类型就和 exp 一致，这是最普遍最常见的情况。
- 如果 exp 是函数调用，那么 decltype(exp) 的类型就和函数返回值的类型一致。
- 如果 exp 是一个左值，或者被括号`( )`包围，那么 decltype(exp) 的类型就是 exp 的引用；假设 exp 的类型为 T，那么 decltype(exp) 的类型就是 T&。

具体例子查看：http://c.biancheng.net/view/7151.html

### 3. priority_queue

priority_queue 优先队列，其底层是用堆来实现的。

大根堆：

```
//下面两种优先队列的定义是等价的
priority_queue<int> q;
priority_queue<int,vector<int>,less<int> >;//后面有一个空格
```

小根堆：

```
priority_queue<int,vector<int>,greater<int> >q;
```

也可以自定义类型做优先队列元素
