/*
��Ŀ������LeetCode 541

����һ���ַ��� s ��һ������ k�����ַ�����ͷ����ÿ 2k ���ַ���תǰ k ���ַ���
���ʣ���ַ����� k ������ʣ���ַ�ȫ����ת��
���ʣ���ַ�С�� 2k �����ڻ���� k ������תǰ k ���ַ��������ַ�����ԭ����

���룺s = "abcdefg", k = 2
�����"bacdfeg"
*/
class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2 * k) {
            if (i + k <= s.size()) {
                reverse(s.begin() + i, s.begin() + i + k);
            }
            else {
                reverse(s.begin() + i, s.end());
            }
        }
        return s;
    }
};