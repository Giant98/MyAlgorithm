/*
��Ŀ������LeetCode 233

����һ������ n����������С�ڵ��� n �ķǸ����������� 1 ���ֵĸ�����

���룺n = 13
�����6
 */
class Solution {
public:
    int countDigitOne(int n) {
        long cnt = 0, i = 1, num = n;
        while (num) {
            if (num % 10 == 0) cnt += (num / 10) * i; //��
            if (num % 10 == 1) cnt += (num / 10) * i + (n % i) + 1; //ʮ
            if (num % 10 > 1) cnt += ceil(num / 10.0) * i;
            num /= 10;
            i *= 10;
        }
        return cnt;
    }
};
