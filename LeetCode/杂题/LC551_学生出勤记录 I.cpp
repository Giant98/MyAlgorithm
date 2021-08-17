/*
题目描述：LeetCode 551

给你一个字符串 s 表示一个学生的出勤记录，其中的每个字符用来标记当天的出勤情况（缺勤、迟到、到场）。记录中只含下面三种字符：

'A'：Absent，缺勤
'L'：Late，迟到
'P'：Present，到场
如果学生能够 同时 满足下面两个条件，则可以获得出勤奖励：

按 总出勤 计，学生缺勤（'A'）严格 少于两天。
学生 不会 存在 连续 3 天或 3 天以上的迟到（'L'）记录。
如果学生可以获得出勤奖励，返回 true ；否则，返回 false 。

输入：s = "PPALLP"
输出：true
解释：学生缺勤次数少于 2 次，且不存在 3 天或以上的连续迟到记录。
*/
class Solution {
public:
    bool checkRecord(string s) {
        int numA = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') {
                numA++;
                if (numA > 1)return false;
            }
            if (s[i] == 'L') {
                int num = 1;
                i++;
                while (s[i] == 'L') {
                    num++;
                    i++;
                }
                if (num > 2)return false;
                i--;
            }
        }
        return true;
    }
};