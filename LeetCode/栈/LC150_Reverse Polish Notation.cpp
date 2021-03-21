/*
题目描述：LeetCode 150

根据 逆波兰表示法，求表达式的值。
有效的算符包括 +、-、*、/ 。每个运算对象可以是整数，也可以是另一个逆波兰表达式。

输入：tokens = ["2","1","+","3","*"]
输出：9
解释：该算式转化为常见的中缀算术表达式为：((2 + 1) * 3) = 9
*/
const int maxn = 1e5 + 50;
int st[maxn], idx;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        idx = -1;
        for (const auto& s : tokens) {
            if (s == "+" or s == "-" or s == "*" or s == "/") {
                int a = st[idx--];
                int b = st[idx--];
                if (s == "+") {
                    st[++idx] = a + b;
                }
                else if (s == "-") {
                    st[++idx] = b - a;
                }
                else if (s == "*") {
                    st[++idx] = a * b;
                }
                else {
                    st[++idx] = b / a;
                }
            }
            else {
                st[++idx] = stoi(s);
            }
        }
        return st[idx];
    }
};