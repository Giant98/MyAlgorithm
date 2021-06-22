/*
题目描述：LeetCode 剑指Offer 38

输入一个字符串，打印出该字符串中字符的所有排列。
你可以以任意顺序返回这个字符串数组，但里面不能有重复元素。

输入：s = "abc"
输出：["abc","acb","bac","bca","cab","cba"]
*/
class Solution {
public:
    vector<string> permutation(string s) {
        vector<string> res;

        dfs(res, s, 0);

        return res;
    }

    void  dfs(vector<string>& res, string& s, int pos) {
        if (pos == s.size())
            res.push_back(s);

        for (int i = pos; i < s.size(); i++) {
            bool flag = true;
            for (int j = pos; j < i; j++)//字母相同时，等效，剪枝
                if (s[j] == s[i])
                    flag = false;
            if (flag) {
                swap(s[pos], s[i]);
                dfs(res, s, pos + 1);
                swap(s[pos], s[i]);

            }
        }
    }
};
