/*
��Ŀ������LeetCode 264

����һ������ n �������ҳ������ص� n �� ���� ��
���� ����ֻ���������� 2��3 ��/�� 5 ����������

���룺n = 10
�����12
���ͣ�[1, 2, 3, 4, 5, 6, 8, 9, 10, 12] ����ǰ 10 ��������ɵ����С�
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
