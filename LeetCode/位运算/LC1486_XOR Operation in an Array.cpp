/*
��Ŀ������LeetCode 1486

��������������n �� start ��
���� nums ����Ϊ��nums[i] = start + 2*i���±�� 0 ��ʼ���� n == nums.length ��
�뷵�� nums ������Ԫ�ذ�λ���XOR����õ��Ľ����

���룺n = 5, start = 0
�����8
���ͣ����� nums Ϊ [0, 2, 4, 6, 8]������ (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8 ��
     "^" Ϊ��λ��� XOR �������
*/
class Solution {
public:
    int sumXor(int x) {
        if (x % 4 == 0) {
            return x;
        }
        if (x % 4 == 1) {
            return 1;
        }
        if (x % 4 == 2) {
            return x + 1;
        }
        return 0;
    }

    int xorOperation(int n, int start) {
        int s = start >> 1, e = n & start & 1;
        int ret = sumXor(s - 1) ^ sumXor(s + n - 1);
        return ret << 1 | e;
    }
};
