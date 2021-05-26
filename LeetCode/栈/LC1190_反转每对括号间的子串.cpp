/*
题目描述：LeetCode 1190

给出一个字符串 s（仅含有小写英文字母和括号）。
请你按照从括号内到外的顺序，逐层反转每对匹配括号中的字符串，并返回最终的结果。
注意，您的结果中 不应 包含任何括号。

输入：s = "(ed(et(oc))el)"
输出："leetcode"
*/
class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> stk;
        string str;
        for (auto& ch : s) {
            if (ch == '(') {
                stk.push(str);
                str = "";
            }
            else if (ch == ')') {
                reverse(str.begin(), str.end());
                str = stk.top() + str;
                stk.pop();
            }
            else {
                str.push_back(ch);
            }
        }
        return str;
    }
};
