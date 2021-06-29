/*
题目描述：LeetCode 168

给定一个正整数，返回它在 Excel 表中相对应的列名称。
    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB

输入: 28
输出: "AB"
*/
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        while (columnNumber--) {
            ans = (char)('A' + columnNumber % 26) + ans;
            columnNumber /= 26;
        }
        return ans;
    }
};