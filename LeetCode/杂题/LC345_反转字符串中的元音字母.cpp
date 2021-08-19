/*
��Ŀ������LeetCode 345

��дһ�����������ַ�����Ϊ���룬��ת���ַ����е�Ԫ����ĸ��

���룺"leetcode"
�����"leotcede"
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