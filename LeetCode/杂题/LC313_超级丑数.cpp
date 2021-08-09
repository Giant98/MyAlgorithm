/*
��Ŀ������LeetCode 313

�������� ��һ�������������������������������������������� primes �С�
����һ������ n ��һ���������� primes �����ص� n �� �������� ��
��Ŀ���ݱ�֤�� n �� �������� �� 32-bit ������������Χ�ڡ�

���룺n = 12, primes = [2,7,13,19]
�����32
���ͣ���������Ϊ 4 ���������� primes = [2,7,13,19]��ǰ 12 ��������������Ϊ��[1,2,4,7,8,13,14,16,19,26,28,32] ��
*/
class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        unordered_set<long>seen;
        priority_queue<long, vector<long>, greater<long>>heap;
        seen.insert(1);
        heap.push(1);
        int ugly = 0;
        for (int i = 0; i < n; i++) {
            long curr = heap.top();
            heap.pop();
            ugly = (int)curr;
            for (int prime : primes) {
                long next = prime * curr;
                if (seen.insert(next).second)
                    heap.push(next);
            }
        }
        return ugly;
    }
};

