/*
��Ŀ������LeetCode 342

����һ��������дһ���������ж����Ƿ��� 4 ���ݴη�������ǣ����� true �����򣬷��� false ��
���� n �� 4 ���ݴη������㣺�������� x ʹ�� n == 4x

���룺n = 16
�����true
*/
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 0)return false;
        if (n == 1)return true;
        if ((n & 1) == 1)return false;
        while (n % 4 == 0) {
            n = n / 4;
        }
        if (n == 1)
            return true;
        else
            return false;
    }
};