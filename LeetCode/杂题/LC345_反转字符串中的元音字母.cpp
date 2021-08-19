/*
题目描述：LeetCode 345

编写一个函数，以字符串作为输入，反转该字符串中的元音字母。

输入："leetcode"
输出："leotcede"
 */
class Solution {
public:
    string reverseVowels(string s) {
        string data = "aeiouAEIOU";
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            while (i < j && data.find(s[i]) == data.npos)i++;
            while (i < j && data.find(s[j]) == data.npos)j--;
            if (i < j) {
                char temp = s[i];
                s[i++] = s[j];
                s[j--] = temp;
            }
        }
        return s;
    }
};