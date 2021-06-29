/*
��Ŀ������LeetCode 168

����һ������������������ Excel �������Ӧ�������ơ�
    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB

����: 28
���: "AB"
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