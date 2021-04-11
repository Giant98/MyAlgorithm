/*
题目描述：LeetCode 264

给你一个整数 n ，请你找出并返回第 n 个 丑数 。
丑数 就是只包含质因数 2、3 和/或 5 的正整数。

输入：n = 10
输出：12
解释：[1, 2, 3, 4, 5, 6, 8, 9, 10, 12] 是由前 10 个丑数组成的序列。
*/
class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue <double, vector<double>, greater<double> > q;
        double answer = 1;
        for (int i = 1; i < n; ++i)
        {
            q.push(answer * 2);
            q.push(answer * 3);
            q.push(answer * 5);
            answer = q.top();
            q.pop();
            while (!q.empty() && answer == q.top())
                q.pop();
        }
        return answer;
    }
};
